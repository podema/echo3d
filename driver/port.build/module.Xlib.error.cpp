// Generated code for Python source for module 'Xlib.error'
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

// The _module_Xlib$error is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_Xlib$error;
PyDictObject *moduledict_Xlib$error;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_21;
extern PyObject *const_str_plain_X;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_s;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_rq;
extern PyObject *const_str_plain_Pad;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_Xlib;
extern PyObject *const_str_plain_code;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_whom;
extern PyObject *const_str_plain_BadGC;
extern PyObject *const_str_plain_Card8;
extern PyObject *const_str_plain__data;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_etype;
extern PyObject *const_str_plain_reset;
extern PyObject *const_str_plain_Card16;
extern PyObject *const_str_plain_Card32;
extern PyObject *const_str_plain_Struct;
extern PyObject *const_str_plain_XError;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_errors;
extern PyObject *const_str_plain_BadAtom;
extern PyObject *const_str_plain_BadFont;
extern PyObject *const_str_plain_BadName;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___str__;
extern PyObject *const_str_plain__fields;
extern PyObject *const_str_plain_display;
extern PyObject *const_str_plain_rawdict;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain_BadAlloc;
extern PyObject *const_str_plain_BadColor;
extern PyObject *const_str_plain_BadMatch;
extern PyObject *const_str_plain_BadValue;
extern PyObject *const_str_plain_Resource;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_BadAccess;
extern PyObject *const_str_plain_BadCursor;
extern PyObject *const_str_plain_BadLength;
extern PyObject *const_str_plain_BadPixmap;
extern PyObject *const_str_plain_BadWindow;
extern PyObject *const_str_plain_get_error;
extern PyObject *const_str_plain_BadRequest;
extern PyObject *const_str_plain_CatchError;
static PyObject *const_str_plain_XauthError;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_BadDrawable;
extern PyObject *const_str_plain_BadIDChoice;
extern PyObject *const_str_plain_GetAttrData;
static PyObject *const_str_plain_error_types;
static PyObject *const_str_plain_get_request;
static PyObject *const_str_plain_resource_id;
static PyObject *const_str_plain_DisplayError;
static PyObject *const_str_plain_XNoAuthError;
extern PyObject *const_str_plain_major_opcode;
static PyObject *const_str_plain_minor_opcode;
extern PyObject *const_str_plain_parse_binary;
extern PyObject *const_str_plain_xerror_class;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_tuple_str_plain_X_tuple;
static PyObject *const_str_plain_XResourceError;
extern PyObject *const_tuple_str_plain_rq_tuple;
extern PyObject *const_str_plain_ResourceIDError;
extern PyObject *const_str_plain_sequence_number;
static PyObject *const_str_plain_DisplayNameError;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_BadImplementation;
extern PyObject *const_str_plain_ConnectionClosedError;
extern PyObject *const_str_plain_DisplayConnectionError;
extern PyObject *const_dict_d995087703a9b0b670bc25735878672a;
extern PyObject *const_tuple_str_plain_self_str_plain_whom_tuple;
extern PyObject *const_str_digest_0df97c6d560821a4763cc4527efabdd8;
extern PyObject *const_str_digest_2e9d4d9ef148275f753bee254e8a020f;
static PyObject *const_str_digest_51e45ce887cbf020f3785669423c54eb;
static PyObject *const_str_digest_77d9eda65b04a84a19e64844215284d9;
extern PyObject *const_str_digest_7d341c08fd102f0b86285b5ff2e26ea7;
static PyObject *const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
static PyObject *const_str_digest_b8d062f7e3c57a23c8d5245033ade753;
static PyObject *const_str_digest_c014711afbf581cae95c1181f594ef7f;
static PyObject *const_str_digest_dd1db4b3218d68b873c00bfca6d0a666;
extern PyObject *const_str_digest_fc763cb31e9938f37737394681228f83;
static PyObject *const_tuple_str_plain_self_str_plain_errors_tuple;
static PyObject *const_tuple_9b10cb79e86347706c76498b7ea54375_tuple;
static PyObject *const_tuple_c5fd29a06800a806256ca371e15dba82_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_display_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_s_str_plain_f_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_display_str_plain_msg_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_display_str_plain_data_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_error_str_plain_request_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_XauthError = UNSTREAM_STRING( &constant_bin[ 427424 ], 10, 1 );
    const_str_plain_error_types = UNSTREAM_STRING( &constant_bin[ 427434 ], 11, 1 );
    const_str_plain_get_request = UNSTREAM_STRING( &constant_bin[ 427445 ], 11, 1 );
    const_str_plain_resource_id = UNSTREAM_STRING( &constant_bin[ 427456 ], 11, 1 );
    const_str_plain_DisplayError = UNSTREAM_STRING( &constant_bin[ 27580 ], 12, 1 );
    const_str_plain_XNoAuthError = UNSTREAM_STRING( &constant_bin[ 427467 ], 12, 1 );
    const_str_plain_minor_opcode = UNSTREAM_STRING( &constant_bin[ 427479 ], 12, 1 );
    const_str_plain_XResourceError = UNSTREAM_STRING( &constant_bin[ 27642 ], 14, 1 );
    const_str_plain_DisplayNameError = UNSTREAM_STRING( &constant_bin[ 427491 ], 16, 1 );
    const_str_digest_51e45ce887cbf020f3785669423c54eb = UNSTREAM_STRING( &constant_bin[ 427507 ], 46, 0 );
    const_str_digest_77d9eda65b04a84a19e64844215284d9 = UNSTREAM_STRING( &constant_bin[ 427553 ], 21, 0 );
    const_str_digest_a6b7dd912c1dc65492b327235c08cfba = UNSTREAM_STRING( &constant_bin[ 427574 ], 10, 0 );
    const_str_digest_b8d062f7e3c57a23c8d5245033ade753 = UNSTREAM_STRING( &constant_bin[ 427584 ], 18, 0 );
    const_str_digest_c014711afbf581cae95c1181f594ef7f = UNSTREAM_STRING( &constant_bin[ 427602 ], 33, 0 );
    const_str_digest_dd1db4b3218d68b873c00bfca6d0a666 = UNSTREAM_STRING( &constant_bin[ 427635 ], 31, 0 );
    const_tuple_str_plain_self_str_plain_errors_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_errors_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_errors_tuple, 1, const_str_plain_errors ); Py_INCREF( const_str_plain_errors );
    const_tuple_9b10cb79e86347706c76498b7ea54375_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_9b10cb79e86347706c76498b7ea54375_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9b10cb79e86347706c76498b7ea54375_tuple, 1, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    PyTuple_SET_ITEM( const_tuple_9b10cb79e86347706c76498b7ea54375_tuple, 2, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_9b10cb79e86347706c76498b7ea54375_tuple, 3, const_str_plain_etype ); Py_INCREF( const_str_plain_etype );
    const_tuple_c5fd29a06800a806256ca371e15dba82_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c5fd29a06800a806256ca371e15dba82_tuple, 0, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    PyTuple_SET_ITEM( const_tuple_c5fd29a06800a806256ca371e15dba82_tuple, 1, const_str_plain_resource_id ); Py_INCREF( const_str_plain_resource_id );
    PyTuple_SET_ITEM( const_tuple_c5fd29a06800a806256ca371e15dba82_tuple, 2, const_str_plain_sequence_number ); Py_INCREF( const_str_plain_sequence_number );
    PyTuple_SET_ITEM( const_tuple_c5fd29a06800a806256ca371e15dba82_tuple, 3, const_str_plain_major_opcode ); Py_INCREF( const_str_plain_major_opcode );
    PyTuple_SET_ITEM( const_tuple_c5fd29a06800a806256ca371e15dba82_tuple, 4, const_str_plain_minor_opcode ); Py_INCREF( const_str_plain_minor_opcode );
    const_tuple_str_plain_self_str_plain_s_str_plain_f_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_s_str_plain_f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_s_str_plain_f_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_s_str_plain_f_tuple, 2, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_tuple_str_plain_self_str_plain_display_str_plain_msg_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_display_str_plain_msg_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_display_str_plain_msg_tuple, 1, const_str_plain_display ); Py_INCREF( const_str_plain_display );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_display_str_plain_msg_tuple, 2, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_tuple_str_plain_self_str_plain_display_str_plain_data_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_display_str_plain_data_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_display_str_plain_data_tuple, 1, const_str_plain_display ); Py_INCREF( const_str_plain_display );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_display_str_plain_data_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_tuple_str_plain_self_str_plain_error_str_plain_request_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_error_str_plain_request_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_error_str_plain_request_tuple, 1, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_error_str_plain_request_tuple, 2, const_str_plain_request ); Py_INCREF( const_str_plain_request );
}

// The module code objects.
static PyCodeObject *codeobj_7e1fc3bc6d4daa64f3f8a79350882104;
static PyCodeObject *codeobj_714e3cc902c6fe482a81d18f60c87cc4;
static PyCodeObject *codeobj_1e334fae19b8e2f4c802235abbe77a33;
static PyCodeObject *codeobj_8832f1999c8df574180ac017927a3f47;
static PyCodeObject *codeobj_6831c073ca0b6733062d8e1b51e422e3;
static PyCodeObject *codeobj_d093247f323032717bc05639d98e2634;
static PyCodeObject *codeobj_c9d1c2323f0df565d01f77d759354887;
static PyCodeObject *codeobj_0f0b3bfa89eddd6447a7af6774a3773a;
static PyCodeObject *codeobj_68ed22141af64e9a5e958601abee21d9;
static PyCodeObject *codeobj_1f70d26ca6f81b272500597e94bbef9d;
static PyCodeObject *codeobj_a44b27a27139aef9b91c0f287f425e1e;
static PyCodeObject *codeobj_f8b571cc81d00c03197182349b4c0a1a;
static PyCodeObject *codeobj_8f7972a7b9faf1d9475388078f95ba7c;
static PyCodeObject *codeobj_f1e302e0003ecd702c8ecb81b6f4fbb0;
static PyCodeObject *codeobj_a3372b6fa9ce4241fb3503076c576452;
static PyCodeObject *codeobj_68ae17b8c08fe084027b45e3d866e47d;
static PyCodeObject *codeobj_2c6f0b47e4af6940e046e22d8a8eda5b;
static PyCodeObject *codeobj_28edb7d368bbbc25ebdcd9457972cd8f;
static PyCodeObject *codeobj_d259e86c728bb038d6b01720223f3b49;
static PyCodeObject *codeobj_282a8e2e5427e748ae16a7ae1433ffd6;
static PyCodeObject *codeobj_3b6b945e6f09e3857a5417e35f1b8aa0;
static PyCodeObject *codeobj_da957328973b0fb42575e73db970194b;
static PyCodeObject *codeobj_33e7f73d7b370600c46dcd936b2c1fe9;
static PyCodeObject *codeobj_ef9561a811a35311f45b449664112bac;
static PyCodeObject *codeobj_0068233c7e3c0ea37e6b682dc8f12788;

static void _initModuleCodeObjects(void)
{
    codeobj_7e1fc3bc6d4daa64f3f8a79350882104 = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain_CatchError, 129, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_714e3cc902c6fe482a81d18f60c87cc4 = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain_ConnectionClosedError, 45, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_1e334fae19b8e2f4c802235abbe77a33 = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain_DisplayConnectionError, 37, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_8832f1999c8df574180ac017927a3f47 = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain_DisplayError, 26, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_6831c073ca0b6733062d8e1b51e422e3 = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain_DisplayNameError, 33, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_d093247f323032717bc05639d98e2634 = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain_XError, 59, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_c9d1c2323f0df565d01f77d759354887 = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain_XResourceError, 80, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_0f0b3bfa89eddd6447a7af6774a3773a = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain___call__, 135, const_tuple_str_plain_self_str_plain_error_str_plain_request_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_68ed22141af64e9a5e958601abee21d9 = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain___call__, 135, const_tuple_9b10cb79e86347706c76498b7ea54375_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_1f70d26ca6f81b272500597e94bbef9d = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain___init__, 27, const_tuple_str_plain_self_str_plain_display_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_a44b27a27139aef9b91c0f287f425e1e = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain___init__, 38, const_tuple_str_plain_self_str_plain_display_str_plain_msg_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_f8b571cc81d00c03197182349b4c0a1a = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain___init__, 46, const_tuple_str_plain_self_str_plain_whom_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_8f7972a7b9faf1d9475388078f95ba7c = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain___init__, 69, const_tuple_str_plain_self_str_plain_display_str_plain_data_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_f1e302e0003ecd702c8ecb81b6f4fbb0 = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain___init__, 130, const_tuple_str_plain_self_str_plain_errors_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE );
    codeobj_a3372b6fa9ce4241fb3503076c576452 = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain___init__, 130, const_tuple_str_plain_self_str_plain_errors_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE );
    codeobj_68ae17b8c08fe084027b45e3d866e47d = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain___str__, 30, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_2c6f0b47e4af6940e046e22d8a8eda5b = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain___str__, 34, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_28edb7d368bbbc25ebdcd9457972cd8f = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain___str__, 42, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_d259e86c728bb038d6b01720223f3b49 = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain___str__, 49, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_282a8e2e5427e748ae16a7ae1433ffd6 = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain___str__, 72, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_3b6b945e6f09e3857a5417e35f1b8aa0 = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain___str__, 72, const_tuple_str_plain_self_str_plain_s_str_plain_f_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_da957328973b0fb42575e73db970194b = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain_error, 0, const_tuple_empty, 0, CO_NOFREE );
    codeobj_33e7f73d7b370600c46dcd936b2c1fe9 = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain_get_error, 149, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_ef9561a811a35311f45b449664112bac = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain_get_request, 152, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_0068233c7e3c0ea37e6b682dc8f12788 = MAKE_CODEOBJ( const_str_digest_51e45ce887cbf020f3785669423c54eb, const_str_plain_reset, 155, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_DisplayError_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_DisplayNameError_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_DisplayConnectionError_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_ConnectionClosedError_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_XauthError_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_XNoAuthError_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_ResourceIDError_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_8_XError_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_9_XResourceError_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_10_BadRequest_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_11_BadValue_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_12_BadWindow_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_13_BadPixmap_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_14_BadAtom_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_15_BadCursor_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_16_BadFont_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_17_BadMatch_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_18_BadDrawable_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_19_BadAccess_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_20_BadAlloc_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_21_BadColor_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_22_BadGC_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_23_BadIDChoice_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_24_BadName_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_25_BadLength_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_26_BadImplementation_of_module_Xlib$error(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_27_CatchError_of_module_Xlib$error(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_DisplayError_of_module_Xlib$error(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_27_CatchError_of_module_Xlib$error(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_DisplayConnectionError_of_module_Xlib$error(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_ConnectionClosedError_of_module_Xlib$error(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_8_XError_of_module_Xlib$error(  );


static PyObject *MAKE_FUNCTION_function_1___str___of_class_2_DisplayNameError_of_module_Xlib$error(  );


static PyObject *MAKE_FUNCTION_function_2___call___of_class_27_CatchError_of_module_Xlib$error(  );


static PyObject *MAKE_FUNCTION_function_2___str___of_class_1_DisplayError_of_module_Xlib$error(  );


static PyObject *MAKE_FUNCTION_function_2___str___of_class_3_DisplayConnectionError_of_module_Xlib$error(  );


static PyObject *MAKE_FUNCTION_function_2___str___of_class_4_ConnectionClosedError_of_module_Xlib$error(  );


static PyObject *MAKE_FUNCTION_function_2___str___of_class_8_XError_of_module_Xlib$error(  );


static PyObject *MAKE_FUNCTION_function_3_get_error_of_class_27_CatchError_of_module_Xlib$error(  );


static PyObject *MAKE_FUNCTION_function_4_get_request_of_class_27_CatchError_of_module_Xlib$error(  );


static PyObject *MAKE_FUNCTION_function_5_reset_of_class_27_CatchError_of_module_Xlib$error(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_DisplayError_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var___str__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8832f1999c8df574180ac017927a3f47, module_Xlib$error );
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
    tmp_assign_source_2 = MAKE_FUNCTION_function_1___init___of_class_1_DisplayError_of_module_Xlib$error(  );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        frame_function->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_2___str___of_class_1_DisplayError_of_module_Xlib$error(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    assert( var___str__.object == NULL );
    var___str__.object = tmp_assign_source_3;


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
    if ((var___str__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___str__,
            var___str__.object
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
    if ((var___str__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___str__,
            var___str__.object
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


static PyObject *impl_function_1___init___of_class_1_DisplayError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_display )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_display; par_display.object = _python_par_display;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1f70d26ca6f81b272500597e94bbef9d, module_Xlib$error );
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
    tmp_assattr_name_1 = par_display.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24776 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_display, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 28;
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
    if ((par_display.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_display,
            par_display.object
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
static PyObject *fparse_function_1___init___of_class_1_DisplayError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_display = NULL;
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
            if ( found == false && const_str_plain_display == key )
            {
                assert( _python_par_display == NULL );
                _python_par_display = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_display, key ) == 1 )
            {
                assert( _python_par_display == NULL );
                _python_par_display = value;

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
         if (unlikely( _python_par_display != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_display = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_display == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_display = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_display == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_display };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_1_DisplayError_of_module_Xlib$error( self, _python_par_self, _python_par_display );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_display );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_DisplayError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1___init___of_class_1_DisplayError_of_module_Xlib$error( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_DisplayError_of_module_Xlib$error( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___str___of_class_1_DisplayError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_68ae17b8c08fe084027b45e3d866e47d, module_Xlib$error );
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
    tmp_binop_left_1 = const_str_digest_b8d062f7e3c57a23c8d5245033ade753;
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_display );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
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
static PyObject *fparse_function_2___str___of_class_1_DisplayError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "__str__() keywords must be strings" );
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
                   "__str__() got an unexpected keyword argument '%s'",
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


    return impl_function_2___str___of_class_1_DisplayError_of_module_Xlib$error( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___str___of_class_1_DisplayError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2___str___of_class_1_DisplayError_of_module_Xlib$error( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___str___of_class_1_DisplayError_of_module_Xlib$error( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_DisplayNameError_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___str__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6831c073ca0b6733062d8e1b51e422e3, module_Xlib$error );
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
    tmp_assign_source_2 = MAKE_FUNCTION_function_1___str___of_class_2_DisplayNameError_of_module_Xlib$error(  );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    assert( var___str__.object == NULL );
    var___str__.object = tmp_assign_source_2;


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
    if ((var___str__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___str__,
            var___str__.object
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
    if ((var___str__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___str__,
            var___str__.object
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


static PyObject *impl_function_1___str___of_class_2_DisplayNameError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2c6f0b47e4af6940e046e22d8a8eda5b, module_Xlib$error );
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
    tmp_binop_left_1 = const_str_digest_77d9eda65b04a84a19e64844215284d9;
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_display );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 35;
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
static PyObject *fparse_function_1___str___of_class_2_DisplayNameError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "__str__() keywords must be strings" );
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
                   "__str__() got an unexpected keyword argument '%s'",
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


    return impl_function_1___str___of_class_2_DisplayNameError_of_module_Xlib$error( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___str___of_class_2_DisplayNameError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1___str___of_class_2_DisplayNameError_of_module_Xlib$error( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___str___of_class_2_DisplayNameError_of_module_Xlib$error( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_DisplayConnectionError_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var___str__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1e334fae19b8e2f4c802235abbe77a33, module_Xlib$error );
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
    tmp_assign_source_2 = MAKE_FUNCTION_function_1___init___of_class_3_DisplayConnectionError_of_module_Xlib$error(  );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_2___str___of_class_3_DisplayConnectionError_of_module_Xlib$error(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    assert( var___str__.object == NULL );
    var___str__.object = tmp_assign_source_3;


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
    if ((var___str__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___str__,
            var___str__.object
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
    if ((var___str__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___str__,
            var___str__.object
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


static PyObject *impl_function_1___init___of_class_3_DisplayConnectionError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_display, PyObject *_python_par_msg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_display; par_display.object = _python_par_display;
    PyObjectLocalVariable par_msg; par_msg.object = _python_par_msg;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a44b27a27139aef9b91c0f287f425e1e, module_Xlib$error );
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
    tmp_assattr_name_1 = par_display.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24776 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_display, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_msg.object;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28198 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 40;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 40;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_msg, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 40;
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
    if ((par_display.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_display,
            par_display.object
        );

    }
    if ((par_msg.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_msg,
            par_msg.object
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
static PyObject *fparse_function_1___init___of_class_3_DisplayConnectionError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_display = NULL;
    PyObject *_python_par_msg = NULL;
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
            if ( found == false && const_str_plain_display == key )
            {
                assert( _python_par_display == NULL );
                _python_par_display = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_msg == key )
            {
                assert( _python_par_msg == NULL );
                _python_par_msg = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_display, key ) == 1 )
            {
                assert( _python_par_display == NULL );
                _python_par_display = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_msg, key ) == 1 )
            {
                assert( _python_par_msg == NULL );
                _python_par_msg = value;

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
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_display != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_display = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_display == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_display = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_msg != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_msg = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_msg == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_msg = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_display == NULL || _python_par_msg == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_display, _python_par_msg };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_3_DisplayConnectionError_of_module_Xlib$error( self, _python_par_self, _python_par_display, _python_par_msg );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_display );
    Py_XDECREF( _python_par_msg );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_3_DisplayConnectionError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_1___init___of_class_3_DisplayConnectionError_of_module_Xlib$error( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_3_DisplayConnectionError_of_module_Xlib$error( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___str___of_class_3_DisplayConnectionError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_28edb7d368bbbc25ebdcd9457972cd8f, module_Xlib$error );
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
    tmp_binop_left_1 = const_str_digest_c014711afbf581cae95c1181f594ef7f;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_display );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_msg );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 43;
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
static PyObject *fparse_function_2___str___of_class_3_DisplayConnectionError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "__str__() keywords must be strings" );
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
                   "__str__() got an unexpected keyword argument '%s'",
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


    return impl_function_2___str___of_class_3_DisplayConnectionError_of_module_Xlib$error( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___str___of_class_3_DisplayConnectionError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2___str___of_class_3_DisplayConnectionError_of_module_Xlib$error( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___str___of_class_3_DisplayConnectionError_of_module_Xlib$error( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_4_ConnectionClosedError_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var___str__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_714e3cc902c6fe482a81d18f60c87cc4, module_Xlib$error );
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
    tmp_assign_source_2 = MAKE_FUNCTION_function_1___init___of_class_4_ConnectionClosedError_of_module_Xlib$error(  );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_2___str___of_class_4_ConnectionClosedError_of_module_Xlib$error(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    assert( var___str__.object == NULL );
    var___str__.object = tmp_assign_source_3;


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
    if ((var___str__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___str__,
            var___str__.object
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
    if ((var___str__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___str__,
            var___str__.object
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


static PyObject *impl_function_1___init___of_class_4_ConnectionClosedError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_whom )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_whom; par_whom.object = _python_par_whom;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f8b571cc81d00c03197182349b4c0a1a, module_Xlib$error );
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
    tmp_assattr_name_1 = par_whom.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28247 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_whom, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 47;
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
    if ((par_whom.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_whom,
            par_whom.object
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
static PyObject *fparse_function_1___init___of_class_4_ConnectionClosedError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_whom = NULL;
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
            if ( found == false && const_str_plain_whom == key )
            {
                assert( _python_par_whom == NULL );
                _python_par_whom = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_whom, key ) == 1 )
            {
                assert( _python_par_whom == NULL );
                _python_par_whom = value;

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
         if (unlikely( _python_par_whom != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_whom = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_whom == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_whom = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_whom == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_whom };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_4_ConnectionClosedError_of_module_Xlib$error( self, _python_par_self, _python_par_whom );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_whom );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_4_ConnectionClosedError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1___init___of_class_4_ConnectionClosedError_of_module_Xlib$error( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_4_ConnectionClosedError_of_module_Xlib$error( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___str___of_class_4_ConnectionClosedError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d259e86c728bb038d6b01720223f3b49, module_Xlib$error );
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
    tmp_binop_left_1 = const_str_digest_dd1db4b3218d68b873c00bfca6d0a666;
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_whom );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 50;
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
static PyObject *fparse_function_2___str___of_class_4_ConnectionClosedError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "__str__() keywords must be strings" );
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
                   "__str__() got an unexpected keyword argument '%s'",
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


    return impl_function_2___str___of_class_4_ConnectionClosedError_of_module_Xlib$error( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___str___of_class_4_ConnectionClosedError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2___str___of_class_4_ConnectionClosedError_of_module_Xlib$error( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___str___of_class_4_ConnectionClosedError_of_module_Xlib$error( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_5_XauthError_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_6_XNoAuthError_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_7_ResourceIDError_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_8_XError_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var__fields;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var___str__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d093247f323032717bc05639d98e2634, module_Xlib$error );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Struct );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Card8 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_type;
    frame_function->f_lineno = 60;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Card8 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_plain_code;
    frame_function->f_lineno = 61;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Card16 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = const_str_plain_sequence_number;
    frame_function->f_lineno = 62;
    tmp_call_arg_element_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Card32 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = const_str_plain_resource_id;
    frame_function->f_lineno = 63;
    tmp_call_arg_element_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_Card16 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = const_str_plain_minor_opcode;
    frame_function->f_lineno = 64;
    tmp_call_arg_element_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Card8 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );

        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = const_str_plain_major_opcode;
    frame_function->f_lineno = 65;
    tmp_call_arg_element_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );

        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Pad );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_11 );

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_14 = const_int_pos_21;
    frame_function->f_lineno = 66;
    tmp_call_arg_element_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_11 );

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 66;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS7( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_3, tmp_call_arg_element_5, tmp_call_arg_element_7, tmp_call_arg_element_9, tmp_call_arg_element_11, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_9 );
    Py_DECREF( tmp_call_arg_element_11 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    assert( var__fields.object == NULL );
    var__fields.object = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_8_XError_of_module_Xlib$error(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_2___str___of_class_8_XError_of_module_Xlib$error(  );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }
    assert( var___str__.object == NULL );
    var___str__.object = tmp_assign_source_4;


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
    if ((var__fields.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__fields,
            var__fields.object
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
    if ((var___str__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___str__,
            var___str__.object
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
    if ((var__fields.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__fields,
            var__fields.object
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
    if ((var___str__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___str__,
            var___str__.object
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


static PyObject *impl_function_1___init___of_class_8_XError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_display, PyObject *_python_par_data )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_display; par_display.object = _python_par_display;
    PyObjectLocalVariable par_data; par_data.object = _python_par_data;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8f7972a7b9faf1d9475388078f95ba7c, module_Xlib$error );
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
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 70;
        goto try_finally_handler_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__fields );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto try_finally_handler_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parse_binary );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto try_finally_handler_1;
    }
    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_data.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 70;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_display.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24776 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 70;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_d995087703a9b0b670bc25735878672a );
    frame_function->f_lineno = 70;
    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto try_finally_handler_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
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


        frame_function->f_lineno = 70;
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


        frame_function->f_lineno = 70;
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
    tmp_assattr_name_1 = tmp_tuple_unpack_1__element_1.object;

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 70;
        goto try_finally_handler_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__data, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 70;
        goto try_finally_handler_1;
    }
    tmp_assign_source_4 = tmp_tuple_unpack_1__element_2.object;

    if (par_data.object == NULL)
    {
        par_data.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = par_data.object;
        par_data.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
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
    if ((par_display.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_display,
            par_display.object
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
static PyObject *fparse_function_1___init___of_class_8_XError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_display = NULL;
    PyObject *_python_par_data = NULL;
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
            if ( found == false && const_str_plain_display == key )
            {
                assert( _python_par_display == NULL );
                _python_par_display = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_data == key )
            {
                assert( _python_par_data == NULL );
                _python_par_data = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_display, key ) == 1 )
            {
                assert( _python_par_display == NULL );
                _python_par_display = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_data, key ) == 1 )
            {
                assert( _python_par_data == NULL );
                _python_par_data = value;

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
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_display != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_display = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_display == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_display = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_data != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_data = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_data == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_data = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_display == NULL || _python_par_data == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_display, _python_par_data };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_8_XError_of_module_Xlib$error( self, _python_par_self, _python_par_display, _python_par_data );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_display );
    Py_XDECREF( _python_par_data );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_8_XError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_1___init___of_class_8_XError_of_module_Xlib$error( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_8_XError_of_module_Xlib$error( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___str___of_class_8_XError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_s;
    PyObjectLocalVariable var_f;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_s.object == NULL );
    var_s.object = tmp_assign_source_1;

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_282a8e2e5427e748ae16a7ae1433ffd6, module_Xlib$error );
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
    tmp_iter_arg_1 = const_tuple_c5fd29a06800a806256ca371e15dba82_tuple;
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_2;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_3 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 74;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_assign_source_4 = tmp_for_loop_1__iter_value.object;

    if (var_f.object == NULL)
    {
        var_f.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = var_f.object;
        var_f.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_source_name_1 = var_s.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto try_finally_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto try_finally_handler_1;
    }
    tmp_binop_left_1 = const_str_digest_2e9d4d9ef148275f753bee254e8a020f;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_f.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto try_finally_handler_1;
    }

    tmp_subscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__data );
    if ( tmp_subscr_target_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 76;
        goto try_finally_handler_1;
    }
    tmp_subscr_subscript_1 = var_f.object;

    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_target_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 76;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 76;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 76;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 74;
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
    tmp_binop_left_2 = const_str_digest_7d341c08fd102f0b86285b5ff2e26ea7;
    tmp_binop_right_2 = PyTuple_New( 2 );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_2 );
    tmp_source_name_4 = const_str_digest_fc763cb31e9938f37737394681228f83;
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_join );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = var_s.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 78;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_2, 1, tmp_tuple_element_2 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
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
    if ((var_s.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_s,
            var_s.object
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
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
static PyObject *fparse_function_2___str___of_class_8_XError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "__str__() keywords must be strings" );
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
                   "__str__() got an unexpected keyword argument '%s'",
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


    return impl_function_2___str___of_class_8_XError_of_module_Xlib$error( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___str___of_class_8_XError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2___str___of_class_8_XError_of_module_Xlib$error( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___str___of_class_8_XError_of_module_Xlib$error( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_9_XResourceError_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var__fields;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c9d1c2323f0df565d01f77d759354887, module_Xlib$error );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Struct );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Card8 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_type;
    frame_function->f_lineno = 81;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Card8 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_plain_code;
    frame_function->f_lineno = 82;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Card16 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = const_str_plain_sequence_number;
    frame_function->f_lineno = 83;
    tmp_call_arg_element_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Resource );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = const_str_plain_resource_id;
    frame_function->f_lineno = 84;
    tmp_call_arg_element_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_Card16 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = const_str_plain_minor_opcode;
    frame_function->f_lineno = 85;
    tmp_call_arg_element_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Card8 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );

        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = const_str_plain_major_opcode;
    frame_function->f_lineno = 86;
    tmp_call_arg_element_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );

        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Pad );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_11 );

        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_14 = const_int_pos_21;
    frame_function->f_lineno = 87;
    tmp_call_arg_element_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_11 );

        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 87;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS7( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_3, tmp_call_arg_element_5, tmp_call_arg_element_7, tmp_call_arg_element_9, tmp_call_arg_element_11, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_9 );
    Py_DECREF( tmp_call_arg_element_11 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    assert( var__fields.object == NULL );
    var__fields.object = tmp_assign_source_2;


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
    if ((var__fields.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__fields,
            var__fields.object
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
    if ((var__fields.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__fields,
            var__fields.object
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


NUITKA_LOCAL_MODULE PyObject *impl_class_10_BadRequest_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_11_BadValue_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_12_BadWindow_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_13_BadPixmap_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_14_BadAtom_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_15_BadCursor_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_16_BadFont_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_17_BadMatch_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_18_BadDrawable_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_19_BadAccess_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_20_BadAlloc_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_21_BadColor_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_22_BadGC_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_23_BadIDChoice_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_24_BadName_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_25_BadLength_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_26_BadImplementation_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_27_CatchError_of_module_Xlib$error(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var___call__;
    PyObjectLocalVariable var_get_error;
    PyObjectLocalVariable var_get_request;
    PyObjectLocalVariable var_reset;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_a6b7dd912c1dc65492b327235c08cfba;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7e1fc3bc6d4daa64f3f8a79350882104, module_Xlib$error );
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
    tmp_assign_source_2 = MAKE_FUNCTION_function_1___init___of_class_27_CatchError_of_module_Xlib$error(  );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_2___call___of_class_27_CatchError_of_module_Xlib$error(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }
    assert( var___call__.object == NULL );
    var___call__.object = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_3_get_error_of_class_27_CatchError_of_module_Xlib$error(  );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }
    assert( var_get_error.object == NULL );
    var_get_error.object = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_4_get_request_of_class_27_CatchError_of_module_Xlib$error(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    assert( var_get_request.object == NULL );
    var_get_request.object = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_5_reset_of_class_27_CatchError_of_module_Xlib$error(  );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    assert( var_reset.object == NULL );
    var_reset.object = tmp_assign_source_6;


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
    if ((var_get_error.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_get_error,
            var_get_error.object
        );

    }
    if ((var_get_request.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_get_request,
            var_get_request.object
        );

    }
    if ((var_reset.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_reset,
            var_reset.object
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
    if ((var_get_error.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_get_error,
            var_get_error.object
        );

    }
    if ((var_get_request.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_get_request,
            var_get_request.object
        );

    }
    if ((var_reset.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_reset,
            var_reset.object
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


static PyObject *impl_function_1___init___of_class_27_CatchError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_errors )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_errors; par_errors.object = _python_par_errors;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a3372b6fa9ce4241fb3503076c576452, module_Xlib$error );
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
    tmp_assattr_name_1 = par_errors.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28297 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_error_types, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_error, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = Py_None;
    tmp_assattr_target_3 = par_self.object;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_request, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 133;
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
    if ((par_errors.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_errors,
            par_errors.object
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
static PyObject *fparse_function_1___init___of_class_27_CatchError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_errors = NULL;
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
        _python_par_errors = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_errors, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_errors = INCREASE_REFCOUNT( const_tuple_empty );
    }


    return impl_function_1___init___of_class_27_CatchError_of_module_Xlib$error( self, _python_par_self, _python_par_errors );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_errors );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_27_CatchError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1___init___of_class_27_CatchError_of_module_Xlib$error( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_27_CatchError_of_module_Xlib$error( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___call___of_class_27_CatchError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_error, PyObject *_python_par_request )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_error; par_error.object = _python_par_error;
    PyObjectLocalVariable par_request; par_request.object = _python_par_request;
    PyObjectLocalVariable var_etype;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    int tmp_tried_lineno_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0f0b3bfa89eddd6447a7af6774a3773a, module_Xlib$error );
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

        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_error_types );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 136;
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
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 137;
        goto frame_exception_exit_1;
    }

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_error_types );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 137;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 137;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_1;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

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
        frame_function->f_lineno = 137;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_2;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_2;
        Py_DECREF( old );
    }
    tmp_assign_source_3 = tmp_for_loop_1__iter_value.object;

    if (var_etype.object == NULL)
    {
        var_etype.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = var_etype.object;
        var_etype.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
        Py_DECREF( old );
    }
    tmp_isinstance_inst_1 = par_error.object;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12063 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 138;
        goto try_finally_handler_1;
    }

    tmp_isinstance_cls_1 = var_etype.object;

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto try_finally_handler_1;
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
    tmp_assattr_name_1 = par_error.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12063 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 139;
        goto try_finally_handler_1;
    }

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 139;
        goto try_finally_handler_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_error, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto try_finally_handler_1;
    }
    tmp_assattr_name_2 = par_request.object;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28349 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 140;
        goto try_finally_handler_1;
    }

    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 140;
        goto try_finally_handler_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_request, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 140;
        goto try_finally_handler_1;
    }
    tmp_return_value = const_int_pos_1;
    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 137;
        goto try_finally_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
    try_finally_handler_start_1:;
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_assattr_name_3 = par_error.object;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12063 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self.object;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_error, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_request.object;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28349 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self.object;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_request, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }
    tmp_return_value = const_int_pos_1;
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
    if ((var_etype.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_etype,
            var_etype.object
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
    if ((par_error.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_error,
            par_error.object
        );

    }
    if ((par_request.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_request,
            par_request.object
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
static PyObject *fparse_function_2___call___of_class_27_CatchError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_error = NULL;
    PyObject *_python_par_request = NULL;
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
            if ( found == false && const_str_plain_error == key )
            {
                assert( _python_par_error == NULL );
                _python_par_error = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_request == key )
            {
                assert( _python_par_request == NULL );
                _python_par_request = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_error, key ) == 1 )
            {
                assert( _python_par_error == NULL );
                _python_par_error = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_request, key ) == 1 )
            {
                assert( _python_par_request == NULL );
                _python_par_request = value;

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
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_error != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_error = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_error == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_error = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_request != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_request == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_request = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_error == NULL || _python_par_request == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_error, _python_par_request };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2___call___of_class_27_CatchError_of_module_Xlib$error( self, _python_par_self, _python_par_error, _python_par_request );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_error );
    Py_XDECREF( _python_par_request );

    return NULL;
}

static PyObject *dparse_function_2___call___of_class_27_CatchError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_2___call___of_class_27_CatchError_of_module_Xlib$error( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___call___of_class_27_CatchError_of_module_Xlib$error( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_get_error_of_class_27_CatchError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_33e7f73d7b370600c46dcd936b2c1fe9, module_Xlib$error );
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

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_error );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
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
static PyObject *fparse_function_3_get_error_of_class_27_CatchError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_error() keywords must be strings" );
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
                   "get_error() got an unexpected keyword argument '%s'",
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


    return impl_function_3_get_error_of_class_27_CatchError_of_module_Xlib$error( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_get_error_of_class_27_CatchError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_get_error_of_class_27_CatchError_of_module_Xlib$error( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_get_error_of_class_27_CatchError_of_module_Xlib$error( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_get_request_of_class_27_CatchError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ef9561a811a35311f45b449664112bac, module_Xlib$error );
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

        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_request );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 153;
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
static PyObject *fparse_function_4_get_request_of_class_27_CatchError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_request() keywords must be strings" );
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
                   "get_request() got an unexpected keyword argument '%s'",
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


    return impl_function_4_get_request_of_class_27_CatchError_of_module_Xlib$error( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4_get_request_of_class_27_CatchError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_4_get_request_of_class_27_CatchError_of_module_Xlib$error( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_get_request_of_class_27_CatchError_of_module_Xlib$error( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_reset_of_class_27_CatchError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0068233c7e3c0ea37e6b682dc8f12788, module_Xlib$error );
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
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_error, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 156;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_request, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
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
static PyObject *fparse_function_5_reset_of_class_27_CatchError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "reset() keywords must be strings" );
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
                   "reset() got an unexpected keyword argument '%s'",
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


    return impl_function_5_reset_of_class_27_CatchError_of_module_Xlib$error( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5_reset_of_class_27_CatchError_of_module_Xlib$error( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_5_reset_of_class_27_CatchError_of_module_Xlib$error( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_reset_of_class_27_CatchError_of_module_Xlib$error( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_DisplayError_of_module_Xlib$error(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_DisplayError_of_module_Xlib$error,
        dparse_function_1___init___of_class_1_DisplayError_of_module_Xlib$error,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1f70d26ca6f81b272500597e94bbef9d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$error,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_27_CatchError_of_module_Xlib$error(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_27_CatchError_of_module_Xlib$error,
        dparse_function_1___init___of_class_27_CatchError_of_module_Xlib$error,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f1e302e0003ecd702c8ecb81b6f4fbb0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$error,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_DisplayConnectionError_of_module_Xlib$error(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_3_DisplayConnectionError_of_module_Xlib$error,
        dparse_function_1___init___of_class_3_DisplayConnectionError_of_module_Xlib$error,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a44b27a27139aef9b91c0f287f425e1e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$error,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_ConnectionClosedError_of_module_Xlib$error(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_4_ConnectionClosedError_of_module_Xlib$error,
        dparse_function_1___init___of_class_4_ConnectionClosedError_of_module_Xlib$error,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f8b571cc81d00c03197182349b4c0a1a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$error,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_8_XError_of_module_Xlib$error(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_8_XError_of_module_Xlib$error,
        dparse_function_1___init___of_class_8_XError_of_module_Xlib$error,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8f7972a7b9faf1d9475388078f95ba7c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$error,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___str___of_class_2_DisplayNameError_of_module_Xlib$error(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___str___of_class_2_DisplayNameError_of_module_Xlib$error,
        dparse_function_1___str___of_class_2_DisplayNameError_of_module_Xlib$error,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2c6f0b47e4af6940e046e22d8a8eda5b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$error,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___call___of_class_27_CatchError_of_module_Xlib$error(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___call___of_class_27_CatchError_of_module_Xlib$error,
        dparse_function_2___call___of_class_27_CatchError_of_module_Xlib$error,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_68ed22141af64e9a5e958601abee21d9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$error,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___str___of_class_1_DisplayError_of_module_Xlib$error(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___str___of_class_1_DisplayError_of_module_Xlib$error,
        dparse_function_2___str___of_class_1_DisplayError_of_module_Xlib$error,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_68ae17b8c08fe084027b45e3d866e47d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$error,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___str___of_class_3_DisplayConnectionError_of_module_Xlib$error(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___str___of_class_3_DisplayConnectionError_of_module_Xlib$error,
        dparse_function_2___str___of_class_3_DisplayConnectionError_of_module_Xlib$error,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_28edb7d368bbbc25ebdcd9457972cd8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$error,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___str___of_class_4_ConnectionClosedError_of_module_Xlib$error(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___str___of_class_4_ConnectionClosedError_of_module_Xlib$error,
        dparse_function_2___str___of_class_4_ConnectionClosedError_of_module_Xlib$error,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d259e86c728bb038d6b01720223f3b49,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$error,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___str___of_class_8_XError_of_module_Xlib$error(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___str___of_class_8_XError_of_module_Xlib$error,
        dparse_function_2___str___of_class_8_XError_of_module_Xlib$error,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3b6b945e6f09e3857a5417e35f1b8aa0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$error,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_error_of_class_27_CatchError_of_module_Xlib$error(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_get_error_of_class_27_CatchError_of_module_Xlib$error,
        dparse_function_3_get_error_of_class_27_CatchError_of_module_Xlib$error,
        const_str_plain_get_error,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_33e7f73d7b370600c46dcd936b2c1fe9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$error,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_get_request_of_class_27_CatchError_of_module_Xlib$error(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_get_request_of_class_27_CatchError_of_module_Xlib$error,
        dparse_function_4_get_request_of_class_27_CatchError_of_module_Xlib$error,
        const_str_plain_get_request,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ef9561a811a35311f45b449664112bac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$error,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_reset_of_class_27_CatchError_of_module_Xlib$error(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_reset_of_class_27_CatchError_of_module_Xlib$error,
        dparse_function_5_reset_of_class_27_CatchError_of_module_Xlib$error,
        const_str_plain_reset,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0068233c7e3c0ea37e6b682dc8f12788,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$error,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Xlib$error =
{
    PyModuleDef_HEAD_INIT,
    "Xlib.error",   /* m_name */
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

MOD_INIT_DECL( Xlib$error )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Xlib$error );
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

    // puts( "in initXlib$error" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Xlib$error = Py_InitModule4(
        "Xlib.error",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Xlib$error = PyModule_Create( &mdef_Xlib$error );
#endif

    moduledict_Xlib$error = (PyDictObject *)((PyModuleObject *)module_Xlib$error)->md_dict;

    assertObject( module_Xlib$error );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_a6b7dd912c1dc65492b327235c08cfba, module_Xlib$error );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_Xlib$error );

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
    PyObjectTempVariable tmp_class_creation_5__bases;
    PyObjectTempVariable tmp_class_creation_5__class_dict;
    PyObjectTempVariable tmp_class_creation_5__metaclass;
    PyObjectTempVariable tmp_class_creation_5__class;
    PyObjectTempVariable tmp_class_creation_6__bases;
    PyObjectTempVariable tmp_class_creation_6__class_dict;
    PyObjectTempVariable tmp_class_creation_6__metaclass;
    PyObjectTempVariable tmp_class_creation_6__class;
    PyObjectTempVariable tmp_class_creation_7__bases;
    PyObjectTempVariable tmp_class_creation_7__class_dict;
    PyObjectTempVariable tmp_class_creation_7__metaclass;
    PyObjectTempVariable tmp_class_creation_7__class;
    PyObjectTempVariable tmp_class_creation_8__bases;
    PyObjectTempVariable tmp_class_creation_8__class_dict;
    PyObjectTempVariable tmp_class_creation_8__metaclass;
    PyObjectTempVariable tmp_class_creation_8__class;
    PyObjectTempVariable tmp_class_creation_9__bases;
    PyObjectTempVariable tmp_class_creation_9__class_dict;
    PyObjectTempVariable tmp_class_creation_9__metaclass;
    PyObjectTempVariable tmp_class_creation_9__class;
    PyObjectTempVariable tmp_class_creation_10__bases;
    PyObjectTempVariable tmp_class_creation_10__class_dict;
    PyObjectTempVariable tmp_class_creation_10__metaclass;
    PyObjectTempVariable tmp_class_creation_10__class;
    PyObjectTempVariable tmp_class_creation_11__bases;
    PyObjectTempVariable tmp_class_creation_11__class_dict;
    PyObjectTempVariable tmp_class_creation_11__metaclass;
    PyObjectTempVariable tmp_class_creation_11__class;
    PyObjectTempVariable tmp_class_creation_12__bases;
    PyObjectTempVariable tmp_class_creation_12__class_dict;
    PyObjectTempVariable tmp_class_creation_12__metaclass;
    PyObjectTempVariable tmp_class_creation_12__class;
    PyObjectTempVariable tmp_class_creation_13__bases;
    PyObjectTempVariable tmp_class_creation_13__class_dict;
    PyObjectTempVariable tmp_class_creation_13__metaclass;
    PyObjectTempVariable tmp_class_creation_13__class;
    PyObjectTempVariable tmp_class_creation_14__bases;
    PyObjectTempVariable tmp_class_creation_14__class_dict;
    PyObjectTempVariable tmp_class_creation_14__metaclass;
    PyObjectTempVariable tmp_class_creation_14__class;
    PyObjectTempVariable tmp_class_creation_15__bases;
    PyObjectTempVariable tmp_class_creation_15__class_dict;
    PyObjectTempVariable tmp_class_creation_15__metaclass;
    PyObjectTempVariable tmp_class_creation_15__class;
    PyObjectTempVariable tmp_class_creation_16__bases;
    PyObjectTempVariable tmp_class_creation_16__class_dict;
    PyObjectTempVariable tmp_class_creation_16__metaclass;
    PyObjectTempVariable tmp_class_creation_16__class;
    PyObjectTempVariable tmp_class_creation_17__bases;
    PyObjectTempVariable tmp_class_creation_17__class_dict;
    PyObjectTempVariable tmp_class_creation_17__metaclass;
    PyObjectTempVariable tmp_class_creation_17__class;
    PyObjectTempVariable tmp_class_creation_18__bases;
    PyObjectTempVariable tmp_class_creation_18__class_dict;
    PyObjectTempVariable tmp_class_creation_18__metaclass;
    PyObjectTempVariable tmp_class_creation_18__class;
    PyObjectTempVariable tmp_class_creation_19__bases;
    PyObjectTempVariable tmp_class_creation_19__class_dict;
    PyObjectTempVariable tmp_class_creation_19__metaclass;
    PyObjectTempVariable tmp_class_creation_19__class;
    PyObjectTempVariable tmp_class_creation_20__bases;
    PyObjectTempVariable tmp_class_creation_20__class_dict;
    PyObjectTempVariable tmp_class_creation_20__metaclass;
    PyObjectTempVariable tmp_class_creation_20__class;
    PyObjectTempVariable tmp_class_creation_21__bases;
    PyObjectTempVariable tmp_class_creation_21__class_dict;
    PyObjectTempVariable tmp_class_creation_21__metaclass;
    PyObjectTempVariable tmp_class_creation_21__class;
    PyObjectTempVariable tmp_class_creation_22__bases;
    PyObjectTempVariable tmp_class_creation_22__class_dict;
    PyObjectTempVariable tmp_class_creation_22__metaclass;
    PyObjectTempVariable tmp_class_creation_22__class;
    PyObjectTempVariable tmp_class_creation_23__bases;
    PyObjectTempVariable tmp_class_creation_23__class_dict;
    PyObjectTempVariable tmp_class_creation_23__metaclass;
    PyObjectTempVariable tmp_class_creation_23__class;
    PyObjectTempVariable tmp_class_creation_24__bases;
    PyObjectTempVariable tmp_class_creation_24__class_dict;
    PyObjectTempVariable tmp_class_creation_24__metaclass;
    PyObjectTempVariable tmp_class_creation_24__class;
    PyObjectTempVariable tmp_class_creation_25__bases;
    PyObjectTempVariable tmp_class_creation_25__class_dict;
    PyObjectTempVariable tmp_class_creation_25__metaclass;
    PyObjectTempVariable tmp_class_creation_25__class;
    PyObjectTempVariable tmp_class_creation_26__bases;
    PyObjectTempVariable tmp_class_creation_26__class_dict;
    PyObjectTempVariable tmp_class_creation_26__metaclass;
    PyObjectTempVariable tmp_class_creation_26__class;
    PyObjectTempVariable tmp_class_creation_27__bases;
    PyObjectTempVariable tmp_class_creation_27__class_dict;
    PyObjectTempVariable tmp_class_creation_27__metaclass;
    PyObjectTempVariable tmp_class_creation_27__class;
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
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
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
    PyObject *tmp_class_bases_1;
    PyObject *tmp_class_bases_2;
    PyObject *tmp_class_bases_3;
    PyObject *tmp_class_bases_4;
    PyObject *tmp_class_bases_5;
    PyObject *tmp_class_bases_6;
    PyObject *tmp_class_bases_7;
    PyObject *tmp_class_bases_8;
    PyObject *tmp_class_bases_9;
    PyObject *tmp_class_bases_10;
    PyObject *tmp_class_bases_11;
    PyObject *tmp_class_bases_12;
    PyObject *tmp_class_bases_13;
    PyObject *tmp_class_bases_14;
    PyObject *tmp_class_bases_15;
    PyObject *tmp_class_bases_16;
    PyObject *tmp_class_bases_17;
    PyObject *tmp_class_bases_18;
    PyObject *tmp_class_bases_19;
    PyObject *tmp_class_bases_20;
    PyObject *tmp_class_bases_21;
    PyObject *tmp_class_bases_22;
    PyObject *tmp_class_bases_23;
    PyObject *tmp_class_bases_24;
    PyObject *tmp_class_bases_25;
    PyObject *tmp_class_bases_26;
    PyObject *tmp_class_bases_27;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    int tmp_cmp_In_9;
    int tmp_cmp_In_10;
    int tmp_cmp_In_11;
    int tmp_cmp_In_12;
    int tmp_cmp_In_13;
    int tmp_cmp_In_14;
    int tmp_cmp_In_15;
    int tmp_cmp_In_16;
    int tmp_cmp_In_17;
    int tmp_cmp_In_18;
    int tmp_cmp_In_19;
    int tmp_cmp_In_20;
    int tmp_cmp_In_21;
    int tmp_cmp_In_22;
    int tmp_cmp_In_23;
    int tmp_cmp_In_24;
    int tmp_cmp_In_25;
    int tmp_cmp_In_26;
    int tmp_cmp_In_27;
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
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_dict_2;
    PyObject *tmp_dget_dict_3;
    PyObject *tmp_dget_dict_4;
    PyObject *tmp_dget_dict_5;
    PyObject *tmp_dget_dict_6;
    PyObject *tmp_dget_dict_7;
    PyObject *tmp_dget_dict_8;
    PyObject *tmp_dget_dict_9;
    PyObject *tmp_dget_dict_10;
    PyObject *tmp_dget_dict_11;
    PyObject *tmp_dget_dict_12;
    PyObject *tmp_dget_dict_13;
    PyObject *tmp_dget_dict_14;
    PyObject *tmp_dget_dict_15;
    PyObject *tmp_dget_dict_16;
    PyObject *tmp_dget_dict_17;
    PyObject *tmp_dget_dict_18;
    PyObject *tmp_dget_dict_19;
    PyObject *tmp_dget_dict_20;
    PyObject *tmp_dget_dict_21;
    PyObject *tmp_dget_dict_22;
    PyObject *tmp_dget_dict_23;
    PyObject *tmp_dget_dict_24;
    PyObject *tmp_dget_dict_25;
    PyObject *tmp_dget_dict_26;
    PyObject *tmp_dget_dict_27;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_dget_key_2;
    PyObject *tmp_dget_key_3;
    PyObject *tmp_dget_key_4;
    PyObject *tmp_dget_key_5;
    PyObject *tmp_dget_key_6;
    PyObject *tmp_dget_key_7;
    PyObject *tmp_dget_key_8;
    PyObject *tmp_dget_key_9;
    PyObject *tmp_dget_key_10;
    PyObject *tmp_dget_key_11;
    PyObject *tmp_dget_key_12;
    PyObject *tmp_dget_key_13;
    PyObject *tmp_dget_key_14;
    PyObject *tmp_dget_key_15;
    PyObject *tmp_dget_key_16;
    PyObject *tmp_dget_key_17;
    PyObject *tmp_dget_key_18;
    PyObject *tmp_dget_key_19;
    PyObject *tmp_dget_key_20;
    PyObject *tmp_dget_key_21;
    PyObject *tmp_dget_key_22;
    PyObject *tmp_dget_key_23;
    PyObject *tmp_dget_key_24;
    PyObject *tmp_dget_key_25;
    PyObject *tmp_dget_key_26;
    PyObject *tmp_dget_key_27;
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
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
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
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
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
    int tmp_tried_lineno_24;
    int tmp_tried_lineno_25;
    int tmp_tried_lineno_26;
    int tmp_tried_lineno_27;
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

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_51e45ce887cbf020f3785669423c54eb;
    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_da957328973b0fb42575e73db970194b, module_Xlib$error );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_Xlib$error)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_Xlib, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_X_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_X );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_Xlib$error)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_0df97c6d560821a4763cc4527efabdd8, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_rq_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_rq );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq, tmp_assign_source_4 );
    // Tried code
    tmp_assign_source_5 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_5;

    tmp_assign_source_6 = impl_class_1_DisplayError_of_module_Xlib$error(  );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_6;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
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
    tmp_assign_source_7 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_7 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_7;

    tmp_called_1 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_1 = const_str_plain_DisplayError;
    tmp_call_arg_element_2 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_3 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 26;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_8;

    tmp_assign_source_9 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_DisplayError, tmp_assign_source_9 );
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
    // Tried code
    tmp_assign_source_10 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_DisplayError );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DisplayError );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27574 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 33;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_10, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases.object == NULL );
    tmp_class_creation_2__bases.object = tmp_assign_source_10;

    tmp_assign_source_11 = impl_class_2_DisplayNameError_of_module_Xlib$error(  );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class_dict.object == NULL );
    tmp_class_creation_2__class_dict.object = tmp_assign_source_11;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_2__class_dict.object;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
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
    tmp_assign_source_12 = DICT_GET_ITEM( tmp_dget_dict_2, tmp_dget_key_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto try_finally_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_bases_2 = tmp_class_creation_2__bases.object;

    tmp_assign_source_12 = SELECT_METACLASS( tmp_class_bases_2, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass.object == NULL );
    tmp_class_creation_2__metaclass.object = tmp_assign_source_12;

    tmp_called_2 = tmp_class_creation_2__metaclass.object;

    tmp_call_arg_element_4 = const_str_plain_DisplayNameError;
    tmp_call_arg_element_5 = tmp_class_creation_2__bases.object;

    tmp_call_arg_element_6 = tmp_class_creation_2__class_dict.object;

    frame_module->f_lineno = 33;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class.object == NULL );
    tmp_class_creation_2__class.object = tmp_assign_source_13;

    tmp_assign_source_14 = tmp_class_creation_2__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_DisplayNameError, tmp_assign_source_14 );
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
    tmp_assign_source_15 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_DisplayError );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DisplayError );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27574 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 37;
        goto try_finally_handler_3;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_15, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_3__bases.object == NULL );
    tmp_class_creation_3__bases.object = tmp_assign_source_15;

    tmp_assign_source_16 = impl_class_3_DisplayConnectionError_of_module_Xlib$error(  );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 37;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_3__class_dict.object == NULL );
    tmp_class_creation_3__class_dict.object = tmp_assign_source_16;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_3__class_dict.object;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 37;
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
    tmp_assign_source_17 = DICT_GET_ITEM( tmp_dget_dict_3, tmp_dget_key_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 37;
        goto try_finally_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_class_bases_3 = tmp_class_creation_3__bases.object;

    tmp_assign_source_17 = SELECT_METACLASS( tmp_class_bases_3, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass.object == NULL );
    tmp_class_creation_3__metaclass.object = tmp_assign_source_17;

    tmp_called_3 = tmp_class_creation_3__metaclass.object;

    tmp_call_arg_element_7 = const_str_plain_DisplayConnectionError;
    tmp_call_arg_element_8 = tmp_class_creation_3__bases.object;

    tmp_call_arg_element_9 = tmp_class_creation_3__class_dict.object;

    frame_module->f_lineno = 37;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3( tmp_called_3, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 37;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_3__class.object == NULL );
    tmp_class_creation_3__class.object = tmp_assign_source_18;

    tmp_assign_source_19 = tmp_class_creation_3__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_DisplayConnectionError, tmp_assign_source_19 );
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
    tmp_assign_source_20 = PyTuple_New( 1 );
    tmp_tuple_element_4 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_20, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_4__bases.object == NULL );
    tmp_class_creation_4__bases.object = tmp_assign_source_20;

    tmp_assign_source_21 = impl_class_4_ConnectionClosedError_of_module_Xlib$error(  );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 45;
        goto try_finally_handler_4;
    }
    assert( tmp_class_creation_4__class_dict.object == NULL );
    tmp_class_creation_4__class_dict.object = tmp_assign_source_21;

    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_4__class_dict.object;

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 45;
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
    tmp_assign_source_22 = DICT_GET_ITEM( tmp_dget_dict_4, tmp_dget_key_4 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 45;
        goto try_finally_handler_4;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_class_bases_4 = tmp_class_creation_4__bases.object;

    tmp_assign_source_22 = SELECT_METACLASS( tmp_class_bases_4, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass.object == NULL );
    tmp_class_creation_4__metaclass.object = tmp_assign_source_22;

    tmp_called_4 = tmp_class_creation_4__metaclass.object;

    tmp_call_arg_element_10 = const_str_plain_ConnectionClosedError;
    tmp_call_arg_element_11 = tmp_class_creation_4__bases.object;

    tmp_call_arg_element_12 = tmp_class_creation_4__class_dict.object;

    frame_module->f_lineno = 45;
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 45;
        goto try_finally_handler_4;
    }
    assert( tmp_class_creation_4__class.object == NULL );
    tmp_class_creation_4__class.object = tmp_assign_source_23;

    tmp_assign_source_24 = tmp_class_creation_4__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_ConnectionClosedError, tmp_assign_source_24 );
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
    // Tried code
    tmp_assign_source_25 = PyTuple_New( 1 );
    tmp_tuple_element_5 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_25, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_5__bases.object == NULL );
    tmp_class_creation_5__bases.object = tmp_assign_source_25;

    tmp_assign_source_26 = impl_class_5_XauthError_of_module_Xlib$error(  );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 53;
        goto try_finally_handler_5;
    }
    assert( tmp_class_creation_5__class_dict.object == NULL );
    tmp_class_creation_5__class_dict.object = tmp_assign_source_26;

    tmp_compare_left_5 = const_str_plain___metaclass__;
    tmp_compare_right_5 = tmp_class_creation_5__class_dict.object;

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    if ( tmp_cmp_In_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 53;
        goto try_finally_handler_5;
    }
    if (tmp_cmp_In_5 == 1)
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_dget_dict_5 = tmp_class_creation_5__class_dict.object;

    tmp_dget_key_5 = const_str_plain___metaclass__;
    tmp_assign_source_27 = DICT_GET_ITEM( tmp_dget_dict_5, tmp_dget_key_5 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 53;
        goto try_finally_handler_5;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_class_bases_5 = tmp_class_creation_5__bases.object;

    tmp_assign_source_27 = SELECT_METACLASS( tmp_class_bases_5, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass.object == NULL );
    tmp_class_creation_5__metaclass.object = tmp_assign_source_27;

    tmp_called_5 = tmp_class_creation_5__metaclass.object;

    tmp_call_arg_element_13 = const_str_plain_XauthError;
    tmp_call_arg_element_14 = tmp_class_creation_5__bases.object;

    tmp_call_arg_element_15 = tmp_class_creation_5__class_dict.object;

    frame_module->f_lineno = 53;
    tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS3( tmp_called_5, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 53;
        goto try_finally_handler_5;
    }
    assert( tmp_class_creation_5__class.object == NULL );
    tmp_class_creation_5__class.object = tmp_assign_source_28;

    tmp_assign_source_29 = tmp_class_creation_5__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XauthError, tmp_assign_source_29 );
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

    tmp_tried_lineno_5 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_5__class.object );
    tmp_class_creation_5__class.object = NULL;

    Py_XDECREF( tmp_class_creation_5__bases.object );
    tmp_class_creation_5__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_5__class_dict.object );
    tmp_class_creation_5__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass.object );
    tmp_class_creation_5__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_5;
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
    // Tried code
    tmp_assign_source_30 = PyTuple_New( 1 );
    tmp_tuple_element_6 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_30, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_6__bases.object == NULL );
    tmp_class_creation_6__bases.object = tmp_assign_source_30;

    tmp_assign_source_31 = impl_class_6_XNoAuthError_of_module_Xlib$error(  );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 54;
        goto try_finally_handler_6;
    }
    assert( tmp_class_creation_6__class_dict.object == NULL );
    tmp_class_creation_6__class_dict.object = tmp_assign_source_31;

    tmp_compare_left_6 = const_str_plain___metaclass__;
    tmp_compare_right_6 = tmp_class_creation_6__class_dict.object;

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    if ( tmp_cmp_In_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 54;
        goto try_finally_handler_6;
    }
    if (tmp_cmp_In_6 == 1)
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_dget_dict_6 = tmp_class_creation_6__class_dict.object;

    tmp_dget_key_6 = const_str_plain___metaclass__;
    tmp_assign_source_32 = DICT_GET_ITEM( tmp_dget_dict_6, tmp_dget_key_6 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 54;
        goto try_finally_handler_6;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_class_bases_6 = tmp_class_creation_6__bases.object;

    tmp_assign_source_32 = SELECT_METACLASS( tmp_class_bases_6, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass.object == NULL );
    tmp_class_creation_6__metaclass.object = tmp_assign_source_32;

    tmp_called_6 = tmp_class_creation_6__metaclass.object;

    tmp_call_arg_element_16 = const_str_plain_XNoAuthError;
    tmp_call_arg_element_17 = tmp_class_creation_6__bases.object;

    tmp_call_arg_element_18 = tmp_class_creation_6__class_dict.object;

    frame_module->f_lineno = 54;
    tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3( tmp_called_6, tmp_call_arg_element_16, tmp_call_arg_element_17, tmp_call_arg_element_18 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 54;
        goto try_finally_handler_6;
    }
    assert( tmp_class_creation_6__class.object == NULL );
    tmp_class_creation_6__class.object = tmp_assign_source_33;

    tmp_assign_source_34 = tmp_class_creation_6__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XNoAuthError, tmp_assign_source_34 );
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

    tmp_tried_lineno_6 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_6__class.object );
    tmp_class_creation_6__class.object = NULL;

    Py_XDECREF( tmp_class_creation_6__bases.object );
    tmp_class_creation_6__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_6__class_dict.object );
    tmp_class_creation_6__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass.object );
    tmp_class_creation_6__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_6;
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
    // Tried code
    tmp_assign_source_35 = PyTuple_New( 1 );
    tmp_tuple_element_7 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_35, 0, tmp_tuple_element_7 );
    assert( tmp_class_creation_7__bases.object == NULL );
    tmp_class_creation_7__bases.object = tmp_assign_source_35;

    tmp_assign_source_36 = impl_class_7_ResourceIDError_of_module_Xlib$error(  );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 56;
        goto try_finally_handler_7;
    }
    assert( tmp_class_creation_7__class_dict.object == NULL );
    tmp_class_creation_7__class_dict.object = tmp_assign_source_36;

    tmp_compare_left_7 = const_str_plain___metaclass__;
    tmp_compare_right_7 = tmp_class_creation_7__class_dict.object;

    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    if ( tmp_cmp_In_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 56;
        goto try_finally_handler_7;
    }
    if (tmp_cmp_In_7 == 1)
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dget_dict_7 = tmp_class_creation_7__class_dict.object;

    tmp_dget_key_7 = const_str_plain___metaclass__;
    tmp_assign_source_37 = DICT_GET_ITEM( tmp_dget_dict_7, tmp_dget_key_7 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 56;
        goto try_finally_handler_7;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_class_bases_7 = tmp_class_creation_7__bases.object;

    tmp_assign_source_37 = SELECT_METACLASS( tmp_class_bases_7, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_7:;
    assert( tmp_class_creation_7__metaclass.object == NULL );
    tmp_class_creation_7__metaclass.object = tmp_assign_source_37;

    tmp_called_7 = tmp_class_creation_7__metaclass.object;

    tmp_call_arg_element_19 = const_str_plain_ResourceIDError;
    tmp_call_arg_element_20 = tmp_class_creation_7__bases.object;

    tmp_call_arg_element_21 = tmp_class_creation_7__class_dict.object;

    frame_module->f_lineno = 56;
    tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS3( tmp_called_7, tmp_call_arg_element_19, tmp_call_arg_element_20, tmp_call_arg_element_21 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 56;
        goto try_finally_handler_7;
    }
    assert( tmp_class_creation_7__class.object == NULL );
    tmp_class_creation_7__class.object = tmp_assign_source_38;

    tmp_assign_source_39 = tmp_class_creation_7__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_ResourceIDError, tmp_assign_source_39 );
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

    tmp_tried_lineno_7 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_7__class.object );
    tmp_class_creation_7__class.object = NULL;

    Py_XDECREF( tmp_class_creation_7__bases.object );
    tmp_class_creation_7__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_7__class_dict.object );
    tmp_class_creation_7__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass.object );
    tmp_class_creation_7__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_7;
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
    // Tried code
    tmp_assign_source_40 = PyTuple_New( 2 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_40 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 59;
        goto try_finally_handler_8;
    }

    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_GetAttrData );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_40 );

        frame_module->f_lineno = 59;
        goto try_finally_handler_8;
    }
    PyTuple_SET_ITEM( tmp_assign_source_40, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_assign_source_40, 1, tmp_tuple_element_8 );
    assert( tmp_class_creation_8__bases.object == NULL );
    tmp_class_creation_8__bases.object = tmp_assign_source_40;

    tmp_assign_source_41 = impl_class_8_XError_of_module_Xlib$error(  );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 59;
        goto try_finally_handler_8;
    }
    assert( tmp_class_creation_8__class_dict.object == NULL );
    tmp_class_creation_8__class_dict.object = tmp_assign_source_41;

    tmp_compare_left_8 = const_str_plain___metaclass__;
    tmp_compare_right_8 = tmp_class_creation_8__class_dict.object;

    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    if ( tmp_cmp_In_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 59;
        goto try_finally_handler_8;
    }
    if (tmp_cmp_In_8 == 1)
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_dget_dict_8 = tmp_class_creation_8__class_dict.object;

    tmp_dget_key_8 = const_str_plain___metaclass__;
    tmp_assign_source_42 = DICT_GET_ITEM( tmp_dget_dict_8, tmp_dget_key_8 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 59;
        goto try_finally_handler_8;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_class_bases_8 = tmp_class_creation_8__bases.object;

    tmp_assign_source_42 = SELECT_METACLASS( tmp_class_bases_8, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_8:;
    assert( tmp_class_creation_8__metaclass.object == NULL );
    tmp_class_creation_8__metaclass.object = tmp_assign_source_42;

    tmp_called_8 = tmp_class_creation_8__metaclass.object;

    tmp_call_arg_element_22 = const_str_plain_XError;
    tmp_call_arg_element_23 = tmp_class_creation_8__bases.object;

    tmp_call_arg_element_24 = tmp_class_creation_8__class_dict.object;

    frame_module->f_lineno = 59;
    tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS3( tmp_called_8, tmp_call_arg_element_22, tmp_call_arg_element_23, tmp_call_arg_element_24 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 59;
        goto try_finally_handler_8;
    }
    assert( tmp_class_creation_8__class.object == NULL );
    tmp_class_creation_8__class.object = tmp_assign_source_43;

    tmp_assign_source_44 = tmp_class_creation_8__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XError, tmp_assign_source_44 );
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

    tmp_tried_lineno_8 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_8__class.object );
    tmp_class_creation_8__class.object = NULL;

    Py_XDECREF( tmp_class_creation_8__bases.object );
    tmp_class_creation_8__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_8__class_dict.object );
    tmp_class_creation_8__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass.object );
    tmp_class_creation_8__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_8;
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
    // Tried code
    tmp_assign_source_45 = PyTuple_New( 1 );
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XError );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XError );
    }

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_45 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27608 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 80;
        goto try_finally_handler_9;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_45, 0, tmp_tuple_element_9 );
    assert( tmp_class_creation_9__bases.object == NULL );
    tmp_class_creation_9__bases.object = tmp_assign_source_45;

    tmp_assign_source_46 = impl_class_9_XResourceError_of_module_Xlib$error(  );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 80;
        goto try_finally_handler_9;
    }
    assert( tmp_class_creation_9__class_dict.object == NULL );
    tmp_class_creation_9__class_dict.object = tmp_assign_source_46;

    tmp_compare_left_9 = const_str_plain___metaclass__;
    tmp_compare_right_9 = tmp_class_creation_9__class_dict.object;

    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    if ( tmp_cmp_In_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 80;
        goto try_finally_handler_9;
    }
    if (tmp_cmp_In_9 == 1)
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_dget_dict_9 = tmp_class_creation_9__class_dict.object;

    tmp_dget_key_9 = const_str_plain___metaclass__;
    tmp_assign_source_47 = DICT_GET_ITEM( tmp_dget_dict_9, tmp_dget_key_9 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 80;
        goto try_finally_handler_9;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_class_bases_9 = tmp_class_creation_9__bases.object;

    tmp_assign_source_47 = SELECT_METACLASS( tmp_class_bases_9, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_9:;
    assert( tmp_class_creation_9__metaclass.object == NULL );
    tmp_class_creation_9__metaclass.object = tmp_assign_source_47;

    tmp_called_9 = tmp_class_creation_9__metaclass.object;

    tmp_call_arg_element_25 = const_str_plain_XResourceError;
    tmp_call_arg_element_26 = tmp_class_creation_9__bases.object;

    tmp_call_arg_element_27 = tmp_class_creation_9__class_dict.object;

    frame_module->f_lineno = 80;
    tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS3( tmp_called_9, tmp_call_arg_element_25, tmp_call_arg_element_26, tmp_call_arg_element_27 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 80;
        goto try_finally_handler_9;
    }
    assert( tmp_class_creation_9__class.object == NULL );
    tmp_class_creation_9__class.object = tmp_assign_source_48;

    tmp_assign_source_49 = tmp_class_creation_9__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XResourceError, tmp_assign_source_49 );
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

    tmp_tried_lineno_9 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_9__class.object );
    tmp_class_creation_9__class.object = NULL;

    Py_XDECREF( tmp_class_creation_9__bases.object );
    tmp_class_creation_9__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_9__class_dict.object );
    tmp_class_creation_9__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass.object );
    tmp_class_creation_9__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_9;
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
    // Tried code
    tmp_assign_source_50 = PyTuple_New( 1 );
    tmp_tuple_element_10 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XError );

    if (unlikely( tmp_tuple_element_10 == NULL ))
    {
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XError );
    }

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_50 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27608 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 90;
        goto try_finally_handler_10;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_assign_source_50, 0, tmp_tuple_element_10 );
    assert( tmp_class_creation_10__bases.object == NULL );
    tmp_class_creation_10__bases.object = tmp_assign_source_50;

    tmp_assign_source_51 = impl_class_10_BadRequest_of_module_Xlib$error(  );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 90;
        goto try_finally_handler_10;
    }
    assert( tmp_class_creation_10__class_dict.object == NULL );
    tmp_class_creation_10__class_dict.object = tmp_assign_source_51;

    tmp_compare_left_10 = const_str_plain___metaclass__;
    tmp_compare_right_10 = tmp_class_creation_10__class_dict.object;

    tmp_cmp_In_10 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    if ( tmp_cmp_In_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 90;
        goto try_finally_handler_10;
    }
    if (tmp_cmp_In_10 == 1)
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_dget_dict_10 = tmp_class_creation_10__class_dict.object;

    tmp_dget_key_10 = const_str_plain___metaclass__;
    tmp_assign_source_52 = DICT_GET_ITEM( tmp_dget_dict_10, tmp_dget_key_10 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 90;
        goto try_finally_handler_10;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_class_bases_10 = tmp_class_creation_10__bases.object;

    tmp_assign_source_52 = SELECT_METACLASS( tmp_class_bases_10, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_10:;
    assert( tmp_class_creation_10__metaclass.object == NULL );
    tmp_class_creation_10__metaclass.object = tmp_assign_source_52;

    tmp_called_10 = tmp_class_creation_10__metaclass.object;

    tmp_call_arg_element_28 = const_str_plain_BadRequest;
    tmp_call_arg_element_29 = tmp_class_creation_10__bases.object;

    tmp_call_arg_element_30 = tmp_class_creation_10__class_dict.object;

    frame_module->f_lineno = 90;
    tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS3( tmp_called_10, tmp_call_arg_element_28, tmp_call_arg_element_29, tmp_call_arg_element_30 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 90;
        goto try_finally_handler_10;
    }
    assert( tmp_class_creation_10__class.object == NULL );
    tmp_class_creation_10__class.object = tmp_assign_source_53;

    tmp_assign_source_54 = tmp_class_creation_10__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadRequest, tmp_assign_source_54 );
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

    tmp_tried_lineno_10 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_10__class.object );
    tmp_class_creation_10__class.object = NULL;

    Py_XDECREF( tmp_class_creation_10__bases.object );
    tmp_class_creation_10__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_10__class_dict.object );
    tmp_class_creation_10__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass.object );
    tmp_class_creation_10__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_10;
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
    // Tried code
    tmp_assign_source_55 = PyTuple_New( 1 );
    tmp_tuple_element_11 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XError );

    if (unlikely( tmp_tuple_element_11 == NULL ))
    {
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XError );
    }

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_55 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27608 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 91;
        goto try_finally_handler_11;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_assign_source_55, 0, tmp_tuple_element_11 );
    assert( tmp_class_creation_11__bases.object == NULL );
    tmp_class_creation_11__bases.object = tmp_assign_source_55;

    tmp_assign_source_56 = impl_class_11_BadValue_of_module_Xlib$error(  );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 91;
        goto try_finally_handler_11;
    }
    assert( tmp_class_creation_11__class_dict.object == NULL );
    tmp_class_creation_11__class_dict.object = tmp_assign_source_56;

    tmp_compare_left_11 = const_str_plain___metaclass__;
    tmp_compare_right_11 = tmp_class_creation_11__class_dict.object;

    tmp_cmp_In_11 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    if ( tmp_cmp_In_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 91;
        goto try_finally_handler_11;
    }
    if (tmp_cmp_In_11 == 1)
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_dget_dict_11 = tmp_class_creation_11__class_dict.object;

    tmp_dget_key_11 = const_str_plain___metaclass__;
    tmp_assign_source_57 = DICT_GET_ITEM( tmp_dget_dict_11, tmp_dget_key_11 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 91;
        goto try_finally_handler_11;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_class_bases_11 = tmp_class_creation_11__bases.object;

    tmp_assign_source_57 = SELECT_METACLASS( tmp_class_bases_11, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_11:;
    assert( tmp_class_creation_11__metaclass.object == NULL );
    tmp_class_creation_11__metaclass.object = tmp_assign_source_57;

    tmp_called_11 = tmp_class_creation_11__metaclass.object;

    tmp_call_arg_element_31 = const_str_plain_BadValue;
    tmp_call_arg_element_32 = tmp_class_creation_11__bases.object;

    tmp_call_arg_element_33 = tmp_class_creation_11__class_dict.object;

    frame_module->f_lineno = 91;
    tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS3( tmp_called_11, tmp_call_arg_element_31, tmp_call_arg_element_32, tmp_call_arg_element_33 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 91;
        goto try_finally_handler_11;
    }
    assert( tmp_class_creation_11__class.object == NULL );
    tmp_class_creation_11__class.object = tmp_assign_source_58;

    tmp_assign_source_59 = tmp_class_creation_11__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadValue, tmp_assign_source_59 );
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

    tmp_tried_lineno_11 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_11__class.object );
    tmp_class_creation_11__class.object = NULL;

    Py_XDECREF( tmp_class_creation_11__bases.object );
    tmp_class_creation_11__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_11__class_dict.object );
    tmp_class_creation_11__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_11__metaclass.object );
    tmp_class_creation_11__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_11;
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
    // Tried code
    tmp_assign_source_60 = PyTuple_New( 1 );
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XResourceError );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XResourceError );
    }

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_60 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27636 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 92;
        goto try_finally_handler_12;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_assign_source_60, 0, tmp_tuple_element_12 );
    assert( tmp_class_creation_12__bases.object == NULL );
    tmp_class_creation_12__bases.object = tmp_assign_source_60;

    tmp_assign_source_61 = impl_class_12_BadWindow_of_module_Xlib$error(  );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 92;
        goto try_finally_handler_12;
    }
    assert( tmp_class_creation_12__class_dict.object == NULL );
    tmp_class_creation_12__class_dict.object = tmp_assign_source_61;

    tmp_compare_left_12 = const_str_plain___metaclass__;
    tmp_compare_right_12 = tmp_class_creation_12__class_dict.object;

    tmp_cmp_In_12 = PySequence_Contains( tmp_compare_right_12, tmp_compare_left_12 );
    if ( tmp_cmp_In_12 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 92;
        goto try_finally_handler_12;
    }
    if (tmp_cmp_In_12 == 1)
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_dget_dict_12 = tmp_class_creation_12__class_dict.object;

    tmp_dget_key_12 = const_str_plain___metaclass__;
    tmp_assign_source_62 = DICT_GET_ITEM( tmp_dget_dict_12, tmp_dget_key_12 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 92;
        goto try_finally_handler_12;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_class_bases_12 = tmp_class_creation_12__bases.object;

    tmp_assign_source_62 = SELECT_METACLASS( tmp_class_bases_12, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_12:;
    assert( tmp_class_creation_12__metaclass.object == NULL );
    tmp_class_creation_12__metaclass.object = tmp_assign_source_62;

    tmp_called_12 = tmp_class_creation_12__metaclass.object;

    tmp_call_arg_element_34 = const_str_plain_BadWindow;
    tmp_call_arg_element_35 = tmp_class_creation_12__bases.object;

    tmp_call_arg_element_36 = tmp_class_creation_12__class_dict.object;

    frame_module->f_lineno = 92;
    tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS3( tmp_called_12, tmp_call_arg_element_34, tmp_call_arg_element_35, tmp_call_arg_element_36 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 92;
        goto try_finally_handler_12;
    }
    assert( tmp_class_creation_12__class.object == NULL );
    tmp_class_creation_12__class.object = tmp_assign_source_63;

    tmp_assign_source_64 = tmp_class_creation_12__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadWindow, tmp_assign_source_64 );
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

    tmp_tried_lineno_12 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_12__class.object );
    tmp_class_creation_12__class.object = NULL;

    Py_XDECREF( tmp_class_creation_12__bases.object );
    tmp_class_creation_12__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_12__class_dict.object );
    tmp_class_creation_12__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_12__metaclass.object );
    tmp_class_creation_12__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_12;
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
    // Tried code
    tmp_assign_source_65 = PyTuple_New( 1 );
    tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XResourceError );

    if (unlikely( tmp_tuple_element_13 == NULL ))
    {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XResourceError );
    }

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_65 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27636 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 93;
        goto try_finally_handler_13;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_assign_source_65, 0, tmp_tuple_element_13 );
    assert( tmp_class_creation_13__bases.object == NULL );
    tmp_class_creation_13__bases.object = tmp_assign_source_65;

    tmp_assign_source_66 = impl_class_13_BadPixmap_of_module_Xlib$error(  );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto try_finally_handler_13;
    }
    assert( tmp_class_creation_13__class_dict.object == NULL );
    tmp_class_creation_13__class_dict.object = tmp_assign_source_66;

    tmp_compare_left_13 = const_str_plain___metaclass__;
    tmp_compare_right_13 = tmp_class_creation_13__class_dict.object;

    tmp_cmp_In_13 = PySequence_Contains( tmp_compare_right_13, tmp_compare_left_13 );
    if ( tmp_cmp_In_13 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto try_finally_handler_13;
    }
    if (tmp_cmp_In_13 == 1)
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_dget_dict_13 = tmp_class_creation_13__class_dict.object;

    tmp_dget_key_13 = const_str_plain___metaclass__;
    tmp_assign_source_67 = DICT_GET_ITEM( tmp_dget_dict_13, tmp_dget_key_13 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto try_finally_handler_13;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_class_bases_13 = tmp_class_creation_13__bases.object;

    tmp_assign_source_67 = SELECT_METACLASS( tmp_class_bases_13, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_13:;
    assert( tmp_class_creation_13__metaclass.object == NULL );
    tmp_class_creation_13__metaclass.object = tmp_assign_source_67;

    tmp_called_13 = tmp_class_creation_13__metaclass.object;

    tmp_call_arg_element_37 = const_str_plain_BadPixmap;
    tmp_call_arg_element_38 = tmp_class_creation_13__bases.object;

    tmp_call_arg_element_39 = tmp_class_creation_13__class_dict.object;

    frame_module->f_lineno = 93;
    tmp_assign_source_68 = CALL_FUNCTION_WITH_ARGS3( tmp_called_13, tmp_call_arg_element_37, tmp_call_arg_element_38, tmp_call_arg_element_39 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto try_finally_handler_13;
    }
    assert( tmp_class_creation_13__class.object == NULL );
    tmp_class_creation_13__class.object = tmp_assign_source_68;

    tmp_assign_source_69 = tmp_class_creation_13__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadPixmap, tmp_assign_source_69 );
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

    tmp_tried_lineno_13 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_13__class.object );
    tmp_class_creation_13__class.object = NULL;

    Py_XDECREF( tmp_class_creation_13__bases.object );
    tmp_class_creation_13__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_13__class_dict.object );
    tmp_class_creation_13__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_13__metaclass.object );
    tmp_class_creation_13__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_13;
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
    // Tried code
    tmp_assign_source_70 = PyTuple_New( 1 );
    tmp_tuple_element_14 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XError );

    if (unlikely( tmp_tuple_element_14 == NULL ))
    {
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XError );
    }

    if ( tmp_tuple_element_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_70 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27608 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 94;
        goto try_finally_handler_14;
    }

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_assign_source_70, 0, tmp_tuple_element_14 );
    assert( tmp_class_creation_14__bases.object == NULL );
    tmp_class_creation_14__bases.object = tmp_assign_source_70;

    tmp_assign_source_71 = impl_class_14_BadAtom_of_module_Xlib$error(  );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 94;
        goto try_finally_handler_14;
    }
    assert( tmp_class_creation_14__class_dict.object == NULL );
    tmp_class_creation_14__class_dict.object = tmp_assign_source_71;

    tmp_compare_left_14 = const_str_plain___metaclass__;
    tmp_compare_right_14 = tmp_class_creation_14__class_dict.object;

    tmp_cmp_In_14 = PySequence_Contains( tmp_compare_right_14, tmp_compare_left_14 );
    if ( tmp_cmp_In_14 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 94;
        goto try_finally_handler_14;
    }
    if (tmp_cmp_In_14 == 1)
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_dget_dict_14 = tmp_class_creation_14__class_dict.object;

    tmp_dget_key_14 = const_str_plain___metaclass__;
    tmp_assign_source_72 = DICT_GET_ITEM( tmp_dget_dict_14, tmp_dget_key_14 );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 94;
        goto try_finally_handler_14;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_class_bases_14 = tmp_class_creation_14__bases.object;

    tmp_assign_source_72 = SELECT_METACLASS( tmp_class_bases_14, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_14:;
    assert( tmp_class_creation_14__metaclass.object == NULL );
    tmp_class_creation_14__metaclass.object = tmp_assign_source_72;

    tmp_called_14 = tmp_class_creation_14__metaclass.object;

    tmp_call_arg_element_40 = const_str_plain_BadAtom;
    tmp_call_arg_element_41 = tmp_class_creation_14__bases.object;

    tmp_call_arg_element_42 = tmp_class_creation_14__class_dict.object;

    frame_module->f_lineno = 94;
    tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS3( tmp_called_14, tmp_call_arg_element_40, tmp_call_arg_element_41, tmp_call_arg_element_42 );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 94;
        goto try_finally_handler_14;
    }
    assert( tmp_class_creation_14__class.object == NULL );
    tmp_class_creation_14__class.object = tmp_assign_source_73;

    tmp_assign_source_74 = tmp_class_creation_14__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadAtom, tmp_assign_source_74 );
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

    tmp_tried_lineno_14 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_14__class.object );
    tmp_class_creation_14__class.object = NULL;

    Py_XDECREF( tmp_class_creation_14__bases.object );
    tmp_class_creation_14__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_14__class_dict.object );
    tmp_class_creation_14__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_14__metaclass.object );
    tmp_class_creation_14__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_14;
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
    // Tried code
    tmp_assign_source_75 = PyTuple_New( 1 );
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XResourceError );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XResourceError );
    }

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_75 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27636 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 95;
        goto try_finally_handler_15;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_assign_source_75, 0, tmp_tuple_element_15 );
    assert( tmp_class_creation_15__bases.object == NULL );
    tmp_class_creation_15__bases.object = tmp_assign_source_75;

    tmp_assign_source_76 = impl_class_15_BadCursor_of_module_Xlib$error(  );
    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 95;
        goto try_finally_handler_15;
    }
    assert( tmp_class_creation_15__class_dict.object == NULL );
    tmp_class_creation_15__class_dict.object = tmp_assign_source_76;

    tmp_compare_left_15 = const_str_plain___metaclass__;
    tmp_compare_right_15 = tmp_class_creation_15__class_dict.object;

    tmp_cmp_In_15 = PySequence_Contains( tmp_compare_right_15, tmp_compare_left_15 );
    if ( tmp_cmp_In_15 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 95;
        goto try_finally_handler_15;
    }
    if (tmp_cmp_In_15 == 1)
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_dget_dict_15 = tmp_class_creation_15__class_dict.object;

    tmp_dget_key_15 = const_str_plain___metaclass__;
    tmp_assign_source_77 = DICT_GET_ITEM( tmp_dget_dict_15, tmp_dget_key_15 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 95;
        goto try_finally_handler_15;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_class_bases_15 = tmp_class_creation_15__bases.object;

    tmp_assign_source_77 = SELECT_METACLASS( tmp_class_bases_15, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_15:;
    assert( tmp_class_creation_15__metaclass.object == NULL );
    tmp_class_creation_15__metaclass.object = tmp_assign_source_77;

    tmp_called_15 = tmp_class_creation_15__metaclass.object;

    tmp_call_arg_element_43 = const_str_plain_BadCursor;
    tmp_call_arg_element_44 = tmp_class_creation_15__bases.object;

    tmp_call_arg_element_45 = tmp_class_creation_15__class_dict.object;

    frame_module->f_lineno = 95;
    tmp_assign_source_78 = CALL_FUNCTION_WITH_ARGS3( tmp_called_15, tmp_call_arg_element_43, tmp_call_arg_element_44, tmp_call_arg_element_45 );
    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 95;
        goto try_finally_handler_15;
    }
    assert( tmp_class_creation_15__class.object == NULL );
    tmp_class_creation_15__class.object = tmp_assign_source_78;

    tmp_assign_source_79 = tmp_class_creation_15__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadCursor, tmp_assign_source_79 );
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

    tmp_tried_lineno_15 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_15__class.object );
    tmp_class_creation_15__class.object = NULL;

    Py_XDECREF( tmp_class_creation_15__bases.object );
    tmp_class_creation_15__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_15__class_dict.object );
    tmp_class_creation_15__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_15__metaclass.object );
    tmp_class_creation_15__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_15;
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
    // Tried code
    tmp_assign_source_80 = PyTuple_New( 1 );
    tmp_tuple_element_16 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XResourceError );

    if (unlikely( tmp_tuple_element_16 == NULL ))
    {
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XResourceError );
    }

    if ( tmp_tuple_element_16 == NULL )
    {
        Py_DECREF( tmp_assign_source_80 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27636 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 96;
        goto try_finally_handler_16;
    }

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_assign_source_80, 0, tmp_tuple_element_16 );
    assert( tmp_class_creation_16__bases.object == NULL );
    tmp_class_creation_16__bases.object = tmp_assign_source_80;

    tmp_assign_source_81 = impl_class_16_BadFont_of_module_Xlib$error(  );
    if ( tmp_assign_source_81 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 96;
        goto try_finally_handler_16;
    }
    assert( tmp_class_creation_16__class_dict.object == NULL );
    tmp_class_creation_16__class_dict.object = tmp_assign_source_81;

    tmp_compare_left_16 = const_str_plain___metaclass__;
    tmp_compare_right_16 = tmp_class_creation_16__class_dict.object;

    tmp_cmp_In_16 = PySequence_Contains( tmp_compare_right_16, tmp_compare_left_16 );
    if ( tmp_cmp_In_16 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 96;
        goto try_finally_handler_16;
    }
    if (tmp_cmp_In_16 == 1)
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_dget_dict_16 = tmp_class_creation_16__class_dict.object;

    tmp_dget_key_16 = const_str_plain___metaclass__;
    tmp_assign_source_82 = DICT_GET_ITEM( tmp_dget_dict_16, tmp_dget_key_16 );
    if ( tmp_assign_source_82 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 96;
        goto try_finally_handler_16;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_class_bases_16 = tmp_class_creation_16__bases.object;

    tmp_assign_source_82 = SELECT_METACLASS( tmp_class_bases_16, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_16:;
    assert( tmp_class_creation_16__metaclass.object == NULL );
    tmp_class_creation_16__metaclass.object = tmp_assign_source_82;

    tmp_called_16 = tmp_class_creation_16__metaclass.object;

    tmp_call_arg_element_46 = const_str_plain_BadFont;
    tmp_call_arg_element_47 = tmp_class_creation_16__bases.object;

    tmp_call_arg_element_48 = tmp_class_creation_16__class_dict.object;

    frame_module->f_lineno = 96;
    tmp_assign_source_83 = CALL_FUNCTION_WITH_ARGS3( tmp_called_16, tmp_call_arg_element_46, tmp_call_arg_element_47, tmp_call_arg_element_48 );
    if ( tmp_assign_source_83 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 96;
        goto try_finally_handler_16;
    }
    assert( tmp_class_creation_16__class.object == NULL );
    tmp_class_creation_16__class.object = tmp_assign_source_83;

    tmp_assign_source_84 = tmp_class_creation_16__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadFont, tmp_assign_source_84 );
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

    tmp_tried_lineno_16 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_16__class.object );
    tmp_class_creation_16__class.object = NULL;

    Py_XDECREF( tmp_class_creation_16__bases.object );
    tmp_class_creation_16__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_16__class_dict.object );
    tmp_class_creation_16__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_16__metaclass.object );
    tmp_class_creation_16__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_16;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_16 != NULL )
    {
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;

        goto frame_exception_exit_1;
    }

    goto finally_end_16;
    finally_end_16:;
    // Tried code
    tmp_assign_source_85 = PyTuple_New( 1 );
    tmp_tuple_element_17 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XError );

    if (unlikely( tmp_tuple_element_17 == NULL ))
    {
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XError );
    }

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_85 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27608 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 97;
        goto try_finally_handler_17;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_assign_source_85, 0, tmp_tuple_element_17 );
    assert( tmp_class_creation_17__bases.object == NULL );
    tmp_class_creation_17__bases.object = tmp_assign_source_85;

    tmp_assign_source_86 = impl_class_17_BadMatch_of_module_Xlib$error(  );
    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 97;
        goto try_finally_handler_17;
    }
    assert( tmp_class_creation_17__class_dict.object == NULL );
    tmp_class_creation_17__class_dict.object = tmp_assign_source_86;

    tmp_compare_left_17 = const_str_plain___metaclass__;
    tmp_compare_right_17 = tmp_class_creation_17__class_dict.object;

    tmp_cmp_In_17 = PySequence_Contains( tmp_compare_right_17, tmp_compare_left_17 );
    if ( tmp_cmp_In_17 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 97;
        goto try_finally_handler_17;
    }
    if (tmp_cmp_In_17 == 1)
    {
        goto condexpr_true_17;
    }
    else
    {
        goto condexpr_false_17;
    }
    condexpr_true_17:;
    tmp_dget_dict_17 = tmp_class_creation_17__class_dict.object;

    tmp_dget_key_17 = const_str_plain___metaclass__;
    tmp_assign_source_87 = DICT_GET_ITEM( tmp_dget_dict_17, tmp_dget_key_17 );
    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 97;
        goto try_finally_handler_17;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_class_bases_17 = tmp_class_creation_17__bases.object;

    tmp_assign_source_87 = SELECT_METACLASS( tmp_class_bases_17, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_17:;
    assert( tmp_class_creation_17__metaclass.object == NULL );
    tmp_class_creation_17__metaclass.object = tmp_assign_source_87;

    tmp_called_17 = tmp_class_creation_17__metaclass.object;

    tmp_call_arg_element_49 = const_str_plain_BadMatch;
    tmp_call_arg_element_50 = tmp_class_creation_17__bases.object;

    tmp_call_arg_element_51 = tmp_class_creation_17__class_dict.object;

    frame_module->f_lineno = 97;
    tmp_assign_source_88 = CALL_FUNCTION_WITH_ARGS3( tmp_called_17, tmp_call_arg_element_49, tmp_call_arg_element_50, tmp_call_arg_element_51 );
    if ( tmp_assign_source_88 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 97;
        goto try_finally_handler_17;
    }
    assert( tmp_class_creation_17__class.object == NULL );
    tmp_class_creation_17__class.object = tmp_assign_source_88;

    tmp_assign_source_89 = tmp_class_creation_17__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadMatch, tmp_assign_source_89 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_17 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_17__class.object );
    tmp_class_creation_17__class.object = NULL;

    Py_XDECREF( tmp_class_creation_17__bases.object );
    tmp_class_creation_17__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_17__class_dict.object );
    tmp_class_creation_17__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_17__metaclass.object );
    tmp_class_creation_17__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_17;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_17 != NULL )
    {
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;

        goto frame_exception_exit_1;
    }

    goto finally_end_17;
    finally_end_17:;
    // Tried code
    tmp_assign_source_90 = PyTuple_New( 1 );
    tmp_tuple_element_18 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XResourceError );

    if (unlikely( tmp_tuple_element_18 == NULL ))
    {
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XResourceError );
    }

    if ( tmp_tuple_element_18 == NULL )
    {
        Py_DECREF( tmp_assign_source_90 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27636 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 98;
        goto try_finally_handler_18;
    }

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_assign_source_90, 0, tmp_tuple_element_18 );
    assert( tmp_class_creation_18__bases.object == NULL );
    tmp_class_creation_18__bases.object = tmp_assign_source_90;

    tmp_assign_source_91 = impl_class_18_BadDrawable_of_module_Xlib$error(  );
    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 98;
        goto try_finally_handler_18;
    }
    assert( tmp_class_creation_18__class_dict.object == NULL );
    tmp_class_creation_18__class_dict.object = tmp_assign_source_91;

    tmp_compare_left_18 = const_str_plain___metaclass__;
    tmp_compare_right_18 = tmp_class_creation_18__class_dict.object;

    tmp_cmp_In_18 = PySequence_Contains( tmp_compare_right_18, tmp_compare_left_18 );
    if ( tmp_cmp_In_18 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 98;
        goto try_finally_handler_18;
    }
    if (tmp_cmp_In_18 == 1)
    {
        goto condexpr_true_18;
    }
    else
    {
        goto condexpr_false_18;
    }
    condexpr_true_18:;
    tmp_dget_dict_18 = tmp_class_creation_18__class_dict.object;

    tmp_dget_key_18 = const_str_plain___metaclass__;
    tmp_assign_source_92 = DICT_GET_ITEM( tmp_dget_dict_18, tmp_dget_key_18 );
    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 98;
        goto try_finally_handler_18;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_class_bases_18 = tmp_class_creation_18__bases.object;

    tmp_assign_source_92 = SELECT_METACLASS( tmp_class_bases_18, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_18:;
    assert( tmp_class_creation_18__metaclass.object == NULL );
    tmp_class_creation_18__metaclass.object = tmp_assign_source_92;

    tmp_called_18 = tmp_class_creation_18__metaclass.object;

    tmp_call_arg_element_52 = const_str_plain_BadDrawable;
    tmp_call_arg_element_53 = tmp_class_creation_18__bases.object;

    tmp_call_arg_element_54 = tmp_class_creation_18__class_dict.object;

    frame_module->f_lineno = 98;
    tmp_assign_source_93 = CALL_FUNCTION_WITH_ARGS3( tmp_called_18, tmp_call_arg_element_52, tmp_call_arg_element_53, tmp_call_arg_element_54 );
    if ( tmp_assign_source_93 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 98;
        goto try_finally_handler_18;
    }
    assert( tmp_class_creation_18__class.object == NULL );
    tmp_class_creation_18__class.object = tmp_assign_source_93;

    tmp_assign_source_94 = tmp_class_creation_18__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadDrawable, tmp_assign_source_94 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_18:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_18 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_18__class.object );
    tmp_class_creation_18__class.object = NULL;

    Py_XDECREF( tmp_class_creation_18__bases.object );
    tmp_class_creation_18__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_18__class_dict.object );
    tmp_class_creation_18__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_18__metaclass.object );
    tmp_class_creation_18__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_18;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_18 != NULL )
    {
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;

        goto frame_exception_exit_1;
    }

    goto finally_end_18;
    finally_end_18:;
    // Tried code
    tmp_assign_source_95 = PyTuple_New( 1 );
    tmp_tuple_element_19 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XError );

    if (unlikely( tmp_tuple_element_19 == NULL ))
    {
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XError );
    }

    if ( tmp_tuple_element_19 == NULL )
    {
        Py_DECREF( tmp_assign_source_95 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27608 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 99;
        goto try_finally_handler_19;
    }

    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_assign_source_95, 0, tmp_tuple_element_19 );
    assert( tmp_class_creation_19__bases.object == NULL );
    tmp_class_creation_19__bases.object = tmp_assign_source_95;

    tmp_assign_source_96 = impl_class_19_BadAccess_of_module_Xlib$error(  );
    if ( tmp_assign_source_96 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 99;
        goto try_finally_handler_19;
    }
    assert( tmp_class_creation_19__class_dict.object == NULL );
    tmp_class_creation_19__class_dict.object = tmp_assign_source_96;

    tmp_compare_left_19 = const_str_plain___metaclass__;
    tmp_compare_right_19 = tmp_class_creation_19__class_dict.object;

    tmp_cmp_In_19 = PySequence_Contains( tmp_compare_right_19, tmp_compare_left_19 );
    if ( tmp_cmp_In_19 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 99;
        goto try_finally_handler_19;
    }
    if (tmp_cmp_In_19 == 1)
    {
        goto condexpr_true_19;
    }
    else
    {
        goto condexpr_false_19;
    }
    condexpr_true_19:;
    tmp_dget_dict_19 = tmp_class_creation_19__class_dict.object;

    tmp_dget_key_19 = const_str_plain___metaclass__;
    tmp_assign_source_97 = DICT_GET_ITEM( tmp_dget_dict_19, tmp_dget_key_19 );
    if ( tmp_assign_source_97 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 99;
        goto try_finally_handler_19;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_class_bases_19 = tmp_class_creation_19__bases.object;

    tmp_assign_source_97 = SELECT_METACLASS( tmp_class_bases_19, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_19:;
    assert( tmp_class_creation_19__metaclass.object == NULL );
    tmp_class_creation_19__metaclass.object = tmp_assign_source_97;

    tmp_called_19 = tmp_class_creation_19__metaclass.object;

    tmp_call_arg_element_55 = const_str_plain_BadAccess;
    tmp_call_arg_element_56 = tmp_class_creation_19__bases.object;

    tmp_call_arg_element_57 = tmp_class_creation_19__class_dict.object;

    frame_module->f_lineno = 99;
    tmp_assign_source_98 = CALL_FUNCTION_WITH_ARGS3( tmp_called_19, tmp_call_arg_element_55, tmp_call_arg_element_56, tmp_call_arg_element_57 );
    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 99;
        goto try_finally_handler_19;
    }
    assert( tmp_class_creation_19__class.object == NULL );
    tmp_class_creation_19__class.object = tmp_assign_source_98;

    tmp_assign_source_99 = tmp_class_creation_19__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadAccess, tmp_assign_source_99 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_19:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_19 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_19__class.object );
    tmp_class_creation_19__class.object = NULL;

    Py_XDECREF( tmp_class_creation_19__bases.object );
    tmp_class_creation_19__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_19__class_dict.object );
    tmp_class_creation_19__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_19__metaclass.object );
    tmp_class_creation_19__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_19;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_19 != NULL )
    {
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;

        goto frame_exception_exit_1;
    }

    goto finally_end_19;
    finally_end_19:;
    // Tried code
    tmp_assign_source_100 = PyTuple_New( 1 );
    tmp_tuple_element_20 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XError );

    if (unlikely( tmp_tuple_element_20 == NULL ))
    {
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XError );
    }

    if ( tmp_tuple_element_20 == NULL )
    {
        Py_DECREF( tmp_assign_source_100 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27608 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 100;
        goto try_finally_handler_20;
    }

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_assign_source_100, 0, tmp_tuple_element_20 );
    assert( tmp_class_creation_20__bases.object == NULL );
    tmp_class_creation_20__bases.object = tmp_assign_source_100;

    tmp_assign_source_101 = impl_class_20_BadAlloc_of_module_Xlib$error(  );
    if ( tmp_assign_source_101 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 100;
        goto try_finally_handler_20;
    }
    assert( tmp_class_creation_20__class_dict.object == NULL );
    tmp_class_creation_20__class_dict.object = tmp_assign_source_101;

    tmp_compare_left_20 = const_str_plain___metaclass__;
    tmp_compare_right_20 = tmp_class_creation_20__class_dict.object;

    tmp_cmp_In_20 = PySequence_Contains( tmp_compare_right_20, tmp_compare_left_20 );
    if ( tmp_cmp_In_20 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 100;
        goto try_finally_handler_20;
    }
    if (tmp_cmp_In_20 == 1)
    {
        goto condexpr_true_20;
    }
    else
    {
        goto condexpr_false_20;
    }
    condexpr_true_20:;
    tmp_dget_dict_20 = tmp_class_creation_20__class_dict.object;

    tmp_dget_key_20 = const_str_plain___metaclass__;
    tmp_assign_source_102 = DICT_GET_ITEM( tmp_dget_dict_20, tmp_dget_key_20 );
    if ( tmp_assign_source_102 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 100;
        goto try_finally_handler_20;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_class_bases_20 = tmp_class_creation_20__bases.object;

    tmp_assign_source_102 = SELECT_METACLASS( tmp_class_bases_20, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_20:;
    assert( tmp_class_creation_20__metaclass.object == NULL );
    tmp_class_creation_20__metaclass.object = tmp_assign_source_102;

    tmp_called_20 = tmp_class_creation_20__metaclass.object;

    tmp_call_arg_element_58 = const_str_plain_BadAlloc;
    tmp_call_arg_element_59 = tmp_class_creation_20__bases.object;

    tmp_call_arg_element_60 = tmp_class_creation_20__class_dict.object;

    frame_module->f_lineno = 100;
    tmp_assign_source_103 = CALL_FUNCTION_WITH_ARGS3( tmp_called_20, tmp_call_arg_element_58, tmp_call_arg_element_59, tmp_call_arg_element_60 );
    if ( tmp_assign_source_103 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 100;
        goto try_finally_handler_20;
    }
    assert( tmp_class_creation_20__class.object == NULL );
    tmp_class_creation_20__class.object = tmp_assign_source_103;

    tmp_assign_source_104 = tmp_class_creation_20__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadAlloc, tmp_assign_source_104 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_20:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_20 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_20__class.object );
    tmp_class_creation_20__class.object = NULL;

    Py_XDECREF( tmp_class_creation_20__bases.object );
    tmp_class_creation_20__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_20__class_dict.object );
    tmp_class_creation_20__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_20__metaclass.object );
    tmp_class_creation_20__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_20;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_20 != NULL )
    {
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;

        goto frame_exception_exit_1;
    }

    goto finally_end_20;
    finally_end_20:;
    // Tried code
    tmp_assign_source_105 = PyTuple_New( 1 );
    tmp_tuple_element_21 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XResourceError );

    if (unlikely( tmp_tuple_element_21 == NULL ))
    {
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XResourceError );
    }

    if ( tmp_tuple_element_21 == NULL )
    {
        Py_DECREF( tmp_assign_source_105 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27636 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 101;
        goto try_finally_handler_21;
    }

    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_assign_source_105, 0, tmp_tuple_element_21 );
    assert( tmp_class_creation_21__bases.object == NULL );
    tmp_class_creation_21__bases.object = tmp_assign_source_105;

    tmp_assign_source_106 = impl_class_21_BadColor_of_module_Xlib$error(  );
    if ( tmp_assign_source_106 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 101;
        goto try_finally_handler_21;
    }
    assert( tmp_class_creation_21__class_dict.object == NULL );
    tmp_class_creation_21__class_dict.object = tmp_assign_source_106;

    tmp_compare_left_21 = const_str_plain___metaclass__;
    tmp_compare_right_21 = tmp_class_creation_21__class_dict.object;

    tmp_cmp_In_21 = PySequence_Contains( tmp_compare_right_21, tmp_compare_left_21 );
    if ( tmp_cmp_In_21 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 101;
        goto try_finally_handler_21;
    }
    if (tmp_cmp_In_21 == 1)
    {
        goto condexpr_true_21;
    }
    else
    {
        goto condexpr_false_21;
    }
    condexpr_true_21:;
    tmp_dget_dict_21 = tmp_class_creation_21__class_dict.object;

    tmp_dget_key_21 = const_str_plain___metaclass__;
    tmp_assign_source_107 = DICT_GET_ITEM( tmp_dget_dict_21, tmp_dget_key_21 );
    if ( tmp_assign_source_107 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 101;
        goto try_finally_handler_21;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_class_bases_21 = tmp_class_creation_21__bases.object;

    tmp_assign_source_107 = SELECT_METACLASS( tmp_class_bases_21, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_21:;
    assert( tmp_class_creation_21__metaclass.object == NULL );
    tmp_class_creation_21__metaclass.object = tmp_assign_source_107;

    tmp_called_21 = tmp_class_creation_21__metaclass.object;

    tmp_call_arg_element_61 = const_str_plain_BadColor;
    tmp_call_arg_element_62 = tmp_class_creation_21__bases.object;

    tmp_call_arg_element_63 = tmp_class_creation_21__class_dict.object;

    frame_module->f_lineno = 101;
    tmp_assign_source_108 = CALL_FUNCTION_WITH_ARGS3( tmp_called_21, tmp_call_arg_element_61, tmp_call_arg_element_62, tmp_call_arg_element_63 );
    if ( tmp_assign_source_108 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 101;
        goto try_finally_handler_21;
    }
    assert( tmp_class_creation_21__class.object == NULL );
    tmp_class_creation_21__class.object = tmp_assign_source_108;

    tmp_assign_source_109 = tmp_class_creation_21__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadColor, tmp_assign_source_109 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_21:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_21 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_21__class.object );
    tmp_class_creation_21__class.object = NULL;

    Py_XDECREF( tmp_class_creation_21__bases.object );
    tmp_class_creation_21__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_21__class_dict.object );
    tmp_class_creation_21__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_21__metaclass.object );
    tmp_class_creation_21__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_21;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_21 != NULL )
    {
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;

        goto frame_exception_exit_1;
    }

    goto finally_end_21;
    finally_end_21:;
    // Tried code
    tmp_assign_source_110 = PyTuple_New( 1 );
    tmp_tuple_element_22 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XResourceError );

    if (unlikely( tmp_tuple_element_22 == NULL ))
    {
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XResourceError );
    }

    if ( tmp_tuple_element_22 == NULL )
    {
        Py_DECREF( tmp_assign_source_110 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27636 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 102;
        goto try_finally_handler_22;
    }

    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_assign_source_110, 0, tmp_tuple_element_22 );
    assert( tmp_class_creation_22__bases.object == NULL );
    tmp_class_creation_22__bases.object = tmp_assign_source_110;

    tmp_assign_source_111 = impl_class_22_BadGC_of_module_Xlib$error(  );
    if ( tmp_assign_source_111 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 102;
        goto try_finally_handler_22;
    }
    assert( tmp_class_creation_22__class_dict.object == NULL );
    tmp_class_creation_22__class_dict.object = tmp_assign_source_111;

    tmp_compare_left_22 = const_str_plain___metaclass__;
    tmp_compare_right_22 = tmp_class_creation_22__class_dict.object;

    tmp_cmp_In_22 = PySequence_Contains( tmp_compare_right_22, tmp_compare_left_22 );
    if ( tmp_cmp_In_22 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 102;
        goto try_finally_handler_22;
    }
    if (tmp_cmp_In_22 == 1)
    {
        goto condexpr_true_22;
    }
    else
    {
        goto condexpr_false_22;
    }
    condexpr_true_22:;
    tmp_dget_dict_22 = tmp_class_creation_22__class_dict.object;

    tmp_dget_key_22 = const_str_plain___metaclass__;
    tmp_assign_source_112 = DICT_GET_ITEM( tmp_dget_dict_22, tmp_dget_key_22 );
    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 102;
        goto try_finally_handler_22;
    }
    goto condexpr_end_22;
    condexpr_false_22:;
    tmp_class_bases_22 = tmp_class_creation_22__bases.object;

    tmp_assign_source_112 = SELECT_METACLASS( tmp_class_bases_22, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_22:;
    assert( tmp_class_creation_22__metaclass.object == NULL );
    tmp_class_creation_22__metaclass.object = tmp_assign_source_112;

    tmp_called_22 = tmp_class_creation_22__metaclass.object;

    tmp_call_arg_element_64 = const_str_plain_BadGC;
    tmp_call_arg_element_65 = tmp_class_creation_22__bases.object;

    tmp_call_arg_element_66 = tmp_class_creation_22__class_dict.object;

    frame_module->f_lineno = 102;
    tmp_assign_source_113 = CALL_FUNCTION_WITH_ARGS3( tmp_called_22, tmp_call_arg_element_64, tmp_call_arg_element_65, tmp_call_arg_element_66 );
    if ( tmp_assign_source_113 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 102;
        goto try_finally_handler_22;
    }
    assert( tmp_class_creation_22__class.object == NULL );
    tmp_class_creation_22__class.object = tmp_assign_source_113;

    tmp_assign_source_114 = tmp_class_creation_22__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadGC, tmp_assign_source_114 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_22:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_22 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_22__class.object );
    tmp_class_creation_22__class.object = NULL;

    Py_XDECREF( tmp_class_creation_22__bases.object );
    tmp_class_creation_22__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_22__class_dict.object );
    tmp_class_creation_22__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_22__metaclass.object );
    tmp_class_creation_22__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_22;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_22 != NULL )
    {
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;

        goto frame_exception_exit_1;
    }

    goto finally_end_22;
    finally_end_22:;
    // Tried code
    tmp_assign_source_115 = PyTuple_New( 1 );
    tmp_tuple_element_23 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XResourceError );

    if (unlikely( tmp_tuple_element_23 == NULL ))
    {
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XResourceError );
    }

    if ( tmp_tuple_element_23 == NULL )
    {
        Py_DECREF( tmp_assign_source_115 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27636 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 103;
        goto try_finally_handler_23;
    }

    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_assign_source_115, 0, tmp_tuple_element_23 );
    assert( tmp_class_creation_23__bases.object == NULL );
    tmp_class_creation_23__bases.object = tmp_assign_source_115;

    tmp_assign_source_116 = impl_class_23_BadIDChoice_of_module_Xlib$error(  );
    if ( tmp_assign_source_116 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 103;
        goto try_finally_handler_23;
    }
    assert( tmp_class_creation_23__class_dict.object == NULL );
    tmp_class_creation_23__class_dict.object = tmp_assign_source_116;

    tmp_compare_left_23 = const_str_plain___metaclass__;
    tmp_compare_right_23 = tmp_class_creation_23__class_dict.object;

    tmp_cmp_In_23 = PySequence_Contains( tmp_compare_right_23, tmp_compare_left_23 );
    if ( tmp_cmp_In_23 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 103;
        goto try_finally_handler_23;
    }
    if (tmp_cmp_In_23 == 1)
    {
        goto condexpr_true_23;
    }
    else
    {
        goto condexpr_false_23;
    }
    condexpr_true_23:;
    tmp_dget_dict_23 = tmp_class_creation_23__class_dict.object;

    tmp_dget_key_23 = const_str_plain___metaclass__;
    tmp_assign_source_117 = DICT_GET_ITEM( tmp_dget_dict_23, tmp_dget_key_23 );
    if ( tmp_assign_source_117 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 103;
        goto try_finally_handler_23;
    }
    goto condexpr_end_23;
    condexpr_false_23:;
    tmp_class_bases_23 = tmp_class_creation_23__bases.object;

    tmp_assign_source_117 = SELECT_METACLASS( tmp_class_bases_23, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_23:;
    assert( tmp_class_creation_23__metaclass.object == NULL );
    tmp_class_creation_23__metaclass.object = tmp_assign_source_117;

    tmp_called_23 = tmp_class_creation_23__metaclass.object;

    tmp_call_arg_element_67 = const_str_plain_BadIDChoice;
    tmp_call_arg_element_68 = tmp_class_creation_23__bases.object;

    tmp_call_arg_element_69 = tmp_class_creation_23__class_dict.object;

    frame_module->f_lineno = 103;
    tmp_assign_source_118 = CALL_FUNCTION_WITH_ARGS3( tmp_called_23, tmp_call_arg_element_67, tmp_call_arg_element_68, tmp_call_arg_element_69 );
    if ( tmp_assign_source_118 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 103;
        goto try_finally_handler_23;
    }
    assert( tmp_class_creation_23__class.object == NULL );
    tmp_class_creation_23__class.object = tmp_assign_source_118;

    tmp_assign_source_119 = tmp_class_creation_23__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadIDChoice, tmp_assign_source_119 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_23:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_23 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_23__class.object );
    tmp_class_creation_23__class.object = NULL;

    Py_XDECREF( tmp_class_creation_23__bases.object );
    tmp_class_creation_23__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_23__class_dict.object );
    tmp_class_creation_23__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_23__metaclass.object );
    tmp_class_creation_23__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_23;
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
    // Tried code
    tmp_assign_source_120 = PyTuple_New( 1 );
    tmp_tuple_element_24 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XError );

    if (unlikely( tmp_tuple_element_24 == NULL ))
    {
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XError );
    }

    if ( tmp_tuple_element_24 == NULL )
    {
        Py_DECREF( tmp_assign_source_120 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27608 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 104;
        goto try_finally_handler_24;
    }

    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_assign_source_120, 0, tmp_tuple_element_24 );
    assert( tmp_class_creation_24__bases.object == NULL );
    tmp_class_creation_24__bases.object = tmp_assign_source_120;

    tmp_assign_source_121 = impl_class_24_BadName_of_module_Xlib$error(  );
    if ( tmp_assign_source_121 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 104;
        goto try_finally_handler_24;
    }
    assert( tmp_class_creation_24__class_dict.object == NULL );
    tmp_class_creation_24__class_dict.object = tmp_assign_source_121;

    tmp_compare_left_24 = const_str_plain___metaclass__;
    tmp_compare_right_24 = tmp_class_creation_24__class_dict.object;

    tmp_cmp_In_24 = PySequence_Contains( tmp_compare_right_24, tmp_compare_left_24 );
    if ( tmp_cmp_In_24 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 104;
        goto try_finally_handler_24;
    }
    if (tmp_cmp_In_24 == 1)
    {
        goto condexpr_true_24;
    }
    else
    {
        goto condexpr_false_24;
    }
    condexpr_true_24:;
    tmp_dget_dict_24 = tmp_class_creation_24__class_dict.object;

    tmp_dget_key_24 = const_str_plain___metaclass__;
    tmp_assign_source_122 = DICT_GET_ITEM( tmp_dget_dict_24, tmp_dget_key_24 );
    if ( tmp_assign_source_122 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 104;
        goto try_finally_handler_24;
    }
    goto condexpr_end_24;
    condexpr_false_24:;
    tmp_class_bases_24 = tmp_class_creation_24__bases.object;

    tmp_assign_source_122 = SELECT_METACLASS( tmp_class_bases_24, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_24:;
    assert( tmp_class_creation_24__metaclass.object == NULL );
    tmp_class_creation_24__metaclass.object = tmp_assign_source_122;

    tmp_called_24 = tmp_class_creation_24__metaclass.object;

    tmp_call_arg_element_70 = const_str_plain_BadName;
    tmp_call_arg_element_71 = tmp_class_creation_24__bases.object;

    tmp_call_arg_element_72 = tmp_class_creation_24__class_dict.object;

    frame_module->f_lineno = 104;
    tmp_assign_source_123 = CALL_FUNCTION_WITH_ARGS3( tmp_called_24, tmp_call_arg_element_70, tmp_call_arg_element_71, tmp_call_arg_element_72 );
    if ( tmp_assign_source_123 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 104;
        goto try_finally_handler_24;
    }
    assert( tmp_class_creation_24__class.object == NULL );
    tmp_class_creation_24__class.object = tmp_assign_source_123;

    tmp_assign_source_124 = tmp_class_creation_24__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadName, tmp_assign_source_124 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_24:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_24 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_24__class.object );
    tmp_class_creation_24__class.object = NULL;

    Py_XDECREF( tmp_class_creation_24__bases.object );
    tmp_class_creation_24__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_24__class_dict.object );
    tmp_class_creation_24__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_24__metaclass.object );
    tmp_class_creation_24__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_24;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_24 != NULL )
    {
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;

        goto frame_exception_exit_1;
    }

    goto finally_end_24;
    finally_end_24:;
    // Tried code
    tmp_assign_source_125 = PyTuple_New( 1 );
    tmp_tuple_element_25 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XError );

    if (unlikely( tmp_tuple_element_25 == NULL ))
    {
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XError );
    }

    if ( tmp_tuple_element_25 == NULL )
    {
        Py_DECREF( tmp_assign_source_125 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27608 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 105;
        goto try_finally_handler_25;
    }

    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_assign_source_125, 0, tmp_tuple_element_25 );
    assert( tmp_class_creation_25__bases.object == NULL );
    tmp_class_creation_25__bases.object = tmp_assign_source_125;

    tmp_assign_source_126 = impl_class_25_BadLength_of_module_Xlib$error(  );
    if ( tmp_assign_source_126 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto try_finally_handler_25;
    }
    assert( tmp_class_creation_25__class_dict.object == NULL );
    tmp_class_creation_25__class_dict.object = tmp_assign_source_126;

    tmp_compare_left_25 = const_str_plain___metaclass__;
    tmp_compare_right_25 = tmp_class_creation_25__class_dict.object;

    tmp_cmp_In_25 = PySequence_Contains( tmp_compare_right_25, tmp_compare_left_25 );
    if ( tmp_cmp_In_25 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto try_finally_handler_25;
    }
    if (tmp_cmp_In_25 == 1)
    {
        goto condexpr_true_25;
    }
    else
    {
        goto condexpr_false_25;
    }
    condexpr_true_25:;
    tmp_dget_dict_25 = tmp_class_creation_25__class_dict.object;

    tmp_dget_key_25 = const_str_plain___metaclass__;
    tmp_assign_source_127 = DICT_GET_ITEM( tmp_dget_dict_25, tmp_dget_key_25 );
    if ( tmp_assign_source_127 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto try_finally_handler_25;
    }
    goto condexpr_end_25;
    condexpr_false_25:;
    tmp_class_bases_25 = tmp_class_creation_25__bases.object;

    tmp_assign_source_127 = SELECT_METACLASS( tmp_class_bases_25, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_25:;
    assert( tmp_class_creation_25__metaclass.object == NULL );
    tmp_class_creation_25__metaclass.object = tmp_assign_source_127;

    tmp_called_25 = tmp_class_creation_25__metaclass.object;

    tmp_call_arg_element_73 = const_str_plain_BadLength;
    tmp_call_arg_element_74 = tmp_class_creation_25__bases.object;

    tmp_call_arg_element_75 = tmp_class_creation_25__class_dict.object;

    frame_module->f_lineno = 105;
    tmp_assign_source_128 = CALL_FUNCTION_WITH_ARGS3( tmp_called_25, tmp_call_arg_element_73, tmp_call_arg_element_74, tmp_call_arg_element_75 );
    if ( tmp_assign_source_128 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto try_finally_handler_25;
    }
    assert( tmp_class_creation_25__class.object == NULL );
    tmp_class_creation_25__class.object = tmp_assign_source_128;

    tmp_assign_source_129 = tmp_class_creation_25__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadLength, tmp_assign_source_129 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_25:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_25 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_25__class.object );
    tmp_class_creation_25__class.object = NULL;

    Py_XDECREF( tmp_class_creation_25__bases.object );
    tmp_class_creation_25__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_25__class_dict.object );
    tmp_class_creation_25__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_25__metaclass.object );
    tmp_class_creation_25__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_25;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_25 != NULL )
    {
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;

        goto frame_exception_exit_1;
    }

    goto finally_end_25;
    finally_end_25:;
    // Tried code
    tmp_assign_source_130 = PyTuple_New( 1 );
    tmp_tuple_element_26 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_XError );

    if (unlikely( tmp_tuple_element_26 == NULL ))
    {
        tmp_tuple_element_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XError );
    }

    if ( tmp_tuple_element_26 == NULL )
    {
        Py_DECREF( tmp_assign_source_130 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27608 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 106;
        goto try_finally_handler_26;
    }

    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_assign_source_130, 0, tmp_tuple_element_26 );
    assert( tmp_class_creation_26__bases.object == NULL );
    tmp_class_creation_26__bases.object = tmp_assign_source_130;

    tmp_assign_source_131 = impl_class_26_BadImplementation_of_module_Xlib$error(  );
    if ( tmp_assign_source_131 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 106;
        goto try_finally_handler_26;
    }
    assert( tmp_class_creation_26__class_dict.object == NULL );
    tmp_class_creation_26__class_dict.object = tmp_assign_source_131;

    tmp_compare_left_26 = const_str_plain___metaclass__;
    tmp_compare_right_26 = tmp_class_creation_26__class_dict.object;

    tmp_cmp_In_26 = PySequence_Contains( tmp_compare_right_26, tmp_compare_left_26 );
    if ( tmp_cmp_In_26 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 106;
        goto try_finally_handler_26;
    }
    if (tmp_cmp_In_26 == 1)
    {
        goto condexpr_true_26;
    }
    else
    {
        goto condexpr_false_26;
    }
    condexpr_true_26:;
    tmp_dget_dict_26 = tmp_class_creation_26__class_dict.object;

    tmp_dget_key_26 = const_str_plain___metaclass__;
    tmp_assign_source_132 = DICT_GET_ITEM( tmp_dget_dict_26, tmp_dget_key_26 );
    if ( tmp_assign_source_132 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 106;
        goto try_finally_handler_26;
    }
    goto condexpr_end_26;
    condexpr_false_26:;
    tmp_class_bases_26 = tmp_class_creation_26__bases.object;

    tmp_assign_source_132 = SELECT_METACLASS( tmp_class_bases_26, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_26:;
    assert( tmp_class_creation_26__metaclass.object == NULL );
    tmp_class_creation_26__metaclass.object = tmp_assign_source_132;

    tmp_called_26 = tmp_class_creation_26__metaclass.object;

    tmp_call_arg_element_76 = const_str_plain_BadImplementation;
    tmp_call_arg_element_77 = tmp_class_creation_26__bases.object;

    tmp_call_arg_element_78 = tmp_class_creation_26__class_dict.object;

    frame_module->f_lineno = 106;
    tmp_assign_source_133 = CALL_FUNCTION_WITH_ARGS3( tmp_called_26, tmp_call_arg_element_76, tmp_call_arg_element_77, tmp_call_arg_element_78 );
    if ( tmp_assign_source_133 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 106;
        goto try_finally_handler_26;
    }
    assert( tmp_class_creation_26__class.object == NULL );
    tmp_class_creation_26__class.object = tmp_assign_source_133;

    tmp_assign_source_134 = tmp_class_creation_26__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadImplementation, tmp_assign_source_134 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_26:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_26 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_26__class.object );
    tmp_class_creation_26__class.object = NULL;

    Py_XDECREF( tmp_class_creation_26__bases.object );
    tmp_class_creation_26__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_26__class_dict.object );
    tmp_class_creation_26__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_26__metaclass.object );
    tmp_class_creation_26__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_26;
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
    tmp_assign_source_135 = _PyDict_NewPresized( 17 );
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadRequest );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadRequest );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27672 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 109;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 109;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_BadRequest );
    if ( tmp_dict_key_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_key_1 );
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadValue );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadValue );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27704 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_BadValue );
    if ( tmp_dict_key_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_key_2 );
    tmp_dict_value_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadWindow );

    if (unlikely( tmp_dict_value_3 == NULL ))
    {
        tmp_dict_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadWindow );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27734 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_BadWindow );
    if ( tmp_dict_key_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_key_3 );
    tmp_dict_value_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadPixmap );

    if (unlikely( tmp_dict_value_4 == NULL ))
    {
        tmp_dict_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadPixmap );
    }

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27765 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 112;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 112;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_BadPixmap );
    if ( tmp_dict_key_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 112;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_key_4 );
    tmp_dict_value_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadAtom );

    if (unlikely( tmp_dict_value_5 == NULL ))
    {
        tmp_dict_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadAtom );
    }

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27796 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_BadAtom );
    if ( tmp_dict_key_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 113;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_key_5 );
    tmp_dict_value_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadCursor );

    if (unlikely( tmp_dict_value_6 == NULL ))
    {
        tmp_dict_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadCursor );
    }

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27825 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 114;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 114;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_BadCursor );
    if ( tmp_dict_key_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_key_6 );
    tmp_dict_value_7 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadFont );

    if (unlikely( tmp_dict_value_7 == NULL ))
    {
        tmp_dict_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadFont );
    }

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27856 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_BadFont );
    if ( tmp_dict_key_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 115;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_key_7 );
    tmp_dict_value_8 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadMatch );

    if (unlikely( tmp_dict_value_8 == NULL ))
    {
        tmp_dict_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadMatch );
    }

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27885 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_BadMatch );
    if ( tmp_dict_key_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_key_8 );
    tmp_dict_value_9 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadDrawable );

    if (unlikely( tmp_dict_value_9 == NULL ))
    {
        tmp_dict_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadDrawable );
    }

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27915 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_BadDrawable );
    if ( tmp_dict_key_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_key_9 );
    tmp_dict_value_10 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadAccess );

    if (unlikely( tmp_dict_value_10 == NULL ))
    {
        tmp_dict_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadAccess );
    }

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27948 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_BadAccess );
    if ( tmp_dict_key_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_10, tmp_dict_value_10 );
    Py_DECREF( tmp_dict_key_10 );
    tmp_dict_value_11 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadAlloc );

    if (unlikely( tmp_dict_value_11 == NULL ))
    {
        tmp_dict_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadAlloc );
    }

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 27979 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_BadAlloc );
    if ( tmp_dict_key_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11 );
    Py_DECREF( tmp_dict_key_11 );
    tmp_dict_value_12 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadColor );

    if (unlikely( tmp_dict_value_12 == NULL ))
    {
        tmp_dict_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadColor );
    }

    if ( tmp_dict_value_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28009 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_BadColor );
    if ( tmp_dict_key_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_12, tmp_dict_value_12 );
    Py_DECREF( tmp_dict_key_12 );
    tmp_dict_value_13 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadGC );

    if (unlikely( tmp_dict_value_13 == NULL ))
    {
        tmp_dict_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadGC );
    }

    if ( tmp_dict_value_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28039 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_BadGC );
    if ( tmp_dict_key_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_13, tmp_dict_value_13 );
    Py_DECREF( tmp_dict_key_13 );
    tmp_dict_value_14 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadIDChoice );

    if (unlikely( tmp_dict_value_14 == NULL ))
    {
        tmp_dict_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadIDChoice );
    }

    if ( tmp_dict_value_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28066 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 122;
        goto frame_exception_exit_1;
    }

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 122;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_BadIDChoice );
    if ( tmp_dict_key_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 122;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_14, tmp_dict_value_14 );
    Py_DECREF( tmp_dict_key_14 );
    tmp_dict_value_15 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadName );

    if (unlikely( tmp_dict_value_15 == NULL ))
    {
        tmp_dict_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadName );
    }

    if ( tmp_dict_value_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28099 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_BadName );
    if ( tmp_dict_key_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_15, tmp_dict_value_15 );
    Py_DECREF( tmp_dict_key_15 );
    tmp_dict_value_16 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadLength );

    if (unlikely( tmp_dict_value_16 == NULL ))
    {
        tmp_dict_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadLength );
    }

    if ( tmp_dict_value_16 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28128 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_BadLength );
    if ( tmp_dict_key_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_16, tmp_dict_value_16 );
    Py_DECREF( tmp_dict_key_16 );
    tmp_dict_value_17 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_BadImplementation );

    if (unlikely( tmp_dict_value_17 == NULL ))
    {
        tmp_dict_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadImplementation );
    }

    if ( tmp_dict_value_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28159 ], 39, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_assign_source_135 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_BadImplementation );
    if ( tmp_dict_key_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_135 );

        frame_module->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_135, tmp_dict_key_17, tmp_dict_value_17 );
    Py_DECREF( tmp_dict_key_17 );
    UPDATE_STRING_DICT1( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_xerror_class, tmp_assign_source_135 );
    // Tried code
    tmp_assign_source_136 = const_tuple_empty;
    assert( tmp_class_creation_27__bases.object == NULL );
    tmp_class_creation_27__bases.object = INCREASE_REFCOUNT( tmp_assign_source_136 );

    tmp_assign_source_137 = impl_class_27_CatchError_of_module_Xlib$error(  );
    if ( tmp_assign_source_137 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 129;
        goto try_finally_handler_27;
    }
    assert( tmp_class_creation_27__class_dict.object == NULL );
    tmp_class_creation_27__class_dict.object = tmp_assign_source_137;

    tmp_compare_left_27 = const_str_plain___metaclass__;
    tmp_compare_right_27 = tmp_class_creation_27__class_dict.object;

    tmp_cmp_In_27 = PySequence_Contains( tmp_compare_right_27, tmp_compare_left_27 );
    if ( tmp_cmp_In_27 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 129;
        goto try_finally_handler_27;
    }
    if (tmp_cmp_In_27 == 1)
    {
        goto condexpr_true_27;
    }
    else
    {
        goto condexpr_false_27;
    }
    condexpr_true_27:;
    tmp_dget_dict_27 = tmp_class_creation_27__class_dict.object;

    tmp_dget_key_27 = const_str_plain___metaclass__;
    tmp_assign_source_138 = DICT_GET_ITEM( tmp_dget_dict_27, tmp_dget_key_27 );
    if ( tmp_assign_source_138 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 129;
        goto try_finally_handler_27;
    }
    goto condexpr_end_27;
    condexpr_false_27:;
    tmp_class_bases_27 = tmp_class_creation_27__bases.object;

    tmp_assign_source_138 = SELECT_METACLASS( tmp_class_bases_27, GET_STRING_DICT_VALUE( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_27:;
    assert( tmp_class_creation_27__metaclass.object == NULL );
    tmp_class_creation_27__metaclass.object = tmp_assign_source_138;

    tmp_called_27 = tmp_class_creation_27__metaclass.object;

    tmp_call_arg_element_79 = const_str_plain_CatchError;
    tmp_call_arg_element_80 = tmp_class_creation_27__bases.object;

    tmp_call_arg_element_81 = tmp_class_creation_27__class_dict.object;

    frame_module->f_lineno = 129;
    tmp_assign_source_139 = CALL_FUNCTION_WITH_ARGS3( tmp_called_27, tmp_call_arg_element_79, tmp_call_arg_element_80, tmp_call_arg_element_81 );
    if ( tmp_assign_source_139 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 129;
        goto try_finally_handler_27;
    }
    assert( tmp_class_creation_27__class.object == NULL );
    tmp_class_creation_27__class.object = tmp_assign_source_139;

    tmp_assign_source_140 = tmp_class_creation_27__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$error, (Nuitka_StringObject *)const_str_plain_CatchError, tmp_assign_source_140 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_27:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_27 = frame_module->f_lineno;
    Py_XDECREF( tmp_class_creation_27__class.object );
    tmp_class_creation_27__class.object = NULL;

    Py_XDECREF( tmp_class_creation_27__bases.object );
    tmp_class_creation_27__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_27__class_dict.object );
    tmp_class_creation_27__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_27__metaclass.object );
    tmp_class_creation_27__metaclass.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_27;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_27 != NULL )
    {
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;

        goto frame_exception_exit_1;
    }

    goto finally_end_27;
    finally_end_27:;

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

    return MOD_RETURN_VALUE( module_Xlib$error );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
