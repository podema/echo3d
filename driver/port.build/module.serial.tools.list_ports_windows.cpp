// Generated code for Python source for module 'serial.tools.list_ports_windows'
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

// The _module_serial$tools$list_ports_windows is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_serial$tools$list_ports_windows;
PyDictObject *moduledict_serial$tools$list_ports_windows;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_12;
extern PyObject *const_int_pos_16;
extern PyObject *const_int_pos_31;
extern PyObject *const_int_pos_48;
extern PyObject *const_int_pos_62;
extern PyObject *const_int_pos_78;
extern PyObject *const_int_pos_80;
extern PyObject *const_int_pos_97;
extern PyObject *const_int_pos_101;
extern PyObject *const_int_pos_109;
extern PyObject *const_int_pos_111;
extern PyObject *const_int_pos_114;
extern PyObject *const_int_pos_115;
extern PyObject *const_int_pos_116;
static PyObject *const_int_pos_122;
static PyObject *const_int_pos_156;
static PyObject *const_int_pos_228;
static PyObject *const_int_pos_250;
extern PyObject *const_int_pos_255;
extern PyObject *const_int_pos_256;
extern PyObject *const_int_pos_259;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_s;
extern PyObject *const_tuple_empty;
static PyObject *const_int_pos_4560;
extern PyObject *const_str_plain_re;
static PyObject *const_int_pos_32905;
static PyObject *const_str_plain_did;
static PyObject *const_str_plain_idd;
static PyObject *const_int_pos_131097;
extern PyObject *const_str_plain_BOOL;
extern PyObject *const_str_plain_BYTE;
static PyObject *const_str_plain_CHAR;
static PyObject *const_str_plain_GUID;
static PyObject *const_str_plain_HKEY;
static PyObject *const_str_plain_HWND;
extern PyObject *const_str_plain_LONG;
static PyObject *const_str_plain_NULL;
extern PyObject *const_str_plain_WORD;
extern PyObject *const_str_plain_func;
static PyObject *const_str_plain_hkey;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_DWORD;
static PyObject *const_str_plain_Data1;
static PyObject *const_str_plain_Data2;
static PyObject *const_str_plain_Data3;
static PyObject *const_str_plain_Data4;
static PyObject *const_str_plain_Flags;
static PyObject *const_str_plain_PBYTE;
static PyObject *const_str_plain_PHKEY;
static PyObject *const_str_plain_ULONG;
extern PyObject *const_str_plain_byref;
static PyObject *const_str_plain_g_hdi;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_HANDLE;
static PyObject *const_str_plain_LPBYTE;
extern PyObject *const_str_plain_LPCSTR;
static PyObject *const_str_plain_PCTSTR;
static PyObject *const_str_plain_PDWORD;
static PyObject *const_str_plain_REGSAM;
static PyObject *const_str_plain_REG_SZ;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_buffer;
extern PyObject *const_str_plain_c_char;
static PyObject *const_str_plain_cbSize;
extern PyObject *const_str_plain_ctypes;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_plain_serial;
extern PyObject *const_str_plain_sizeof;
extern PyObject *const_str_plain_string;
static PyObject *const_str_plain_windll;
static PyObject *const_str_plain_DevInst;
extern PyObject *const_str_plain_LPDWORD;
extern PyObject *const_str_plain_POINTER;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___str__;
static PyObject *const_str_plain_devinfo;
static PyObject *const_str_plain_dwIndex;
extern PyObject *const_str_plain_restype;
static PyObject *const_str_plain_Advapi32;
static PyObject *const_str_plain_HDEVINFO;
static PyObject *const_str_plain_KEY_READ;
static PyObject *const_str_plain_PortName;
extern PyObject *const_str_plain_Reserved;
extern PyObject *const_str_plain_WinError;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain__fields_;
static PyObject *const_str_plain_advapi32;
extern PyObject *const_str_plain_argtypes;
static PyObject *const_str_plain_c_char_p;
extern PyObject *const_str_plain_c_void_p;
extern PyObject *const_str_plain_comports;
static PyObject *const_str_plain_dwNeeded;
static PyObject *const_str_plain_errcheck;
extern PyObject *const_str_plain_is_64bit;
static PyObject *const_str_plain_setupapi;
extern PyObject *const_str_plain_to_bytes;
static PyObject *const_long_pos_2262880736;
static PyObject *const_str_plain_ClassGuid;
static PyObject *const_str_plain_DIREG_DEV;
extern PyObject *const_str_plain_Structure;
extern PyObject *const_str_plain_ULONG_PTR;
extern PyObject *const_str_plain_arguments;
static PyObject *const_str_plain_port_name;
static PyObject *const_str_plain_DevicePath;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_ACCESS_MASK;
static PyObject *const_str_plain_LoadLibrary;
static PyObject *const_str_plain_RegCloseKey;
static PyObject *const_str_plain_ValidHandle;
static PyObject *const_str_plain_byte_buffer;
extern PyObject *const_str_plain_GetLastError;
static PyObject *const_str_plain_szHardwareID;
static PyObject *const_str_plain_DIGCF_PRESENT;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_szFriendlyName;
static PyObject *const_str_plain_RegQueryValueEx;
static PyObject *const_str_plain_SP_DEVINFO_DATA;
static PyObject *const_str_plain_DICS_FLAG_GLOBAL;
static PyObject *const_str_plain_PSP_DEVINFO_DATA;
static PyObject *const_str_plain_RegQueryValueExA;
static PyObject *const_str_plain_SPDRP_HARDWAREID;
static PyObject *const_str_plain_port_name_buffer;
static PyObject *const_str_plain_port_name_length;
extern PyObject *const_tuple_str_plain_BOOL_tuple;
extern PyObject *const_tuple_str_plain_BYTE_tuple;
static PyObject *const_tuple_str_plain_HKEY_tuple;
static PyObject *const_tuple_str_plain_HWND_tuple;
static PyObject *const_tuple_str_plain_LONG_tuple;
extern PyObject *const_tuple_str_plain_WORD_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_tuple_str_plain_DWORD_tuple;
static PyObject *const_tuple_str_plain_ULONG_tuple;
static PyObject *const_str_plain_GUID_CLASS_COMPORT;
static PyObject *const_str_plain_InterfaceClassGuid;
static PyObject *const_str_plain_SPDRP_FRIENDLYNAME;
static PyObject *const_str_plain_list_ports_windows;
extern PyObject *const_tuple_str_plain_HANDLE_tuple;
extern PyObject *const_tuple_str_plain_LPCSTR_tuple;
static PyObject *const_tuple_str_plain_buffer_tuple;
static PyObject *const_tuple_str_plain_length_tuple;
static PyObject *const_str_plain_ERROR_NO_MORE_ITEMS;
static PyObject *const_str_plain_SetupDiGetClassDevs;
extern PyObject *const_str_plain_INVALID_HANDLE_VALUE;
static PyObject *const_str_plain_SetupDiGetClassDevsA;
static PyObject *const_str_plain_SetupDiOpenDevRegKey;
static PyObject *const_str_plain_DIGCF_DEVICEINTERFACE;
static PyObject *const_str_plain_SP_DEVICE_INTERFACE_DATA;
static PyObject *const_str_plain_ERROR_INSUFFICIENT_BUFFER;
static PyObject *const_str_plain_PSP_DEVICE_INTERFACE_DATA;
static PyObject *const_str_plain_SetupDiEnumDeviceInterfaces;
static PyObject *const_str_plain_SetupDiDestroyDeviceInfoList;
extern PyObject *const_tuple_str_plain_self_str_plain_d_tuple;
static PyObject *const_str_plain_SetupDiGetDeviceInterfaceDetail;
static PyObject *const_list_7bdf40026cc409f754b398d5081173e9_list;
static PyObject *const_str_plain_PSP_DEVICE_INTERFACE_DETAIL_DATA;
static PyObject *const_str_plain_SetupDiGetDeviceInterfaceDetailA;
static PyObject *const_str_plain_SetupDiGetDeviceRegistryProperty;
extern PyObject *const_str_digest_06710c9a9806ee0e5a3c19d895a7fd43;
static PyObject *const_str_digest_0b418e1deb3a9bd52e7de5065502e70a;
static PyObject *const_str_digest_145ea9ab9729024a0749152af908953e;
extern PyObject *const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac;
static PyObject *const_str_digest_3e05259280f3a98998b8bd665564b05b;
static PyObject *const_str_digest_69b4548a1d6e27450c816aa80143679d;
static PyObject *const_str_digest_8a2a97af4cd741299455b803d34f6a34;
static PyObject *const_str_digest_b815affb56480a7641e05bc66038e024;
extern PyObject *const_str_digest_d85f9b7d2da9d405ffffc2aaf9deb17f;
static PyObject *const_str_digest_e0ed297f640f7ad3fb9bc53a231efc45;
static PyObject *const_str_digest_fe160da9dcd1d4a302a2f245c18e2285;
static PyObject *const_str_plain_SP_DEVICE_INTERFACE_DETAIL_DATA_A;
static PyObject *const_str_plain_SetupDiGetDeviceRegistryPropertyA;
static PyObject *const_tuple_2648f8cc0a5ac5ba109c6dc00fe5933f_tuple;
static PyObject *const_tuple_str_plain_ULONG_PTR_str_plain_is_64bit_tuple;
static PyObject *const_tuple_str_plain_buffer_str_plain_s_str_plain_c_tuple;
static PyObject *const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple;

static void _initModuleConstants(void)
{
    const_int_pos_122 = PyInt_FromLong( 122l );
    const_int_pos_156 = PyInt_FromLong( 156l );
    const_int_pos_228 = PyInt_FromLong( 228l );
    const_int_pos_250 = PyInt_FromLong( 250l );
    const_int_pos_4560 = PyInt_FromLong( 4560l );
    const_int_pos_32905 = PyInt_FromLong( 32905l );
    const_str_plain_did = UNSTREAM_STRING( &constant_bin[ 238284 ], 3, 1 );
    const_str_plain_idd = UNSTREAM_STRING( &constant_bin[ 3776 ], 3, 1 );
    const_int_pos_131097 = PyInt_FromLong( 131097l );
    const_str_plain_CHAR = UNSTREAM_STRING( &constant_bin[ 301220 ], 4, 1 );
    const_str_plain_GUID = UNSTREAM_STRING( &constant_bin[ 298811 ], 4, 1 );
    const_str_plain_HKEY = UNSTREAM_STRING( &constant_bin[ 298533 ], 4, 1 );
    const_str_plain_HWND = UNSTREAM_STRING( &constant_bin[ 298865 ], 4, 1 );
    const_str_plain_NULL = UNSTREAM_STRING( &constant_bin[ 299895 ], 4, 1 );
    const_str_plain_hkey = UNSTREAM_STRING( &constant_bin[ 2540765 ], 4, 1 );
    const_str_plain_Data1 = UNSTREAM_STRING( &constant_bin[ 2540769 ], 5, 1 );
    const_str_plain_Data2 = UNSTREAM_STRING( &constant_bin[ 2540774 ], 5, 1 );
    const_str_plain_Data3 = UNSTREAM_STRING( &constant_bin[ 2540779 ], 5, 1 );
    const_str_plain_Data4 = UNSTREAM_STRING( &constant_bin[ 2540784 ], 5, 1 );
    const_str_plain_Flags = UNSTREAM_STRING( &constant_bin[ 563733 ], 5, 1 );
    const_str_plain_PBYTE = UNSTREAM_STRING( &constant_bin[ 22908 ], 5, 1 );
    const_str_plain_PHKEY = UNSTREAM_STRING( &constant_bin[ 2540789 ], 5, 1 );
    const_str_plain_ULONG = UNSTREAM_STRING( &constant_bin[ 299762 ], 5, 1 );
    const_str_plain_g_hdi = UNSTREAM_STRING( &constant_bin[ 300132 ], 5, 1 );
    const_str_plain_LPBYTE = UNSTREAM_STRING( &constant_bin[ 299531 ], 6, 1 );
    const_str_plain_PCTSTR = UNSTREAM_STRING( &constant_bin[ 298837 ], 6, 1 );
    const_str_plain_PDWORD = UNSTREAM_STRING( &constant_bin[ 299153 ], 6, 1 );
    const_str_plain_REGSAM = UNSTREAM_STRING( &constant_bin[ 299315 ], 6, 1 );
    const_str_plain_REG_SZ = UNSTREAM_STRING( &constant_bin[ 2540794 ], 6, 1 );
    const_str_plain_cbSize = UNSTREAM_STRING( &constant_bin[ 2540800 ], 6, 1 );
    const_str_plain_windll = UNSTREAM_STRING( &constant_bin[ 2540806 ], 6, 1 );
    const_str_plain_DevInst = UNSTREAM_STRING( &constant_bin[ 2540812 ], 7, 1 );
    const_str_plain_devinfo = UNSTREAM_STRING( &constant_bin[ 2540819 ], 7, 1 );
    const_str_plain_dwIndex = UNSTREAM_STRING( &constant_bin[ 2540826 ], 7, 1 );
    const_str_plain_Advapi32 = UNSTREAM_STRING( &constant_bin[ 2540833 ], 8, 1 );
    const_str_plain_HDEVINFO = UNSTREAM_STRING( &constant_bin[ 298705 ], 8, 1 );
    const_str_plain_KEY_READ = UNSTREAM_STRING( &constant_bin[ 300971 ], 8, 1 );
    const_str_plain_PortName = UNSTREAM_STRING( &constant_bin[ 301086 ], 8, 1 );
    const_str_plain_advapi32 = UNSTREAM_STRING( &constant_bin[ 299385 ], 8, 1 );
    const_str_plain_c_char_p = UNSTREAM_STRING( &constant_bin[ 2540841 ], 8, 1 );
    const_str_plain_dwNeeded = UNSTREAM_STRING( &constant_bin[ 300554 ], 8, 1 );
    const_str_plain_errcheck = UNSTREAM_STRING( &constant_bin[ 2540849 ], 8, 1 );
    const_str_plain_setupapi = UNSTREAM_STRING( &constant_bin[ 298675 ], 8, 1 );
    const_long_pos_2262880736 = PyLong_FromUnsignedLong( 2262880736ul );
    const_str_plain_ClassGuid = UNSTREAM_STRING( &constant_bin[ 2540857 ], 9, 1 );
    const_str_plain_DIREG_DEV = UNSTREAM_STRING( &constant_bin[ 300933 ], 9, 1 );
    const_str_plain_port_name = UNSTREAM_STRING( &constant_bin[ 449993 ], 9, 1 );
    const_str_plain_DevicePath = UNSTREAM_STRING( &constant_bin[ 2540866 ], 10, 1 );
    const_str_plain_ACCESS_MASK = UNSTREAM_STRING( &constant_bin[ 298559 ], 11, 1 );
    const_str_plain_LoadLibrary = UNSTREAM_STRING( &constant_bin[ 2540876 ], 11, 1 );
    const_str_plain_RegCloseKey = UNSTREAM_STRING( &constant_bin[ 299415 ], 11, 1 );
    const_str_plain_ValidHandle = UNSTREAM_STRING( &constant_bin[ 298932 ], 11, 1 );
    const_str_plain_byte_buffer = UNSTREAM_STRING( &constant_bin[ 300605 ], 11, 1 );
    const_str_plain_szHardwareID = UNSTREAM_STRING( &constant_bin[ 2540887 ], 12, 1 );
    const_str_plain_DIGCF_PRESENT = UNSTREAM_STRING( &constant_bin[ 299928 ], 13, 1 );
    const_str_plain_szFriendlyName = UNSTREAM_STRING( &constant_bin[ 2540899 ], 14, 1 );
    const_str_plain_RegQueryValueEx = UNSTREAM_STRING( &constant_bin[ 299559 ], 15, 1 );
    const_str_plain_SP_DEVINFO_DATA = UNSTREAM_STRING( &constant_bin[ 298592 ], 15, 1 );
    const_str_plain_DICS_FLAG_GLOBAL = UNSTREAM_STRING( &constant_bin[ 300888 ], 16, 1 );
    const_str_plain_PSP_DEVINFO_DATA = UNSTREAM_STRING( &constant_bin[ 298965 ], 16, 1 );
    const_str_plain_RegQueryValueExA = UNSTREAM_STRING( &constant_bin[ 2540913 ], 16, 1 );
    const_str_plain_SPDRP_HARDWAREID = UNSTREAM_STRING( &constant_bin[ 300706 ], 16, 1 );
    const_str_plain_port_name_buffer = UNSTREAM_STRING( &constant_bin[ 2540929 ], 16, 1 );
    const_str_plain_port_name_length = UNSTREAM_STRING( &constant_bin[ 2540945 ], 16, 1 );
    const_tuple_str_plain_HKEY_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HKEY_tuple, 0, const_str_plain_HKEY ); Py_INCREF( const_str_plain_HKEY );
    const_tuple_str_plain_HWND_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HWND_tuple, 0, const_str_plain_HWND ); Py_INCREF( const_str_plain_HWND );
    const_tuple_str_plain_LONG_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LONG_tuple, 0, const_str_plain_LONG ); Py_INCREF( const_str_plain_LONG );
    const_tuple_str_plain_ULONG_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ULONG_tuple, 0, const_str_plain_ULONG ); Py_INCREF( const_str_plain_ULONG );
    const_str_plain_GUID_CLASS_COMPORT = UNSTREAM_STRING( &constant_bin[ 299848 ], 18, 1 );
    const_str_plain_InterfaceClassGuid = UNSTREAM_STRING( &constant_bin[ 2540961 ], 18, 1 );
    const_str_plain_SPDRP_FRIENDLYNAME = UNSTREAM_STRING( &constant_bin[ 300792 ], 18, 1 );
    const_str_plain_list_ports_windows = UNSTREAM_STRING( &constant_bin[ 2540979 ], 18, 1 );
    const_tuple_str_plain_buffer_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_buffer_tuple, 0, const_str_plain_buffer ); Py_INCREF( const_str_plain_buffer );
    const_tuple_str_plain_length_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_length_tuple, 0, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    const_str_plain_ERROR_NO_MORE_ITEMS = UNSTREAM_STRING( &constant_bin[ 300180 ], 19, 1 );
    const_str_plain_SetupDiGetClassDevs = UNSTREAM_STRING( &constant_bin[ 298891 ], 19, 1 );
    const_str_plain_SetupDiGetClassDevsA = UNSTREAM_STRING( &constant_bin[ 2540997 ], 20, 1 );
    const_str_plain_SetupDiOpenDevRegKey = UNSTREAM_STRING( &constant_bin[ 299343 ], 20, 1 );
    const_str_plain_DIGCF_DEVICEINTERFACE = UNSTREAM_STRING( &constant_bin[ 299970 ], 21, 1 );
    const_str_plain_SP_DEVICE_INTERFACE_DATA = UNSTREAM_STRING( &constant_bin[ 298629 ], 24, 1 );
    const_str_plain_ERROR_INSUFFICIENT_BUFFER = UNSTREAM_STRING( &constant_bin[ 300288 ], 25, 1 );
    const_str_plain_PSP_DEVICE_INTERFACE_DATA = UNSTREAM_STRING( &constant_bin[ 299003 ], 25, 1 );
    const_str_plain_SetupDiEnumDeviceInterfaces = UNSTREAM_STRING( &constant_bin[ 299050 ], 27, 1 );
    const_str_plain_SetupDiDestroyDeviceInfoList = UNSTREAM_STRING( &constant_bin[ 298735 ], 28, 1 );
    const_str_plain_SetupDiGetDeviceInterfaceDetail = UNSTREAM_STRING( &constant_bin[ 299181 ], 31, 1 );
    const_list_7bdf40026cc409f754b398d5081173e9_list = PyList_New( 8 );
    PyList_SET_ITEM( const_list_7bdf40026cc409f754b398d5081173e9_list, 0, const_int_pos_80 ); Py_INCREF( const_int_pos_80 );
    PyList_SET_ITEM( const_list_7bdf40026cc409f754b398d5081173e9_list, 1, const_int_pos_111 ); Py_INCREF( const_int_pos_111 );
    PyList_SET_ITEM( const_list_7bdf40026cc409f754b398d5081173e9_list, 2, const_int_pos_114 ); Py_INCREF( const_int_pos_114 );
    PyList_SET_ITEM( const_list_7bdf40026cc409f754b398d5081173e9_list, 3, const_int_pos_116 ); Py_INCREF( const_int_pos_116 );
    PyList_SET_ITEM( const_list_7bdf40026cc409f754b398d5081173e9_list, 4, const_int_pos_78 ); Py_INCREF( const_int_pos_78 );
    PyList_SET_ITEM( const_list_7bdf40026cc409f754b398d5081173e9_list, 5, const_int_pos_97 ); Py_INCREF( const_int_pos_97 );
    PyList_SET_ITEM( const_list_7bdf40026cc409f754b398d5081173e9_list, 6, const_int_pos_109 ); Py_INCREF( const_int_pos_109 );
    PyList_SET_ITEM( const_list_7bdf40026cc409f754b398d5081173e9_list, 7, const_int_pos_101 ); Py_INCREF( const_int_pos_101 );
    const_str_plain_PSP_DEVICE_INTERFACE_DETAIL_DATA = UNSTREAM_STRING( &constant_bin[ 299099 ], 32, 1 );
    const_str_plain_SetupDiGetDeviceInterfaceDetailA = UNSTREAM_STRING( &constant_bin[ 2541017 ], 32, 1 );
    const_str_plain_SetupDiGetDeviceRegistryProperty = UNSTREAM_STRING( &constant_bin[ 299261 ], 32, 1 );
    const_str_digest_0b418e1deb3a9bd52e7de5065502e70a = UNSTREAM_STRING( &constant_bin[ 2541049 ], 23, 0 );
    const_str_digest_145ea9ab9729024a0749152af908953e = UNSTREAM_STRING( &constant_bin[ 2541072 ], 22, 0 );
    const_str_digest_3e05259280f3a98998b8bd665564b05b = UNSTREAM_STRING( &constant_bin[ 2541094 ], 30, 0 );
    const_str_digest_69b4548a1d6e27450c816aa80143679d = UNSTREAM_STRING( &constant_bin[ 2541124 ], 4, 0 );
    const_str_digest_8a2a97af4cd741299455b803d34f6a34 = UNSTREAM_STRING( &constant_bin[ 2541128 ], 67, 0 );
    const_str_digest_b815affb56480a7641e05bc66038e024 = UNSTREAM_STRING( &constant_bin[ 2541195 ], 82, 0 );
    const_str_digest_e0ed297f640f7ad3fb9bc53a231efc45 = UNSTREAM_STRING( &constant_bin[ 2541277 ], 13, 0 );
    const_str_digest_fe160da9dcd1d4a302a2f245c18e2285 = UNSTREAM_STRING( &constant_bin[ 2541290 ], 25, 0 );
    const_str_plain_SP_DEVICE_INTERFACE_DETAIL_DATA_A = UNSTREAM_STRING( &constant_bin[ 300345 ], 33, 1 );
    const_str_plain_SetupDiGetDeviceRegistryPropertyA = UNSTREAM_STRING( &constant_bin[ 2541315 ], 33, 1 );
    const_tuple_2648f8cc0a5ac5ba109c6dc00fe5933f_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_2648f8cc0a5ac5ba109c6dc00fe5933f_tuple, 0, const_str_plain_g_hdi ); Py_INCREF( const_str_plain_g_hdi );
    PyTuple_SET_ITEM( const_tuple_2648f8cc0a5ac5ba109c6dc00fe5933f_tuple, 1, const_str_plain_dwIndex ); Py_INCREF( const_str_plain_dwIndex );
    PyTuple_SET_ITEM( const_tuple_2648f8cc0a5ac5ba109c6dc00fe5933f_tuple, 2, const_str_plain_did ); Py_INCREF( const_str_plain_did );
    PyTuple_SET_ITEM( const_tuple_2648f8cc0a5ac5ba109c6dc00fe5933f_tuple, 3, const_str_plain_dwNeeded ); Py_INCREF( const_str_plain_dwNeeded );
    PyTuple_SET_ITEM( const_tuple_2648f8cc0a5ac5ba109c6dc00fe5933f_tuple, 4, const_str_plain_SP_DEVICE_INTERFACE_DETAIL_DATA_A ); Py_INCREF( const_str_plain_SP_DEVICE_INTERFACE_DETAIL_DATA_A );
    PyTuple_SET_ITEM( const_tuple_2648f8cc0a5ac5ba109c6dc00fe5933f_tuple, 5, const_str_plain_idd ); Py_INCREF( const_str_plain_idd );
    PyTuple_SET_ITEM( const_tuple_2648f8cc0a5ac5ba109c6dc00fe5933f_tuple, 6, const_str_plain_devinfo ); Py_INCREF( const_str_plain_devinfo );
    PyTuple_SET_ITEM( const_tuple_2648f8cc0a5ac5ba109c6dc00fe5933f_tuple, 7, const_str_plain_szHardwareID ); Py_INCREF( const_str_plain_szHardwareID );
    PyTuple_SET_ITEM( const_tuple_2648f8cc0a5ac5ba109c6dc00fe5933f_tuple, 8, const_str_plain_szFriendlyName ); Py_INCREF( const_str_plain_szFriendlyName );
    PyTuple_SET_ITEM( const_tuple_2648f8cc0a5ac5ba109c6dc00fe5933f_tuple, 9, const_str_plain_port_name ); Py_INCREF( const_str_plain_port_name );
    PyTuple_SET_ITEM( const_tuple_2648f8cc0a5ac5ba109c6dc00fe5933f_tuple, 10, const_str_plain_hkey ); Py_INCREF( const_str_plain_hkey );
    PyTuple_SET_ITEM( const_tuple_2648f8cc0a5ac5ba109c6dc00fe5933f_tuple, 11, const_str_plain_port_name_buffer ); Py_INCREF( const_str_plain_port_name_buffer );
    PyTuple_SET_ITEM( const_tuple_2648f8cc0a5ac5ba109c6dc00fe5933f_tuple, 12, const_str_plain_port_name_length ); Py_INCREF( const_str_plain_port_name_length );
    const_tuple_str_plain_ULONG_PTR_str_plain_is_64bit_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ULONG_PTR_str_plain_is_64bit_tuple, 0, const_str_plain_ULONG_PTR ); Py_INCREF( const_str_plain_ULONG_PTR );
    PyTuple_SET_ITEM( const_tuple_str_plain_ULONG_PTR_str_plain_is_64bit_tuple, 1, const_str_plain_is_64bit ); Py_INCREF( const_str_plain_is_64bit );
    const_tuple_str_plain_buffer_str_plain_s_str_plain_c_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_buffer_str_plain_s_str_plain_c_tuple, 0, const_str_plain_buffer ); Py_INCREF( const_str_plain_buffer );
    PyTuple_SET_ITEM( const_tuple_str_plain_buffer_str_plain_s_str_plain_c_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_buffer_str_plain_s_str_plain_c_tuple, 2, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple, 0, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple, 2, const_str_plain_arguments ); Py_INCREF( const_str_plain_arguments );
}

// The module code objects.
static PyCodeObject *codeobj_9e26298a43500a4b37b6b4c4a9e4b949;
static PyCodeObject *codeobj_cb13cce52bb502d099ccf008b2288636;
static PyCodeObject *codeobj_862b30b71bed2a4d68e29d07cef881ce;
static PyCodeObject *codeobj_4026f24093dec0eb4c4355e6f00d1ad2;
static PyCodeObject *codeobj_19b341bb30926dfaa4f75b71c78e8d37;
static PyCodeObject *codeobj_5ccd987479c730fe0b91cbfc4ae5c7aa;
static PyCodeObject *codeobj_08adf67a706ba39bc9f6ee93a99febc9;
static PyCodeObject *codeobj_c14dd98d8f04034b9eef61e1e8124d9a;
static PyCodeObject *codeobj_f736eb3d75784aa9011162d9121b55b0;
static PyCodeObject *codeobj_99b80cc6eac0278b015a7c5266d6db9a;
static PyCodeObject *codeobj_4251dbedc7c2c74785741a1aca07d12e;
static PyCodeObject *codeobj_317ad4227547d34ce929ed1d7d3a3627;
static PyCodeObject *codeobj_98cd7e2de12ff8e91db7985c60796979;
static PyCodeObject *codeobj_d0bf8b6574b126ed9e083b5d3a14968f;
static PyCodeObject *codeobj_3281bd1ff30fbcf9bf51a14efcc0da6e;
static PyCodeObject *codeobj_d66e44318f7721601ee98467aab74bfc;

static void _initModuleCodeObjects(void)
{
    codeobj_9e26298a43500a4b37b6b4c4a9e4b949 = MAKE_CODEOBJ( const_str_digest_8a2a97af4cd741299455b803d34f6a34, const_str_plain_GUID, 47, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_cb13cce52bb502d099ccf008b2288636 = MAKE_CODEOBJ( const_str_digest_8a2a97af4cd741299455b803d34f6a34, const_str_plain_SP_DEVICE_INTERFACE_DATA, 74, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_862b30b71bed2a4d68e29d07cef881ce = MAKE_CODEOBJ( const_str_digest_8a2a97af4cd741299455b803d34f6a34, const_str_plain_SP_DEVICE_INTERFACE_DETAIL_DATA_A, 161, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_4026f24093dec0eb4c4355e6f00d1ad2 = MAKE_CODEOBJ( const_str_digest_8a2a97af4cd741299455b803d34f6a34, const_str_plain_SP_DEVINFO_DATA, 63, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_19b341bb30926dfaa4f75b71c78e8d37 = MAKE_CODEOBJ( const_str_digest_8a2a97af4cd741299455b803d34f6a34, const_str_plain_ValidHandle, 4, const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_5ccd987479c730fe0b91cbfc4ae5c7aa = MAKE_CODEOBJ( const_str_digest_8a2a97af4cd741299455b803d34f6a34, const_str_plain___str__, 54, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_08adf67a706ba39bc9f6ee93a99febc9 = MAKE_CODEOBJ( const_str_digest_8a2a97af4cd741299455b803d34f6a34, const_str_plain___str__, 54, const_tuple_str_plain_self_str_plain_d_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_c14dd98d8f04034b9eef61e1e8124d9a = MAKE_CODEOBJ( const_str_digest_8a2a97af4cd741299455b803d34f6a34, const_str_plain___str__, 70, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_f736eb3d75784aa9011162d9121b55b0 = MAKE_CODEOBJ( const_str_digest_8a2a97af4cd741299455b803d34f6a34, const_str_plain___str__, 81, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_99b80cc6eac0278b015a7c5266d6db9a = MAKE_CODEOBJ( const_str_digest_8a2a97af4cd741299455b803d34f6a34, const_str_plain___str__, 166, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_4251dbedc7c2c74785741a1aca07d12e = MAKE_CODEOBJ( const_str_digest_8a2a97af4cd741299455b803d34f6a34, const_str_plain_byte_buffer, 35, const_tuple_str_plain_length_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_317ad4227547d34ce929ed1d7d3a3627 = MAKE_CODEOBJ( const_str_digest_8a2a97af4cd741299455b803d34f6a34, const_str_plain_comports, 141, const_tuple_empty, 0, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE );
    codeobj_98cd7e2de12ff8e91db7985c60796979 = MAKE_CODEOBJ( const_str_digest_8a2a97af4cd741299455b803d34f6a34, const_str_plain_comports, 141, const_tuple_2648f8cc0a5ac5ba109c6dc00fe5933f_tuple, 0, CO_NEWLOCALS | CO_GENERATOR | CO_OPTIMIZED | CO_NOFREE );
    codeobj_d0bf8b6574b126ed9e083b5d3a14968f = MAKE_CODEOBJ( const_str_digest_8a2a97af4cd741299455b803d34f6a34, const_str_plain_list_ports_windows, 0, const_tuple_empty, 0, CO_NOFREE );
    codeobj_3281bd1ff30fbcf9bf51a14efcc0da6e = MAKE_CODEOBJ( const_str_digest_8a2a97af4cd741299455b803d34f6a34, const_str_plain_string, 39, const_tuple_str_plain_buffer_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_d66e44318f7721601ee98467aab74bfc = MAKE_CODEOBJ( const_str_digest_8a2a97af4cd741299455b803d34f6a34, const_str_plain_string, 39, const_tuple_str_plain_buffer_str_plain_s_str_plain_c_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_4_GUID_of_module_serial$tools$list_ports_windows(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_SP_DEVINFO_DATA_of_module_serial$tools$list_ports_windows(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_SP_DEVICE_INTERFACE_DATA_of_module_serial$tools$list_ports_windows(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_1_SP_DEVICE_INTERFACE_DETAIL_DATA_A_of_function_7_comports_of_module_serial$tools$list_ports_windows( PyObjectLocalVariable& closure_dwNeeded );


static PyObject *MAKE_FUNCTION_function_1_ValidHandle_of_module_serial$tools$list_ports_windows(  );


static PyObject *MAKE_FUNCTION_function_1___str___of_class_1_SP_DEVICE_INTERFACE_DETAIL_DATA_A_of_function_7_comports_of_module_serial$tools$list_ports_windows(  );


static PyObject *MAKE_FUNCTION_function_1___str___of_class_4_GUID_of_module_serial$tools$list_ports_windows(  );


static PyObject *MAKE_FUNCTION_function_1___str___of_class_5_SP_DEVINFO_DATA_of_module_serial$tools$list_ports_windows(  );


static PyObject *MAKE_FUNCTION_function_1___str___of_class_6_SP_DEVICE_INTERFACE_DATA_of_module_serial$tools$list_ports_windows(  );


static PyObject *MAKE_FUNCTION_function_2_byte_buffer_of_module_serial$tools$list_ports_windows(  );


static PyObject *MAKE_FUNCTION_function_3_string_of_module_serial$tools$list_ports_windows(  );


static PyObject *MAKE_FUNCTION_function_7_comports_of_module_serial$tools$list_ports_windows(  );


// The module function definitions.
static PyObject *impl_function_1_ValidHandle_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_func, PyObject *_python_par_arguments )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_value; par_value.object = _python_par_value;
    PyObjectLocalVariable par_func; par_func.object = _python_par_func;
    PyObjectLocalVariable par_arguments; par_arguments.object = _python_par_arguments;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_called_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_19b341bb30926dfaa4f75b71c78e8d37, module_serial$tools$list_ports_windows );
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
    tmp_compare_left_1 = par_value.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5634 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 5;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 5;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 6;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_WinError );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 6;
    tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 6;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_return_value = par_value.object;

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5634 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 7;
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
    if ((par_value.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_value,
            par_value.object
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
    if ((par_arguments.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arguments,
            par_arguments.object
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
static PyObject *fparse_function_1_ValidHandle_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_func = NULL;
    PyObject *_python_par_arguments = NULL;
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
                PyErr_Format( PyExc_TypeError, "ValidHandle() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_value == key )
            {
                assert( _python_par_value == NULL );
                _python_par_value = value;

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
            if ( found == false && const_str_plain_arguments == key )
            {
                assert( _python_par_arguments == NULL );
                _python_par_arguments = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_value, key ) == 1 )
            {
                assert( _python_par_value == NULL );
                _python_par_value = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arguments, key ) == 1 )
            {
                assert( _python_par_arguments == NULL );
                _python_par_arguments = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "ValidHandle() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_value != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_value == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_value = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_func = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_arguments != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_arguments = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_arguments == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_arguments = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_value == NULL || _python_par_func == NULL || _python_par_arguments == NULL ))
    {
        PyObject *values[] = { _python_par_value, _python_par_func, _python_par_arguments };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_ValidHandle_of_module_serial$tools$list_ports_windows( self, _python_par_value, _python_par_func, _python_par_arguments );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_arguments );

    return NULL;
}

static PyObject *dparse_function_1_ValidHandle_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_1_ValidHandle_of_module_serial$tools$list_ports_windows( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_ValidHandle_of_module_serial$tools$list_ports_windows( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_byte_buffer_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject *_python_par_length )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_length; par_length.object = _python_par_length;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4251dbedc7c2c74785741a1aca07d12e, module_serial$tools$list_ports_windows );
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
    tmp_binop_left_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BYTE );

    if (unlikely( tmp_binop_left_1 == NULL ))
    {
        tmp_binop_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTE );
    }

    if ( tmp_binop_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299616 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 37;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = par_length.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 16815 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 37;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 37;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 37;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 37;
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
    if ((par_length.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_length,
            par_length.object
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
static PyObject *fparse_function_2_byte_buffer_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_length = NULL;
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
                PyErr_Format( PyExc_TypeError, "byte_buffer() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_length == key )
            {
                assert( _python_par_length == NULL );
                _python_par_length = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_length, key ) == 1 )
            {
                assert( _python_par_length == NULL );
                _python_par_length = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "byte_buffer() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_length != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_length = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_length == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_length = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_length == NULL ))
    {
        PyObject *values[] = { _python_par_length };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_byte_buffer_of_module_serial$tools$list_ports_windows( self, _python_par_length );

error_exit:;

    Py_XDECREF( _python_par_length );

    return NULL;
}

static PyObject *dparse_function_2_byte_buffer_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_byte_buffer_of_module_serial$tools$list_ports_windows( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_byte_buffer_of_module_serial$tools$list_ports_windows( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_string_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject *_python_par_buffer )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_buffer; par_buffer.object = _python_par_buffer;
    PyObjectLocalVariable var_s;
    PyObjectLocalVariable var_c;
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
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_chr_arg_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_s.object == NULL );
    var_s.object = tmp_assign_source_1;

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3281bd1ff30fbcf9bf51a14efcc0da6e, module_serial$tools$list_ports_windows );
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
    tmp_iter_arg_1 = par_buffer.object;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 60881 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
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
        frame_function->f_lineno = 41;
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

    if (var_c.object == NULL)
    {
        var_c.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = var_c.object;
        var_c.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_compare_left_1 = var_c.object;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
        goto try_finally_handler_1;
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
    goto loop_end_1;
    branch_no_1:;
    tmp_source_name_1 = var_s.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 43;
        goto try_finally_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 43;
        goto try_finally_handler_1;
    }
    tmp_binop_left_1 = var_c.object;

    tmp_binop_right_1 = const_int_pos_255;
    tmp_chr_arg_1 = BINARY_OPERATION( PyNumber_And, tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_chr_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 43;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_1 = BUILTIN_CHR( tmp_chr_arg_1 );
    Py_DECREF( tmp_chr_arg_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 43;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 43;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 43;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 41;
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
    tmp_source_name_2 = const_str_empty;
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 44;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = var_s.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 369 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 44;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 44;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 44;
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
    if ((var_c.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_c,
            var_c.object
        );

    }
    if ((par_buffer.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_buffer,
            par_buffer.object
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
static PyObject *fparse_function_3_string_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_buffer = NULL;
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
                PyErr_Format( PyExc_TypeError, "string() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_buffer == key )
            {
                assert( _python_par_buffer == NULL );
                _python_par_buffer = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_buffer, key ) == 1 )
            {
                assert( _python_par_buffer == NULL );
                _python_par_buffer = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "string() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_buffer != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_buffer = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_buffer == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_buffer = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_buffer == NULL ))
    {
        PyObject *values[] = { _python_par_buffer };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_string_of_module_serial$tools$list_ports_windows( self, _python_par_buffer );

error_exit:;

    Py_XDECREF( _python_par_buffer );

    return NULL;
}

static PyObject *dparse_function_3_string_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_string_of_module_serial$tools$list_ports_windows( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_string_of_module_serial$tools$list_ports_windows( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_4_GUID_of_module_serial$tools$list_ports_windows(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var__fields_;
    PyObjectLocalVariable var___str__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_d85f9b7d2da9d405ffffc2aaf9deb17f;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9e26298a43500a4b37b6b4c4a9e4b949, module_serial$tools$list_ports_windows );
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
    tmp_assign_source_2 = PyList_New( 4 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_Data1;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299649 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_1 );
    PyList_SET_ITEM( tmp_assign_source_2, 0, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_Data2;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_WORD );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299683 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_2 );
    PyList_SET_ITEM( tmp_assign_source_2, 1, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_3 = const_str_plain_Data3;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_WORD );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299683 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_3 );
    PyList_SET_ITEM( tmp_assign_source_2, 2, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_Data4;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_4 );
    tmp_binop_left_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BYTE );

    if (unlikely( tmp_binop_left_1 == NULL ))
    {
        tmp_binop_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTE );
    }

    if ( tmp_binop_left_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299616 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = const_int_pos_8;
    tmp_tuple_element_4 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );

        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_4 );
    PyList_SET_ITEM( tmp_assign_source_2, 3, tmp_list_element_1 );
    assert( var__fields_.object == NULL );
    var__fields_.object = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1___str___of_class_4_GUID_of_module_serial$tools$list_ports_windows(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 54;
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
    if ((var__fields_.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__fields_,
            var__fields_.object
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
    if ((var__fields_.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__fields_,
            var__fields_.object
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


static PyObject *impl_function_1___str___of_class_4_GUID_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_d;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_call_pos_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_res;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5ccd987479c730fe0b91cbfc4ae5c7aa, module_serial$tools$list_ports_windows );
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
    tmp_binop_left_1 = const_str_digest_145ea9ab9729024a0749152af908953e;
    tmp_binop_right_1 = PyTuple_New( 5 );
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Data1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 56;
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

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Data2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Data3 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 2, tmp_tuple_element_1 );
    tmp_source_name_4 = const_str_empty;
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_join );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = NULL;
    // Tried code
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = NULL;
    // Tried code
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 2;
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 59;
        goto try_finally_handler_2;
    }

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Data4 );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 59;
        goto try_finally_handler_2;
    }
    tmp_iter_arg_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 59;
        goto try_finally_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 59;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_2;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_3 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {
            Py_DECREF( tmp_binop_right_1 );
            Py_DECREF( tmp_called_1 );
            Py_DECREF( tmp_call_pos_1 );
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 59;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_assign_source_4 = tmp_listcontr_1__iter_value_0.object;

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_binop_left_2 = const_str_digest_69b4548a1d6e27450c816aa80143679d;
    tmp_binop_right_2 = var_d.object;

    tmp_append_value_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 59;
        goto try_finally_handler_2;
    }
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 59;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_pos_1 );

        frame_function->f_lineno = 59;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_tuple_element_2 = tmp_listcontr_1__listcontr_result.object;

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
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_2 );
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
    frame_function->f_lineno = 59;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_POSARGS( tmp_called_1, tmp_call_pos_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_pos_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 3, tmp_tuple_element_1 );
    tmp_source_name_6 = const_str_empty;
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_join );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_2 = NULL;
    // Tried code
    tmp_call_pos_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = NULL;
    // Tried code
    tmp_sliceslicedel_index_lower_2 = 2;
    tmp_slice_index_upper_2 = PY_SSIZE_T_MAX;
    tmp_source_name_7 = par_self.object;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto try_finally_handler_4;
    }

    tmp_slice_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Data4 );
    if ( tmp_slice_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 60;
        goto try_finally_handler_4;
    }
    tmp_iter_arg_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    Py_DECREF( tmp_slice_source_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 60;
        goto try_finally_handler_4;
    }
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 60;
        goto try_finally_handler_4;
    }
    assert( tmp_listcontr_2__listcontr_iter.object == NULL );
    tmp_listcontr_2__listcontr_iter.object = tmp_assign_source_5;

    tmp_assign_source_6 = PyList_New( 0 );
    assert( tmp_listcontr_2__listcontr_result.object == NULL );
    tmp_listcontr_2__listcontr_result.object = tmp_assign_source_6;

    loop_start_2:;
    tmp_next_source_2 = tmp_listcontr_2__listcontr_iter.object;

    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_2 );
    if (tmp_assign_source_7 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_2;

        }
        else
        {
            Py_DECREF( tmp_binop_right_1 );
            Py_DECREF( tmp_called_2 );
            Py_DECREF( tmp_call_pos_2 );
            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 60;
            goto try_finally_handler_4;
        }
    }

    if (tmp_listcontr_2__iter_value_0.object == NULL)
    {
        tmp_listcontr_2__iter_value_0.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = tmp_listcontr_2__iter_value_0.object;
        tmp_listcontr_2__iter_value_0.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_assign_source_8 = tmp_listcontr_2__iter_value_0.object;

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_8 );
        Py_DECREF( old );
    }
    tmp_append_to_2 = tmp_listcontr_2__listcontr_result.object;

    tmp_binop_left_3 = const_str_digest_69b4548a1d6e27450c816aa80143679d;
    tmp_binop_right_3 = var_d.object;

    tmp_append_value_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 60;
        goto try_finally_handler_4;
    }
    tmp_res = PyList_Append( tmp_append_to_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 60;
        goto try_finally_handler_4;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_2 );

        frame_function->f_lineno = 60;
        goto try_finally_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_tuple_element_3 = tmp_listcontr_2__listcontr_result.object;

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
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_call_pos_2, 0, tmp_tuple_element_3 );
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
    frame_function->f_lineno = 60;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_POSARGS( tmp_called_2, tmp_call_pos_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_pos_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 4, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 55;
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
static PyObject *fparse_function_1___str___of_class_4_GUID_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___str___of_class_4_GUID_of_module_serial$tools$list_ports_windows( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___str___of_class_4_GUID_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1___str___of_class_4_GUID_of_module_serial$tools$list_ports_windows( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___str___of_class_4_GUID_of_module_serial$tools$list_ports_windows( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_5_SP_DEVINFO_DATA_of_module_serial$tools$list_ports_windows(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var__fields_;
    PyObjectLocalVariable var___str__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_d85f9b7d2da9d405ffffc2aaf9deb17f;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4026f24093dec0eb4c4355e6f00d1ad2, module_serial$tools$list_ports_windows );
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
    tmp_assign_source_2 = PyList_New( 4 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_cbSize;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299649 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_1 );
    PyList_SET_ITEM( tmp_assign_source_2, 0, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_ClassGuid;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GUID );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299716 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_2 );
    PyList_SET_ITEM( tmp_assign_source_2, 1, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_3 = const_str_plain_DevInst;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299649 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_3 );
    PyList_SET_ITEM( tmp_assign_source_2, 2, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_Reserved;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299749 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_4 );
    PyList_SET_ITEM( tmp_assign_source_2, 3, tmp_list_element_1 );
    assert( var__fields_.object == NULL );
    var__fields_.object = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1___str___of_class_5_SP_DEVINFO_DATA_of_module_serial$tools$list_ports_windows(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 70;
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
    if ((var__fields_.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__fields_,
            var__fields_.object
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
    if ((var__fields_.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__fields_,
            var__fields_.object
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


static PyObject *impl_function_1___str___of_class_5_SP_DEVINFO_DATA_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject *_python_par_self )
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c14dd98d8f04034b9eef61e1e8124d9a, module_serial$tools$list_ports_windows );
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
    tmp_binop_left_1 = const_str_digest_0b418e1deb3a9bd52e7de5065502e70a;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ClassGuid );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 71;
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

        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_DevInst );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
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
static PyObject *fparse_function_1___str___of_class_5_SP_DEVINFO_DATA_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___str___of_class_5_SP_DEVINFO_DATA_of_module_serial$tools$list_ports_windows( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___str___of_class_5_SP_DEVINFO_DATA_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1___str___of_class_5_SP_DEVINFO_DATA_of_module_serial$tools$list_ports_windows( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___str___of_class_5_SP_DEVINFO_DATA_of_module_serial$tools$list_ports_windows( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_6_SP_DEVICE_INTERFACE_DATA_of_module_serial$tools$list_ports_windows(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var__fields_;
    PyObjectLocalVariable var___str__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_d85f9b7d2da9d405ffffc2aaf9deb17f;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_cb13cce52bb502d099ccf008b2288636, module_serial$tools$list_ports_windows );
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
    tmp_assign_source_2 = PyList_New( 4 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_cbSize;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299649 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_1 );
    PyList_SET_ITEM( tmp_assign_source_2, 0, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_InterfaceClassGuid;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GUID );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299716 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_2 );
    PyList_SET_ITEM( tmp_assign_source_2, 1, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_3 = const_str_plain_Flags;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299649 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_3 );
    PyList_SET_ITEM( tmp_assign_source_2, 2, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_Reserved;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299749 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_4 );
    PyList_SET_ITEM( tmp_assign_source_2, 3, tmp_list_element_1 );
    assert( var__fields_.object == NULL );
    var__fields_.object = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1___str___of_class_6_SP_DEVICE_INTERFACE_DATA_of_module_serial$tools$list_ports_windows(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 81;
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
    if ((var__fields_.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__fields_,
            var__fields_.object
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
    if ((var__fields_.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__fields_,
            var__fields_.object
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


static PyObject *impl_function_1___str___of_class_6_SP_DEVICE_INTERFACE_DATA_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject *_python_par_self )
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f736eb3d75784aa9011162d9121b55b0, module_serial$tools$list_ports_windows );
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
    tmp_binop_left_1 = const_str_digest_3e05259280f3a98998b8bd665564b05b;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_InterfaceClassGuid );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 82;
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

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Flags );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 82;
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
static PyObject *fparse_function_1___str___of_class_6_SP_DEVICE_INTERFACE_DATA_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___str___of_class_6_SP_DEVICE_INTERFACE_DATA_of_module_serial$tools$list_ports_windows( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___str___of_class_6_SP_DEVICE_INTERFACE_DATA_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1___str___of_class_6_SP_DEVICE_INTERFACE_DATA_of_module_serial$tools$list_ports_windows( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___str___of_class_6_SP_DEVICE_INTERFACE_DATA_of_module_serial$tools$list_ports_windows( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_function_7_comports_of_module_serial$tools$list_ports_windows_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectLocalVariable closure_g_hdi;
    PyObjectLocalVariable closure_dwIndex;
    PyObjectLocalVariable closure_did;
    PyObjectLocalVariable closure_dwNeeded;
    PyObjectLocalVariable closure_SP_DEVICE_INTERFACE_DETAIL_DATA_A;
    PyObjectLocalVariable closure_idd;
    PyObjectLocalVariable closure_devinfo;
    PyObjectLocalVariable closure_szHardwareID;
    PyObjectLocalVariable closure_szFriendlyName;
    PyObjectLocalVariable closure_port_name;
    PyObjectLocalVariable closure_hkey;
    PyObjectLocalVariable closure_port_name_buffer;
    PyObjectLocalVariable closure_port_name_length;
    PyObjectTempVariable closure_for_loop_1__for_iterator;
    PyObjectTempVariable closure_for_loop_1__iter_value;
    PyObjectTempVariable closure_class_creation_1__bases;
    PyObjectTempVariable closure_class_creation_1__class_dict;
    PyObjectTempVariable closure_class_creation_1__metaclass;
    PyObjectTempVariable closure_class_creation_1__class;
};

static void _context_generator_function_7_comports_of_module_serial$tools$list_ports_windows_destructor( void *context_voidptr )
{
    _context_generator_function_7_comports_of_module_serial$tools$list_ports_windows_t *_python_context = (struct _context_generator_function_7_comports_of_module_serial$tools$list_ports_windows_t *)context_voidptr;

    delete _python_context;
}

#ifdef _NUITKA_MAKECONTEXT_INTS
static void function_7_comports_of_module_serial$tools$list_ports_windows_context( int generator_address_1, int generator_address_2 )
{
    // Restore the pointer from ints should it be necessary, often it can be
    // directly received.
    int generator_addresses[2] = {
        generator_address_1,
        generator_address_2
    };

    Nuitka_GeneratorObject *generator = (Nuitka_GeneratorObject *)*(uintptr_t *)&generator_addresses[0];
#else
static void function_7_comports_of_module_serial$tools$list_ports_windows_context( Nuitka_GeneratorObject *generator )
{
#endif

    assertObject( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Make context accessible if one is used.

    NUITKA_MAY_BE_UNUSED struct _context_generator_function_7_comports_of_module_serial$tools$list_ports_windows_t *_python_context = (_context_generator_function_7_comports_of_module_serial$tools$list_ports_windows_t *)generator->m_context;


    // Local variable inits
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
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
    PyObject *tmp_class_bases_1;
    int tmp_cmp_In_1;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotEq_3;
    int tmp_cmp_NotEq_4;
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
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_range_arg_1;
    bool tmp_result;
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
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_yield_1;

    // Actual function code.
    PyFrameObject *frame_function = MAKE_FRAME( codeobj_317ad4227547d34ce929ed1d7d3a3627, module_serial$tools$list_ports_windows );

    Py_INCREF( frame_function );
    generator->m_frame = frame_function;
#if PYTHON_VERSION >= 340
    frame_function->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    // Throwing into unstarted generators is possible. As they don't stand any
    // chance to deal with them, we might as well create traceback on the
    // outside,
    if ( generator->m_exception_type )
    {
        generator->m_yielded = NULL;

        exception_type = generator->m_exception_type;
        generator->m_exception_type = NULL;

        exception_value = generator->m_exception_value;
        generator->m_exception_value = NULL;

        exception_tb = generator->m_exception_tb;;
        generator->m_exception_tb = NULL;

        if (exception_tb == NULL)
        {
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299787 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_byref );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID_CLASS_COMPORT );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GUID_CLASS_COMPORT );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299835 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 143;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = Py_None;
    tmp_call_arg_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_NULL );

    if (unlikely( tmp_call_arg_element_4 == NULL ))
    {
        tmp_call_arg_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NULL );
    }

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299882 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DIGCF_PRESENT );

    if (unlikely( tmp_binop_left_1 == NULL ))
    {
        tmp_binop_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DIGCF_PRESENT );
    }

    if ( tmp_binop_left_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299915 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DIGCF_DEVICEINTERFACE );

    if (unlikely( tmp_binop_right_1 == NULL ))
    {
        tmp_binop_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DIGCF_DEVICEINTERFACE );
    }

    if ( tmp_binop_right_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299957 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 143;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }
    assert( _python_context->closure_g_hdi.object == NULL );
    _python_context->closure_g_hdi.object = tmp_assign_source_1;

    tmp_range_arg_1 = const_int_pos_256;
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }
    assert( _python_context->closure_for_loop_1__for_iterator.object == NULL );
    _python_context->closure_for_loop_1__for_iterator.object = tmp_assign_source_2;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = _python_context->closure_for_loop_1__for_iterator.object;

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
        frame_function->f_lineno = 145;
            goto try_finally_handler_1;
        }
    }

    if (_python_context->closure_for_loop_1__iter_value.object == NULL)
    {
        _python_context->closure_for_loop_1__iter_value.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = _python_context->closure_for_loop_1__iter_value.object;
        _python_context->closure_for_loop_1__iter_value.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    tmp_assign_source_4 = _python_context->closure_for_loop_1__iter_value.object;

    if (_python_context->closure_dwIndex.object == NULL)
    {
        _python_context->closure_dwIndex.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
    }
    else
    {
        PyObject *old = _python_context->closure_dwIndex.object;
        _python_context->closure_dwIndex.object = INCREASE_REFCOUNT( tmp_assign_source_4 );
        Py_DECREF( old );
    }
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SP_DEVICE_INTERFACE_DATA );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SP_DEVICE_INTERFACE_DATA );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300007 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 146;
    tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 146;
        goto try_finally_handler_1;
    }
    if (_python_context->closure_did.object == NULL)
    {
        _python_context->closure_did.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = _python_context->closure_did.object;
        _python_context->closure_did.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto try_finally_handler_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sizeof );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_6 = _python_context->closure_did.object;

    frame_function->f_lineno = 147;
    tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 147;
        goto try_finally_handler_1;
    }
    tmp_assattr_target_1 = _python_context->closure_did.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_cbSize, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 147;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInterfaces );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInterfaces );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300060 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 149;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_7 = _python_context->closure_g_hdi.object;

    if ( tmp_call_arg_element_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300116 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 149;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_8 = Py_None;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 149;
        goto try_finally_handler_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_byref );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_10 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID_CLASS_COMPORT );

    if (unlikely( tmp_call_arg_element_10 == NULL ))
    {
        tmp_call_arg_element_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GUID_CLASS_COMPORT );
    }

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299835 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 149;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 149;
    tmp_call_arg_element_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_11 = _python_context->closure_dwIndex.object;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 149;
        goto try_finally_handler_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_byref );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_9 );

        frame_function->f_lineno = 149;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_13 = _python_context->closure_did.object;

    frame_function->f_lineno = 149;
    tmp_call_arg_element_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_9 );

        frame_function->f_lineno = 149;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 149;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_5, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    Py_DECREF( tmp_call_arg_element_9 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 149;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 149;
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
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto try_finally_handler_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_GetLastError );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 150;
    tmp_compare_left_1 = CALL_FUNCTION_NO_ARGS( tmp_called_8 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto try_finally_handler_1;
    }
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ERROR_NO_MORE_ITEMS );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ERROR_NO_MORE_ITEMS );
    }

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300167 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto try_finally_handler_1;
    }

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 150;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 151;
        goto try_finally_handler_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_WinError );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 151;
    tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS( tmp_called_9 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 151;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_2:;
    goto loop_end_1;
    branch_no_1:;
    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299649 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 154;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 154;
    tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS( tmp_called_10 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 154;
        goto try_finally_handler_1;
    }
    if (_python_context->closure_dwNeeded.object == NULL)
    {
        _python_context->closure_dwNeeded.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = _python_context->closure_dwNeeded.object;
        _python_context->closure_dwNeeded.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInterfaceDetail );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInterfaceDetail );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300215 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 156;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_14 = _python_context->closure_g_hdi.object;

    if ( tmp_call_arg_element_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300116 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 156;
        goto try_finally_handler_1;
    }

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 156;
        goto try_finally_handler_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_byref );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 156;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_16 = _python_context->closure_did.object;

    frame_function->f_lineno = 156;
    tmp_call_arg_element_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 156;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_17 = Py_None;
    tmp_call_arg_element_18 = const_int_0;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 156;
        goto try_finally_handler_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_byref );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_function->f_lineno = 156;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_20 = _python_context->closure_dwNeeded.object;

    frame_function->f_lineno = 156;
    tmp_call_arg_element_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_20 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_call_arg_element_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_function->f_lineno = 156;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_21 = Py_None;
    frame_function->f_lineno = 156;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS6( tmp_called_11, tmp_call_arg_element_14, tmp_call_arg_element_15, tmp_call_arg_element_17, tmp_call_arg_element_18, tmp_call_arg_element_19, tmp_call_arg_element_21 );
    Py_DECREF( tmp_call_arg_element_15 );
    Py_DECREF( tmp_call_arg_element_19 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 156;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 156;
        goto try_finally_handler_1;
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
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 158;
        goto try_finally_handler_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_GetLastError );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 158;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 158;
    tmp_compare_left_2 = CALL_FUNCTION_NO_ARGS( tmp_called_14 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 158;
        goto try_finally_handler_1;
    }
    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ERROR_INSUFFICIENT_BUFFER );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ERROR_INSUFFICIENT_BUFFER );
    }

    if ( tmp_compare_right_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300275 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 158;
        goto try_finally_handler_1;
    }

    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 158;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_NotEq_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 159;
        goto try_finally_handler_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_WinError );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 159;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 159;
    tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS( tmp_called_15 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 159;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 159;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_4:;
    branch_no_3:;
    // Tried code
    tmp_assign_source_7 = PyTuple_New( 1 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto try_finally_handler_2;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_Structure );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_function->f_lineno = 161;
        goto try_finally_handler_2;
    }
    PyTuple_SET_ITEM( tmp_assign_source_7, 0, tmp_tuple_element_1 );
    if (_python_context->closure_class_creation_1__bases.object == NULL)
    {
        _python_context->closure_class_creation_1__bases.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = _python_context->closure_class_creation_1__bases.object;
        _python_context->closure_class_creation_1__bases.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    tmp_assign_source_8 = impl_class_1_SP_DEVICE_INTERFACE_DETAIL_DATA_A_of_function_7_comports_of_module_serial$tools$list_ports_windows( _python_context->closure_dwNeeded );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto try_finally_handler_2;
    }
    if (_python_context->closure_class_creation_1__class_dict.object == NULL)
    {
        _python_context->closure_class_creation_1__class_dict.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = _python_context->closure_class_creation_1__class_dict.object;
        _python_context->closure_class_creation_1__class_dict.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = _python_context->closure_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto try_finally_handler_2;
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
    tmp_dget_dict_1 = _python_context->closure_class_creation_1__class_dict.object;

    tmp_dget_key_1 = const_str_plain___metaclass__;
    tmp_assign_source_9 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto try_finally_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = _python_context->closure_class_creation_1__bases.object;

    tmp_assign_source_9 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    if (_python_context->closure_class_creation_1__metaclass.object == NULL)
    {
        _python_context->closure_class_creation_1__metaclass.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = _python_context->closure_class_creation_1__metaclass.object;
        _python_context->closure_class_creation_1__metaclass.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    tmp_called_16 = _python_context->closure_class_creation_1__metaclass.object;

    tmp_call_arg_element_22 = const_str_plain_SP_DEVICE_INTERFACE_DETAIL_DATA_A;
    tmp_call_arg_element_23 = _python_context->closure_class_creation_1__bases.object;

    tmp_call_arg_element_24 = _python_context->closure_class_creation_1__class_dict.object;

    frame_function->f_lineno = 161;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3( tmp_called_16, tmp_call_arg_element_22, tmp_call_arg_element_23, tmp_call_arg_element_24 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto try_finally_handler_2;
    }
    if (_python_context->closure_class_creation_1__class.object == NULL)
    {
        _python_context->closure_class_creation_1__class.object = tmp_assign_source_10;
    }
    else
    {
        PyObject *old = _python_context->closure_class_creation_1__class.object;
        _python_context->closure_class_creation_1__class.object = tmp_assign_source_10;
        Py_DECREF( old );
    }
    tmp_assign_source_11 = _python_context->closure_class_creation_1__class.object;

    if (_python_context->closure_SP_DEVICE_INTERFACE_DETAIL_DATA_A.object == NULL)
    {
        _python_context->closure_SP_DEVICE_INTERFACE_DETAIL_DATA_A.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
    }
    else
    {
        PyObject *old = _python_context->closure_SP_DEVICE_INTERFACE_DETAIL_DATA_A.object;
        _python_context->closure_SP_DEVICE_INTERFACE_DETAIL_DATA_A.object = INCREASE_REFCOUNT( tmp_assign_source_11 );
        Py_DECREF( old );
    }
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
    Py_XDECREF( _python_context->closure_class_creation_1__class.object );
    _python_context->closure_class_creation_1__class.object = NULL;

    Py_XDECREF( _python_context->closure_class_creation_1__bases.object );
    _python_context->closure_class_creation_1__bases.object = NULL;

    Py_XDECREF( _python_context->closure_class_creation_1__class_dict.object );
    _python_context->closure_class_creation_1__class_dict.object = NULL;

    Py_XDECREF( _python_context->closure_class_creation_1__metaclass.object );
    _python_context->closure_class_creation_1__metaclass.object = NULL;

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
    tmp_called_17 = _python_context->closure_SP_DEVICE_INTERFACE_DETAIL_DATA_A.object;

    if ( tmp_called_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300329 ], 79, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 168;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 168;
    tmp_assign_source_12 = CALL_FUNCTION_NO_ARGS( tmp_called_17 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto try_finally_handler_1;
    }
    if (_python_context->closure_idd.object == NULL)
    {
        _python_context->closure_idd.object = tmp_assign_source_12;
    }
    else
    {
        PyObject *old = _python_context->closure_idd.object;
        _python_context->closure_idd.object = tmp_assign_source_12;
        Py_DECREF( old );
    }
    tmp_called_18 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_is_64bit );

    if (unlikely( tmp_called_18 == NULL ))
    {
        tmp_called_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_64bit );
    }

    if ( tmp_called_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300408 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 169;
    tmp_cond_value_3 = CALL_FUNCTION_NO_ARGS( tmp_called_18 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 169;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 169;
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
    tmp_assattr_name_2 = const_int_pos_8;
    tmp_assattr_target_2 = _python_context->closure_idd.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_cbSize, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto try_finally_handler_1;
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_assattr_name_3 = const_int_pos_5;
    tmp_assattr_target_3 = _python_context->closure_idd.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_cbSize, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
        goto try_finally_handler_1;
    }
    branch_end_5:;
    tmp_called_19 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SP_DEVINFO_DATA );

    if (unlikely( tmp_called_19 == NULL ))
    {
        tmp_called_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SP_DEVINFO_DATA );
    }

    if ( tmp_called_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300445 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 173;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 173;
    tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS( tmp_called_19 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto try_finally_handler_1;
    }
    if (_python_context->closure_devinfo.object == NULL)
    {
        _python_context->closure_devinfo.object = tmp_assign_source_13;
    }
    else
    {
        PyObject *old = _python_context->closure_devinfo.object;
        _python_context->closure_devinfo.object = tmp_assign_source_13;
        Py_DECREF( old );
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 174;
        goto try_finally_handler_1;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_sizeof );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_25 = _python_context->closure_devinfo.object;

    frame_function->f_lineno = 174;
    tmp_assattr_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_20, tmp_call_arg_element_25 );
    Py_DECREF( tmp_called_20 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 174;
        goto try_finally_handler_1;
    }
    tmp_assattr_target_4 = _python_context->closure_devinfo.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_cbSize, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        frame_function->f_lineno = 174;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_called_21 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInterfaceDetail );

    if (unlikely( tmp_called_21 == NULL ))
    {
        tmp_called_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInterfaceDetail );
    }

    if ( tmp_called_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300215 ], 60, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_26 = _python_context->closure_g_hdi.object;

    if ( tmp_call_arg_element_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300116 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto try_finally_handler_1;
    }

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto try_finally_handler_1;
    }

    tmp_called_22 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_byref );
    if ( tmp_called_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_28 = _python_context->closure_did.object;

    if ( tmp_call_arg_element_28 == NULL )
    {
        Py_DECREF( tmp_called_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300489 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 175;
    tmp_call_arg_element_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_22, tmp_call_arg_element_28 );
    Py_DECREF( tmp_called_22 );
    if ( tmp_call_arg_element_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto try_finally_handler_1;
    }
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto try_finally_handler_1;
    }

    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_byref );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_27 );

        frame_function->f_lineno = 175;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_30 = _python_context->closure_idd.object;

    frame_function->f_lineno = 175;
    tmp_call_arg_element_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_23, tmp_call_arg_element_30 );
    Py_DECREF( tmp_called_23 );
    if ( tmp_call_arg_element_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_27 );

        frame_function->f_lineno = 175;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_31 = _python_context->closure_dwNeeded.object;

    if ( tmp_call_arg_element_31 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_29 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300538 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_32 = Py_None;
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_29 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto try_finally_handler_1;
    }

    tmp_called_24 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_byref );
    if ( tmp_called_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_29 );

        frame_function->f_lineno = 175;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_34 = _python_context->closure_devinfo.object;

    frame_function->f_lineno = 175;
    tmp_call_arg_element_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_24, tmp_call_arg_element_34 );
    Py_DECREF( tmp_called_24 );
    if ( tmp_call_arg_element_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_27 );
        Py_DECREF( tmp_call_arg_element_29 );

        frame_function->f_lineno = 175;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 175;
    tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS6( tmp_called_21, tmp_call_arg_element_26, tmp_call_arg_element_27, tmp_call_arg_element_29, tmp_call_arg_element_31, tmp_call_arg_element_32, tmp_call_arg_element_33 );
    Py_DECREF( tmp_call_arg_element_27 );
    Py_DECREF( tmp_call_arg_element_29 );
    Py_DECREF( tmp_call_arg_element_33 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 175;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 176;
        goto try_finally_handler_1;
    }

    tmp_called_25 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_WinError );
    if ( tmp_called_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 176;
    tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS( tmp_called_25 );
    Py_DECREF( tmp_called_25 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 176;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_6:;
    tmp_called_26 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_byte_buffer );

    if (unlikely( tmp_called_26 == NULL ))
    {
        tmp_called_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_buffer );
    }

    if ( tmp_called_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300592 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 179;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_35 = const_int_pos_250;
    frame_function->f_lineno = 179;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_26, tmp_call_arg_element_35 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 179;
        goto try_finally_handler_1;
    }
    if (_python_context->closure_szHardwareID.object == NULL)
    {
        _python_context->closure_szHardwareID.object = tmp_assign_source_14;
    }
    else
    {
        PyObject *old = _python_context->closure_szHardwareID.object;
        _python_context->closure_szHardwareID.object = tmp_assign_source_14;
        Py_DECREF( old );
    }
    tmp_called_27 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );

    if (unlikely( tmp_called_27 == NULL ))
    {
        tmp_called_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );
    }

    if ( tmp_called_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300632 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 180;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_36 = _python_context->closure_g_hdi.object;

    if ( tmp_call_arg_element_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300116 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 180;
        goto try_finally_handler_1;
    }

    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 180;
        goto try_finally_handler_1;
    }

    tmp_called_28 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_byref );
    if ( tmp_called_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_38 = _python_context->closure_devinfo.object;

    frame_function->f_lineno = 180;
    tmp_call_arg_element_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_28, tmp_call_arg_element_38 );
    Py_DECREF( tmp_called_28 );
    if ( tmp_call_arg_element_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_39 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_HARDWAREID );

    if (unlikely( tmp_call_arg_element_39 == NULL ))
    {
        tmp_call_arg_element_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPDRP_HARDWAREID );
    }

    if ( tmp_call_arg_element_39 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_37 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300693 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 180;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_40 = Py_None;
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_37 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 180;
        goto try_finally_handler_1;
    }

    tmp_called_29 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_byref );
    if ( tmp_called_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_37 );

        frame_function->f_lineno = 180;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_42 = _python_context->closure_szHardwareID.object;

    frame_function->f_lineno = 180;
    tmp_call_arg_element_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_29, tmp_call_arg_element_42 );
    Py_DECREF( tmp_called_29 );
    if ( tmp_call_arg_element_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_37 );

        frame_function->f_lineno = 180;
        goto try_finally_handler_1;
    }
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_41 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 180;
        goto try_finally_handler_1;
    }

    tmp_called_30 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_sizeof );
    if ( tmp_called_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_41 );

        frame_function->f_lineno = 180;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_44 = _python_context->closure_szHardwareID.object;

    frame_function->f_lineno = 180;
    tmp_binop_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_30, tmp_call_arg_element_44 );
    Py_DECREF( tmp_called_30 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_41 );

        frame_function->f_lineno = 180;
        goto try_finally_handler_1;
    }
    tmp_binop_right_2 = const_int_pos_1;
    tmp_call_arg_element_43 = BINARY_OPERATION_SUB( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    if ( tmp_call_arg_element_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_41 );

        frame_function->f_lineno = 180;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_45 = Py_None;
    frame_function->f_lineno = 180;
    tmp_cond_value_5 = CALL_FUNCTION_WITH_ARGS7( tmp_called_27, tmp_call_arg_element_36, tmp_call_arg_element_37, tmp_call_arg_element_39, tmp_call_arg_element_40, tmp_call_arg_element_41, tmp_call_arg_element_43, tmp_call_arg_element_45 );
    Py_DECREF( tmp_call_arg_element_37 );
    Py_DECREF( tmp_call_arg_element_41 );
    Py_DECREF( tmp_call_arg_element_43 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 180;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_no_7;
    }
    else
    {
        goto branch_yes_7;
    }
    branch_yes_7:;
    tmp_called_31 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GetLastError );

    if (unlikely( tmp_called_31 == NULL ))
    {
        tmp_called_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetLastError );
    }

    if ( tmp_called_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300738 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 182;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 182;
    tmp_compare_left_4 = CALL_FUNCTION_NO_ARGS( tmp_called_31 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 182;
        goto try_finally_handler_1;
    }
    tmp_compare_right_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ERROR_INSUFFICIENT_BUFFER );

    if (unlikely( tmp_compare_right_4 == NULL ))
    {
        tmp_compare_right_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ERROR_INSUFFICIENT_BUFFER );
    }

    if ( tmp_compare_right_4 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300275 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 182;
        goto try_finally_handler_1;
    }

    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 182;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if (tmp_cmp_NotEq_3 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 183;
        goto try_finally_handler_1;
    }

    tmp_called_32 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_WinError );
    if ( tmp_called_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 183;
    tmp_raise_type_4 = CALL_FUNCTION_NO_ARGS( tmp_called_32 );
    Py_DECREF( tmp_called_32 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_4;
    frame_function->f_lineno = 183;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_8:;
    branch_no_7:;
    tmp_called_33 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_byte_buffer );

    if (unlikely( tmp_called_33 == NULL ))
    {
        tmp_called_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_buffer );
    }

    if ( tmp_called_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300592 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 186;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_46 = const_int_pos_250;
    frame_function->f_lineno = 186;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_33, tmp_call_arg_element_46 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 186;
        goto try_finally_handler_1;
    }
    if (_python_context->closure_szFriendlyName.object == NULL)
    {
        _python_context->closure_szFriendlyName.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = _python_context->closure_szFriendlyName.object;
        _python_context->closure_szFriendlyName.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_called_34 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );

    if (unlikely( tmp_called_34 == NULL ))
    {
        tmp_called_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );
    }

    if ( tmp_called_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300632 ], 61, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_47 = _python_context->closure_g_hdi.object;

    if ( tmp_call_arg_element_47 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300116 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }

    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }

    tmp_called_35 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_byref );
    if ( tmp_called_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_49 = _python_context->closure_devinfo.object;

    frame_function->f_lineno = 187;
    tmp_call_arg_element_48 = CALL_FUNCTION_WITH_ARGS1( tmp_called_35, tmp_call_arg_element_49 );
    Py_DECREF( tmp_called_35 );
    if ( tmp_call_arg_element_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_50 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_FRIENDLYNAME );

    if (unlikely( tmp_call_arg_element_50 == NULL ))
    {
        tmp_call_arg_element_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPDRP_FRIENDLYNAME );
    }

    if ( tmp_call_arg_element_50 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_48 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300779 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_51 = Py_None;
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_48 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }

    tmp_called_36 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_byref );
    if ( tmp_called_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_48 );

        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_53 = _python_context->closure_szFriendlyName.object;

    frame_function->f_lineno = 187;
    tmp_call_arg_element_52 = CALL_FUNCTION_WITH_ARGS1( tmp_called_36, tmp_call_arg_element_53 );
    Py_DECREF( tmp_called_36 );
    if ( tmp_call_arg_element_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_48 );

        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_48 );
        Py_DECREF( tmp_call_arg_element_52 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }

    tmp_called_37 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_sizeof );
    if ( tmp_called_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_48 );
        Py_DECREF( tmp_call_arg_element_52 );

        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_55 = _python_context->closure_szFriendlyName.object;

    frame_function->f_lineno = 187;
    tmp_binop_left_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_37, tmp_call_arg_element_55 );
    Py_DECREF( tmp_called_37 );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_48 );
        Py_DECREF( tmp_call_arg_element_52 );

        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }
    tmp_binop_right_3 = const_int_pos_1;
    tmp_call_arg_element_54 = BINARY_OPERATION_SUB( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    if ( tmp_call_arg_element_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_48 );
        Py_DECREF( tmp_call_arg_element_52 );

        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_56 = Py_None;
    frame_function->f_lineno = 187;
    tmp_cond_value_6 = CALL_FUNCTION_WITH_ARGS7( tmp_called_34, tmp_call_arg_element_47, tmp_call_arg_element_48, tmp_call_arg_element_50, tmp_call_arg_element_51, tmp_call_arg_element_52, tmp_call_arg_element_54, tmp_call_arg_element_56 );
    Py_DECREF( tmp_call_arg_element_48 );
    Py_DECREF( tmp_call_arg_element_52 );
    Py_DECREF( tmp_call_arg_element_54 );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        frame_function->f_lineno = 187;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if (tmp_cond_truth_6 == 1)
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto try_finally_handler_1;
    }

    tmp_called_38 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_GetLastError );
    if ( tmp_called_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 189;
    tmp_compare_left_5 = CALL_FUNCTION_NO_ARGS( tmp_called_38 );
    Py_DECREF( tmp_called_38 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto try_finally_handler_1;
    }
    tmp_compare_right_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ERROR_INSUFFICIENT_BUFFER );

    if (unlikely( tmp_compare_right_5 == NULL ))
    {
        tmp_compare_right_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ERROR_INSUFFICIENT_BUFFER );
    }

    if ( tmp_compare_right_5 == NULL )
    {
        Py_DECREF( tmp_compare_left_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300275 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto try_finally_handler_1;
    }

    tmp_cmp_NotEq_4 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        frame_function->f_lineno = 189;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    if (tmp_cmp_NotEq_4 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_16 = Py_None;
    if (_python_context->closure_port_name.object == NULL)
    {
        _python_context->closure_port_name.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
    }
    else
    {
        PyObject *old = _python_context->closure_port_name.object;
        _python_context->closure_port_name.object = INCREASE_REFCOUNT( tmp_assign_source_16 );
        Py_DECREF( old );
    }
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    tmp_called_39 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );

    if (unlikely( tmp_called_39 == NULL ))
    {
        tmp_called_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );
    }

    if ( tmp_called_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300826 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_57 = _python_context->closure_g_hdi.object;

    if ( tmp_call_arg_element_57 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300116 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto try_finally_handler_1;
    }

    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto try_finally_handler_1;
    }

    tmp_called_40 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_byref );
    if ( tmp_called_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 194;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_59 = _python_context->closure_devinfo.object;

    frame_function->f_lineno = 194;
    tmp_call_arg_element_58 = CALL_FUNCTION_WITH_ARGS1( tmp_called_40, tmp_call_arg_element_59 );
    Py_DECREF( tmp_called_40 );
    if ( tmp_call_arg_element_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 194;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_60 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DICS_FLAG_GLOBAL );

    if (unlikely( tmp_call_arg_element_60 == NULL ))
    {
        tmp_call_arg_element_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DICS_FLAG_GLOBAL );
    }

    if ( tmp_call_arg_element_60 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_58 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300875 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_61 = const_int_0;
    tmp_call_arg_element_62 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DIREG_DEV );

    if (unlikely( tmp_call_arg_element_62 == NULL ))
    {
        tmp_call_arg_element_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DIREG_DEV );
    }

    if ( tmp_call_arg_element_62 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_58 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300920 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_63 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_KEY_READ );

    if (unlikely( tmp_call_arg_element_63 == NULL ))
    {
        tmp_call_arg_element_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_KEY_READ );
    }

    if ( tmp_call_arg_element_63 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_58 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300958 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 194;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS6( tmp_called_39, tmp_call_arg_element_57, tmp_call_arg_element_58, tmp_call_arg_element_60, tmp_call_arg_element_61, tmp_call_arg_element_62, tmp_call_arg_element_63 );
    Py_DECREF( tmp_call_arg_element_58 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 194;
        goto try_finally_handler_1;
    }
    if (_python_context->closure_hkey.object == NULL)
    {
        _python_context->closure_hkey.object = tmp_assign_source_17;
    }
    else
    {
        PyObject *old = _python_context->closure_hkey.object;
        _python_context->closure_hkey.object = tmp_assign_source_17;
        Py_DECREF( old );
    }
    tmp_called_41 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_byte_buffer );

    if (unlikely( tmp_called_41 == NULL ))
    {
        tmp_called_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_buffer );
    }

    if ( tmp_called_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300592 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 195;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_64 = const_int_pos_250;
    frame_function->f_lineno = 195;
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_41, tmp_call_arg_element_64 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 195;
        goto try_finally_handler_1;
    }
    if (_python_context->closure_port_name_buffer.object == NULL)
    {
        _python_context->closure_port_name_buffer.object = tmp_assign_source_18;
    }
    else
    {
        PyObject *old = _python_context->closure_port_name_buffer.object;
        _python_context->closure_port_name_buffer.object = tmp_assign_source_18;
        Py_DECREF( old );
    }
    tmp_called_42 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ULONG );

    if (unlikely( tmp_called_42 == NULL ))
    {
        tmp_called_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULONG );
    }

    if ( tmp_called_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300995 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 196;
        goto try_finally_handler_1;
    }

    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 196;
        goto try_finally_handler_1;
    }

    tmp_called_43 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_sizeof );
    if ( tmp_called_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_66 = _python_context->closure_port_name_buffer.object;

    frame_function->f_lineno = 196;
    tmp_call_arg_element_65 = CALL_FUNCTION_WITH_ARGS1( tmp_called_43, tmp_call_arg_element_66 );
    Py_DECREF( tmp_called_43 );
    if ( tmp_call_arg_element_65 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 196;
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_42, tmp_call_arg_element_65 );
    Py_DECREF( tmp_call_arg_element_65 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto try_finally_handler_1;
    }
    if (_python_context->closure_port_name_length.object == NULL)
    {
        _python_context->closure_port_name_length.object = tmp_assign_source_19;
    }
    else
    {
        PyObject *old = _python_context->closure_port_name_length.object;
        _python_context->closure_port_name_length.object = tmp_assign_source_19;
        Py_DECREF( old );
    }
    tmp_called_44 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );

    if (unlikely( tmp_called_44 == NULL ))
    {
        tmp_called_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );
    }

    if ( tmp_called_44 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301029 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 197;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_67 = _python_context->closure_hkey.object;

    tmp_call_arg_element_68 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PortName );

    if (unlikely( tmp_call_arg_element_68 == NULL ))
    {
        tmp_call_arg_element_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PortName );
    }

    if ( tmp_call_arg_element_68 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301073 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 197;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_69 = Py_None;
    tmp_call_arg_element_70 = Py_None;
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 197;
        goto try_finally_handler_1;
    }

    tmp_called_45 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_byref );
    if ( tmp_called_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 197;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_72 = _python_context->closure_port_name_buffer.object;

    frame_function->f_lineno = 197;
    tmp_call_arg_element_71 = CALL_FUNCTION_WITH_ARGS1( tmp_called_45, tmp_call_arg_element_72 );
    Py_DECREF( tmp_called_45 );
    if ( tmp_call_arg_element_71 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 197;
        goto try_finally_handler_1;
    }
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_71 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 197;
        goto try_finally_handler_1;
    }

    tmp_called_46 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_byref );
    if ( tmp_called_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_71 );

        frame_function->f_lineno = 197;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_74 = _python_context->closure_port_name_length.object;

    frame_function->f_lineno = 197;
    tmp_call_arg_element_73 = CALL_FUNCTION_WITH_ARGS1( tmp_called_46, tmp_call_arg_element_74 );
    Py_DECREF( tmp_called_46 );
    if ( tmp_call_arg_element_73 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_71 );

        frame_function->f_lineno = 197;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 197;
    tmp_unused = CALL_FUNCTION_WITH_ARGS6( tmp_called_44, tmp_call_arg_element_67, tmp_call_arg_element_68, tmp_call_arg_element_69, tmp_call_arg_element_70, tmp_call_arg_element_71, tmp_call_arg_element_73 );
    Py_DECREF( tmp_call_arg_element_71 );
    Py_DECREF( tmp_call_arg_element_73 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 197;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_47 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegCloseKey );

    if (unlikely( tmp_called_47 == NULL ))
    {
        tmp_called_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegCloseKey );
    }

    if ( tmp_called_47 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301110 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 198;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_75 = _python_context->closure_hkey.object;

    frame_function->f_lineno = 198;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_47, tmp_call_arg_element_75 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 198;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_yield_1 = PyTuple_New( 3 );
    tmp_called_48 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_string );

    if (unlikely( tmp_called_48 == NULL ))
    {
        tmp_called_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_string );
    }

    if ( tmp_called_48 == NULL )
    {
        Py_DECREF( tmp_yield_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41210 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 199;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_76 = _python_context->closure_port_name_buffer.object;

    frame_function->f_lineno = 199;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_48, tmp_call_arg_element_76 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_yield_1 );

        frame_function->f_lineno = 199;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_yield_1, 0, tmp_tuple_element_2 );
    tmp_called_49 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_string );

    if (unlikely( tmp_called_49 == NULL ))
    {
        tmp_called_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_string );
    }

    if ( tmp_called_49 == NULL )
    {
        Py_DECREF( tmp_yield_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41210 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 199;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_77 = _python_context->closure_szFriendlyName.object;

    frame_function->f_lineno = 199;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_49, tmp_call_arg_element_77 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_yield_1 );

        frame_function->f_lineno = 199;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_yield_1, 1, tmp_tuple_element_2 );
    tmp_called_50 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_string );

    if (unlikely( tmp_called_50 == NULL ))
    {
        tmp_called_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_string );
    }

    if ( tmp_called_50 == NULL )
    {
        Py_DECREF( tmp_yield_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 41210 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 199;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_78 = _python_context->closure_szHardwareID.object;

    frame_function->f_lineno = 199;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_50, tmp_call_arg_element_78 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_yield_1 );

        frame_function->f_lineno = 199;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_yield_1, 2, tmp_tuple_element_2 );
    tmp_unused = YIELD( generator, tmp_yield_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 199;
        goto try_finally_handler_1;
    }
    branch_end_9:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
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
    Py_XDECREF( _python_context->closure_for_loop_1__iter_value.object );
    _python_context->closure_for_loop_1__iter_value.object = NULL;

    Py_XDECREF( _python_context->closure_for_loop_1__for_iterator.object );
    _python_context->closure_for_loop_1__for_iterator.object = NULL;

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
    tmp_called_51 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );

    if (unlikely( tmp_called_51 == NULL ))
    {
        tmp_called_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );
    }

    if ( tmp_called_51 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301150 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_79 = _python_context->closure_g_hdi.object;

    if ( tmp_call_arg_element_79 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300116 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 201;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_51, tmp_call_arg_element_79 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif

    Py_DECREF( frame_function );
    goto frame_no_exception_1;
    frame_exception_exit_1:;

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
    if ((_python_context->closure_g_hdi.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_g_hdi,
            _python_context->closure_g_hdi.object
        );

    }
    if ((_python_context->closure_dwIndex.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dwIndex,
            _python_context->closure_dwIndex.object
        );

    }
    if ((_python_context->closure_did.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_did,
            _python_context->closure_did.object
        );

    }
    if ((_python_context->closure_dwNeeded.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dwNeeded,
            _python_context->closure_dwNeeded.object
        );

    }
    if ((_python_context->closure_SP_DEVICE_INTERFACE_DETAIL_DATA_A.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_SP_DEVICE_INTERFACE_DETAIL_DATA_A,
            _python_context->closure_SP_DEVICE_INTERFACE_DETAIL_DATA_A.object
        );

    }
    if ((_python_context->closure_idd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_idd,
            _python_context->closure_idd.object
        );

    }
    if ((_python_context->closure_devinfo.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_devinfo,
            _python_context->closure_devinfo.object
        );

    }
    if ((_python_context->closure_szHardwareID.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_szHardwareID,
            _python_context->closure_szHardwareID.object
        );

    }
    if ((_python_context->closure_szFriendlyName.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_szFriendlyName,
            _python_context->closure_szFriendlyName.object
        );

    }
    if ((_python_context->closure_port_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_port_name,
            _python_context->closure_port_name.object
        );

    }
    if ((_python_context->closure_hkey.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_hkey,
            _python_context->closure_hkey.object
        );

    }
    if ((_python_context->closure_port_name_buffer.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_port_name_buffer,
            _python_context->closure_port_name_buffer.object
        );

    }
    if ((_python_context->closure_port_name_length.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_port_name_length,
            _python_context->closure_port_name_length.object
        );

    }
    detachFrame( exception_tb, tmp_frame_locals );


#if PYTHON_VERSION > 300
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    Py_DECREF( frame_function );
    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;


    PyErr_Restore( INCREASE_REFCOUNT( PyExc_StopIteration ), NULL, NULL );

    generator->m_yielded = NULL;
    swapFiber( &generator->m_yielder_context, &generator->m_caller_context );

    // The above won't return, but we need to make it clear to the compiler
    // as well, or else it will complain and/or generate inferior code.
    assert(false);
    return;
function_exception_exit:
    assert( exception_type );
    assert( exception_tb );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    generator->m_yielded = NULL;
    swapFiber( &generator->m_yielder_context, &generator->m_caller_context );

}
static PyObject *impl_function_7_comports_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self )
{
    // Create context if any
    struct _context_generator_function_7_comports_of_module_serial$tools$list_ports_windows_t *_python_context = new _context_generator_function_7_comports_of_module_serial$tools$list_ports_windows_t;

        PyObject *result = Nuitka_Generator_New(
            function_7_comports_of_module_serial$tools$list_ports_windows_context,
            const_str_plain_comports,
            codeobj_317ad4227547d34ce929ed1d7d3a3627,
            _python_context,
            _context_generator_function_7_comports_of_module_serial$tools$list_ports_windows_destructor
        );

    if (unlikely( result == NULL ))
    {
        PyErr_Format( PyExc_RuntimeError, "cannot create function comports" );
        return NULL;
    }

    // Copy to context parameter values and closured variables if any.


    return result;
}
static PyObject *fparse_function_7_comports_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_7_comports_of_module_serial$tools$list_ports_windows( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_7_comports_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_7_comports_of_module_serial$tools$list_ports_windows( self );
    }
    else
    {
        PyObject *result = fparse_function_7_comports_of_module_serial$tools$list_ports_windows( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_1_SP_DEVICE_INTERFACE_DETAIL_DATA_A_of_function_7_comports_of_module_serial$tools$list_ports_windows( PyObjectLocalVariable& closure_dwNeeded )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var__fields_;
    PyObjectLocalVariable var___str__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_d85f9b7d2da9d405ffffc2aaf9deb17f;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_862b30b71bed2a4d68e29d07cef881ce, module_serial$tools$list_ports_windows );
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
    tmp_assign_source_2 = PyList_New( 2 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_cbSize;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299649 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_1 );
    PyList_SET_ITEM( tmp_assign_source_2, 0, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_DevicePath;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_2 );
    tmp_binop_left_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_CHAR );

    if (unlikely( tmp_binop_left_1 == NULL ))
    {
        tmp_binop_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CHAR );
    }

    if ( tmp_binop_left_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301207 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = closure_dwNeeded.object;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300538 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_value );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sizeof );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_binop_left_2 );
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299649 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 164;
    tmp_binop_right_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = BINARY_OPERATION_SUB( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );
        Py_DECREF( tmp_list_element_1 );

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_2 );
    PyList_SET_ITEM( tmp_assign_source_2, 1, tmp_list_element_1 );
    assert( var__fields_.object == NULL );
    var__fields_.object = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_function_1___str___of_class_1_SP_DEVICE_INTERFACE_DETAIL_DATA_A_of_function_7_comports_of_module_serial$tools$list_ports_windows(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 166;
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
    if ((var__fields_.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__fields_,
            var__fields_.object
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
    if ((var__fields_.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__fields_,
            var__fields_.object
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


static PyObject *impl_function_1___str___of_class_1_SP_DEVICE_INTERFACE_DETAIL_DATA_A_of_function_7_comports_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject *_python_par_self )
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
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_99b80cc6eac0278b015a7c5266d6db9a, module_serial$tools$list_ports_windows );
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
    tmp_binop_left_1 = const_str_digest_e0ed297f640f7ad3fb9bc53a231efc45;
    tmp_binop_right_1 = PyTuple_New( 1 );
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DevicePath );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_1 );

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 167;
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
static PyObject *fparse_function_1___str___of_class_1_SP_DEVICE_INTERFACE_DETAIL_DATA_A_of_function_7_comports_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___str___of_class_1_SP_DEVICE_INTERFACE_DETAIL_DATA_A_of_function_7_comports_of_module_serial$tools$list_ports_windows( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___str___of_class_1_SP_DEVICE_INTERFACE_DETAIL_DATA_A_of_function_7_comports_of_module_serial$tools$list_ports_windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1___str___of_class_1_SP_DEVICE_INTERFACE_DETAIL_DATA_A_of_function_7_comports_of_module_serial$tools$list_ports_windows( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___str___of_class_1_SP_DEVICE_INTERFACE_DETAIL_DATA_A_of_function_7_comports_of_module_serial$tools$list_ports_windows( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_ValidHandle_of_module_serial$tools$list_ports_windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_ValidHandle_of_module_serial$tools$list_ports_windows,
        dparse_function_1_ValidHandle_of_module_serial$tools$list_ports_windows,
        const_str_plain_ValidHandle,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_19b341bb30926dfaa4f75b71c78e8d37,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_windows,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___str___of_class_1_SP_DEVICE_INTERFACE_DETAIL_DATA_A_of_function_7_comports_of_module_serial$tools$list_ports_windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___str___of_class_1_SP_DEVICE_INTERFACE_DETAIL_DATA_A_of_function_7_comports_of_module_serial$tools$list_ports_windows,
        dparse_function_1___str___of_class_1_SP_DEVICE_INTERFACE_DETAIL_DATA_A_of_function_7_comports_of_module_serial$tools$list_ports_windows,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_99b80cc6eac0278b015a7c5266d6db9a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_windows,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___str___of_class_4_GUID_of_module_serial$tools$list_ports_windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___str___of_class_4_GUID_of_module_serial$tools$list_ports_windows,
        dparse_function_1___str___of_class_4_GUID_of_module_serial$tools$list_ports_windows,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_08adf67a706ba39bc9f6ee93a99febc9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_windows,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___str___of_class_5_SP_DEVINFO_DATA_of_module_serial$tools$list_ports_windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___str___of_class_5_SP_DEVINFO_DATA_of_module_serial$tools$list_ports_windows,
        dparse_function_1___str___of_class_5_SP_DEVINFO_DATA_of_module_serial$tools$list_ports_windows,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c14dd98d8f04034b9eef61e1e8124d9a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_windows,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___str___of_class_6_SP_DEVICE_INTERFACE_DATA_of_module_serial$tools$list_ports_windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___str___of_class_6_SP_DEVICE_INTERFACE_DATA_of_module_serial$tools$list_ports_windows,
        dparse_function_1___str___of_class_6_SP_DEVICE_INTERFACE_DATA_of_module_serial$tools$list_ports_windows,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f736eb3d75784aa9011162d9121b55b0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_windows,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_byte_buffer_of_module_serial$tools$list_ports_windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_byte_buffer_of_module_serial$tools$list_ports_windows,
        dparse_function_2_byte_buffer_of_module_serial$tools$list_ports_windows,
        const_str_plain_byte_buffer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4251dbedc7c2c74785741a1aca07d12e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_windows,
        const_str_digest_fe160da9dcd1d4a302a2f245c18e2285
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_string_of_module_serial$tools$list_ports_windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_string_of_module_serial$tools$list_ports_windows,
        dparse_function_3_string_of_module_serial$tools$list_ports_windows,
        const_str_plain_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d66e44318f7721601ee98467aab74bfc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_windows,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_comports_of_module_serial$tools$list_ports_windows(  )
{
    return Nuitka_Function_New(
        fparse_function_7_comports_of_module_serial$tools$list_ports_windows,
        dparse_function_7_comports_of_module_serial$tools$list_ports_windows,
        const_str_plain_comports,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_98cd7e2de12ff8e91db7985c60796979,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_windows,
        const_str_digest_b815affb56480a7641e05bc66038e024
    );
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial$tools$list_ports_windows =
{
    PyModuleDef_HEAD_INIT,
    "serial.tools.list_ports_windows",   /* m_name */
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

MOD_INIT_DECL( serial$tools$list_ports_windows )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial$tools$list_ports_windows );
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

    // puts( "in initserial$tools$list_ports_windows" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial$tools$list_ports_windows = Py_InitModule4(
        "serial.tools.list_ports_windows",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_serial$tools$list_ports_windows = PyModule_Create( &mdef_serial$tools$list_ports_windows );
#endif

    moduledict_serial$tools$list_ports_windows = (PyDictObject *)((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;

    assertObject( module_serial$tools$list_ports_windows );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d85f9b7d2da9d405ffffc2aaf9deb17f, module_serial$tools$list_ports_windows );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_serial$tools$list_ports_windows );

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
    PyObjectTempVariable tmp_assign_unpack_1__assign_source;
    PyObjectTempVariable tmp_assign_unpack_2__assign_source;
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
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_1__element_3;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_name_14;
    PyObject *tmp_assattr_name_15;
    PyObject *tmp_assattr_name_16;
    PyObject *tmp_assattr_name_17;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assattr_target_13;
    PyObject *tmp_assattr_target_14;
    PyObject *tmp_assattr_target_15;
    PyObject *tmp_assattr_target_16;
    PyObject *tmp_assattr_target_17;
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
    PyObject *tmp_class_bases_1;
    PyObject *tmp_class_bases_2;
    PyObject *tmp_class_bases_3;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_dict_2;
    PyObject *tmp_dget_dict_3;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_dget_key_2;
    PyObject *tmp_dget_key_3;
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
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_list_element_4;
    PyObject *tmp_list_element_5;
    PyObject *tmp_list_element_6;
    PyObject *tmp_list_element_7;
    PyObject *tmp_list_element_8;
    bool tmp_result;
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
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_8a2a97af4cd741299455b803d34f6a34;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_d0bf8b6574b126ed9e083b5d3a14968f, module_serial$tools$list_ports_windows );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 1;
    tmp_assign_source_3 = IMPORT_MODULE( const_str_plain_ctypes, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 2;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_4 );
    tmp_assign_source_5 = MAKE_FUNCTION_function_1_ValidHandle_of_module_serial$tools$list_ports_windows(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ValidHandle, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 9;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_serial, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_serial, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_06710c9a9806ee0e5a3c19d895a7fd43, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_ULONG_PTR_str_plain_is_64bit_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ULONG_PTR );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ULONG_PTR, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_06710c9a9806ee0e5a3c19d895a7fd43, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_ULONG_PTR_str_plain_is_64bit_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_is_64bit );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_is_64bit, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_HANDLE_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_HANDLE );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HANDLE, tmp_assign_source_9 );
    tmp_import_globals_7 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_BOOL_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_BOOL );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL, tmp_assign_source_10 );
    tmp_import_globals_8 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_HWND_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_HWND );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HWND, tmp_assign_source_11 );
    tmp_import_globals_9 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_DWORD_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_DWORD );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD, tmp_assign_source_12 );
    tmp_import_globals_10 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_WORD_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_WORD );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_WORD, tmp_assign_source_13 );
    tmp_import_globals_11 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_LONG_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_LONG );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LONG, tmp_assign_source_14 );
    tmp_import_globals_12 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_ULONG_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_ULONG );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ULONG, tmp_assign_source_15 );
    tmp_import_globals_13 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_13, tmp_import_globals_13, const_tuple_str_plain_LPCSTR_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_LPCSTR );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPCSTR, tmp_assign_source_16 );
    tmp_import_globals_14 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_plain_HKEY_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_HKEY );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HKEY, tmp_assign_source_17 );
    tmp_import_globals_15 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain_BYTE_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_BYTE );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BYTE, tmp_assign_source_18 );
    tmp_assign_source_19 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_NULL, tmp_assign_source_19 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_c_void_p );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO, tmp_assign_source_20 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_c_char_p );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PCTSTR, tmp_assign_source_21 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_c_char );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_CHAR, tmp_assign_source_22 );
    // Tried code
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 26;
        goto try_finally_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_POINTER );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 26;
        goto try_finally_handler_1;
    }

    frame_module->f_lineno = 26;
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 26;
        goto try_finally_handler_1;
    }
    assert( tmp_assign_unpack_1__assign_source.object == NULL );
    tmp_assign_unpack_1__assign_source.object = tmp_assign_source_23;

    tmp_assign_source_24 = tmp_assign_unpack_1__assign_source.object;

    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPDWORD, tmp_assign_source_24 );
    tmp_assign_source_25 = tmp_assign_unpack_1__assign_source.object;

    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PDWORD, tmp_assign_source_25 );
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
    Py_XDECREF( tmp_assign_unpack_1__assign_source.object );
    tmp_assign_unpack_1__assign_source.object = NULL;

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
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 28;
        goto try_finally_handler_2;
    }

    tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_c_void_p );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 28;
        goto try_finally_handler_2;
    }
    assert( tmp_assign_unpack_2__assign_source.object == NULL );
    tmp_assign_unpack_2__assign_source.object = tmp_assign_source_26;

    tmp_assign_source_27 = tmp_assign_unpack_2__assign_source.object;

    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPBYTE, tmp_assign_source_27 );
    tmp_assign_source_28 = tmp_assign_unpack_2__assign_source.object;

    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PBYTE, tmp_assign_source_28 );
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
    Py_XDECREF( tmp_assign_unpack_2__assign_source.object );
    tmp_assign_unpack_2__assign_source.object = NULL;

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
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_POINTER );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HKEY );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HKEY );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298527 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 29;
    tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PHKEY, tmp_assign_source_29 );
    tmp_assign_source_30 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_assign_source_30 == NULL ))
    {
        tmp_assign_source_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_assign_source_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ACCESS_MASK, tmp_assign_source_30 );
    tmp_assign_source_31 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ACCESS_MASK );

    if (unlikely( tmp_assign_source_31 == NULL ))
    {
        tmp_assign_source_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACCESS_MASK );
    }

    if ( tmp_assign_source_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298553 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_REGSAM, tmp_assign_source_31 );
    tmp_assign_source_32 = MAKE_FUNCTION_function_2_byte_buffer_of_module_serial$tools$list_ports_windows(  );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_32 );

        frame_module->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_byte_buffer, tmp_assign_source_32 );
    tmp_assign_source_33 = MAKE_FUNCTION_function_3_string_of_module_serial$tools$list_ports_windows(  );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_33 );

        frame_module->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_string, tmp_assign_source_33 );
    // Tried code
    tmp_assign_source_34 = PyTuple_New( 1 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_34 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 47;
        goto try_finally_handler_3;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Structure );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_34 );

        frame_module->f_lineno = 47;
        goto try_finally_handler_3;
    }
    PyTuple_SET_ITEM( tmp_assign_source_34, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_34;

    tmp_assign_source_35 = impl_class_4_GUID_of_module_serial$tools$list_ports_windows(  );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_35;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto try_finally_handler_3;
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
    tmp_assign_source_36 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto try_finally_handler_3;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_36 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_36;

    tmp_called_3 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_3 = const_str_plain_GUID;
    tmp_call_arg_element_4 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_5 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 47;
    tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS3( tmp_called_3, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 47;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_37;

    tmp_assign_source_38 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID, tmp_assign_source_38 );
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
    Py_XDECREF( tmp_class_creation_1__class.object );
    tmp_class_creation_1__class.object = NULL;

    Py_XDECREF( tmp_class_creation_1__bases.object );
    tmp_class_creation_1__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict.object );
    tmp_class_creation_1__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass.object );
    tmp_class_creation_1__metaclass.object = NULL;

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
    tmp_assign_source_39 = PyTuple_New( 1 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_39 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 63;
        goto try_finally_handler_4;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Structure );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_39 );

        frame_module->f_lineno = 63;
        goto try_finally_handler_4;
    }
    PyTuple_SET_ITEM( tmp_assign_source_39, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases.object == NULL );
    tmp_class_creation_2__bases.object = tmp_assign_source_39;

    tmp_assign_source_40 = impl_class_5_SP_DEVINFO_DATA_of_module_serial$tools$list_ports_windows(  );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 63;
        goto try_finally_handler_4;
    }
    assert( tmp_class_creation_2__class_dict.object == NULL );
    tmp_class_creation_2__class_dict.object = tmp_assign_source_40;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_2__class_dict.object;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 63;
        goto try_finally_handler_4;
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
    tmp_assign_source_41 = DICT_GET_ITEM( tmp_dget_dict_2, tmp_dget_key_2 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 63;
        goto try_finally_handler_4;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_bases_2 = tmp_class_creation_2__bases.object;

    tmp_assign_source_41 = SELECT_METACLASS( tmp_class_bases_2, GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass.object == NULL );
    tmp_class_creation_2__metaclass.object = tmp_assign_source_41;

    tmp_called_4 = tmp_class_creation_2__metaclass.object;

    tmp_call_arg_element_6 = const_str_plain_SP_DEVINFO_DATA;
    tmp_call_arg_element_7 = tmp_class_creation_2__bases.object;

    tmp_call_arg_element_8 = tmp_class_creation_2__class_dict.object;

    frame_module->f_lineno = 63;
    tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 63;
        goto try_finally_handler_4;
    }
    assert( tmp_class_creation_2__class.object == NULL );
    tmp_class_creation_2__class.object = tmp_assign_source_42;

    tmp_assign_source_43 = tmp_class_creation_2__class.object;

    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SP_DEVINFO_DATA, tmp_assign_source_43 );
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
    Py_XDECREF( tmp_class_creation_2__class.object );
    tmp_class_creation_2__class.object = NULL;

    Py_XDECREF( tmp_class_creation_2__bases.object );
    tmp_class_creation_2__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict.object );
    tmp_class_creation_2__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass.object );
    tmp_class_creation_2__metaclass.object = NULL;

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
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 72;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_POINTER );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 72;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SP_DEVINFO_DATA );

    if (unlikely( tmp_call_arg_element_9 == NULL ))
    {
        tmp_call_arg_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SP_DEVINFO_DATA );
    }

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298586 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 72;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 72;
    tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 72;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA, tmp_assign_source_44 );
    // Tried code
    tmp_assign_source_45 = PyTuple_New( 1 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_45 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 74;
        goto try_finally_handler_5;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_Structure );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_45 );

        frame_module->f_lineno = 74;
        goto try_finally_handler_5;
    }
    PyTuple_SET_ITEM( tmp_assign_source_45, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_3__bases.object == NULL );
    tmp_class_creation_3__bases.object = tmp_assign_source_45;

    tmp_assign_source_46 = impl_class_6_SP_DEVICE_INTERFACE_DATA_of_module_serial$tools$list_ports_windows(  );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 74;
        goto try_finally_handler_5;
    }
    assert( tmp_class_creation_3__class_dict.object == NULL );
    tmp_class_creation_3__class_dict.object = tmp_assign_source_46;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_3__class_dict.object;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 74;
        goto try_finally_handler_5;
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
    tmp_assign_source_47 = DICT_GET_ITEM( tmp_dget_dict_3, tmp_dget_key_3 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 74;
        goto try_finally_handler_5;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_class_bases_3 = tmp_class_creation_3__bases.object;

    tmp_assign_source_47 = SELECT_METACLASS( tmp_class_bases_3, GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass.object == NULL );
    tmp_class_creation_3__metaclass.object = tmp_assign_source_47;

    tmp_called_6 = tmp_class_creation_3__metaclass.object;

    tmp_call_arg_element_10 = const_str_plain_SP_DEVICE_INTERFACE_DATA;
    tmp_call_arg_element_11 = tmp_class_creation_3__bases.object;

    tmp_call_arg_element_12 = tmp_class_creation_3__class_dict.object;

    frame_module->f_lineno = 74;
    tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS3( tmp_called_6, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 74;
        goto try_finally_handler_5;
    }
    assert( tmp_class_creation_3__class.object == NULL );
    tmp_class_creation_3__class.object = tmp_assign_source_48;

    tmp_assign_source_49 = tmp_class_creation_3__class.object;

    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SP_DEVICE_INTERFACE_DATA, tmp_assign_source_49 );
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
    Py_XDECREF( tmp_class_creation_3__class.object );
    tmp_class_creation_3__class.object = NULL;

    Py_XDECREF( tmp_class_creation_3__bases.object );
    tmp_class_creation_3__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict.object );
    tmp_class_creation_3__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass.object );
    tmp_class_creation_3__metaclass.object = NULL;

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
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_POINTER );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SP_DEVICE_INTERFACE_DATA );

    if (unlikely( tmp_call_arg_element_13 == NULL ))
    {
        tmp_call_arg_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SP_DEVICE_INTERFACE_DATA );
    }

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298623 ], 46, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 83;
    tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVICE_INTERFACE_DATA, tmp_assign_source_50 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_51 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_c_void_p );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVICE_INTERFACE_DETAIL_DATA, tmp_assign_source_51 );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_windll );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_LoadLibrary );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_14 = const_str_plain_setupapi;
    frame_module->f_lineno = 87;
    tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi, tmp_assign_source_52 );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298669 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_53 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_SetupDiDestroyDeviceInfoList );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList, tmp_assign_source_53 );
    tmp_assattr_name_1 = PyList_New( 1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298699 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 89;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_1, 0, tmp_list_element_1 );
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );
    }

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298729 ], 50, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_argtypes, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_module->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_assattr_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_2 == NULL ))
    {
        tmp_assattr_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );
    }

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298729 ], 50, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_restype, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298669 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_54 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_SetupDiGetClassDevsA );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs, tmp_assign_source_54 );
    tmp_assattr_name_3 = PyList_New( 4 );
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_POINTER );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_15 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID );

    if (unlikely( tmp_call_arg_element_15 == NULL ))
    {
        tmp_call_arg_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GUID );
    }

    if ( tmp_call_arg_element_15 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298805 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 93;
    tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_3, 0, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PCTSTR );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PCTSTR );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298831 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_3, 1, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HWND );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HWND );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298859 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_3, 2, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_3, 3, tmp_list_element_2 );
    tmp_assattr_target_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );

    if (unlikely( tmp_assattr_target_3 == NULL ))
    {
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );
    }

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298885 ], 41, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_argtypes, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_assattr_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

    if (unlikely( tmp_assattr_name_4 == NULL ))
    {
        tmp_assattr_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
    }

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298699 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 94;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );

    if (unlikely( tmp_assattr_target_4 == NULL ))
    {
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );
    }

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298885 ], 41, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 94;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_restype, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ValidHandle );

    if (unlikely( tmp_assattr_name_5 == NULL ))
    {
        tmp_assattr_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValidHandle );
    }

    if ( tmp_assattr_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298926 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );

    if (unlikely( tmp_assattr_target_5 == NULL ))
    {
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );
    }

    if ( tmp_assattr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298885 ], 41, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_errcheck, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298669 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_55 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_SetupDiEnumDeviceInterfaces );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInterfaces, tmp_assign_source_55 );
    tmp_assattr_name_6 = PyList_New( 5 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298699 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assattr_name_6, 0, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298959 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assattr_name_6, 1, tmp_list_element_3 );
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_POINTER );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        frame_module->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_16 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID );

    if (unlikely( tmp_call_arg_element_16 == NULL ))
    {
        tmp_call_arg_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GUID );
    }

    if ( tmp_call_arg_element_16 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298805 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 98;
    tmp_list_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        frame_module->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_6, 2, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assattr_name_6, 3, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVICE_INTERFACE_DATA );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSP_DEVICE_INTERFACE_DATA );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298997 ], 47, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assattr_name_6, 4, tmp_list_element_3 );
    tmp_assattr_target_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInterfaces );

    if (unlikely( tmp_assattr_target_6 == NULL ))
    {
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInterfaces );
    }

    if ( tmp_assattr_target_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299044 ], 49, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_argtypes, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        frame_module->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_assattr_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_7 == NULL ))
    {
        tmp_assattr_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInterfaces );

    if (unlikely( tmp_assattr_target_7 == NULL ))
    {
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInterfaces );
    }

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299044 ], 49, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_restype, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298669 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_56 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_SetupDiGetDeviceInterfaceDetailA );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInterfaceDetail, tmp_assign_source_56 );
    tmp_assattr_name_8 = PyList_New( 6 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298699 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 0, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVICE_INTERFACE_DATA );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSP_DEVICE_INTERFACE_DATA );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298997 ], 47, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 1, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVICE_INTERFACE_DETAIL_DATA );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSP_DEVICE_INTERFACE_DETAIL_DATA );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299093 ], 54, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 2, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 3, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PDWORD );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PDWORD );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299147 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 4, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298959 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 5, tmp_list_element_4 );
    tmp_assattr_target_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInterfaceDetail );

    if (unlikely( tmp_assattr_target_8 == NULL ))
    {
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInterfaceDetail );
    }

    if ( tmp_assattr_target_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299175 ], 53, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_argtypes, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_8 );

        frame_module->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_8 );
    tmp_assattr_name_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_9 == NULL ))
    {
        tmp_assattr_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInterfaceDetail );

    if (unlikely( tmp_assattr_target_9 == NULL ))
    {
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInterfaceDetail );
    }

    if ( tmp_assattr_target_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299175 ], 53, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_restype, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298669 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_57 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_SetupDiGetDeviceRegistryPropertyA );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty, tmp_assign_source_57 );
    tmp_assattr_name_10 = PyList_New( 7 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298699 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_10, 0, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298959 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_10, 1, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_10, 2, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PDWORD );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PDWORD );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299147 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_10, 3, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PBYTE );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PBYTE );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299228 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_10, 4, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_10, 5, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PDWORD );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PDWORD );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299147 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_10, 6, tmp_list_element_5 );
    tmp_assattr_target_10 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );

    if (unlikely( tmp_assattr_target_10 == NULL ))
    {
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );
    }

    if ( tmp_assattr_target_10 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299255 ], 54, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_argtypes, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_10 );

        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_10 );
    tmp_assattr_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_11 == NULL ))
    {
        tmp_assattr_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 107;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_11 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );

    if (unlikely( tmp_assattr_target_11 == NULL ))
    {
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );
    }

    if ( tmp_assattr_target_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299255 ], 54, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 107;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_restype, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 107;
        goto frame_exception_exit_1;
    }
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298669 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 109;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_58 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_SetupDiOpenDevRegKey );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey, tmp_assign_source_58 );
    tmp_assattr_name_12 = PyList_New( 6 );
    tmp_list_element_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

    if (unlikely( tmp_list_element_6 == NULL ))
    {
        tmp_list_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
    }

    if ( tmp_list_element_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298699 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_6 );
    PyList_SET_ITEM( tmp_assattr_name_12, 0, tmp_list_element_6 );
    tmp_list_element_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );

    if (unlikely( tmp_list_element_6 == NULL ))
    {
        tmp_list_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );
    }

    if ( tmp_list_element_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298959 ], 38, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_6 );
    PyList_SET_ITEM( tmp_assattr_name_12, 1, tmp_list_element_6 );
    tmp_list_element_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_6 == NULL ))
    {
        tmp_list_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_6 );
    PyList_SET_ITEM( tmp_assattr_name_12, 2, tmp_list_element_6 );
    tmp_list_element_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_6 == NULL ))
    {
        tmp_list_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_6 );
    PyList_SET_ITEM( tmp_assattr_name_12, 3, tmp_list_element_6 );
    tmp_list_element_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_6 == NULL ))
    {
        tmp_list_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_6 );
    PyList_SET_ITEM( tmp_assattr_name_12, 4, tmp_list_element_6 );
    tmp_list_element_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_REGSAM );

    if (unlikely( tmp_list_element_6 == NULL ))
    {
        tmp_list_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_REGSAM );
    }

    if ( tmp_list_element_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_6 );
    PyList_SET_ITEM( tmp_assattr_name_12, 5, tmp_list_element_6 );
    tmp_assattr_target_12 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );

    if (unlikely( tmp_assattr_target_12 == NULL ))
    {
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );
    }

    if ( tmp_assattr_target_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299337 ], 42, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_argtypes, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        frame_module->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_12 );
    tmp_assattr_name_13 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HKEY );

    if (unlikely( tmp_assattr_name_13 == NULL ))
    {
        tmp_assattr_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HKEY );
    }

    if ( tmp_assattr_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298527 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_13 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );

    if (unlikely( tmp_assattr_target_13 == NULL ))
    {
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );
    }

    if ( tmp_assattr_target_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299337 ], 42, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_restype, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78309 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_source_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_windll );
    if ( tmp_source_name_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_LoadLibrary );
    Py_DECREF( tmp_source_name_23 );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_17 = const_str_plain_Advapi32;
    frame_module->f_lineno = 113;
    tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 113;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_advapi32, tmp_assign_source_59 );
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_advapi32 );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_advapi32 );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299379 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 114;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_60 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_RegCloseKey );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegCloseKey, tmp_assign_source_60 );
    tmp_assattr_name_14 = PyList_New( 1 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HKEY );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HKEY );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298527 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_14, 0, tmp_list_element_7 );
    tmp_assattr_target_14 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegCloseKey );

    if (unlikely( tmp_assattr_target_14 == NULL ))
    {
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegCloseKey );
    }

    if ( tmp_assattr_target_14 == NULL )
    {
        Py_DECREF( tmp_assattr_name_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299409 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_argtypes, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_14 );

        frame_module->f_lineno = 115;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_14 );
    tmp_assattr_name_15 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LONG );

    if (unlikely( tmp_assattr_name_15 == NULL ))
    {
        tmp_assattr_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LONG );
    }

    if ( tmp_assattr_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299442 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_15 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegCloseKey );

    if (unlikely( tmp_assattr_target_15 == NULL ))
    {
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegCloseKey );
    }

    if ( tmp_assattr_target_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299409 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_restype, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_advapi32 );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_advapi32 );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299379 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_61 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_RegQueryValueExA );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx, tmp_assign_source_61 );
    tmp_assattr_name_16 = PyList_New( 6 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HKEY );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HKEY );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298527 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_16, 0, tmp_list_element_8 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPCSTR );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCSTR );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299468 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_16, 1, tmp_list_element_8 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPDWORD );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299496 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_16, 2, tmp_list_element_8 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPDWORD );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299496 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_16, 3, tmp_list_element_8 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPBYTE );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPBYTE );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299525 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_16, 4, tmp_list_element_8 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPDWORD );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299496 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_16, 5, tmp_list_element_8 );
    tmp_assattr_target_16 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );

    if (unlikely( tmp_assattr_target_16 == NULL ))
    {
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );
    }

    if ( tmp_assattr_target_16 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299553 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_argtypes, tmp_assattr_name_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_16 );

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_16 );
    tmp_assattr_name_17 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LONG );

    if (unlikely( tmp_assattr_name_17 == NULL ))
    {
        tmp_assattr_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LONG );
    }

    if ( tmp_assattr_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299442 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_17 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );

    if (unlikely( tmp_assattr_target_17 == NULL ))
    {
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );
    }

    if ( tmp_assattr_target_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299553 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_restype, tmp_assattr_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_called_12 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID );

    if (unlikely( tmp_called_12 == NULL ))
    {
        tmp_called_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GUID );
    }

    if ( tmp_called_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298805 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_18 = const_long_pos_2262880736;
    tmp_call_arg_element_19 = const_int_pos_32905;
    tmp_call_arg_element_20 = const_int_pos_4560;
    tmp_binop_left_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BYTE );

    if (unlikely( tmp_binop_left_1 == NULL ))
    {
        tmp_binop_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTE );
    }

    if ( tmp_binop_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299590 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = const_int_pos_8;
    tmp_called_13 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_22 = const_int_pos_156;
    tmp_call_arg_element_23 = const_int_pos_228;
    tmp_call_arg_element_24 = const_int_pos_8;
    tmp_call_arg_element_25 = const_int_0;
    tmp_call_arg_element_26 = const_int_pos_62;
    tmp_call_arg_element_27 = const_int_pos_48;
    tmp_call_arg_element_28 = const_int_pos_31;
    tmp_call_arg_element_29 = const_int_pos_115;
    frame_module->f_lineno = 124;
    tmp_call_arg_element_21 = CALL_FUNCTION_WITH_ARGS8( tmp_called_13, tmp_call_arg_element_22, tmp_call_arg_element_23, tmp_call_arg_element_24, tmp_call_arg_element_25, tmp_call_arg_element_26, tmp_call_arg_element_27, tmp_call_arg_element_28, tmp_call_arg_element_29 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_call_arg_element_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 124;
    tmp_assign_source_62 = CALL_FUNCTION_WITH_ARGS4( tmp_called_12, tmp_call_arg_element_18, tmp_call_arg_element_19, tmp_call_arg_element_20, tmp_call_arg_element_21 );
    Py_DECREF( tmp_call_arg_element_21 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID_CLASS_COMPORT, tmp_assign_source_62 );
    tmp_assign_source_63 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DIGCF_PRESENT, tmp_assign_source_63 );
    tmp_assign_source_64 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DIGCF_DEVICEINTERFACE, tmp_assign_source_64 );
    tmp_assign_source_65 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_INVALID_HANDLE_VALUE, tmp_assign_source_65 );
    tmp_assign_source_66 = const_int_pos_122;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ERROR_INSUFFICIENT_BUFFER, tmp_assign_source_66 );
    tmp_assign_source_67 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_HARDWAREID, tmp_assign_source_67 );
    tmp_assign_source_68 = const_int_pos_12;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_FRIENDLYNAME, tmp_assign_source_68 );
    tmp_assign_source_69 = const_int_pos_259;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ERROR_NO_MORE_ITEMS, tmp_assign_source_69 );
    tmp_assign_source_70 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DICS_FLAG_GLOBAL, tmp_assign_source_70 );
    tmp_assign_source_71 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DIREG_DEV, tmp_assign_source_71 );
    tmp_assign_source_72 = const_int_pos_131097;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_KEY_READ, tmp_assign_source_72 );
    tmp_assign_source_73 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_REG_SZ, tmp_assign_source_73 );
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45662 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_to_bytes );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_30 = LIST_COPY( const_list_7bdf40026cc409f754b398d5081173e9_list );
    frame_module->f_lineno = 139;
    tmp_assign_source_74 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_30 );
    Py_DECREF( tmp_called_14 );
    Py_DECREF( tmp_call_arg_element_30 );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PortName, tmp_assign_source_74 );
    tmp_assign_source_75 = MAKE_FUNCTION_function_7_comports_of_module_serial$tools$list_ports_windows(  );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_75 );

        frame_module->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_75 );

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

    return MOD_RETURN_VALUE( module_serial$tools$list_ports_windows );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
