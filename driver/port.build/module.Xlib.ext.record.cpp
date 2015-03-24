// Generated code for Python source for module 'Xlib.ext.record'
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

// The _module_Xlib$ext$record is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_Xlib$ext$record;
PyDictObject *moduledict_Xlib$ext$record;

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
extern PyObject *const_int_pos_8;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_16;
extern PyObject *const_int_pos_20;
extern PyObject *const_str_plain_X;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_r;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_rq;
extern PyObject *const_str_plain_Pad;
extern PyObject *const_str_plain_val;
extern PyObject *const_str_plain_Bool;
extern PyObject *const_str_plain_List;
extern PyObject *const_str_plain_Xlib;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_disp;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_init;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_last;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_Card8;
extern PyObject *const_str_plain__data;
extern PyObject *const_str_plain_first;
extern PyObject *const_str_plain_major;
extern PyObject *const_str_plain_minor;
extern PyObject *const_str_plain_Card16;
extern PyObject *const_str_plain_Card32;
extern PyObject *const_str_plain_Object;
extern PyObject *const_str_plain_Opcode;
extern PyObject *const_str_plain_RECORD;
extern PyObject *const_str_plain_Struct;
extern PyObject *const_str_plain__reply;
extern PyObject *const_str_plain_errors;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_insert;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_plain_opcode;
extern PyObject *const_str_plain_ranges;
extern PyObject *const_str_plain_record;
extern PyObject *const_str_plain_Request;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_acquire;
static PyObject *const_str_plain_clients;
extern PyObject *const_str_plain_context;
extern PyObject *const_str_plain_display;
extern PyObject *const_str_plain_extname;
static PyObject *const_str_plain_id_base;
extern PyObject *const_str_plain_release;
extern PyObject *const_str_plain_LengthOf;
static PyObject *const_str_plain_RawField;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain__display;
extern PyObject *const_str_plain__request;
extern PyObject *const_str_plain_callback;
extern PyObject *const_str_plain_category;
extern PyObject *const_str_plain_Card32Obj;
static PyObject *const_str_plain_EndOfData;
static PyObject *const_str_plain__callback;
extern PyObject *const_str_plain_AllClients;
static PyObject *const_str_plain_ClientDied;
static PyObject *const_str_plain_FromClient;
static PyObject *const_str_plain_FromServer;
static PyObject *const_str_plain_GetContext;
extern PyObject *const_str_plain_GetVersion;
extern PyObject *const_str_plain_ValueField;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_pack_value;
extern PyObject *const_str_plain_structcode;
static PyObject *const_str_plain_FreeContext;
extern PyObject *const_str_plain_ReplyLength;
static PyObject *const_str_plain_StartOfData;
extern PyObject *const_str_plain_client_died;
static PyObject *const_str_plain_client_info;
static PyObject *const_str_plain_datum_flags;
extern PyObject *const_str_plain_ext_replies;
static PyObject *const_str_plain_get_context;
extern PyObject *const_str_plain_get_version;
static PyObject *const_str_plain_major_range;
static PyObject *const_str_plain_minor_range;
static PyObject *const_str_plain_server_time;
static PyObject *const_str_plain_Record_Range;
extern PyObject *const_str_plain_ReplyRequest;
extern PyObject *const_str_plain_core_replies;
extern PyObject *const_str_plain_ext_requests;
static PyObject *const_str_plain_free_context;
extern PyObject *const_str_plain_parse_binary;
static PyObject *const_str_plain_ClientStarted;
static PyObject *const_str_plain_CreateContext;
static PyObject *const_str_plain_EnableContext;
static PyObject *const_str_plain_FutureClients;
static PyObject *const_str_plain_Record_Range8;
extern PyObject *const_str_plain_RequestLength;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_core_requests;
extern PyObject *const_str_plain_device_events;
extern PyObject *const_str_plain_major_version;
extern PyObject *const_str_plain_minor_version;
extern PyObject *const_str_plain_sent_requests;
extern PyObject *const_tuple_str_plain_X_tuple;
static PyObject *const_str_plain_CurrentClients;
static PyObject *const_str_plain_DisableContext;
static PyObject *const_str_plain_FromClientTime;
static PyObject *const_str_plain_FromServerTime;
static PyObject *const_str_plain_Record_Range16;
extern PyObject *const_str_plain__response_lock;
extern PyObject *const_str_plain_client_started;
static PyObject *const_str_plain_client_swapped;
static PyObject *const_str_plain_create_context;
static PyObject *const_str_plain_element_header;
static PyObject *const_str_plain_enable_context;
extern PyObject *const_tuple_str_plain_rq_tuple;
static PyObject *const_str_plain_Record_ExtRange;
static PyObject *const_str_plain_RegisterClients;
extern PyObject *const_str_plain__parse_response;
static PyObject *const_str_plain_client_resource;
static PyObject *const_str_plain_disable_context;
extern PyObject *const_str_plain_sequence_number;
extern PyObject *const_str_plain_delivered_events;
extern PyObject *const_str_plain_free_resource_id;
static PyObject *const_str_plain_register_clients;
static PyObject *const_str_plain_Record_ClientInfo;
static PyObject *const_str_plain_UnregisterClients;
static PyObject *const_str_plain_FromClientSequence;
extern PyObject *const_str_plain_parse_binary_value;
static PyObject *const_str_plain_record_get_context;
static PyObject *const_str_plain_record_get_version;
static PyObject *const_str_plain_unregister_clients;
extern PyObject *const_str_plain_get_extension_major;
extern PyObject *const_str_plain_record_free_context;
extern PyObject *const_str_plain_allocate_resource_id;
extern PyObject *const_str_plain_extension_add_method;
extern PyObject *const_str_plain_record_create_context;
extern PyObject *const_str_plain_record_enable_context;
extern PyObject *const_str_plain_record_disable_context;
static PyObject *const_str_plain_record_register_clients;
static PyObject *const_str_plain_recorded_sequence_number;
static PyObject *const_str_plain_record_unregister_clients;
extern PyObject *const_tuple_str_plain_self_str_plain_val_tuple;
extern PyObject *const_tuple_str_plain_disp_str_plain_info_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
static PyObject *const_str_digest_0c2288b6323985a0280d3aa9f9436553;
extern PyObject *const_str_digest_0df97c6d560821a4763cc4527efabdd8;
static PyObject *const_str_digest_b04272625d780daff3a0e82d695eca0a;
static PyObject *const_str_digest_e7c60ab5af270797d80efacf1019b5a2;
static PyObject *const_tuple_142b383185cb0da8b77922f68826ae43_tuple;
extern PyObject *const_tuple_7eed53b32bf32a4da4852db26db1ddc3_tuple;
static PyObject *const_tuple_a210c1ff444deb52ae98e0d03bde4cf3_tuple;
static PyObject *const_tuple_d32abd668900932c664ffdb2cd77c9ee_tuple;
static PyObject *const_tuple_e3f060845d14a480eeabe9f85b6712e3_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_context_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_major_str_plain_minor_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_context_str_plain_clients_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_context_str_plain_callback_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_r_str_plain_d_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_clients = UNSTREAM_STRING( &constant_bin[ 28962 ], 7, 1 );
    const_str_plain_id_base = UNSTREAM_STRING( &constant_bin[ 427759 ], 7, 1 );
    const_str_plain_RawField = UNSTREAM_STRING( &constant_bin[ 29352 ], 8, 1 );
    const_str_plain_EndOfData = UNSTREAM_STRING( &constant_bin[ 29483 ], 9, 1 );
    const_str_plain__callback = UNSTREAM_STRING( &constant_bin[ 126363 ], 9, 1 );
    const_str_plain_ClientDied = UNSTREAM_STRING( &constant_bin[ 427766 ], 10, 1 );
    const_str_plain_FromClient = UNSTREAM_STRING( &constant_bin[ 427776 ], 10, 1 );
    const_str_plain_FromServer = UNSTREAM_STRING( &constant_bin[ 427786 ], 10, 1 );
    const_str_plain_GetContext = UNSTREAM_STRING( &constant_bin[ 29313 ], 10, 1 );
    const_str_plain_FreeContext = UNSTREAM_STRING( &constant_bin[ 29606 ], 11, 1 );
    const_str_plain_StartOfData = UNSTREAM_STRING( &constant_bin[ 29443 ], 11, 1 );
    const_str_plain_client_info = UNSTREAM_STRING( &constant_bin[ 427796 ], 11, 1 );
    const_str_plain_datum_flags = UNSTREAM_STRING( &constant_bin[ 28905 ], 11, 1 );
    const_str_plain_get_context = UNSTREAM_STRING( &constant_bin[ 29871 ], 11, 1 );
    const_str_plain_major_range = UNSTREAM_STRING( &constant_bin[ 427807 ], 11, 1 );
    const_str_plain_minor_range = UNSTREAM_STRING( &constant_bin[ 427818 ], 11, 1 );
    const_str_plain_server_time = UNSTREAM_STRING( &constant_bin[ 427829 ], 11, 1 );
    const_str_plain_Record_Range = UNSTREAM_STRING( &constant_bin[ 28444 ], 12, 1 );
    const_str_plain_free_context = UNSTREAM_STRING( &constant_bin[ 29998 ], 12, 1 );
    const_str_plain_ClientStarted = UNSTREAM_STRING( &constant_bin[ 427840 ], 13, 1 );
    const_str_plain_CreateContext = UNSTREAM_STRING( &constant_bin[ 28860 ], 13, 1 );
    const_str_plain_EnableContext = UNSTREAM_STRING( &constant_bin[ 29521 ], 13, 1 );
    const_str_plain_FutureClients = UNSTREAM_STRING( &constant_bin[ 427853 ], 13, 1 );
    const_str_plain_Record_Range8 = UNSTREAM_STRING( &constant_bin[ 28444 ], 13, 1 );
    const_str_plain_CurrentClients = UNSTREAM_STRING( &constant_bin[ 427866 ], 14, 1 );
    const_str_plain_DisableContext = UNSTREAM_STRING( &constant_bin[ 29563 ], 14, 1 );
    const_str_plain_FromClientTime = UNSTREAM_STRING( &constant_bin[ 427880 ], 14, 1 );
    const_str_plain_FromServerTime = UNSTREAM_STRING( &constant_bin[ 427894 ], 14, 1 );
    const_str_plain_Record_Range16 = UNSTREAM_STRING( &constant_bin[ 28479 ], 14, 1 );
    const_str_plain_client_swapped = UNSTREAM_STRING( &constant_bin[ 427908 ], 14, 1 );
    const_str_plain_create_context = UNSTREAM_STRING( &constant_bin[ 29736 ], 14, 1 );
    const_str_plain_element_header = UNSTREAM_STRING( &constant_bin[ 29164 ], 14, 1 );
    const_str_plain_enable_context = UNSTREAM_STRING( &constant_bin[ 29911 ], 14, 1 );
    const_str_plain_Record_ExtRange = UNSTREAM_STRING( &constant_bin[ 28515 ], 15, 1 );
    const_str_plain_RegisterClients = UNSTREAM_STRING( &constant_bin[ 29064 ], 15, 1 );
    const_str_plain_client_resource = UNSTREAM_STRING( &constant_bin[ 427922 ], 15, 1 );
    const_str_plain_disable_context = UNSTREAM_STRING( &constant_bin[ 29954 ], 15, 1 );
    const_str_plain_register_clients = UNSTREAM_STRING( &constant_bin[ 29779 ], 16, 1 );
    const_str_plain_Record_ClientInfo = UNSTREAM_STRING( &constant_bin[ 29267 ], 17, 1 );
    const_str_plain_UnregisterClients = UNSTREAM_STRING( &constant_bin[ 29221 ], 17, 1 );
    const_str_plain_FromClientSequence = UNSTREAM_STRING( &constant_bin[ 427937 ], 18, 1 );
    const_str_plain_record_get_context = UNSTREAM_STRING( &constant_bin[ 427955 ], 18, 1 );
    const_str_plain_record_get_version = UNSTREAM_STRING( &constant_bin[ 427973 ], 18, 1 );
    const_str_plain_unregister_clients = UNSTREAM_STRING( &constant_bin[ 29824 ], 18, 1 );
    const_str_plain_record_register_clients = UNSTREAM_STRING( &constant_bin[ 427991 ], 23, 1 );
    const_str_plain_recorded_sequence_number = UNSTREAM_STRING( &constant_bin[ 428014 ], 24, 1 );
    const_str_plain_record_unregister_clients = UNSTREAM_STRING( &constant_bin[ 428038 ], 25, 1 );
    const_str_digest_0c2288b6323985a0280d3aa9f9436553 = UNSTREAM_STRING( &constant_bin[ 428063 ], 41, 0 );
    const_str_digest_b04272625d780daff3a0e82d695eca0a = UNSTREAM_STRING( &constant_bin[ 428104 ], 15, 0 );
    const_str_digest_e7c60ab5af270797d80efacf1019b5a2 = UNSTREAM_STRING( &constant_bin[ 428119 ], 51, 0 );
    const_tuple_142b383185cb0da8b77922f68826ae43_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_142b383185cb0da8b77922f68826ae43_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_142b383185cb0da8b77922f68826ae43_tuple, 1, const_str_plain_datum_flags ); Py_INCREF( const_str_plain_datum_flags );
    PyTuple_SET_ITEM( const_tuple_142b383185cb0da8b77922f68826ae43_tuple, 2, const_str_plain_clients ); Py_INCREF( const_str_plain_clients );
    PyTuple_SET_ITEM( const_tuple_142b383185cb0da8b77922f68826ae43_tuple, 3, const_str_plain_ranges ); Py_INCREF( const_str_plain_ranges );
    const_tuple_a210c1ff444deb52ae98e0d03bde4cf3_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_a210c1ff444deb52ae98e0d03bde4cf3_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a210c1ff444deb52ae98e0d03bde4cf3_tuple, 1, const_str_plain_datum_flags ); Py_INCREF( const_str_plain_datum_flags );
    PyTuple_SET_ITEM( const_tuple_a210c1ff444deb52ae98e0d03bde4cf3_tuple, 2, const_str_plain_clients ); Py_INCREF( const_str_plain_clients );
    PyTuple_SET_ITEM( const_tuple_a210c1ff444deb52ae98e0d03bde4cf3_tuple, 3, const_str_plain_ranges ); Py_INCREF( const_str_plain_ranges );
    PyTuple_SET_ITEM( const_tuple_a210c1ff444deb52ae98e0d03bde4cf3_tuple, 4, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    const_tuple_d32abd668900932c664ffdb2cd77c9ee_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d32abd668900932c664ffdb2cd77c9ee_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d32abd668900932c664ffdb2cd77c9ee_tuple, 1, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_d32abd668900932c664ffdb2cd77c9ee_tuple, 2, const_str_plain_element_header ); Py_INCREF( const_str_plain_element_header );
    PyTuple_SET_ITEM( const_tuple_d32abd668900932c664ffdb2cd77c9ee_tuple, 3, const_str_plain_clients ); Py_INCREF( const_str_plain_clients );
    PyTuple_SET_ITEM( const_tuple_d32abd668900932c664ffdb2cd77c9ee_tuple, 4, const_str_plain_ranges ); Py_INCREF( const_str_plain_ranges );
    const_tuple_e3f060845d14a480eeabe9f85b6712e3_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e3f060845d14a480eeabe9f85b6712e3_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e3f060845d14a480eeabe9f85b6712e3_tuple, 1, const_str_plain_callback ); Py_INCREF( const_str_plain_callback );
    PyTuple_SET_ITEM( const_tuple_e3f060845d14a480eeabe9f85b6712e3_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_e3f060845d14a480eeabe9f85b6712e3_tuple, 3, const_str_plain_keys ); Py_INCREF( const_str_plain_keys );
    const_tuple_str_plain_self_str_plain_context_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_context_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_context_tuple, 1, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    const_tuple_str_plain_self_str_plain_context_str_plain_clients_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_context_str_plain_clients_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_context_str_plain_clients_tuple, 1, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_context_str_plain_clients_tuple, 2, const_str_plain_clients ); Py_INCREF( const_str_plain_clients );
    const_tuple_str_plain_self_str_plain_context_str_plain_callback_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_context_str_plain_callback_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_context_str_plain_callback_tuple, 1, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_context_str_plain_callback_tuple, 2, const_str_plain_callback ); Py_INCREF( const_str_plain_callback );
}

// The module code objects.
static PyCodeObject *codeobj_4673de6ec5698d8d3cd5c1a42d6e1f56;
static PyCodeObject *codeobj_9c2befd29c3064d36143347140af60c6;
static PyCodeObject *codeobj_d1e1ad81a44f10f6e919d45d9f72f5a7;
static PyCodeObject *codeobj_9394ef3bff551e2189cb5350994ce952;
static PyCodeObject *codeobj_08e5353f0ce4e5fccd6f57c79a42c00e;
static PyCodeObject *codeobj_de4409d99ecbcb2a4cdcc4f344eea7c5;
static PyCodeObject *codeobj_1cf7719ec6c641578039d502b44a9937;
static PyCodeObject *codeobj_a16661772119836a08ffe1c0c7a0cff3;
static PyCodeObject *codeobj_e7e607d804ce28331a87d2b506a82e85;
static PyCodeObject *codeobj_7e6b1bedca6fe7a12b170d92e29dde95;
static PyCodeObject *codeobj_1e97359e8f709e56387d1676e8853c9a;
static PyCodeObject *codeobj_729be8cd6c47b58e80ffc72728226c44;
static PyCodeObject *codeobj_708e828254b22a4f95e1a049ab8c0231;
static PyCodeObject *codeobj_0656ea95614e3955a2f781062d48f96f;
static PyCodeObject *codeobj_5636859368c9764816fc5fcfb50f6401;
static PyCodeObject *codeobj_7cbf9d13c20c1ce9f7673621a41c9e57;
static PyCodeObject *codeobj_619e77130f0304d5b3660c79507fd2ac;
static PyCodeObject *codeobj_17443f2a889a2576fac983f2fd4de1a0;
static PyCodeObject *codeobj_8b2dff2745f076fec174049ca98edc9f;
static PyCodeObject *codeobj_47f0d468f373db911b6a783d73b2aa1a;
static PyCodeObject *codeobj_faa72f874fb656164a4df593da61835c;
static PyCodeObject *codeobj_6838c4bfd7994b605e91bcec0493ea99;
static PyCodeObject *codeobj_e71fa3174718cee99bc1d57dc529dbab;
static PyCodeObject *codeobj_df2fdd7b11f714bed06689366f5b6b02;
static PyCodeObject *codeobj_b3198a91bcda1824c3fc7acb71c650b3;
static PyCodeObject *codeobj_a26c200f956f3ec3b5c005bd1d98e6e9;

static void _initModuleCodeObjects(void)
{
    codeobj_4673de6ec5698d8d3cd5c1a42d6e1f56 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_CreateContext, 100, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_9c2befd29c3064d36143347140af60c6 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_DisableContext, 241, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_d1e1ad81a44f10f6e919d45d9f72f5a7 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_EnableContext, 188, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_9394ef3bff551e2189cb5350994ce952 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_FreeContext, 255, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_08e5353f0ce4e5fccd6f57c79a42c00e = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_GetContext, 165, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_de4409d99ecbcb2a4cdcc4f344eea7c5 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_GetVersion, 77, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_1cf7719ec6c641578039d502b44a9937 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_RawField, 65, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_a16661772119836a08ffe1c0c7a0cff3 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_RegisterClients, 125, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_e7e607d804ce28331a87d2b506a82e85 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_UnregisterClients, 148, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_7e6b1bedca6fe7a12b170d92e29dde95 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain___init__, 213, const_tuple_e3f060845d14a480eeabe9f85b6712e3_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_1e97359e8f709e56387d1676e8853c9a = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain___init__, 213, const_tuple_e3f060845d14a480eeabe9f85b6712e3_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_729be8cd6c47b58e80ffc72728226c44 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain__parse_response, 217, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_708e828254b22a4f95e1a049ab8c0231 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain__parse_response, 217, const_tuple_str_plain_self_str_plain_data_str_plain_r_str_plain_d_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_0656ea95614e3955a2f781062d48f96f = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_create_context, 113, const_tuple_142b383185cb0da8b77922f68826ae43_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_5636859368c9764816fc5fcfb50f6401 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_create_context, 113, const_tuple_a210c1ff444deb52ae98e0d03bde4cf3_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_7cbf9d13c20c1ce9f7673621a41c9e57 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_disable_context, 248, const_tuple_str_plain_self_str_plain_context_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_619e77130f0304d5b3660c79507fd2ac = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_enable_context, 233, const_tuple_str_plain_self_str_plain_context_str_plain_callback_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_17443f2a889a2576fac983f2fd4de1a0 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_free_context, 262, const_tuple_str_plain_self_str_plain_context_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_8b2dff2745f076fec174049ca98edc9f = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_get_context, 181, const_tuple_str_plain_self_str_plain_context_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_47f0d468f373db911b6a783d73b2aa1a = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_get_version, 92, const_tuple_str_plain_self_str_plain_major_str_plain_minor_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_faa72f874fb656164a4df593da61835c = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_init, 270, const_tuple_str_plain_disp_str_plain_info_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_6838c4bfd7994b605e91bcec0493ea99 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_pack_value, 70, const_tuple_str_plain_self_str_plain_val_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_e71fa3174718cee99bc1d57dc529dbab = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_parse_binary_value, 73, const_tuple_7eed53b32bf32a4da4852db26db1ddc3_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_df2fdd7b11f714bed06689366f5b6b02 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_record, 0, const_tuple_empty, 0, CO_NOFREE );
    codeobj_b3198a91bcda1824c3fc7acb71c650b3 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_register_clients, 138, const_tuple_d32abd668900932c664ffdb2cd77c9ee_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_a26c200f956f3ec3b5c005bd1d98e6e9 = MAKE_CODEOBJ( const_str_digest_e7c60ab5af270797d80efacf1019b5a2, const_str_plain_unregister_clients, 157, const_tuple_str_plain_self_str_plain_context_str_plain_clients_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_RawField_of_module_Xlib$ext$record(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_GetVersion_of_module_Xlib$ext$record(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_CreateContext_of_module_Xlib$ext$record(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_RegisterClients_of_module_Xlib$ext$record(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_8_UnregisterClients_of_module_Xlib$ext$record(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_10_GetContext_of_module_Xlib$ext$record(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_12_EnableContext_of_module_Xlib$ext$record(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_14_DisableContext_of_module_Xlib$ext$record(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_16_FreeContext_of_module_Xlib$ext$record(  );


NUITKA_CROSS_MODULE PyObject *impl_function_6_complex_call_helper_pos_star_list_star_dict_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_args, PyObject *_python_par_star_arg_list, PyObject *_python_par_star_arg_dict );


static PyObject *MAKE_FUNCTION_function_11_get_context_of_module_Xlib$ext$record(  );


static PyObject *MAKE_FUNCTION_function_13_enable_context_of_module_Xlib$ext$record(  );


static PyObject *MAKE_FUNCTION_function_15_disable_context_of_module_Xlib$ext$record(  );


static PyObject *MAKE_FUNCTION_function_17_free_context_of_module_Xlib$ext$record(  );


static PyObject *MAKE_FUNCTION_function_18_init_of_module_Xlib$ext$record(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_12_EnableContext_of_module_Xlib$ext$record(  );


static PyObject *MAKE_FUNCTION_function_1_pack_value_of_class_1_RawField_of_module_Xlib$ext$record(  );


static PyObject *MAKE_FUNCTION_function_2__parse_response_of_class_12_EnableContext_of_module_Xlib$ext$record(  );


static PyObject *MAKE_FUNCTION_function_2_parse_binary_value_of_class_1_RawField_of_module_Xlib$ext$record(  );


static PyObject *MAKE_FUNCTION_function_3_get_version_of_module_Xlib$ext$record(  );


static PyObject *MAKE_FUNCTION_function_5_create_context_of_module_Xlib$ext$record(  );


static PyObject *MAKE_FUNCTION_function_7_register_clients_of_module_Xlib$ext$record(  );


static PyObject *MAKE_FUNCTION_function_9_unregister_clients_of_module_Xlib$ext$record(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_RawField_of_module_Xlib$ext$record(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var_structcode;
    PyObjectLocalVariable var_pack_value;
    PyObjectLocalVariable var_parse_binary_value;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_b04272625d780daff3a0e82d695eca0a;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_0c2288b6323985a0280d3aa9f9436553;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_assign_source_3 = Py_None;
    assert( var_structcode.object == NULL );
    var_structcode.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1cf7719ec6c641578039d502b44a9937, module_Xlib$ext$record );
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
    tmp_assign_source_4 = MAKE_FUNCTION_function_1_pack_value_of_class_1_RawField_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    assert( var_pack_value.object == NULL );
    var_pack_value.object = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_2_parse_binary_value_of_class_1_RawField_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }
    assert( var_parse_binary_value.object == NULL );
    var_parse_binary_value.object = tmp_assign_source_5;


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
    if ((var___doc__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___doc__,
            var___doc__.object
        );

    }
    if ((var_structcode.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_structcode,
            var_structcode.object
        );

    }
    if ((var_pack_value.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pack_value,
            var_pack_value.object
        );

    }
    if ((var_parse_binary_value.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_parse_binary_value,
            var_parse_binary_value.object
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
    if ((var___doc__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___doc__,
            var___doc__.object
        );

    }
    if ((var_structcode.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_structcode,
            var_structcode.object
        );

    }
    if ((var_pack_value.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_pack_value,
            var_pack_value.object
        );

    }
    if ((var_parse_binary_value.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_parse_binary_value,
            var_parse_binary_value.object
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


static PyObject *impl_function_1_pack_value_of_class_1_RawField_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_val )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_val; par_val.object = _python_par_val;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6838c4bfd7994b605e91bcec0493ea99, module_Xlib$ext$record );
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
    tmp_return_value = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_val.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28580 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_len_arg_1 = par_val.object;

    if ( tmp_len_arg_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28580 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_return_value );

        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
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
    if ((par_val.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_val,
            par_val.object
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
static PyObject *fparse_function_1_pack_value_of_class_1_RawField_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_val = NULL;
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
                PyErr_Format( PyExc_TypeError, "pack_value() keywords must be strings" );
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
            if ( found == false && const_str_plain_val == key )
            {
                assert( _python_par_val == NULL );
                _python_par_val = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_val, key ) == 1 )
            {
                assert( _python_par_val == NULL );
                _python_par_val = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "pack_value() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_val != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_val = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_val == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_val = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_val == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_val };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_pack_value_of_class_1_RawField_of_module_Xlib$ext$record( self, _python_par_self, _python_par_val );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_val );

    return NULL;
}

static PyObject *dparse_function_1_pack_value_of_class_1_RawField_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1_pack_value_of_class_1_RawField_of_module_Xlib$ext$record( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_pack_value_of_class_1_RawField_of_module_Xlib$ext$record( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_parse_binary_value_of_class_1_RawField_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_data, PyObject *_python_par_display, PyObject *_python_par_length, PyObject *_python_par_format )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_data; par_data.object = _python_par_data;
    PyObjectLocalVariable par_display; par_display.object = _python_par_display;
    PyObjectLocalVariable par_length; par_length.object = _python_par_length;
    PyObjectLocalVariable par_format; par_format.object = _python_par_format;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e71fa3174718cee99bc1d57dc529dbab, module_Xlib$ext$record );
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
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_data.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_empty;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
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
    if ((par_data.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_data,
            par_data.object
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
    if ((par_length.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_length,
            par_length.object
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


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_2_parse_binary_value_of_class_1_RawField_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_data = NULL;
    PyObject *_python_par_display = NULL;
    PyObject *_python_par_length = NULL;
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
                PyErr_Format( PyExc_TypeError, "parse_binary_value() keywords must be strings" );
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
            if ( found == false && const_str_plain_data == key )
            {
                assert( _python_par_data == NULL );
                _python_par_data = value;

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
            if ( found == false && const_str_plain_length == key )
            {
                assert( _python_par_length == NULL );
                _python_par_length = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_display, key ) == 1 )
            {
                assert( _python_par_display == NULL );
                _python_par_display = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_length, key ) == 1 )
            {
                assert( _python_par_length == NULL );
                _python_par_length = value;

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
                   "parse_binary_value() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_data != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_data = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_data == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_data = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_display != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_display = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_display == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_display = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_length != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_length = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_length == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_length = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_format != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_format = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_format == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_format = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_data == NULL || _python_par_display == NULL || _python_par_length == NULL || _python_par_format == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_data, _python_par_display, _python_par_length, _python_par_format };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_parse_binary_value_of_class_1_RawField_of_module_Xlib$ext$record( self, _python_par_self, _python_par_data, _python_par_display, _python_par_length, _python_par_format );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_data );
    Py_XDECREF( _python_par_display );
    Py_XDECREF( _python_par_length );
    Py_XDECREF( _python_par_format );

    return NULL;
}

static PyObject *dparse_function_2_parse_binary_value_of_class_1_RawField_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_2_parse_binary_value_of_class_1_RawField_of_module_Xlib$ext$record( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_parse_binary_value_of_class_1_RawField_of_module_Xlib$ext$record( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_GetVersion_of_module_Xlib$ext$record(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var__request;
    PyObjectLocalVariable var__reply;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_b04272625d780daff3a0e82d695eca0a;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_de4409d99ecbcb2a4cdcc4f344eea7c5, module_Xlib$ext$record );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Struct );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Card8 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_opcode;
    frame_function->f_lineno = 79;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Opcode );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_int_0;
    frame_function->f_lineno = 80;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_RequestLength );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 81;
    tmp_call_arg_element_5 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Card16 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_plain_major_version;
    frame_function->f_lineno = 82;
    tmp_call_arg_element_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 83;
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
        Py_DECREF( tmp_call_arg_element_6 );

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = const_str_plain_minor_version;
    frame_function->f_lineno = 83;
    tmp_call_arg_element_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 83;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS5( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_3, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    assert( var__request.object == NULL );
    var__request.object = tmp_assign_source_2;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Struct );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Pad );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = const_int_pos_2;
    frame_function->f_lineno = 85;
    tmp_call_arg_element_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_Card16 );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = const_str_plain_sequence_number;
    frame_function->f_lineno = 86;
    tmp_call_arg_element_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_ReplyLength );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 87;
    tmp_call_arg_element_14 = CALL_FUNCTION_NO_ARGS( tmp_called_10 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_function->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_Card16 );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = const_str_plain_major_version;
    frame_function->f_lineno = 88;
    tmp_call_arg_element_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_Card16 );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_18 = const_str_plain_minor_version;
    frame_function->f_lineno = 89;
    tmp_call_arg_element_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_18 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_call_arg_element_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_Pad );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_20 = const_int_pos_20;
    frame_function->f_lineno = 90;
    tmp_call_arg_element_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_20 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_call_arg_element_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 90;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS6( tmp_called_7, tmp_call_arg_element_10, tmp_call_arg_element_12, tmp_call_arg_element_14, tmp_call_arg_element_15, tmp_call_arg_element_17, tmp_call_arg_element_19 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_12 );
    Py_DECREF( tmp_call_arg_element_14 );
    Py_DECREF( tmp_call_arg_element_15 );
    Py_DECREF( tmp_call_arg_element_17 );
    Py_DECREF( tmp_call_arg_element_19 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    assert( var__reply.object == NULL );
    var__reply.object = tmp_assign_source_3;


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
    if ((var__request.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__request,
            var__request.object
        );

    }
    if ((var__reply.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__reply,
            var__reply.object
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
    if ((var__request.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__request,
            var__request.object
        );

    }
    if ((var__reply.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__reply,
            var__reply.object
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


static PyObject *impl_function_3_get_version_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_major, PyObject *_python_par_minor )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_major; par_major.object = _python_par_major;
    PyObjectLocalVariable par_minor; par_minor.object = _python_par_minor;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_47f0d468f373db911b6a783d73b2aa1a, module_Xlib$ext$record );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_GetVersion );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetVersion );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28629 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_1 = _PyDict_NewPresized( 4 );
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_display );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_display;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_display );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_extension_major );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_extname );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extname );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28668 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 95;
    tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_opcode;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_value_3 = par_major.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28704 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_major_version;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_minor.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28755 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_minor_version;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 97;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_kw_1 );
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
    if ((par_major.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_major,
            par_major.object
        );

    }
    if ((par_minor.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_minor,
            par_minor.object
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
static PyObject *fparse_function_3_get_version_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_major = NULL;
    PyObject *_python_par_minor = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_version() keywords must be strings" );
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
            if ( found == false && const_str_plain_major == key )
            {
                assert( _python_par_major == NULL );
                _python_par_major = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_minor == key )
            {
                assert( _python_par_minor == NULL );
                _python_par_minor = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_major, key ) == 1 )
            {
                assert( _python_par_major == NULL );
                _python_par_major = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_minor, key ) == 1 )
            {
                assert( _python_par_minor == NULL );
                _python_par_minor = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_version() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_major != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_major = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_major == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_major = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_minor != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_minor = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_minor == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_minor = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_major == NULL || _python_par_minor == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_major, _python_par_minor };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_get_version_of_module_Xlib$ext$record( self, _python_par_self, _python_par_major, _python_par_minor );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_major );
    Py_XDECREF( _python_par_minor );

    return NULL;
}

static PyObject *dparse_function_3_get_version_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_3_get_version_of_module_Xlib$ext$record( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_get_version_of_module_Xlib$ext$record( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_4_CreateContext_of_module_Xlib$ext$record(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var__request;
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
    PyObject *tmp_call_arg_element_15;
    PyObject *tmp_call_arg_element_16;
    PyObject *tmp_call_arg_element_17;
    PyObject *tmp_call_arg_element_18;
    PyObject *tmp_call_arg_element_19;
    PyObject *tmp_call_arg_element_20;
    PyObject *tmp_call_arg_element_21;
    PyObject *tmp_call_arg_element_22;
    PyObject *tmp_call_arg_element_23;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_b04272625d780daff3a0e82d695eca0a;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4673de6ec5698d8d3cd5c1a42d6e1f56, module_Xlib$ext$record );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Struct );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Card8 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_opcode;
    frame_function->f_lineno = 102;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Opcode );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_int_pos_1;
    frame_function->f_lineno = 103;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_RequestLength );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 104;
    tmp_call_arg_element_5 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 105;
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

        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_plain_context;
    frame_function->f_lineno = 105;
    tmp_call_arg_element_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_Card8 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );

        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = const_str_plain_element_header;
    frame_function->f_lineno = 106;
    tmp_call_arg_element_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );

        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Pad );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = const_int_pos_3;
    frame_function->f_lineno = 107;
    tmp_call_arg_element_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_LengthOf );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = const_str_plain_clients;
    tmp_call_arg_element_14 = const_int_pos_4;
    frame_function->f_lineno = 108;
    tmp_call_arg_element_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_LengthOf );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = const_str_plain_ranges;
    tmp_call_arg_element_17 = const_int_pos_4;
    frame_function->f_lineno = 109;
    tmp_call_arg_element_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_9, tmp_call_arg_element_16, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_List );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_19 = const_str_plain_clients;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_20 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_Card32Obj );
    if ( tmp_call_arg_element_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 110;
    tmp_call_arg_element_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_10, tmp_call_arg_element_19, tmp_call_arg_element_20 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_arg_element_20 );
    if ( tmp_call_arg_element_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_List );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_22 = const_str_plain_ranges;
    tmp_call_arg_element_23 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_Range );

    if (unlikely( tmp_call_arg_element_23 == NULL ))
    {
        tmp_call_arg_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Record_Range );
    }

    if ( tmp_call_arg_element_23 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28806 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 111;
    tmp_call_arg_element_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_11, tmp_call_arg_element_22, tmp_call_arg_element_23 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_call_arg_element_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 111;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS10( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_3, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_8, tmp_call_arg_element_10, tmp_call_arg_element_12, tmp_call_arg_element_15, tmp_call_arg_element_18, tmp_call_arg_element_21 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_12 );
    Py_DECREF( tmp_call_arg_element_15 );
    Py_DECREF( tmp_call_arg_element_18 );
    Py_DECREF( tmp_call_arg_element_21 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    assert( var__request.object == NULL );
    var__request.object = tmp_assign_source_2;


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
    if ((var__request.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__request,
            var__request.object
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
    if ((var__request.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__request,
            var__request.object
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


static PyObject *impl_function_5_create_context_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_datum_flags, PyObject *_python_par_clients, PyObject *_python_par_ranges )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_datum_flags; par_datum_flags.object = _python_par_datum_flags;
    PyObjectLocalVariable par_clients; par_clients.object = _python_par_clients;
    PyObjectLocalVariable par_ranges; par_ranges.object = _python_par_ranges;
    PyObjectLocalVariable var_context;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0656ea95614e3955a2f781062d48f96f, module_Xlib$ext$record );
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
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_display );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_allocate_resource_id );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 114;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    assert( var_context.object == NULL );
    var_context.object = tmp_assign_source_1;

    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_CreateContext );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateContext );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28847 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_1 = _PyDict_NewPresized( 6 );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_display );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_display;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_display );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_get_extension_major );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_extname );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extname );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28668 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 117;
    tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_opcode;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_value_3 = var_context.object;

    tmp_dict_key_3 = const_str_plain_context;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_datum_flags.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28889 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_element_header;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = par_clients.object;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28946 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_clients;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = par_ranges.object;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28999 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_ranges;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_6, tmp_dict_value_6 );
    frame_function->f_lineno = 121;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_2, tmp_call_kw_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
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
    if ((var_context.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_context,
            var_context.object
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
    if ((par_datum_flags.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_datum_flags,
            par_datum_flags.object
        );

    }
    if ((par_clients.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_clients,
            par_clients.object
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
    detachFrame( exception_tb, tmp_frame_locals );


    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = var_context.object;

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
static PyObject *fparse_function_5_create_context_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_datum_flags = NULL;
    PyObject *_python_par_clients = NULL;
    PyObject *_python_par_ranges = NULL;
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
                PyErr_Format( PyExc_TypeError, "create_context() keywords must be strings" );
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
            if ( found == false && const_str_plain_datum_flags == key )
            {
                assert( _python_par_datum_flags == NULL );
                _python_par_datum_flags = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_clients == key )
            {
                assert( _python_par_clients == NULL );
                _python_par_clients = value;

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

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_datum_flags, key ) == 1 )
            {
                assert( _python_par_datum_flags == NULL );
                _python_par_datum_flags = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_clients, key ) == 1 )
            {
                assert( _python_par_clients == NULL );
                _python_par_clients = value;

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


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "create_context() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_datum_flags != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_datum_flags = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_datum_flags == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_datum_flags = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_clients != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_clients = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_clients == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_clients = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_ranges != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_ranges = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_ranges == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_ranges = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_datum_flags == NULL || _python_par_clients == NULL || _python_par_ranges == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_datum_flags, _python_par_clients, _python_par_ranges };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5_create_context_of_module_Xlib$ext$record( self, _python_par_self, _python_par_datum_flags, _python_par_clients, _python_par_ranges );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_datum_flags );
    Py_XDECREF( _python_par_clients );
    Py_XDECREF( _python_par_ranges );

    return NULL;
}

static PyObject *dparse_function_5_create_context_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_5_create_context_of_module_Xlib$ext$record( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_create_context_of_module_Xlib$ext$record( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_6_RegisterClients_of_module_Xlib$ext$record(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var__request;
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
    PyObject *tmp_call_arg_element_15;
    PyObject *tmp_call_arg_element_16;
    PyObject *tmp_call_arg_element_17;
    PyObject *tmp_call_arg_element_18;
    PyObject *tmp_call_arg_element_19;
    PyObject *tmp_call_arg_element_20;
    PyObject *tmp_call_arg_element_21;
    PyObject *tmp_call_arg_element_22;
    PyObject *tmp_call_arg_element_23;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_b04272625d780daff3a0e82d695eca0a;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a16661772119836a08ffe1c0c7a0cff3, module_Xlib$ext$record );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Struct );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Card8 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_opcode;
    frame_function->f_lineno = 127;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 128;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Opcode );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 128;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_int_pos_2;
    frame_function->f_lineno = 128;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 128;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 129;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_RequestLength );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 129;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 129;
    tmp_call_arg_element_5 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 129;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 130;
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

        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_plain_context;
    frame_function->f_lineno = 130;
    tmp_call_arg_element_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_Card8 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );

        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = const_str_plain_element_header;
    frame_function->f_lineno = 131;
    tmp_call_arg_element_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );

        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Pad );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = const_int_pos_3;
    frame_function->f_lineno = 132;
    tmp_call_arg_element_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_LengthOf );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = const_str_plain_clients;
    tmp_call_arg_element_14 = const_int_pos_4;
    frame_function->f_lineno = 133;
    tmp_call_arg_element_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 134;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_LengthOf );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_function->f_lineno = 134;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = const_str_plain_ranges;
    tmp_call_arg_element_17 = const_int_pos_4;
    frame_function->f_lineno = 134;
    tmp_call_arg_element_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_9, tmp_call_arg_element_16, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_function->f_lineno = 134;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_List );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_19 = const_str_plain_clients;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_20 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_Card32Obj );
    if ( tmp_call_arg_element_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 135;
    tmp_call_arg_element_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_10, tmp_call_arg_element_19, tmp_call_arg_element_20 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_arg_element_20 );
    if ( tmp_call_arg_element_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_List );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );

        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_22 = const_str_plain_ranges;
    tmp_call_arg_element_23 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_Range );

    if (unlikely( tmp_call_arg_element_23 == NULL ))
    {
        tmp_call_arg_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Record_Range );
    }

    if ( tmp_call_arg_element_23 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28806 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 136;
    tmp_call_arg_element_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_11, tmp_call_arg_element_22, tmp_call_arg_element_23 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_call_arg_element_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );

        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 136;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS10( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_3, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_8, tmp_call_arg_element_10, tmp_call_arg_element_12, tmp_call_arg_element_15, tmp_call_arg_element_18, tmp_call_arg_element_21 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_12 );
    Py_DECREF( tmp_call_arg_element_15 );
    Py_DECREF( tmp_call_arg_element_18 );
    Py_DECREF( tmp_call_arg_element_21 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }
    assert( var__request.object == NULL );
    var__request.object = tmp_assign_source_2;


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
    if ((var__request.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__request,
            var__request.object
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
    if ((var__request.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__request,
            var__request.object
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


static PyObject *impl_function_7_register_clients_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_context, PyObject *_python_par_element_header, PyObject *_python_par_clients, PyObject *_python_par_ranges )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_context; par_context.object = _python_par_context;
    PyObjectLocalVariable par_element_header; par_element_header.object = _python_par_element_header;
    PyObjectLocalVariable par_clients; par_clients.object = _python_par_clients;
    PyObjectLocalVariable par_ranges; par_ranges.object = _python_par_ranges;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b3198a91bcda1824c3fc7acb71c650b3, module_Xlib$ext$record );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_RegisterClients );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegisterClients );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29051 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_1 = _PyDict_NewPresized( 6 );
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 140;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_display );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 140;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_display;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_display );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_extension_major );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_extname );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extname );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28668 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 141;
    tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_opcode;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_value_3 = par_context.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29095 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_context;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_element_header.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29148 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_element_header;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = par_clients.object;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28946 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_clients;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = par_ranges.object;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28999 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_ranges;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_6, tmp_dict_value_6 );
    frame_function->f_lineno = 145;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_context.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_context,
            par_context.object
        );

    }
    if ((par_element_header.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_element_header,
            par_element_header.object
        );

    }
    if ((par_clients.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_clients,
            par_clients.object
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
static PyObject *fparse_function_7_register_clients_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_context = NULL;
    PyObject *_python_par_element_header = NULL;
    PyObject *_python_par_clients = NULL;
    PyObject *_python_par_ranges = NULL;
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
                PyErr_Format( PyExc_TypeError, "register_clients() keywords must be strings" );
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
            if ( found == false && const_str_plain_context == key )
            {
                assert( _python_par_context == NULL );
                _python_par_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_element_header == key )
            {
                assert( _python_par_element_header == NULL );
                _python_par_element_header = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_clients == key )
            {
                assert( _python_par_clients == NULL );
                _python_par_clients = value;

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

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_self, key ) == 1 )
            {
                assert( _python_par_self == NULL );
                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_context, key ) == 1 )
            {
                assert( _python_par_context == NULL );
                _python_par_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_element_header, key ) == 1 )
            {
                assert( _python_par_element_header == NULL );
                _python_par_element_header = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_clients, key ) == 1 )
            {
                assert( _python_par_clients == NULL );
                _python_par_clients = value;

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


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "register_clients() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_self != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_self == NULL )
    {
        if ( 0 + self->m_defaults_given >= 5  )
        {
            _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_context != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_context = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_context == NULL )
    {
        if ( 1 + self->m_defaults_given >= 5  )
        {
            _python_par_context = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_element_header != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_element_header = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_element_header == NULL )
    {
        if ( 2 + self->m_defaults_given >= 5  )
        {
            _python_par_element_header = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_clients != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_clients = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_clients == NULL )
    {
        if ( 3 + self->m_defaults_given >= 5  )
        {
            _python_par_clients = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_ranges != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 4 );
             goto error_exit;
         }

        _python_par_ranges = INCREASE_REFCOUNT( args[ 4 ] );
    }
    else if ( _python_par_ranges == NULL )
    {
        if ( 4 + self->m_defaults_given >= 5  )
        {
            _python_par_ranges = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 4 - 5 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_context == NULL || _python_par_element_header == NULL || _python_par_clients == NULL || _python_par_ranges == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_context, _python_par_element_header, _python_par_clients, _python_par_ranges };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7_register_clients_of_module_Xlib$ext$record( self, _python_par_self, _python_par_context, _python_par_element_header, _python_par_clients, _python_par_ranges );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_context );
    Py_XDECREF( _python_par_element_header );
    Py_XDECREF( _python_par_clients );
    Py_XDECREF( _python_par_ranges );

    return NULL;
}

static PyObject *dparse_function_7_register_clients_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_7_register_clients_of_module_Xlib$ext$record( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_register_clients_of_module_Xlib$ext$record( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_8_UnregisterClients_of_module_Xlib$ext$record(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var__request;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
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
    tmp_assign_source_1 = const_str_digest_b04272625d780daff3a0e82d695eca0a;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e7e607d804ce28331a87d2b506a82e85, module_Xlib$ext$record );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Struct );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Card8 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_opcode;
    frame_function->f_lineno = 150;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Opcode );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_int_pos_3;
    frame_function->f_lineno = 151;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_RequestLength );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 152;
    tmp_call_arg_element_5 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 153;
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

        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_plain_context;
    frame_function->f_lineno = 153;
    tmp_call_arg_element_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_LengthOf );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );

        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = const_str_plain_clients;
    tmp_call_arg_element_10 = const_int_pos_4;
    frame_function->f_lineno = 154;
    tmp_call_arg_element_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );

        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_List );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = const_str_plain_clients;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_13 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Card32Obj );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 155;
    tmp_call_arg_element_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_12, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_13 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 155;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS6( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_3, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_8, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    assert( var__request.object == NULL );
    var__request.object = tmp_assign_source_2;


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
    if ((var__request.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__request,
            var__request.object
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
    if ((var__request.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__request,
            var__request.object
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


static PyObject *impl_function_9_unregister_clients_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_context, PyObject *_python_par_clients )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_context; par_context.object = _python_par_context;
    PyObjectLocalVariable par_clients; par_clients.object = _python_par_clients;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a26c200f956f3ec3b5c005bd1d98e6e9, module_Xlib$ext$record );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_UnregisterClients );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnregisterClients );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29208 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 158;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_1 = _PyDict_NewPresized( 4 );
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 159;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_display );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 159;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_display;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_display );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_extension_major );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_extname );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extname );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28668 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 160;
    tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_opcode;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_value_3 = par_context.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29095 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_context;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_clients.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28946 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_clients;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 162;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_context.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_context,
            par_context.object
        );

    }
    if ((par_clients.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_clients,
            par_clients.object
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
static PyObject *fparse_function_9_unregister_clients_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_context = NULL;
    PyObject *_python_par_clients = NULL;
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
                PyErr_Format( PyExc_TypeError, "unregister_clients() keywords must be strings" );
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
            if ( found == false && const_str_plain_context == key )
            {
                assert( _python_par_context == NULL );
                _python_par_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_clients == key )
            {
                assert( _python_par_clients == NULL );
                _python_par_clients = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_context, key ) == 1 )
            {
                assert( _python_par_context == NULL );
                _python_par_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_clients, key ) == 1 )
            {
                assert( _python_par_clients == NULL );
                _python_par_clients = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "unregister_clients() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_context != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_context = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_context == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_context = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_clients != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_clients = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_clients == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_clients = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_context == NULL || _python_par_clients == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_context, _python_par_clients };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_9_unregister_clients_of_module_Xlib$ext$record( self, _python_par_self, _python_par_context, _python_par_clients );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_context );
    Py_XDECREF( _python_par_clients );

    return NULL;
}

static PyObject *dparse_function_9_unregister_clients_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_9_unregister_clients_of_module_Xlib$ext$record( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_unregister_clients_of_module_Xlib$ext$record( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_10_GetContext_of_module_Xlib$ext$record(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var__request;
    PyObjectLocalVariable var__reply;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_b04272625d780daff3a0e82d695eca0a;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_08e5353f0ce4e5fccd6f57c79a42c00e, module_Xlib$ext$record );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Struct );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Card8 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_opcode;
    frame_function->f_lineno = 167;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Opcode );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_int_pos_4;
    frame_function->f_lineno = 168;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_RequestLength );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 169;
    tmp_call_arg_element_5 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 170;
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

        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_plain_context;
    frame_function->f_lineno = 170;
    tmp_call_arg_element_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 170;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_3, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    assert( var__request.object == NULL );
    var__request.object = tmp_assign_source_2;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_Struct );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Pad );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = const_int_pos_2;
    frame_function->f_lineno = 172;
    tmp_call_arg_element_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Card16 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = const_str_plain_sequence_number;
    frame_function->f_lineno = 173;
    tmp_call_arg_element_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ReplyLength );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 174;
    tmp_call_arg_element_12 = CALL_FUNCTION_NO_ARGS( tmp_called_9 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 174;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_Card8 );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_14 = const_str_plain_element_header;
    frame_function->f_lineno = 175;
    tmp_call_arg_element_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_Pad );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );

        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = const_int_pos_3;
    frame_function->f_lineno = 176;
    tmp_call_arg_element_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );

        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_LengthOf );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_18 = const_str_plain_client_info;
    tmp_call_arg_element_19 = const_int_pos_4;
    frame_function->f_lineno = 177;
    tmp_call_arg_element_17 = CALL_FUNCTION_WITH_ARGS2( tmp_called_12, tmp_call_arg_element_18, tmp_call_arg_element_19 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_call_arg_element_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_Pad );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );

        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_21 = const_int_pos_16;
    frame_function->f_lineno = 178;
    tmp_call_arg_element_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_21 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_call_arg_element_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );

        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 179;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_List );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_20 );

        frame_function->f_lineno = 179;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_23 = const_str_plain_client_info;
    tmp_call_arg_element_24 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_ClientInfo );

    if (unlikely( tmp_call_arg_element_24 == NULL ))
    {
        tmp_call_arg_element_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Record_ClientInfo );
    }

    if ( tmp_call_arg_element_24 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29254 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 179;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 179;
    tmp_call_arg_element_22 = CALL_FUNCTION_WITH_ARGS2( tmp_called_14, tmp_call_arg_element_23, tmp_call_arg_element_24 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_call_arg_element_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_20 );

        frame_function->f_lineno = 179;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 179;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS8( tmp_called_6, tmp_call_arg_element_8, tmp_call_arg_element_10, tmp_call_arg_element_12, tmp_call_arg_element_13, tmp_call_arg_element_15, tmp_call_arg_element_17, tmp_call_arg_element_20, tmp_call_arg_element_22 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_12 );
    Py_DECREF( tmp_call_arg_element_13 );
    Py_DECREF( tmp_call_arg_element_15 );
    Py_DECREF( tmp_call_arg_element_17 );
    Py_DECREF( tmp_call_arg_element_20 );
    Py_DECREF( tmp_call_arg_element_22 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 179;
        goto frame_exception_exit_1;
    }
    assert( var__reply.object == NULL );
    var__reply.object = tmp_assign_source_3;


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
    if ((var__request.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__request,
            var__request.object
        );

    }
    if ((var__reply.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__reply,
            var__reply.object
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
    if ((var__request.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__request,
            var__request.object
        );

    }
    if ((var__reply.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__reply,
            var__reply.object
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


static PyObject *impl_function_11_get_context_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_context )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_context; par_context.object = _python_par_context;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8b2dff2745f076fec174049ca98edc9f, module_Xlib$ext$record );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_GetContext );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetContext );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29300 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 182;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_1 = _PyDict_NewPresized( 3 );
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_display );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_display;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_display );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 184;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_extension_major );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 184;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_extname );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extname );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28668 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 184;
    tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 184;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_opcode;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_value_3 = par_context.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29095 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_context;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 185;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 185;
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
    if ((par_context.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_context,
            par_context.object
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
static PyObject *fparse_function_11_get_context_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_context = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_context() keywords must be strings" );
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
            if ( found == false && const_str_plain_context == key )
            {
                assert( _python_par_context == NULL );
                _python_par_context = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_context, key ) == 1 )
            {
                assert( _python_par_context == NULL );
                _python_par_context = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_context() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_context != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_context = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_context == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_context = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_context == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_context };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_11_get_context_of_module_Xlib$ext$record( self, _python_par_self, _python_par_context );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_context );

    return NULL;
}

static PyObject *dparse_function_11_get_context_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_11_get_context_of_module_Xlib$ext$record( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_get_context_of_module_Xlib$ext$record( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_12_EnableContext_of_module_Xlib$ext$record(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var__request;
    PyObjectLocalVariable var__reply;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var__parse_response;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_b04272625d780daff3a0e82d695eca0a;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d1e1ad81a44f10f6e919d45d9f72f5a7, module_Xlib$ext$record );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Struct );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Card8 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_opcode;
    frame_function->f_lineno = 190;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 191;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Opcode );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 191;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_int_pos_5;
    frame_function->f_lineno = 191;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 191;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 192;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_RequestLength );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 192;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 192;
    tmp_call_arg_element_5 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 192;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 193;
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

        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_plain_context;
    frame_function->f_lineno = 193;
    tmp_call_arg_element_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 193;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_3, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }
    assert( var__request.object == NULL );
    var__request.object = tmp_assign_source_2;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_Struct );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Pad );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = const_int_pos_1;
    frame_function->f_lineno = 195;
    tmp_call_arg_element_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Card8 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = const_str_plain_category;
    frame_function->f_lineno = 196;
    tmp_call_arg_element_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_Card16 );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = const_str_plain_sequence_number;
    frame_function->f_lineno = 197;
    tmp_call_arg_element_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_ReplyLength );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 198;
    tmp_call_arg_element_14 = CALL_FUNCTION_NO_ARGS( tmp_called_10 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_Card8 );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );

        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = const_str_plain_element_header;
    frame_function->f_lineno = 199;
    tmp_call_arg_element_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );

        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_Bool );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_18 = const_str_plain_client_swapped;
    frame_function->f_lineno = 200;
    tmp_call_arg_element_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_18 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_call_arg_element_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_Pad );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );

        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_20 = const_int_pos_2;
    frame_function->f_lineno = 201;
    tmp_call_arg_element_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_20 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_call_arg_element_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );

        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_Card32 );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_19 );

        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_22 = const_str_plain_id_base;
    frame_function->f_lineno = 202;
    tmp_call_arg_element_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_22 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_call_arg_element_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_19 );

        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_Card32 );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );

        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_24 = const_str_plain_server_time;
    frame_function->f_lineno = 203;
    tmp_call_arg_element_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_24 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_call_arg_element_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );

        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 204;
        goto frame_exception_exit_1;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_Card32 );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );

        frame_function->f_lineno = 204;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_26 = const_str_plain_recorded_sequence_number;
    frame_function->f_lineno = 204;
    tmp_call_arg_element_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_26 );
    Py_DECREF( tmp_called_16 );
    if ( tmp_call_arg_element_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );

        frame_function->f_lineno = 204;
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_25 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 205;
        goto frame_exception_exit_1;
    }

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_Pad );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_25 );

        frame_function->f_lineno = 205;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_28 = const_int_pos_8;
    frame_function->f_lineno = 205;
    tmp_call_arg_element_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_17, tmp_call_arg_element_28 );
    Py_DECREF( tmp_called_17 );
    if ( tmp_call_arg_element_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_25 );

        frame_function->f_lineno = 205;
        goto frame_exception_exit_1;
    }
    tmp_called_18 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_RawField );

    if (unlikely( tmp_called_18 == NULL ))
    {
        tmp_called_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RawField );
    }

    if ( tmp_called_18 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_25 );
        Py_DECREF( tmp_call_arg_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29339 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 206;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_30 = const_str_plain_data;
    frame_function->f_lineno = 206;
    tmp_call_arg_element_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_30 );
    if ( tmp_call_arg_element_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_17 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_25 );
        Py_DECREF( tmp_call_arg_element_27 );

        frame_function->f_lineno = 206;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 206;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS12( tmp_called_6, tmp_call_arg_element_8, tmp_call_arg_element_10, tmp_call_arg_element_12, tmp_call_arg_element_14, tmp_call_arg_element_15, tmp_call_arg_element_17, tmp_call_arg_element_19, tmp_call_arg_element_21, tmp_call_arg_element_23, tmp_call_arg_element_25, tmp_call_arg_element_27, tmp_call_arg_element_29 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_12 );
    Py_DECREF( tmp_call_arg_element_14 );
    Py_DECREF( tmp_call_arg_element_15 );
    Py_DECREF( tmp_call_arg_element_17 );
    Py_DECREF( tmp_call_arg_element_19 );
    Py_DECREF( tmp_call_arg_element_21 );
    Py_DECREF( tmp_call_arg_element_23 );
    Py_DECREF( tmp_call_arg_element_25 );
    Py_DECREF( tmp_call_arg_element_27 );
    Py_DECREF( tmp_call_arg_element_29 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 206;
        goto frame_exception_exit_1;
    }
    assert( var__reply.object == NULL );
    var__reply.object = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_1___init___of_class_12_EnableContext_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_2__parse_response_of_class_12_EnableContext_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 217;
        goto frame_exception_exit_1;
    }
    assert( var__parse_response.object == NULL );
    var__parse_response.object = tmp_assign_source_5;


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
    if ((var__request.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__request,
            var__request.object
        );

    }
    if ((var__reply.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__reply,
            var__reply.object
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
    if ((var__parse_response.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__parse_response,
            var__parse_response.object
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
    if ((var__request.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__request,
            var__request.object
        );

    }
    if ((var__reply.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__reply,
            var__reply.object
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
    if ((var__parse_response.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__parse_response,
            var__parse_response.object
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


static PyObject *impl_function_1___init___of_class_12_EnableContext_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_callback, PyObject *_python_par_args, PyObject *_python_par_keys )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_callback; par_callback.object = _python_par_callback;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable par_keys; par_keys.object = _python_par_keys;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1e97359e8f709e56387d1676e8853c9a, module_Xlib$ext$record );
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
    tmp_assattr_name_1 = par_callback.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29376 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__callback, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ReplyRequest );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_self.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_args.object;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5435 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg4_1 = par_keys.object;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 20174 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }

    tmp_unused = impl_function_6_complex_call_helper_pos_star_list_star_dict_of_module___internal__( tmp_dircall_arg1_1, tmp_dircall_arg2_1, INCREASE_REFCOUNT( tmp_dircall_arg3_1 ), INCREASE_REFCOUNT( tmp_dircall_arg4_1 ) );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 215;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_callback.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_callback,
            par_callback.object
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
    if ((par_keys.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_keys,
            par_keys.object
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
static PyObject *fparse_function_1___init___of_class_12_EnableContext_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_callback = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_keys = NULL;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par_keys = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_keys = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_keys, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_keys = (PyObject *)split_copy;
        }
        else
        {
            _python_par_keys = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_keys, entry->me_key, value );

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
            _python_par_keys = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_keys, const_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_keys, const_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument callback was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_keys, const_str_plain_callback );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_callback == NULL );

            _python_par_callback = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_keys, const_str_plain_callback );

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
         if (unlikely( _python_par_callback != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_callback = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_callback == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_callback = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_callback == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_callback };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 2 )
    {
        _python_par_args = PyTuple_New( args_size - 2 );

        for( Py_ssize_t i = 0; i < args_size - 2; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[2+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( const_tuple_empty );
    }


    return impl_function_1___init___of_class_12_EnableContext_of_module_Xlib$ext$record( self, _python_par_self, _python_par_callback, _python_par_args, _python_par_keys );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_callback );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_keys );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_12_EnableContext_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_1___init___of_class_12_EnableContext_of_module_Xlib$ext$record( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), MAKE_TUPLE( &args[ 2 ], size > 2 ? size-2 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_12_EnableContext_of_module_Xlib$ext$record( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__parse_response_of_class_12_EnableContext_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_data )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_data; par_data.object = _python_par_data;
    PyObjectLocalVariable var_r;
    PyObjectLocalVariable var_d;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
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
    int tmp_tried_lineno_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_729be8cd6c47b58e80ffc72728226c44, module_Xlib$ext$record );
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

        frame_function->f_lineno = 218;
        goto try_finally_handler_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__reply );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto try_finally_handler_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parse_binary );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_1 = par_data.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 218;
        goto try_finally_handler_1;
    }

    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 218;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__display );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 218;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 218;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto try_finally_handler_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
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


        frame_function->f_lineno = 218;
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


        frame_function->f_lineno = 218;
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

    assert( var_r.object == NULL );
    var_r.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2.object;

    assert( var_d.object == NULL );
    var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

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
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__callback );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = var_r.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 219;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = var_r.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_category );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_StartOfData );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_StartOfData );
    }

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29430 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 221;
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
    tmp_source_name_6 = var_r.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sequence_number );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sequence_number, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_no_1:;
    tmp_source_name_7 = var_r.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_category );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_EndOfData );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EndOfData );
    }

    if ( tmp_compare_right_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29470 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_9 = par_self.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__response_lock );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_acquire );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 227;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_2 = var_r.object;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 11969 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__data, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_self.object;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__response_lock );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_release );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 229;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_14 = par_self.object;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__display );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_sent_requests );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_insert );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_int_0;
    tmp_call_arg_element_5 = par_self.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 231;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
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
    if ((var_r.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_r,
            var_r.object
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
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
static PyObject *fparse_function_2__parse_response_of_class_12_EnableContext_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "_parse_response() keywords must be strings" );
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
                   "_parse_response() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_data != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_data = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_data == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_data = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_data == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_data };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2__parse_response_of_class_12_EnableContext_of_module_Xlib$ext$record( self, _python_par_self, _python_par_data );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_data );

    return NULL;
}

static PyObject *dparse_function_2__parse_response_of_class_12_EnableContext_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2__parse_response_of_class_12_EnableContext_of_module_Xlib$ext$record( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2__parse_response_of_class_12_EnableContext_of_module_Xlib$ext$record( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_enable_context_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_context, PyObject *_python_par_callback )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_context; par_context.object = _python_par_context;
    PyObjectLocalVariable par_callback; par_callback.object = _python_par_callback;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_619e77130f0304d5b3660c79507fd2ac, module_Xlib$ext$record );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_EnableContext );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EnableContext );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29508 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_1 = _PyDict_NewPresized( 4 );
    tmp_dict_value_1 = par_callback.object;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29376 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_callback;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_display );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_display;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_display );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_extension_major );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_extname );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extname );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28668 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 237;
    tmp_dict_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_opcode;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    tmp_dict_value_4 = par_context.object;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29095 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_context;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 238;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 238;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_context.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_context,
            par_context.object
        );

    }
    if ((par_callback.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_callback,
            par_callback.object
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
static PyObject *fparse_function_13_enable_context_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_context = NULL;
    PyObject *_python_par_callback = NULL;
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
                PyErr_Format( PyExc_TypeError, "enable_context() keywords must be strings" );
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
            if ( found == false && const_str_plain_context == key )
            {
                assert( _python_par_context == NULL );
                _python_par_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_callback == key )
            {
                assert( _python_par_callback == NULL );
                _python_par_callback = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_context, key ) == 1 )
            {
                assert( _python_par_context == NULL );
                _python_par_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_callback, key ) == 1 )
            {
                assert( _python_par_callback == NULL );
                _python_par_callback = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "enable_context() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_context != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_context = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_context == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_context = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_callback != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_callback = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_callback == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_callback = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_context == NULL || _python_par_callback == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_context, _python_par_callback };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_13_enable_context_of_module_Xlib$ext$record( self, _python_par_self, _python_par_context, _python_par_callback );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_context );
    Py_XDECREF( _python_par_callback );

    return NULL;
}

static PyObject *dparse_function_13_enable_context_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_13_enable_context_of_module_Xlib$ext$record( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_enable_context_of_module_Xlib$ext$record( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_14_DisableContext_of_module_Xlib$ext$record(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var__request;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_b04272625d780daff3a0e82d695eca0a;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9c2befd29c3064d36143347140af60c6, module_Xlib$ext$record );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Struct );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Card8 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_opcode;
    frame_function->f_lineno = 243;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Opcode );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_int_pos_6;
    frame_function->f_lineno = 244;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 244;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_RequestLength );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 245;
    tmp_call_arg_element_5 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 246;
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

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_plain_context;
    frame_function->f_lineno = 246;
    tmp_call_arg_element_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 246;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_3, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    assert( var__request.object == NULL );
    var__request.object = tmp_assign_source_2;


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
    if ((var__request.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__request,
            var__request.object
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
    if ((var__request.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__request,
            var__request.object
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


static PyObject *impl_function_15_disable_context_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_context )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_context; par_context.object = _python_par_context;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7cbf9d13c20c1ce9f7673621a41c9e57, module_Xlib$ext$record );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_DisableContext );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DisableContext );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29550 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_1 = _PyDict_NewPresized( 3 );
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_display );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_display;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_display );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_extension_major );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_extname );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extname );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28668 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 251;
    tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_opcode;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_value_3 = par_context.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29095 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 252;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_context;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 252;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 252;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_context.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_context,
            par_context.object
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
static PyObject *fparse_function_15_disable_context_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_context = NULL;
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
                PyErr_Format( PyExc_TypeError, "disable_context() keywords must be strings" );
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
            if ( found == false && const_str_plain_context == key )
            {
                assert( _python_par_context == NULL );
                _python_par_context = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_context, key ) == 1 )
            {
                assert( _python_par_context == NULL );
                _python_par_context = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "disable_context() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_context != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_context = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_context == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_context = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_context == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_context };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_15_disable_context_of_module_Xlib$ext$record( self, _python_par_self, _python_par_context );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_context );

    return NULL;
}

static PyObject *dparse_function_15_disable_context_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_15_disable_context_of_module_Xlib$ext$record( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15_disable_context_of_module_Xlib$ext$record( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_16_FreeContext_of_module_Xlib$ext$record(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var__request;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_b04272625d780daff3a0e82d695eca0a;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9394ef3bff551e2189cb5350994ce952, module_Xlib$ext$record );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Struct );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Card8 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_opcode;
    frame_function->f_lineno = 257;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Opcode );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_int_pos_7;
    frame_function->f_lineno = 258;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_RequestLength );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 259;
    tmp_call_arg_element_5 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 260;
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

        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_plain_context;
    frame_function->f_lineno = 260;
    tmp_call_arg_element_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 260;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_3, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    assert( var__request.object == NULL );
    var__request.object = tmp_assign_source_2;


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
    if ((var__request.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__request,
            var__request.object
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
    if ((var__request.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__request,
            var__request.object
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


static PyObject *impl_function_17_free_context_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_context )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_context; par_context.object = _python_par_context;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_17443f2a889a2576fac983f2fd4de1a0, module_Xlib$ext$record );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_FreeContext );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FreeContext );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29593 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }

    tmp_call_kw_1 = _PyDict_NewPresized( 3 );
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_display );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_display;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_display );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_extension_major );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_extname );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extname );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28668 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 265;
    tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_opcode;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_value_3 = par_context.object;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29095 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 266;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_context;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 266;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 267;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_display );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_free_resource_id );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_context.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29095 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 267;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 267;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_context.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_context,
            par_context.object
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
static PyObject *fparse_function_17_free_context_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_context = NULL;
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
                PyErr_Format( PyExc_TypeError, "free_context() keywords must be strings" );
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
            if ( found == false && const_str_plain_context == key )
            {
                assert( _python_par_context == NULL );
                _python_par_context = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_context, key ) == 1 )
            {
                assert( _python_par_context == NULL );
                _python_par_context = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "free_context() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_context != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_context = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_context == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_context = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_context == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_context };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_17_free_context_of_module_Xlib$ext$record( self, _python_par_self, _python_par_context );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_context );

    return NULL;
}

static PyObject *dparse_function_17_free_context_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_17_free_context_of_module_Xlib$ext$record( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_17_free_context_of_module_Xlib$ext$record( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_18_init_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject *_python_par_disp, PyObject *_python_par_info )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_disp; par_disp.object = _python_par_disp;
    PyObjectLocalVariable par_info; par_info.object = _python_par_info;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_faa72f874fb656164a4df593da61835c, module_Xlib$ext$record );
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
    tmp_source_name_1 = par_disp.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29633 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_extension_add_method );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_plain_display;
    tmp_call_arg_element_2 = const_str_plain_record_get_version;
    tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_get_version );

    if (unlikely( tmp_call_arg_element_3 == NULL ))
    {
        tmp_call_arg_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_version );
    }

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29683 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 271;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_disp.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29633 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 272;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_extension_add_method );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 272;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_plain_display;
    tmp_call_arg_element_5 = const_str_plain_record_create_context;
    tmp_call_arg_element_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_create_context );

    if (unlikely( tmp_call_arg_element_6 == NULL ))
    {
        tmp_call_arg_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_create_context );
    }

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29723 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 272;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 272;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 272;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_disp.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29633 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_extension_add_method );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_plain_display;
    tmp_call_arg_element_8 = const_str_plain_record_register_clients;
    tmp_call_arg_element_9 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_register_clients );

    if (unlikely( tmp_call_arg_element_9 == NULL ))
    {
        tmp_call_arg_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register_clients );
    }

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29766 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 273;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_3, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 273;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = par_disp.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29633 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_extension_add_method );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = const_str_plain_display;
    tmp_call_arg_element_11 = const_str_plain_record_unregister_clients;
    tmp_call_arg_element_12 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_unregister_clients );

    if (unlikely( tmp_call_arg_element_12 == NULL ))
    {
        tmp_call_arg_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unregister_clients );
    }

    if ( tmp_call_arg_element_12 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29811 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 274;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 274;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_disp.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29633 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_extension_add_method );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = const_str_plain_display;
    tmp_call_arg_element_14 = const_str_plain_record_get_context;
    tmp_call_arg_element_15 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_get_context );

    if (unlikely( tmp_call_arg_element_15 == NULL ))
    {
        tmp_call_arg_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_context );
    }

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29858 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 275;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_5, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 275;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = par_disp.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29633 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_extension_add_method );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = const_str_plain_display;
    tmp_call_arg_element_17 = const_str_plain_record_enable_context;
    tmp_call_arg_element_18 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_enable_context );

    if (unlikely( tmp_call_arg_element_18 == NULL ))
    {
        tmp_call_arg_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_enable_context );
    }

    if ( tmp_call_arg_element_18 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29898 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 276;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_6, tmp_call_arg_element_16, tmp_call_arg_element_17, tmp_call_arg_element_18 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = par_disp.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29633 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_extension_add_method );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_19 = const_str_plain_display;
    tmp_call_arg_element_20 = const_str_plain_record_disable_context;
    tmp_call_arg_element_21 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_disable_context );

    if (unlikely( tmp_call_arg_element_21 == NULL ))
    {
        tmp_call_arg_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_disable_context );
    }

    if ( tmp_call_arg_element_21 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29941 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 277;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_7, tmp_call_arg_element_19, tmp_call_arg_element_20, tmp_call_arg_element_21 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 277;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = par_disp.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29633 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 278;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_extension_add_method );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 278;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_22 = const_str_plain_display;
    tmp_call_arg_element_23 = const_str_plain_record_free_context;
    tmp_call_arg_element_24 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_free_context );

    if (unlikely( tmp_call_arg_element_24 == NULL ))
    {
        tmp_call_arg_element_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_free_context );
    }

    if ( tmp_call_arg_element_24 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 29985 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 278;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 278;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_8, tmp_call_arg_element_22, tmp_call_arg_element_23, tmp_call_arg_element_24 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 278;
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
    if ((par_disp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_disp,
            par_disp.object
        );

    }
    if ((par_info.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_info,
            par_info.object
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
static PyObject *fparse_function_18_init_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_disp = NULL;
    PyObject *_python_par_info = NULL;
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
                PyErr_Format( PyExc_TypeError, "init() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_disp == key )
            {
                assert( _python_par_disp == NULL );
                _python_par_disp = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_info == key )
            {
                assert( _python_par_info == NULL );
                _python_par_info = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_disp, key ) == 1 )
            {
                assert( _python_par_disp == NULL );
                _python_par_disp = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_info, key ) == 1 )
            {
                assert( _python_par_info == NULL );
                _python_par_info = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "init() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_disp != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_disp = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_disp == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_disp = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_info != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_info = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_info == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_info = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_disp == NULL || _python_par_info == NULL ))
    {
        PyObject *values[] = { _python_par_disp, _python_par_info };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_18_init_of_module_Xlib$ext$record( self, _python_par_disp, _python_par_info );

error_exit:;

    Py_XDECREF( _python_par_disp );
    Py_XDECREF( _python_par_info );

    return NULL;
}

static PyObject *dparse_function_18_init_of_module_Xlib$ext$record( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_18_init_of_module_Xlib$ext$record( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_18_init_of_module_Xlib$ext$record( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_11_get_context_of_module_Xlib$ext$record(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_get_context_of_module_Xlib$ext$record,
        dparse_function_11_get_context_of_module_Xlib$ext$record,
        const_str_plain_get_context,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8b2dff2745f076fec174049ca98edc9f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$ext$record,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_enable_context_of_module_Xlib$ext$record(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_enable_context_of_module_Xlib$ext$record,
        dparse_function_13_enable_context_of_module_Xlib$ext$record,
        const_str_plain_enable_context,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_619e77130f0304d5b3660c79507fd2ac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$ext$record,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_disable_context_of_module_Xlib$ext$record(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_disable_context_of_module_Xlib$ext$record,
        dparse_function_15_disable_context_of_module_Xlib$ext$record,
        const_str_plain_disable_context,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7cbf9d13c20c1ce9f7673621a41c9e57,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$ext$record,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_free_context_of_module_Xlib$ext$record(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17_free_context_of_module_Xlib$ext$record,
        dparse_function_17_free_context_of_module_Xlib$ext$record,
        const_str_plain_free_context,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_17443f2a889a2576fac983f2fd4de1a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$ext$record,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_18_init_of_module_Xlib$ext$record(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_18_init_of_module_Xlib$ext$record,
        dparse_function_18_init_of_module_Xlib$ext$record,
        const_str_plain_init,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_faa72f874fb656164a4df593da61835c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$ext$record,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_12_EnableContext_of_module_Xlib$ext$record(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_12_EnableContext_of_module_Xlib$ext$record,
        dparse_function_1___init___of_class_12_EnableContext_of_module_Xlib$ext$record,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7e6b1bedca6fe7a12b170d92e29dde95,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$ext$record,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_pack_value_of_class_1_RawField_of_module_Xlib$ext$record(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_pack_value_of_class_1_RawField_of_module_Xlib$ext$record,
        dparse_function_1_pack_value_of_class_1_RawField_of_module_Xlib$ext$record,
        const_str_plain_pack_value,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6838c4bfd7994b605e91bcec0493ea99,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$ext$record,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__parse_response_of_class_12_EnableContext_of_module_Xlib$ext$record(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__parse_response_of_class_12_EnableContext_of_module_Xlib$ext$record,
        dparse_function_2__parse_response_of_class_12_EnableContext_of_module_Xlib$ext$record,
        const_str_plain__parse_response,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_708e828254b22a4f95e1a049ab8c0231,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$ext$record,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_parse_binary_value_of_class_1_RawField_of_module_Xlib$ext$record(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_parse_binary_value_of_class_1_RawField_of_module_Xlib$ext$record,
        dparse_function_2_parse_binary_value_of_class_1_RawField_of_module_Xlib$ext$record,
        const_str_plain_parse_binary_value,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e71fa3174718cee99bc1d57dc529dbab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$ext$record,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_version_of_module_Xlib$ext$record(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_get_version_of_module_Xlib$ext$record,
        dparse_function_3_get_version_of_module_Xlib$ext$record,
        const_str_plain_get_version,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_47f0d468f373db911b6a783d73b2aa1a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$ext$record,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_create_context_of_module_Xlib$ext$record(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_create_context_of_module_Xlib$ext$record,
        dparse_function_5_create_context_of_module_Xlib$ext$record,
        const_str_plain_create_context,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5636859368c9764816fc5fcfb50f6401,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$ext$record,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_register_clients_of_module_Xlib$ext$record(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_register_clients_of_module_Xlib$ext$record,
        dparse_function_7_register_clients_of_module_Xlib$ext$record,
        const_str_plain_register_clients,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b3198a91bcda1824c3fc7acb71c650b3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$ext$record,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_unregister_clients_of_module_Xlib$ext$record(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_unregister_clients_of_module_Xlib$ext$record,
        dparse_function_9_unregister_clients_of_module_Xlib$ext$record,
        const_str_plain_unregister_clients,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a26c200f956f3ec3b5c005bd1d98e6e9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$ext$record,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Xlib$ext$record =
{
    PyModuleDef_HEAD_INIT,
    "Xlib.ext.record",   /* m_name */
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

MOD_INIT_DECL( Xlib$ext$record )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Xlib$ext$record );
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

    // puts( "in initXlib$ext$record" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Xlib$ext$record = Py_InitModule4(
        "Xlib.ext.record",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Xlib$ext$record = PyModule_Create( &mdef_Xlib$ext$record );
#endif

    moduledict_Xlib$ext$record = (PyDictObject *)((PyModuleObject *)module_Xlib$ext$record)->md_dict;

    assertObject( module_Xlib$ext$record );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b04272625d780daff3a0e82d695eca0a, module_Xlib$ext$record );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_Xlib$ext$record );

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
    PyObject *tmp_class_bases_1;
    PyObject *tmp_class_bases_2;
    PyObject *tmp_class_bases_3;
    PyObject *tmp_class_bases_4;
    PyObject *tmp_class_bases_5;
    PyObject *tmp_class_bases_6;
    PyObject *tmp_class_bases_7;
    PyObject *tmp_class_bases_8;
    PyObject *tmp_class_bases_9;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    int tmp_cmp_In_9;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_dict_2;
    PyObject *tmp_dget_dict_3;
    PyObject *tmp_dget_dict_4;
    PyObject *tmp_dget_dict_5;
    PyObject *tmp_dget_dict_6;
    PyObject *tmp_dget_dict_7;
    PyObject *tmp_dget_dict_8;
    PyObject *tmp_dget_dict_9;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_dget_key_2;
    PyObject *tmp_dget_key_3;
    PyObject *tmp_dget_key_4;
    PyObject *tmp_dget_key_5;
    PyObject *tmp_dget_key_6;
    PyObject *tmp_dget_key_7;
    PyObject *tmp_dget_key_8;
    PyObject *tmp_dget_key_9;
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

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e7c60ab5af270797d80efacf1019b5a2;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_df2fdd7b11f714bed06689366f5b6b02, module_Xlib$ext$record );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_Xlib$ext$record)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_Xlib, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_X_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_X );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_X, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_Xlib$ext$record)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_0df97c6d560821a4763cc4527efabdd8, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_rq_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_rq );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_plain_RECORD;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_extname, tmp_assign_source_5 );
    tmp_assign_source_6 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_FromServerTime, tmp_assign_source_6 );
    tmp_assign_source_7 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_FromClientTime, tmp_assign_source_7 );
    tmp_assign_source_8 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_FromClientSequence, tmp_assign_source_8 );
    tmp_assign_source_9 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_CurrentClients, tmp_assign_source_9 );
    tmp_assign_source_10 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_FutureClients, tmp_assign_source_10 );
    tmp_assign_source_11 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_AllClients, tmp_assign_source_11 );
    tmp_assign_source_12 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_FromServer, tmp_assign_source_12 );
    tmp_assign_source_13 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_FromClient, tmp_assign_source_13 );
    tmp_assign_source_14 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_ClientStarted, tmp_assign_source_14 );
    tmp_assign_source_15 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_ClientDied, tmp_assign_source_15 );
    tmp_assign_source_16 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_StartOfData, tmp_assign_source_16 );
    tmp_assign_source_17 = const_int_pos_5;
    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_EndOfData, tmp_assign_source_17 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Struct );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Card8 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_first;
    frame_module->f_lineno = 40;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_module->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Card8 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_plain_last;
    frame_module->f_lineno = 41;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 41;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_Range8, tmp_assign_source_18 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Struct );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 43;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Card16 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_module->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = const_str_plain_first;
    frame_module->f_lineno = 43;
    tmp_call_arg_element_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_module->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 44;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_Card16 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_module->f_lineno = 44;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = const_str_plain_last;
    frame_module->f_lineno = 44;
    tmp_call_arg_element_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_module->f_lineno = 44;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 44;
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 44;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_Range16, tmp_assign_source_19 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 45;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Struct );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Object );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = const_str_plain_major_range;
    tmp_call_arg_element_11 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_Range8 );

    if (unlikely( tmp_call_arg_element_11 == NULL ))
    {
        tmp_call_arg_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Record_Range8 );
    }

    if ( tmp_call_arg_element_11 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28438 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 46;
    tmp_call_arg_element_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_10, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );

        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_Object );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_9 );

        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = const_str_plain_minor_range;
    tmp_call_arg_element_14 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_Range16 );

    if (unlikely( tmp_call_arg_element_14 == NULL ))
    {
        tmp_call_arg_element_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Record_Range16 );
    }

    if ( tmp_call_arg_element_14 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28473 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 47;
    tmp_call_arg_element_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_9, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_9 );

        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 47;
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_9, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_9 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_ExtRange, tmp_assign_source_20 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_Struct );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_Object );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );

        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = const_str_plain_core_requests;
    tmp_call_arg_element_17 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_Range8 );

    if (unlikely( tmp_call_arg_element_17 == NULL ))
    {
        tmp_call_arg_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Record_Range8 );
    }

    if ( tmp_call_arg_element_17 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28438 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 49;
    tmp_call_arg_element_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_11, tmp_call_arg_element_16, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );

        frame_module->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_Object );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_module->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_19 = const_str_plain_core_replies;
    tmp_call_arg_element_20 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_Range8 );

    if (unlikely( tmp_call_arg_element_20 == NULL ))
    {
        tmp_call_arg_element_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Record_Range8 );
    }

    if ( tmp_call_arg_element_20 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_called_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28438 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 50;
    tmp_call_arg_element_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_12, tmp_call_arg_element_19, tmp_call_arg_element_20 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_call_arg_element_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_module->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_Object );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );

        frame_module->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_22 = const_str_plain_ext_requests;
    tmp_call_arg_element_23 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_ExtRange );

    if (unlikely( tmp_call_arg_element_23 == NULL ))
    {
        tmp_call_arg_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Record_ExtRange );
    }

    if ( tmp_call_arg_element_23 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28509 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 51;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 51;
    tmp_call_arg_element_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_13, tmp_call_arg_element_22, tmp_call_arg_element_23 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_call_arg_element_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );

        frame_module->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_Object );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );

        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_25 = const_str_plain_ext_replies;
    tmp_call_arg_element_26 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_ExtRange );

    if (unlikely( tmp_call_arg_element_26 == NULL ))
    {
        tmp_call_arg_element_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Record_ExtRange );
    }

    if ( tmp_call_arg_element_26 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_called_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28509 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 52;
    tmp_call_arg_element_24 = CALL_FUNCTION_WITH_ARGS2( tmp_called_14, tmp_call_arg_element_25, tmp_call_arg_element_26 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_call_arg_element_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );

        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_Object );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );

        frame_module->f_lineno = 53;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_28 = const_str_plain_delivered_events;
    tmp_call_arg_element_29 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_Range8 );

    if (unlikely( tmp_call_arg_element_29 == NULL ))
    {
        tmp_call_arg_element_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Record_Range8 );
    }

    if ( tmp_call_arg_element_29 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_called_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28438 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 53;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 53;
    tmp_call_arg_element_27 = CALL_FUNCTION_WITH_ARGS2( tmp_called_15, tmp_call_arg_element_28, tmp_call_arg_element_29 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_call_arg_element_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );

        frame_module->f_lineno = 53;
        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_Object );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_27 );

        frame_module->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_31 = const_str_plain_device_events;
    tmp_call_arg_element_32 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_Range8 );

    if (unlikely( tmp_call_arg_element_32 == NULL ))
    {
        tmp_call_arg_element_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Record_Range8 );
    }

    if ( tmp_call_arg_element_32 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_called_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28438 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 54;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 54;
    tmp_call_arg_element_30 = CALL_FUNCTION_WITH_ARGS2( tmp_called_16, tmp_call_arg_element_31, tmp_call_arg_element_32 );
    Py_DECREF( tmp_called_16 );
    if ( tmp_call_arg_element_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_27 );

        frame_module->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_30 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_Object );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_30 );

        frame_module->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_34 = const_str_plain_errors;
    tmp_call_arg_element_35 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_Range8 );

    if (unlikely( tmp_call_arg_element_35 == NULL ))
    {
        tmp_call_arg_element_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Record_Range8 );
    }

    if ( tmp_call_arg_element_35 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_called_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28438 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 55;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 55;
    tmp_call_arg_element_33 = CALL_FUNCTION_WITH_ARGS2( tmp_called_17, tmp_call_arg_element_34, tmp_call_arg_element_35 );
    Py_DECREF( tmp_called_17 );
    if ( tmp_call_arg_element_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_30 );

        frame_module->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_call_arg_element_33 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_called_18 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_Bool );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_call_arg_element_33 );

        frame_module->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_37 = const_str_plain_client_started;
    frame_module->f_lineno = 56;
    tmp_call_arg_element_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_37 );
    Py_DECREF( tmp_called_18 );
    if ( tmp_call_arg_element_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_call_arg_element_33 );

        frame_module->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_call_arg_element_33 );
        Py_DECREF( tmp_call_arg_element_36 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_Bool );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_call_arg_element_33 );
        Py_DECREF( tmp_call_arg_element_36 );

        frame_module->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_39 = const_str_plain_client_died;
    frame_module->f_lineno = 57;
    tmp_call_arg_element_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_19, tmp_call_arg_element_39 );
    Py_DECREF( tmp_called_19 );
    if ( tmp_call_arg_element_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_call_arg_element_33 );
        Py_DECREF( tmp_call_arg_element_36 );

        frame_module->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 57;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS9( tmp_called_10, tmp_call_arg_element_15, tmp_call_arg_element_18, tmp_call_arg_element_21, tmp_call_arg_element_24, tmp_call_arg_element_27, tmp_call_arg_element_30, tmp_call_arg_element_33, tmp_call_arg_element_36, tmp_call_arg_element_38 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_arg_element_15 );
    Py_DECREF( tmp_call_arg_element_18 );
    Py_DECREF( tmp_call_arg_element_21 );
    Py_DECREF( tmp_call_arg_element_24 );
    Py_DECREF( tmp_call_arg_element_27 );
    Py_DECREF( tmp_call_arg_element_30 );
    Py_DECREF( tmp_call_arg_element_33 );
    Py_DECREF( tmp_call_arg_element_36 );
    Py_DECREF( tmp_call_arg_element_38 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_Range, tmp_assign_source_21 );
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_Struct );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_called_21 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_Card32 );
    if ( tmp_called_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );

        frame_module->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_41 = const_str_plain_client_resource;
    frame_module->f_lineno = 60;
    tmp_call_arg_element_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_21, tmp_call_arg_element_41 );
    Py_DECREF( tmp_called_21 );
    if ( tmp_call_arg_element_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );

        frame_module->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_40 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_called_22 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_LengthOf );
    if ( tmp_called_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_40 );

        frame_module->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_43 = const_str_plain_ranges;
    tmp_call_arg_element_44 = const_int_pos_4;
    frame_module->f_lineno = 61;
    tmp_call_arg_element_42 = CALL_FUNCTION_WITH_ARGS2( tmp_called_22, tmp_call_arg_element_43, tmp_call_arg_element_44 );
    Py_DECREF( tmp_called_22 );
    if ( tmp_call_arg_element_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_40 );

        frame_module->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_List );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );

        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_46 = const_str_plain_ranges;
    tmp_call_arg_element_47 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_Range );

    if (unlikely( tmp_call_arg_element_47 == NULL ))
    {
        tmp_call_arg_element_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Record_Range );
    }

    if ( tmp_call_arg_element_47 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_called_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 28546 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 62;
    tmp_call_arg_element_45 = CALL_FUNCTION_WITH_ARGS2( tmp_called_23, tmp_call_arg_element_46, tmp_call_arg_element_47 );
    Py_DECREF( tmp_called_23 );
    if ( tmp_call_arg_element_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );

        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 62;
    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS3( tmp_called_20, tmp_call_arg_element_40, tmp_call_arg_element_42, tmp_call_arg_element_45 );
    Py_DECREF( tmp_called_20 );
    Py_DECREF( tmp_call_arg_element_40 );
    Py_DECREF( tmp_call_arg_element_42 );
    Py_DECREF( tmp_call_arg_element_45 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_Record_ClientInfo, tmp_assign_source_22 );
    // Tried code
    tmp_assign_source_23 = PyTuple_New( 1 );
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_assign_source_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 65;
        goto try_finally_handler_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_ValueField );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_23 );

        frame_module->f_lineno = 65;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_23, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_23;

    tmp_assign_source_24 = impl_class_1_RawField_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 65;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_24;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 65;
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
    tmp_assign_source_25 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 65;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_25 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_25;

    tmp_called_24 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_48 = const_str_plain_RawField;
    tmp_call_arg_element_49 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_50 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 65;
    tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3( tmp_called_24, tmp_call_arg_element_48, tmp_call_arg_element_49, tmp_call_arg_element_50 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 65;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_26;

    tmp_assign_source_27 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_RawField, tmp_assign_source_27 );
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
    tmp_assign_source_28 = PyTuple_New( 1 );
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_25 == NULL )
    {
        Py_DECREF( tmp_assign_source_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 77;
        goto try_finally_handler_2;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_ReplyRequest );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_28 );

        frame_module->f_lineno = 77;
        goto try_finally_handler_2;
    }
    PyTuple_SET_ITEM( tmp_assign_source_28, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases.object == NULL );
    tmp_class_creation_2__bases.object = tmp_assign_source_28;

    tmp_assign_source_29 = impl_class_2_GetVersion_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 77;
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


        frame_module->f_lineno = 77;
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


        frame_module->f_lineno = 77;
        goto try_finally_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_bases_2 = tmp_class_creation_2__bases.object;

    tmp_assign_source_30 = SELECT_METACLASS( tmp_class_bases_2, GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass.object == NULL );
    tmp_class_creation_2__metaclass.object = tmp_assign_source_30;

    tmp_called_25 = tmp_class_creation_2__metaclass.object;

    tmp_call_arg_element_51 = const_str_plain_GetVersion;
    tmp_call_arg_element_52 = tmp_class_creation_2__bases.object;

    tmp_call_arg_element_53 = tmp_class_creation_2__class_dict.object;

    frame_module->f_lineno = 77;
    tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS3( tmp_called_25, tmp_call_arg_element_51, tmp_call_arg_element_52, tmp_call_arg_element_53 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 77;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class.object == NULL );
    tmp_class_creation_2__class.object = tmp_assign_source_31;

    tmp_assign_source_32 = tmp_class_creation_2__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_GetVersion, tmp_assign_source_32 );
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
    tmp_assign_source_33 = MAKE_FUNCTION_function_3_get_version_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_33 );

        frame_module->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_get_version, tmp_assign_source_33 );
    // Tried code
    tmp_assign_source_34 = PyTuple_New( 1 );
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_assign_source_34 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 100;
        goto try_finally_handler_3;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_Request );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_34 );

        frame_module->f_lineno = 100;
        goto try_finally_handler_3;
    }
    PyTuple_SET_ITEM( tmp_assign_source_34, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_3__bases.object == NULL );
    tmp_class_creation_3__bases.object = tmp_assign_source_34;

    tmp_assign_source_35 = impl_class_4_CreateContext_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 100;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_3__class_dict.object == NULL );
    tmp_class_creation_3__class_dict.object = tmp_assign_source_35;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_3__class_dict.object;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 100;
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
    tmp_assign_source_36 = DICT_GET_ITEM( tmp_dget_dict_3, tmp_dget_key_3 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 100;
        goto try_finally_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_class_bases_3 = tmp_class_creation_3__bases.object;

    tmp_assign_source_36 = SELECT_METACLASS( tmp_class_bases_3, GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass.object == NULL );
    tmp_class_creation_3__metaclass.object = tmp_assign_source_36;

    tmp_called_26 = tmp_class_creation_3__metaclass.object;

    tmp_call_arg_element_54 = const_str_plain_CreateContext;
    tmp_call_arg_element_55 = tmp_class_creation_3__bases.object;

    tmp_call_arg_element_56 = tmp_class_creation_3__class_dict.object;

    frame_module->f_lineno = 100;
    tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS3( tmp_called_26, tmp_call_arg_element_54, tmp_call_arg_element_55, tmp_call_arg_element_56 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 100;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_3__class.object == NULL );
    tmp_class_creation_3__class.object = tmp_assign_source_37;

    tmp_assign_source_38 = tmp_class_creation_3__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_CreateContext, tmp_assign_source_38 );
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
    tmp_assign_source_39 = MAKE_FUNCTION_function_5_create_context_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_39 );

        frame_module->f_lineno = 113;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_create_context, tmp_assign_source_39 );
    // Tried code
    tmp_assign_source_40 = PyTuple_New( 1 );
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_assign_source_40 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 125;
        goto try_finally_handler_4;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_Request );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_40 );

        frame_module->f_lineno = 125;
        goto try_finally_handler_4;
    }
    PyTuple_SET_ITEM( tmp_assign_source_40, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_4__bases.object == NULL );
    tmp_class_creation_4__bases.object = tmp_assign_source_40;

    tmp_assign_source_41 = impl_class_6_RegisterClients_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 125;
        goto try_finally_handler_4;
    }
    assert( tmp_class_creation_4__class_dict.object == NULL );
    tmp_class_creation_4__class_dict.object = tmp_assign_source_41;

    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_4__class_dict.object;

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 125;
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
    tmp_assign_source_42 = DICT_GET_ITEM( tmp_dget_dict_4, tmp_dget_key_4 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 125;
        goto try_finally_handler_4;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_class_bases_4 = tmp_class_creation_4__bases.object;

    tmp_assign_source_42 = SELECT_METACLASS( tmp_class_bases_4, GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass.object == NULL );
    tmp_class_creation_4__metaclass.object = tmp_assign_source_42;

    tmp_called_27 = tmp_class_creation_4__metaclass.object;

    tmp_call_arg_element_57 = const_str_plain_RegisterClients;
    tmp_call_arg_element_58 = tmp_class_creation_4__bases.object;

    tmp_call_arg_element_59 = tmp_class_creation_4__class_dict.object;

    frame_module->f_lineno = 125;
    tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS3( tmp_called_27, tmp_call_arg_element_57, tmp_call_arg_element_58, tmp_call_arg_element_59 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 125;
        goto try_finally_handler_4;
    }
    assert( tmp_class_creation_4__class.object == NULL );
    tmp_class_creation_4__class.object = tmp_assign_source_43;

    tmp_assign_source_44 = tmp_class_creation_4__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_RegisterClients, tmp_assign_source_44 );
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
    tmp_assign_source_45 = MAKE_FUNCTION_function_7_register_clients_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_45 );

        frame_module->f_lineno = 138;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_register_clients, tmp_assign_source_45 );
    // Tried code
    tmp_assign_source_46 = PyTuple_New( 1 );
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_assign_source_46 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 148;
        goto try_finally_handler_5;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_Request );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_46 );

        frame_module->f_lineno = 148;
        goto try_finally_handler_5;
    }
    PyTuple_SET_ITEM( tmp_assign_source_46, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_5__bases.object == NULL );
    tmp_class_creation_5__bases.object = tmp_assign_source_46;

    tmp_assign_source_47 = impl_class_8_UnregisterClients_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto try_finally_handler_5;
    }
    assert( tmp_class_creation_5__class_dict.object == NULL );
    tmp_class_creation_5__class_dict.object = tmp_assign_source_47;

    tmp_compare_left_5 = const_str_plain___metaclass__;
    tmp_compare_right_5 = tmp_class_creation_5__class_dict.object;

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    if ( tmp_cmp_In_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
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
    tmp_assign_source_48 = DICT_GET_ITEM( tmp_dget_dict_5, tmp_dget_key_5 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto try_finally_handler_5;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_class_bases_5 = tmp_class_creation_5__bases.object;

    tmp_assign_source_48 = SELECT_METACLASS( tmp_class_bases_5, GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass.object == NULL );
    tmp_class_creation_5__metaclass.object = tmp_assign_source_48;

    tmp_called_28 = tmp_class_creation_5__metaclass.object;

    tmp_call_arg_element_60 = const_str_plain_UnregisterClients;
    tmp_call_arg_element_61 = tmp_class_creation_5__bases.object;

    tmp_call_arg_element_62 = tmp_class_creation_5__class_dict.object;

    frame_module->f_lineno = 148;
    tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS3( tmp_called_28, tmp_call_arg_element_60, tmp_call_arg_element_61, tmp_call_arg_element_62 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto try_finally_handler_5;
    }
    assert( tmp_class_creation_5__class.object == NULL );
    tmp_class_creation_5__class.object = tmp_assign_source_49;

    tmp_assign_source_50 = tmp_class_creation_5__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_UnregisterClients, tmp_assign_source_50 );
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
    tmp_assign_source_51 = MAKE_FUNCTION_function_9_unregister_clients_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        frame_module->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_unregister_clients, tmp_assign_source_51 );
    // Tried code
    tmp_assign_source_52 = PyTuple_New( 1 );
    tmp_source_name_29 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_29 == NULL ))
    {
        tmp_source_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_29 == NULL )
    {
        Py_DECREF( tmp_assign_source_52 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 165;
        goto try_finally_handler_6;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_ReplyRequest );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_52 );

        frame_module->f_lineno = 165;
        goto try_finally_handler_6;
    }
    PyTuple_SET_ITEM( tmp_assign_source_52, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_6__bases.object == NULL );
    tmp_class_creation_6__bases.object = tmp_assign_source_52;

    tmp_assign_source_53 = impl_class_10_GetContext_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 165;
        goto try_finally_handler_6;
    }
    assert( tmp_class_creation_6__class_dict.object == NULL );
    tmp_class_creation_6__class_dict.object = tmp_assign_source_53;

    tmp_compare_left_6 = const_str_plain___metaclass__;
    tmp_compare_right_6 = tmp_class_creation_6__class_dict.object;

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    if ( tmp_cmp_In_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 165;
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
    tmp_assign_source_54 = DICT_GET_ITEM( tmp_dget_dict_6, tmp_dget_key_6 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 165;
        goto try_finally_handler_6;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_class_bases_6 = tmp_class_creation_6__bases.object;

    tmp_assign_source_54 = SELECT_METACLASS( tmp_class_bases_6, GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass.object == NULL );
    tmp_class_creation_6__metaclass.object = tmp_assign_source_54;

    tmp_called_29 = tmp_class_creation_6__metaclass.object;

    tmp_call_arg_element_63 = const_str_plain_GetContext;
    tmp_call_arg_element_64 = tmp_class_creation_6__bases.object;

    tmp_call_arg_element_65 = tmp_class_creation_6__class_dict.object;

    frame_module->f_lineno = 165;
    tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS3( tmp_called_29, tmp_call_arg_element_63, tmp_call_arg_element_64, tmp_call_arg_element_65 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 165;
        goto try_finally_handler_6;
    }
    assert( tmp_class_creation_6__class.object == NULL );
    tmp_class_creation_6__class.object = tmp_assign_source_55;

    tmp_assign_source_56 = tmp_class_creation_6__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_GetContext, tmp_assign_source_56 );
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
    tmp_assign_source_57 = MAKE_FUNCTION_function_11_get_context_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_57 );

        frame_module->f_lineno = 181;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_get_context, tmp_assign_source_57 );
    // Tried code
    tmp_assign_source_58 = PyTuple_New( 1 );
    tmp_source_name_30 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_30 == NULL ))
    {
        tmp_source_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_assign_source_58 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 188;
        goto try_finally_handler_7;
    }

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_ReplyRequest );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_58 );

        frame_module->f_lineno = 188;
        goto try_finally_handler_7;
    }
    PyTuple_SET_ITEM( tmp_assign_source_58, 0, tmp_tuple_element_7 );
    assert( tmp_class_creation_7__bases.object == NULL );
    tmp_class_creation_7__bases.object = tmp_assign_source_58;

    tmp_assign_source_59 = impl_class_12_EnableContext_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 188;
        goto try_finally_handler_7;
    }
    assert( tmp_class_creation_7__class_dict.object == NULL );
    tmp_class_creation_7__class_dict.object = tmp_assign_source_59;

    tmp_compare_left_7 = const_str_plain___metaclass__;
    tmp_compare_right_7 = tmp_class_creation_7__class_dict.object;

    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    if ( tmp_cmp_In_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 188;
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
    tmp_assign_source_60 = DICT_GET_ITEM( tmp_dget_dict_7, tmp_dget_key_7 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 188;
        goto try_finally_handler_7;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_class_bases_7 = tmp_class_creation_7__bases.object;

    tmp_assign_source_60 = SELECT_METACLASS( tmp_class_bases_7, GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_7:;
    assert( tmp_class_creation_7__metaclass.object == NULL );
    tmp_class_creation_7__metaclass.object = tmp_assign_source_60;

    tmp_called_30 = tmp_class_creation_7__metaclass.object;

    tmp_call_arg_element_66 = const_str_plain_EnableContext;
    tmp_call_arg_element_67 = tmp_class_creation_7__bases.object;

    tmp_call_arg_element_68 = tmp_class_creation_7__class_dict.object;

    frame_module->f_lineno = 188;
    tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS3( tmp_called_30, tmp_call_arg_element_66, tmp_call_arg_element_67, tmp_call_arg_element_68 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 188;
        goto try_finally_handler_7;
    }
    assert( tmp_class_creation_7__class.object == NULL );
    tmp_class_creation_7__class.object = tmp_assign_source_61;

    tmp_assign_source_62 = tmp_class_creation_7__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_EnableContext, tmp_assign_source_62 );
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
    tmp_assign_source_63 = MAKE_FUNCTION_function_13_enable_context_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_63 );

        frame_module->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_enable_context, tmp_assign_source_63 );
    // Tried code
    tmp_assign_source_64 = PyTuple_New( 1 );
    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_31 == NULL )
    {
        Py_DECREF( tmp_assign_source_64 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 241;
        goto try_finally_handler_8;
    }

    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_Request );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_64 );

        frame_module->f_lineno = 241;
        goto try_finally_handler_8;
    }
    PyTuple_SET_ITEM( tmp_assign_source_64, 0, tmp_tuple_element_8 );
    assert( tmp_class_creation_8__bases.object == NULL );
    tmp_class_creation_8__bases.object = tmp_assign_source_64;

    tmp_assign_source_65 = impl_class_14_DisableContext_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 241;
        goto try_finally_handler_8;
    }
    assert( tmp_class_creation_8__class_dict.object == NULL );
    tmp_class_creation_8__class_dict.object = tmp_assign_source_65;

    tmp_compare_left_8 = const_str_plain___metaclass__;
    tmp_compare_right_8 = tmp_class_creation_8__class_dict.object;

    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    if ( tmp_cmp_In_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 241;
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
    tmp_assign_source_66 = DICT_GET_ITEM( tmp_dget_dict_8, tmp_dget_key_8 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 241;
        goto try_finally_handler_8;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_class_bases_8 = tmp_class_creation_8__bases.object;

    tmp_assign_source_66 = SELECT_METACLASS( tmp_class_bases_8, GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_8:;
    assert( tmp_class_creation_8__metaclass.object == NULL );
    tmp_class_creation_8__metaclass.object = tmp_assign_source_66;

    tmp_called_31 = tmp_class_creation_8__metaclass.object;

    tmp_call_arg_element_69 = const_str_plain_DisableContext;
    tmp_call_arg_element_70 = tmp_class_creation_8__bases.object;

    tmp_call_arg_element_71 = tmp_class_creation_8__class_dict.object;

    frame_module->f_lineno = 241;
    tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS3( tmp_called_31, tmp_call_arg_element_69, tmp_call_arg_element_70, tmp_call_arg_element_71 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 241;
        goto try_finally_handler_8;
    }
    assert( tmp_class_creation_8__class.object == NULL );
    tmp_class_creation_8__class.object = tmp_assign_source_67;

    tmp_assign_source_68 = tmp_class_creation_8__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_DisableContext, tmp_assign_source_68 );
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
    tmp_assign_source_69 = MAKE_FUNCTION_function_15_disable_context_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_69 );

        frame_module->f_lineno = 248;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_disable_context, tmp_assign_source_69 );
    // Tried code
    tmp_assign_source_70 = PyTuple_New( 1 );
    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_32 == NULL )
    {
        Py_DECREF( tmp_assign_source_70 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 255;
        goto try_finally_handler_9;
    }

    tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_Request );
    if ( tmp_tuple_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_70 );

        frame_module->f_lineno = 255;
        goto try_finally_handler_9;
    }
    PyTuple_SET_ITEM( tmp_assign_source_70, 0, tmp_tuple_element_9 );
    assert( tmp_class_creation_9__bases.object == NULL );
    tmp_class_creation_9__bases.object = tmp_assign_source_70;

    tmp_assign_source_71 = impl_class_16_FreeContext_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 255;
        goto try_finally_handler_9;
    }
    assert( tmp_class_creation_9__class_dict.object == NULL );
    tmp_class_creation_9__class_dict.object = tmp_assign_source_71;

    tmp_compare_left_9 = const_str_plain___metaclass__;
    tmp_compare_right_9 = tmp_class_creation_9__class_dict.object;

    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    if ( tmp_cmp_In_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 255;
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
    tmp_assign_source_72 = DICT_GET_ITEM( tmp_dget_dict_9, tmp_dget_key_9 );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 255;
        goto try_finally_handler_9;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_class_bases_9 = tmp_class_creation_9__bases.object;

    tmp_assign_source_72 = SELECT_METACLASS( tmp_class_bases_9, GET_STRING_DICT_VALUE( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_9:;
    assert( tmp_class_creation_9__metaclass.object == NULL );
    tmp_class_creation_9__metaclass.object = tmp_assign_source_72;

    tmp_called_32 = tmp_class_creation_9__metaclass.object;

    tmp_call_arg_element_72 = const_str_plain_FreeContext;
    tmp_call_arg_element_73 = tmp_class_creation_9__bases.object;

    tmp_call_arg_element_74 = tmp_class_creation_9__class_dict.object;

    frame_module->f_lineno = 255;
    tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS3( tmp_called_32, tmp_call_arg_element_72, tmp_call_arg_element_73, tmp_call_arg_element_74 );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 255;
        goto try_finally_handler_9;
    }
    assert( tmp_class_creation_9__class.object == NULL );
    tmp_class_creation_9__class.object = tmp_assign_source_73;

    tmp_assign_source_74 = tmp_class_creation_9__class.object;

    UPDATE_STRING_DICT0( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_FreeContext, tmp_assign_source_74 );
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
    tmp_assign_source_75 = MAKE_FUNCTION_function_17_free_context_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_75 );

        frame_module->f_lineno = 262;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_free_context, tmp_assign_source_75 );
    tmp_assign_source_76 = MAKE_FUNCTION_function_18_init_of_module_Xlib$ext$record(  );
    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_76 );

        frame_module->f_lineno = 270;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$ext$record, (Nuitka_StringObject *)const_str_plain_init, tmp_assign_source_76 );

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

    return MOD_RETURN_VALUE( module_Xlib$ext$record );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
