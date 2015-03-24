// Generated code for Python source for module 'serial.win32'
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

// The _module_serial$win32 is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_serial$win32;
PyDictObject *moduledict_serial$win32;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_6;
extern PyObject *const_int_pos_8;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_16;
extern PyObject *const_int_pos_17;
extern PyObject *const_int_pos_25;
extern PyObject *const_int_pos_32;
extern PyObject *const_int_pos_64;
extern PyObject *const_str_chr_42;
extern PyObject *const_int_pos_128;
extern PyObject *const_int_pos_256;
extern PyObject *const_int_pos_512;
static PyObject *const_int_pos_997;
extern PyObject *const_tuple_empty;
extern PyObject *const_int_pos_1024;
extern PyObject *const_int_pos_2048;
extern PyObject *const_int_pos_4096;
static PyObject *const_str_plain__0;
extern PyObject *const_str_plain_DCB;
extern PyObject *const_str_plain_BOOL;
extern PyObject *const_str_plain_BYTE;
extern PyObject *const_str_plain_WORD;
static PyObject *const_str_plain__DCB;
static PyObject *const_str_plain_fEof;
extern PyObject *const_str_plain_fInX;
extern PyObject *const_str_plain_DWORD;
static PyObject *const_str_plain_LPDCB;
static PyObject *const_str_plain_PVOID;
static PyObject *const_str_plain_Union;
extern PyObject *const_str_plain_fNull;
extern PyObject *const_str_plain_fOutX;
static PyObject *const_str_plain_fTxim;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_win32;
extern PyObject *const_str_plain_CLRDTR;
extern PyObject *const_str_plain_CLRRTS;
static PyObject *const_str_plain_EV_CTS;
static PyObject *const_str_plain_EV_DSR;
extern PyObject *const_str_plain_EV_ERR;
extern PyObject *const_str_plain_HANDLE;
extern PyObject *const_str_plain_LPCSTR;
static PyObject *const_str_plain_LPVOID;
static PyObject *const_str_plain_Offset;
extern PyObject *const_str_plain_Parity;
extern PyObject *const_str_plain_SETDTR;
extern PyObject *const_str_plain_SETRTS;
extern PyObject *const_str_plain_SETXON;
static PyObject *const_str_plain_WinDLL;
static PyObject *const_str_plain_XonLim;
extern PyObject *const_str_plain_c_char;
extern PyObject *const_str_plain_ctypes;
extern PyObject *const_str_plain_hEvent;
extern PyObject *const_str_plain_sizeof;
extern PyObject *const_str_plain_COMSTAT;
static PyObject *const_str_plain_EV_PERR;
static PyObject *const_str_plain_EV_RING;
static PyObject *const_str_plain_EV_RLSD;
static PyObject *const_str_plain_EofChar;
static PyObject *const_str_plain_EvtChar;
static PyObject *const_str_plain_LPCVOID;
static PyObject *const_str_plain_LPCWSTR;
extern PyObject *const_str_plain_LPDWORD;
extern PyObject *const_str_plain_POINTER;
static PyObject *const_str_plain_Pointer;
extern PyObject *const_str_plain_SETXOFF;
static PyObject *const_str_plain_XoffLim;
extern PyObject *const_str_plain_XonChar;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_c_int64;
extern PyObject *const_str_plain_c_ulong;
extern PyObject *const_str_plain_cbInQue;
extern PyObject *const_str_plain_fBinary;
static PyObject *const_str_plain_fDummy2;
extern PyObject *const_str_plain_fParity;
static PyObject *const_str_plain_nLength;
extern PyObject *const_str_plain_restype;
extern PyObject *const_int_pos_1073741824;
extern PyObject *const_str_plain_BaudRate;
extern PyObject *const_str_plain_ByteSize;
static PyObject *const_str_plain_EV_BREAK;
extern PyObject *const_str_plain_INFINITE;
static PyObject *const_str_plain_Internal;
extern PyObject *const_str_plain_MAXDWORD;
extern PyObject *const_str_plain_NOPARITY;
extern PyObject *const_str_plain_ReadFile;
extern PyObject *const_str_plain_StopBits;
extern PyObject *const_str_plain_XoffChar;
static PyObject *const_str_plain__COMSTAT;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain__fields_;
extern PyObject *const_str_plain_argtypes;
extern PyObject *const_str_plain_c_void_p;
extern PyObject *const_str_plain_cbOutQue;
static PyObject *const_str_plain_fCtsHold;
static PyObject *const_str_plain_fDsrHold;
extern PyObject *const_str_plain_is_64bit;
static PyObject *const_str_plain_kernel32;
static PyObject *const_long_pos_2147483648;
static PyObject *const_long_pos_4294967295;
static PyObject *const_str_plain_DCBlength;
static PyObject *const_str_plain_EV_EVENT1;
static PyObject *const_str_plain_EV_EVENT2;
static PyObject *const_str_plain_EV_RXCHAR;
static PyObject *const_str_plain_EV_RXFLAG;
static PyObject *const_str_plain_ErrorChar;
static PyObject *const_str_plain_LPCOMSTAT;
extern PyObject *const_str_plain_MS_CTS_ON;
extern PyObject *const_str_plain_MS_DSR_ON;
extern PyObject *const_str_plain_ODDPARITY;
extern PyObject *const_str_plain_PurgeComm;
extern PyObject *const_str_plain_SetupComm;
extern PyObject *const_str_plain_Structure;
extern PyObject *const_str_plain_ULONG_PTR;
extern PyObject *const_str_plain_WriteFile;
static PyObject *const_str_plain_fReserved;
static PyObject *const_str_plain_fRlsdHold;
static PyObject *const_str_plain_fXoffHold;
static PyObject *const_str_plain_fXoffSent;
static PyObject *const_str_plain_wReserved;
extern PyObject *const_str_plain_CreateFile;
extern PyObject *const_str_plain_EVENPARITY;
static PyObject *const_str_plain_EV_TXEMPTY;
extern PyObject *const_str_plain_MARKPARITY;
extern PyObject *const_str_plain_MS_RING_ON;
extern PyObject *const_str_plain_MS_RLSD_ON;
extern PyObject *const_str_plain_ONESTOPBIT;
extern PyObject *const_str_plain_OVERLAPPED;
static PyObject *const_str_plain_OffsetHigh;
extern PyObject *const_str_plain_ResetEvent;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_fErrorChar;
static PyObject *const_str_plain_wReserved1;
extern PyObject *const_str_plain_CloseHandle;
extern PyObject *const_str_plain_CreateEvent;
static PyObject *const_str_plain_CreateFileA;
static PyObject *const_str_plain_CreateFileW;
static PyObject *const_str_plain_EV_RX80FULL;
extern PyObject *const_str_plain_SPACEPARITY;
extern PyObject *const_str_plain_SetCommMask;
extern PyObject *const_str_plain_TWOSTOPBITS;
static PyObject *const_str_plain__OVERLAPPED;
static PyObject *const_str_plain__anonymous_;
extern PyObject *const_str_plain_fDtrControl;
extern PyObject *const_str_plain_fRtsControl;
static PyObject *const_list_str_plain__0_list;
extern PyObject *const_str_plain_COMMTIMEOUTS;
static PyObject *const_str_plain_CreateEventA;
static PyObject *const_str_plain_CreateEventW;
extern PyObject *const_str_plain_GENERIC_READ;
extern PyObject *const_str_plain_GetCommState;
extern PyObject *const_str_plain_GetLastError;
static PyObject *const_str_plain_InternalHigh;
static PyObject *const_str_plain_LPOVERLAPPED;
extern PyObject *const_str_plain_ONE5STOPBITS;
extern PyObject *const_str_plain_SetCommBreak;
extern PyObject *const_str_plain_SetCommState;
extern PyObject *const_str_plain_fOutxCtsFlow;
extern PyObject *const_str_plain_fOutxDsrFlow;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_GENERIC_WRITE;
extern PyObject *const_str_plain_OPEN_EXISTING;
extern PyObject *const_str_plain_PURGE_RXABORT;
extern PyObject *const_str_plain_PURGE_RXCLEAR;
extern PyObject *const_str_plain_PURGE_TXABORT;
extern PyObject *const_str_plain_PURGE_TXCLEAR;
static PyObject *const_str_plain__COMMTIMEOUTS;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_fAbortOnError;
extern PyObject *const_str_plain_ClearCommBreak;
extern PyObject *const_str_plain_ClearCommError;
static PyObject *const_str_plain_LPCOMMTIMEOUTS;
static PyObject *const_str_plain_bInheritHandle;
extern PyObject *const_str_plain_GetCommTimeouts;
extern PyObject *const_str_plain_SetCommTimeouts;
static PyObject *const_str_plain_fDsrSensitivity;
extern PyObject *const_str_plain_ERROR_IO_PENDING;
extern PyObject *const_tuple_str_plain_BOOL_tuple;
extern PyObject *const_tuple_str_plain_BYTE_tuple;
extern PyObject *const_tuple_str_plain_WORD_tuple;
static PyObject *const_str_plain_fTXContinueOnXoff;
extern PyObject *const_tuple_str_plain_DWORD_tuple;
extern PyObject *const_str_plain_DTR_CONTROL_ENABLE;
extern PyObject *const_str_plain_EscapeCommFunction;
extern PyObject *const_str_plain_GetCommModemStatus;
extern PyObject *const_str_plain_RTS_CONTROL_ENABLE;
extern PyObject *const_str_plain_RTS_CONTROL_TOGGLE;
static PyObject *const_str_plain__stdcall_libraries;
extern PyObject *const_tuple_str_plain_HANDLE_tuple;
extern PyObject *const_tuple_str_plain_LPCSTR_tuple;
extern PyObject *const_str_plain_DTR_CONTROL_DISABLE;
extern PyObject *const_str_plain_GetOverlappedResult;
extern PyObject *const_str_plain_RTS_CONTROL_DISABLE;
static PyObject *const_str_plain_ReadIntervalTimeout;
extern PyObject *const_str_plain_WaitForSingleObject;
static PyObject *const_tuple_str_plain_LPCWSTR_tuple;
extern PyObject *const_str_plain_FILE_FLAG_OVERLAPPED;
extern PyObject *const_str_plain_INVALID_HANDLE_VALUE;
static PyObject *const_str_plain__SECURITY_ATTRIBUTES;
static PyObject *const_str_plain_lpSecurityDescriptor;
extern PyObject *const_str_plain_DTR_CONTROL_HANDSHAKE;
extern PyObject *const_str_plain_FILE_ATTRIBUTE_NORMAL;
static PyObject *const_str_plain_LPSECURITY_ATTRIBUTES;
extern PyObject *const_str_plain_RTS_CONTROL_HANDSHAKE;
static PyObject *const_str_plain_ReadTotalTimeoutConstant;
static PyObject *const_str_plain_N11_OVERLAPPED4DOLLAR_48E;
static PyObject *const_str_plain_WriteTotalTimeoutConstant;
static PyObject *const_str_plain_ReadTotalTimeoutMultiplier;
static PyObject *const_str_plain_WriteTotalTimeoutMultiplier;
static PyObject *const_list_5fe71ecb740c0898f445980823e1ece2_list;
extern PyObject *const_str_digest_06710c9a9806ee0e5a3c19d895a7fd43;
extern PyObject *const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac;
static PyObject *const_str_digest_adc6211522c73154657d71600dd40b0a;
static PyObject *const_str_digest_ecb3c3ba3acbe98439bd01a3bddc3d5a;
static PyObject *const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E;

static void _initModuleConstants(void)
{
    const_int_pos_997 = PyInt_FromLong( 997l );
    const_str_plain__0 = UNSTREAM_STRING( &constant_bin[ 162511 ], 2, 1 );
    const_str_plain__DCB = UNSTREAM_STRING( &constant_bin[ 301771 ], 4, 1 );
    const_str_plain_fEof = UNSTREAM_STRING( &constant_bin[ 2541348 ], 4, 1 );
    const_str_plain_LPDCB = UNSTREAM_STRING( &constant_bin[ 302368 ], 5, 1 );
    const_str_plain_PVOID = UNSTREAM_STRING( &constant_bin[ 302060 ], 5, 1 );
    const_str_plain_Union = UNSTREAM_STRING( &constant_bin[ 302678 ], 5, 1 );
    const_str_plain_fTxim = UNSTREAM_STRING( &constant_bin[ 2541352 ], 5, 1 );
    const_str_plain_EV_CTS = UNSTREAM_STRING( &constant_bin[ 2541357 ], 6, 1 );
    const_str_plain_EV_DSR = UNSTREAM_STRING( &constant_bin[ 2541363 ], 6, 1 );
    const_str_plain_LPVOID = UNSTREAM_STRING( &constant_bin[ 302059 ], 6, 1 );
    const_str_plain_Offset = UNSTREAM_STRING( &constant_bin[ 379256 ], 6, 1 );
    const_str_plain_WinDLL = UNSTREAM_STRING( &constant_bin[ 301246 ], 6, 1 );
    const_str_plain_XonLim = UNSTREAM_STRING( &constant_bin[ 2541369 ], 6, 1 );
    const_str_plain_EV_PERR = UNSTREAM_STRING( &constant_bin[ 2541375 ], 7, 1 );
    const_str_plain_EV_RING = UNSTREAM_STRING( &constant_bin[ 2541382 ], 7, 1 );
    const_str_plain_EV_RLSD = UNSTREAM_STRING( &constant_bin[ 2541389 ], 7, 1 );
    const_str_plain_EofChar = UNSTREAM_STRING( &constant_bin[ 2541396 ], 7, 1 );
    const_str_plain_EvtChar = UNSTREAM_STRING( &constant_bin[ 2541403 ], 7, 1 );
    const_str_plain_LPCVOID = UNSTREAM_STRING( &constant_bin[ 302000 ], 7, 1 );
    const_str_plain_LPCWSTR = UNSTREAM_STRING( &constant_bin[ 301646 ], 7, 1 );
    const_str_plain_Pointer = UNSTREAM_STRING( &constant_bin[ 23264 ], 7, 1 );
    const_str_plain_XoffLim = UNSTREAM_STRING( &constant_bin[ 2541410 ], 7, 1 );
    const_str_plain_c_int64 = UNSTREAM_STRING( &constant_bin[ 301342 ], 7, 1 );
    const_str_plain_fDummy2 = UNSTREAM_STRING( &constant_bin[ 2541417 ], 7, 1 );
    const_str_plain_nLength = UNSTREAM_STRING( &constant_bin[ 2541424 ], 7, 1 );
    const_str_plain_EV_BREAK = UNSTREAM_STRING( &constant_bin[ 2541431 ], 8, 1 );
    const_str_plain_Internal = UNSTREAM_STRING( &constant_bin[ 414129 ], 8, 1 );
    const_str_plain__COMSTAT = UNSTREAM_STRING( &constant_bin[ 301741 ], 8, 1 );
    const_str_plain_fCtsHold = UNSTREAM_STRING( &constant_bin[ 2541439 ], 8, 1 );
    const_str_plain_fDsrHold = UNSTREAM_STRING( &constant_bin[ 2541447 ], 8, 1 );
    const_str_plain_kernel32 = UNSTREAM_STRING( &constant_bin[ 2541455 ], 8, 1 );
    const_long_pos_2147483648 = PyLong_FromUnsignedLong( 2147483648ul );
    const_long_pos_4294967295 = PyLong_FromUnsignedLong( 4294967295ul );
    const_str_plain_DCBlength = UNSTREAM_STRING( &constant_bin[ 2541463 ], 9, 1 );
    const_str_plain_EV_EVENT1 = UNSTREAM_STRING( &constant_bin[ 2541472 ], 9, 1 );
    const_str_plain_EV_EVENT2 = UNSTREAM_STRING( &constant_bin[ 2541481 ], 9, 1 );
    const_str_plain_EV_RXCHAR = UNSTREAM_STRING( &constant_bin[ 2541490 ], 9, 1 );
    const_str_plain_EV_RXFLAG = UNSTREAM_STRING( &constant_bin[ 2541499 ], 9, 1 );
    const_str_plain_ErrorChar = UNSTREAM_STRING( &constant_bin[ 2541508 ], 9, 1 );
    const_str_plain_LPCOMSTAT = UNSTREAM_STRING( &constant_bin[ 302192 ], 9, 1 );
    const_str_plain_fReserved = UNSTREAM_STRING( &constant_bin[ 2541517 ], 9, 1 );
    const_str_plain_fRlsdHold = UNSTREAM_STRING( &constant_bin[ 2541526 ], 9, 1 );
    const_str_plain_fXoffHold = UNSTREAM_STRING( &constant_bin[ 2541535 ], 9, 1 );
    const_str_plain_fXoffSent = UNSTREAM_STRING( &constant_bin[ 2541544 ], 9, 1 );
    const_str_plain_wReserved = UNSTREAM_STRING( &constant_bin[ 2541553 ], 9, 1 );
    const_str_plain_EV_TXEMPTY = UNSTREAM_STRING( &constant_bin[ 2541562 ], 10, 1 );
    const_str_plain_OffsetHigh = UNSTREAM_STRING( &constant_bin[ 2541572 ], 10, 1 );
    const_str_plain_wReserved1 = UNSTREAM_STRING( &constant_bin[ 2541582 ], 10, 1 );
    const_str_plain_CreateFileA = UNSTREAM_STRING( &constant_bin[ 301579 ], 11, 1 );
    const_str_plain_CreateFileW = UNSTREAM_STRING( &constant_bin[ 301675 ], 11, 1 );
    const_str_plain_EV_RX80FULL = UNSTREAM_STRING( &constant_bin[ 2541592 ], 11, 1 );
    const_str_plain__OVERLAPPED = UNSTREAM_STRING( &constant_bin[ 301708 ], 11, 1 );
    const_str_plain__anonymous_ = UNSTREAM_STRING( &constant_bin[ 2541603 ], 11, 1 );
    const_list_str_plain__0_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain__0_list, 0, const_str_plain__0 ); Py_INCREF( const_str_plain__0 );
    const_str_plain_CreateEventA = UNSTREAM_STRING( &constant_bin[ 301502 ], 12, 1 );
    const_str_plain_CreateEventW = UNSTREAM_STRING( &constant_bin[ 301612 ], 12, 1 );
    const_str_plain_InternalHigh = UNSTREAM_STRING( &constant_bin[ 2541614 ], 12, 1 );
    const_str_plain_LPOVERLAPPED = UNSTREAM_STRING( &constant_bin[ 301873 ], 12, 1 );
    const_str_plain__COMMTIMEOUTS = UNSTREAM_STRING( &constant_bin[ 301797 ], 13, 1 );
    const_str_plain_LPCOMMTIMEOUTS = UNSTREAM_STRING( &constant_bin[ 302432 ], 14, 1 );
    const_str_plain_bInheritHandle = UNSTREAM_STRING( &constant_bin[ 2541626 ], 14, 1 );
    const_str_plain_fDsrSensitivity = UNSTREAM_STRING( &constant_bin[ 2541640 ], 15, 1 );
    const_str_plain_fTXContinueOnXoff = UNSTREAM_STRING( &constant_bin[ 2541655 ], 17, 1 );
    const_str_plain__stdcall_libraries = UNSTREAM_STRING( &constant_bin[ 301274 ], 18, 1 );
    const_str_plain_ReadIntervalTimeout = UNSTREAM_STRING( &constant_bin[ 2541672 ], 19, 1 );
    const_tuple_str_plain_LPCWSTR_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LPCWSTR_tuple, 0, const_str_plain_LPCWSTR ); Py_INCREF( const_str_plain_LPCWSTR );
    const_str_plain__SECURITY_ATTRIBUTES = UNSTREAM_STRING( &constant_bin[ 301460 ], 20, 1 );
    const_str_plain_lpSecurityDescriptor = UNSTREAM_STRING( &constant_bin[ 2541691 ], 20, 1 );
    const_str_plain_LPSECURITY_ATTRIBUTES = UNSTREAM_STRING( &constant_bin[ 301536 ], 21, 1 );
    const_str_plain_ReadTotalTimeoutConstant = UNSTREAM_STRING( &constant_bin[ 2541711 ], 24, 1 );
    const_str_plain_N11_OVERLAPPED4DOLLAR_48E = UNSTREAM_STRING( &constant_bin[ 302762 ], 25, 1 );
    const_str_plain_WriteTotalTimeoutConstant = UNSTREAM_STRING( &constant_bin[ 2541735 ], 25, 1 );
    const_str_plain_ReadTotalTimeoutMultiplier = UNSTREAM_STRING( &constant_bin[ 2541760 ], 26, 1 );
    const_str_plain_WriteTotalTimeoutMultiplier = UNSTREAM_STRING( &constant_bin[ 2541786 ], 27, 1 );
    const_list_5fe71ecb740c0898f445980823e1ece2_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2541813 ], 1366 );
    const_str_digest_adc6211522c73154657d71600dd40b0a = UNSTREAM_STRING( &constant_bin[ 2543179 ], 48, 0 );
    const_str_digest_ecb3c3ba3acbe98439bd01a3bddc3d5a = UNSTREAM_STRING( &constant_bin[ 2543227 ], 44, 0 );
    const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E = UNSTREAM_STRING( &constant_bin[ 302705 ], 35, 1 );
}

// The module code objects.
static PyCodeObject *codeobj_d6cd7412a7821e4bd2664a95340c7953;
static PyCodeObject *codeobj_bd4fefb925a12cf0f3b9790baf86b7f3;

static void _initModuleCodeObjects(void)
{
    codeobj_d6cd7412a7821e4bd2664a95340c7953 = MAKE_CODEOBJ( const_str_digest_adc6211522c73154657d71600dd40b0a, const_str_plain_is_64bit, 14, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_bd4fefb925a12cf0f3b9790baf86b7f3 = MAKE_CODEOBJ( const_str_digest_adc6211522c73154657d71600dd40b0a, const_str_plain_win32, 0, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_2__SECURITY_ATTRIBUTES_of_module_serial$win32(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3__OVERLAPPED_of_module_serial$win32(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4__COMSTAT_of_module_serial$win32(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_5__DCB_of_module_serial$win32(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_6__COMMTIMEOUTS_of_module_serial$win32(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_N11_OVERLAPPED4DOLLAR_48E_of_module_serial$win32(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_8_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E_of_module_serial$win32(  );


static PyObject *MAKE_FUNCTION_function_1_is_64bit_of_module_serial$win32(  );


// The module function definitions.
static PyObject *impl_function_1_is_64bit_of_module_serial$win32( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d6cd7412a7821e4bd2664a95340c7953, module_serial$win32 );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_sizeof );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sizeof );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302858 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 16;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_ulong );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_ulong );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302893 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 16;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 16;
    tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_sizeof );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sizeof );
    }

    if ( tmp_called_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302858 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 16;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_void_p );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302929 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 16;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 16;
    tmp_compexpr_right_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        frame_function->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_return_value = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 16;
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
static PyObject *fparse_function_1_is_64bit_of_module_serial$win32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1_is_64bit_of_module_serial$win32( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_1_is_64bit_of_module_serial$win32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_1_is_64bit_of_module_serial$win32( self );
    }
    else
    {
        PyObject *result = fparse_function_1_is_64bit_of_module_serial$win32( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2__SECURITY_ATTRIBUTES_of_module_serial$win32(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_06710c9a9806ee0e5a3c19d895a7fd43;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_3__OVERLAPPED_of_module_serial$win32(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_06710c9a9806ee0e5a3c19d895a7fd43;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_4__COMSTAT_of_module_serial$win32(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_06710c9a9806ee0e5a3c19d895a7fd43;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_5__DCB_of_module_serial$win32(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_06710c9a9806ee0e5a3c19d895a7fd43;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_6__COMMTIMEOUTS_of_module_serial$win32(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_06710c9a9806ee0e5a3c19d895a7fd43;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_7_N11_OVERLAPPED4DOLLAR_48E_of_module_serial$win32(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_06710c9a9806ee0e5a3c19d895a7fd43;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_8_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E_of_module_serial$win32(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_06710c9a9806ee0e5a3c19d895a7fd43;
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



static PyObject *MAKE_FUNCTION_function_1_is_64bit_of_module_serial$win32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_is_64bit_of_module_serial$win32,
        dparse_function_1_is_64bit_of_module_serial$win32,
        const_str_plain_is_64bit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d6cd7412a7821e4bd2664a95340c7953,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$win32,
        const_str_digest_ecb3c3ba3acbe98439bd01a3bddc3d5a
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial$win32 =
{
    PyModuleDef_HEAD_INIT,
    "serial.win32",   /* m_name */
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

MOD_INIT_DECL( serial$win32 )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial$win32 );
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

    // puts( "in initserial$win32" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial$win32 = Py_InitModule4(
        "serial.win32",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_serial$win32 = PyModule_Create( &mdef_serial$win32 );
#endif

    moduledict_serial$win32 = (PyDictObject *)((PyModuleObject *)module_serial$win32)->md_dict;

    assertObject( module_serial$win32 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_06710c9a9806ee0e5a3c19d895a7fd43, module_serial$win32 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_serial$win32 );

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
    PyObjectTempVariable tmp_try_except_1__unhandled_indicator;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_assattr_name_18;
    PyObject *tmp_assattr_name_19;
    PyObject *tmp_assattr_name_20;
    PyObject *tmp_assattr_name_21;
    PyObject *tmp_assattr_name_22;
    PyObject *tmp_assattr_name_23;
    PyObject *tmp_assattr_name_24;
    PyObject *tmp_assattr_name_25;
    PyObject *tmp_assattr_name_26;
    PyObject *tmp_assattr_name_27;
    PyObject *tmp_assattr_name_28;
    PyObject *tmp_assattr_name_29;
    PyObject *tmp_assattr_name_30;
    PyObject *tmp_assattr_name_31;
    PyObject *tmp_assattr_name_32;
    PyObject *tmp_assattr_name_33;
    PyObject *tmp_assattr_name_34;
    PyObject *tmp_assattr_name_35;
    PyObject *tmp_assattr_name_36;
    PyObject *tmp_assattr_name_37;
    PyObject *tmp_assattr_name_38;
    PyObject *tmp_assattr_name_39;
    PyObject *tmp_assattr_name_40;
    PyObject *tmp_assattr_name_41;
    PyObject *tmp_assattr_name_42;
    PyObject *tmp_assattr_name_43;
    PyObject *tmp_assattr_name_44;
    PyObject *tmp_assattr_name_45;
    PyObject *tmp_assattr_name_46;
    PyObject *tmp_assattr_name_47;
    PyObject *tmp_assattr_name_48;
    PyObject *tmp_assattr_name_49;
    PyObject *tmp_assattr_name_50;
    PyObject *tmp_assattr_name_51;
    PyObject *tmp_assattr_name_52;
    PyObject *tmp_assattr_name_53;
    PyObject *tmp_assattr_name_54;
    PyObject *tmp_assattr_name_55;
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
    PyObject *tmp_assattr_target_18;
    PyObject *tmp_assattr_target_19;
    PyObject *tmp_assattr_target_20;
    PyObject *tmp_assattr_target_21;
    PyObject *tmp_assattr_target_22;
    PyObject *tmp_assattr_target_23;
    PyObject *tmp_assattr_target_24;
    PyObject *tmp_assattr_target_25;
    PyObject *tmp_assattr_target_26;
    PyObject *tmp_assattr_target_27;
    PyObject *tmp_assattr_target_28;
    PyObject *tmp_assattr_target_29;
    PyObject *tmp_assattr_target_30;
    PyObject *tmp_assattr_target_31;
    PyObject *tmp_assattr_target_32;
    PyObject *tmp_assattr_target_33;
    PyObject *tmp_assattr_target_34;
    PyObject *tmp_assattr_target_35;
    PyObject *tmp_assattr_target_36;
    PyObject *tmp_assattr_target_37;
    PyObject *tmp_assattr_target_38;
    PyObject *tmp_assattr_target_39;
    PyObject *tmp_assattr_target_40;
    PyObject *tmp_assattr_target_41;
    PyObject *tmp_assattr_target_42;
    PyObject *tmp_assattr_target_43;
    PyObject *tmp_assattr_target_44;
    PyObject *tmp_assattr_target_45;
    PyObject *tmp_assattr_target_46;
    PyObject *tmp_assattr_target_47;
    PyObject *tmp_assattr_target_48;
    PyObject *tmp_assattr_target_49;
    PyObject *tmp_assattr_target_50;
    PyObject *tmp_assattr_target_51;
    PyObject *tmp_assattr_target_52;
    PyObject *tmp_assattr_target_53;
    PyObject *tmp_assattr_target_54;
    PyObject *tmp_assattr_target_55;
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
    PyObject *tmp_class_bases_1;
    PyObject *tmp_class_bases_2;
    PyObject *tmp_class_bases_3;
    PyObject *tmp_class_bases_4;
    PyObject *tmp_class_bases_5;
    PyObject *tmp_class_bases_6;
    PyObject *tmp_class_bases_7;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_dict_2;
    PyObject *tmp_dget_dict_3;
    PyObject *tmp_dget_dict_4;
    PyObject *tmp_dget_dict_5;
    PyObject *tmp_dget_dict_6;
    PyObject *tmp_dget_dict_7;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_dget_key_2;
    PyObject *tmp_dget_key_3;
    PyObject *tmp_dget_key_4;
    PyObject *tmp_dget_key_5;
    PyObject *tmp_dget_key_6;
    PyObject *tmp_dget_key_7;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    bool tmp_is_1;
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
    PyObject *tmp_list_element_16;
    PyObject *tmp_list_element_17;
    PyObject *tmp_list_element_18;
    PyObject *tmp_list_element_19;
    PyObject *tmp_list_element_20;
    PyObject *tmp_list_element_21;
    PyObject *tmp_list_element_22;
    PyObject *tmp_list_element_23;
    PyObject *tmp_list_element_24;
    PyObject *tmp_list_element_25;
    PyObject *tmp_list_element_26;
    PyObject *tmp_list_element_27;
    PyObject *tmp_list_element_28;
    PyObject *tmp_list_element_29;
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
    PyObject *tmp_star_imported_1;
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
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    int tmp_tried_lineno_5;
    int tmp_tried_lineno_6;
    int tmp_tried_lineno_7;
    int tmp_tried_lineno_8;
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
    PyObject *tmp_tuple_element_28;
    PyObject *tmp_tuple_element_29;
    PyObject *tmp_tuple_element_30;
    PyObject *tmp_tuple_element_31;
    PyObject *tmp_tuple_element_32;
    PyObject *tmp_tuple_element_33;
    PyObject *tmp_tuple_element_34;
    PyObject *tmp_tuple_element_35;
    PyObject *tmp_tuple_element_36;
    PyObject *tmp_tuple_element_37;
    PyObject *tmp_tuple_element_38;
    PyObject *tmp_tuple_element_39;
    PyObject *tmp_tuple_element_40;
    PyObject *tmp_tuple_element_41;
    PyObject *tmp_tuple_element_42;
    PyObject *tmp_tuple_element_43;
    PyObject *tmp_tuple_element_44;
    PyObject *tmp_tuple_element_45;
    PyObject *tmp_tuple_element_46;
    PyObject *tmp_tuple_element_47;
    PyObject *tmp_tuple_element_48;
    PyObject *tmp_tuple_element_49;
    PyObject *tmp_tuple_element_50;
    PyObject *tmp_tuple_element_51;
    PyObject *tmp_tuple_element_52;
    PyObject *tmp_tuple_element_53;
    PyObject *tmp_tuple_element_54;
    PyObject *tmp_tuple_element_55;
    PyObject *tmp_tuple_element_56;
    PyObject *tmp_tuple_element_57;
    PyObject *tmp_tuple_element_58;
    PyObject *tmp_tuple_element_59;
    PyObject *tmp_tuple_element_60;
    PyObject *tmp_tuple_element_61;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_adc6211522c73154657d71600dd40b0a;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_bd4fefb925a12cf0f3b9790baf86b7f3, module_serial$win32 );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_serial$win32)->md_dict;
    frame_module->f_lineno = 1;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_ctypes, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_serial$win32, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_1 );
    tmp_import_globals_2 = ((PyModuleObject *)module_serial$win32)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_HANDLE_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_HANDLE );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE, tmp_assign_source_3 );
    tmp_import_globals_3 = ((PyModuleObject *)module_serial$win32)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_BOOL_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_BOOL );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL, tmp_assign_source_4 );
    tmp_import_globals_4 = ((PyModuleObject *)module_serial$win32)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_LPCWSTR_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_LPCWSTR );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCWSTR, tmp_assign_source_5 );
    tmp_assign_source_6 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries, tmp_assign_source_6 );
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WinDLL );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WinDLL );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301240 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = const_str_plain_kernel32;
    frame_module->f_lineno = 6;
    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_kernel32;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_5 = ((PyModuleObject *)module_serial$win32)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_DWORD_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_DWORD );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_serial$win32)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_WORD_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_WORD );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WORD, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_serial$win32)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_BYTE_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_BYTE );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BYTE, tmp_assign_source_9 );
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = const_int_neg_1;
    frame_module->f_lineno = 11;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_value );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_INVALID_HANDLE_VALUE, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_function_1_is_64bit_of_module_serial$win32(  );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_is_64bit, tmp_assign_source_11 );
    tmp_called_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_is_64bit );

    if (unlikely( tmp_called_3 == NULL ))
    {
        tmp_called_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_64bit );
    }

    if ( tmp_called_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300415 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 21;
    tmp_cond_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_module->f_lineno = 21;
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
    tmp_assign_source_12 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_int64 );

    if (unlikely( tmp_assign_source_12 == NULL ))
    {
        tmp_assign_source_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_int64 );
    }

    if ( tmp_assign_source_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301336 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ULONG_PTR, tmp_assign_source_12 );
    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_13 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_ulong );

    if (unlikely( tmp_assign_source_13 == NULL ))
    {
        tmp_assign_source_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_ulong );
    }

    if ( tmp_assign_source_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301365 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 26;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ULONG_PTR, tmp_assign_source_13 );
    branch_end_1:;
    // Tried code
    tmp_assign_source_14 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301394 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 29;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_14, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_14;

    tmp_assign_source_15 = impl_class_2__SECURITY_ATTRIBUTES_of_module_serial$win32(  );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 29;
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


        frame_module->f_lineno = 29;
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


        frame_module->f_lineno = 29;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_16 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_16;

    tmp_called_4 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_3 = const_str_plain__SECURITY_ATTRIBUTES;
    tmp_call_arg_element_4 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_5 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 29;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 29;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_17;

    tmp_assign_source_18 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__SECURITY_ATTRIBUTES, tmp_assign_source_18 );
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
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301425 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__SECURITY_ATTRIBUTES );

    if (unlikely( tmp_call_arg_element_6 == NULL ))
    {
        tmp_call_arg_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SECURITY_ATTRIBUTES );
    }

    if ( tmp_call_arg_element_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301454 ], 42, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 31;
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES, tmp_assign_source_19 );
    tmp_assign_source_20 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator.object == NULL );
    tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_20 );

    // Tried code
    // Tried block of try/except
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 35;
        goto try_except_handler_1;
    }

    tmp_subscr_subscript_1 = const_str_plain_kernel32;
    tmp_source_name_2 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 35;
        goto try_except_handler_1;
    }
    tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CreateEventW );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 35;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventW, tmp_assign_source_21 );
    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    tmp_assign_source_22 = Py_False;
    if (tmp_try_except_1__unhandled_indicator.object == NULL)
    {
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
    }
    else
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator.object;
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_22 );
        Py_DECREF( old );
    }
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
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 36;
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
    tmp_import_globals_8 = ((PyModuleObject *)module_serial$win32)->md_dict;
    frame_module->f_lineno = 38;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_1a7d5584478e34d09993b3dcac9ab1ac, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_LPCSTR_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 38;
        goto try_finally_handler_2;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_LPCSTR );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 38;
        goto try_finally_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCSTR, tmp_assign_source_23 );
    tmp_subscr_target_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_2 == NULL ))
    {
        tmp_subscr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 39;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_2 = const_str_plain_kernel32;
    tmp_source_name_3 = LOOKUP_SUBSCRIPT( tmp_subscr_target_2, tmp_subscr_subscript_2 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 39;
        goto try_finally_handler_2;
    }
    tmp_assign_source_24 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_CreateEventA );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 39;
        goto try_finally_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventA, tmp_assign_source_24 );
    tmp_assattr_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assattr_name_1 == NULL ))
    {
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 40;
        goto try_finally_handler_2;
    }

    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventA );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventA );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301496 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 40;
        goto try_finally_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_restype, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 40;
        goto try_finally_handler_2;
    }
    tmp_assattr_name_2 = PyList_New( 4 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301530 ], 43, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 41;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_2, 0, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 41;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_2, 1, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 41;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_2, 2, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCSTR );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCSTR );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299468 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 41;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_2, 3, tmp_list_element_1 );
    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventA );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventA );
    }

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301496 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 41;
        goto try_finally_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_argtypes, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        frame_module->f_lineno = 41;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_assign_source_25 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventA );

    if (unlikely( tmp_assign_source_25 == NULL ))
    {
        tmp_assign_source_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventA );
    }

    if ( tmp_assign_source_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301496 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 42;
        goto try_finally_handler_2;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEvent, tmp_assign_source_25 );
    tmp_subscr_target_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_3 == NULL ))
    {
        tmp_subscr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 44;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_3 = const_str_plain_kernel32;
    tmp_source_name_4 = LOOKUP_SUBSCRIPT( tmp_subscr_target_3, tmp_subscr_subscript_3 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 44;
        goto try_finally_handler_2;
    }
    tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_CreateFileA );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 44;
        goto try_finally_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileA, tmp_assign_source_26 );
    tmp_assattr_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assattr_name_3 == NULL ))
    {
        tmp_assattr_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 45;
        goto try_finally_handler_2;
    }

    tmp_assattr_target_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileA );

    if (unlikely( tmp_assattr_target_3 == NULL ))
    {
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileA );
    }

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301573 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 45;
        goto try_finally_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_restype, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 45;
        goto try_finally_handler_2;
    }
    tmp_assattr_name_4 = PyList_New( 7 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCSTR );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCSTR );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299468 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 46;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_4, 0, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 46;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_4, 1, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 46;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_4, 2, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301530 ], 43, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 46;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_4, 3, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 46;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_4, 4, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 46;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_4, 5, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 46;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_4, 6, tmp_list_element_2 );
    tmp_assattr_target_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileA );

    if (unlikely( tmp_assattr_target_4 == NULL ))
    {
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileA );
    }

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301573 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 46;
        goto try_finally_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_argtypes, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        frame_module->f_lineno = 46;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_assign_source_27 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileA );

    if (unlikely( tmp_assign_source_27 == NULL ))
    {
        tmp_assign_source_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileA );
    }

    if ( tmp_assign_source_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301573 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 47;
        goto try_finally_handler_2;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFile, tmp_assign_source_27 );
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_2;
    branch_end_2:;
    try_except_end_1:;
    tmp_compare_left_3 = tmp_try_except_1__unhandled_indicator.object;

    tmp_compare_right_3 = Py_True;
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
    tmp_assattr_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assattr_name_5 == NULL ))
    {
        tmp_assattr_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_assattr_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 49;
        goto try_finally_handler_2;
    }

    tmp_assattr_target_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventW );

    if (unlikely( tmp_assattr_target_5 == NULL ))
    {
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventW );
    }

    if ( tmp_assattr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301606 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 49;
        goto try_finally_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_restype, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 49;
        goto try_finally_handler_2;
    }
    tmp_assattr_name_6 = PyList_New( 4 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301530 ], 43, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 50;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assattr_name_6, 0, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 50;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assattr_name_6, 1, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 50;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assattr_name_6, 2, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCWSTR );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCWSTR );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301640 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 50;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assattr_name_6, 3, tmp_list_element_3 );
    tmp_assattr_target_6 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventW );

    if (unlikely( tmp_assattr_target_6 == NULL ))
    {
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventW );
    }

    if ( tmp_assattr_target_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301606 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 50;
        goto try_finally_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_argtypes, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        frame_module->f_lineno = 50;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_assign_source_28 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventW );

    if (unlikely( tmp_assign_source_28 == NULL ))
    {
        tmp_assign_source_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventW );
    }

    if ( tmp_assign_source_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301606 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 51;
        goto try_finally_handler_2;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEvent, tmp_assign_source_28 );
    tmp_subscr_target_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_4 == NULL ))
    {
        tmp_subscr_target_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 53;
        goto try_finally_handler_2;
    }

    tmp_subscr_subscript_4 = const_str_plain_kernel32;
    tmp_source_name_5 = LOOKUP_SUBSCRIPT( tmp_subscr_target_4, tmp_subscr_subscript_4 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 53;
        goto try_finally_handler_2;
    }
    tmp_assign_source_29 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_CreateFileW );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 53;
        goto try_finally_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileW, tmp_assign_source_29 );
    tmp_assattr_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assattr_name_7 == NULL ))
    {
        tmp_assattr_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_assattr_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 54;
        goto try_finally_handler_2;
    }

    tmp_assattr_target_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileW );

    if (unlikely( tmp_assattr_target_7 == NULL ))
    {
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileW );
    }

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301669 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 54;
        goto try_finally_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_restype, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 54;
        goto try_finally_handler_2;
    }
    tmp_assattr_name_8 = PyList_New( 7 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCWSTR );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCWSTR );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301640 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 55;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 0, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

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

        frame_module->f_lineno = 55;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 1, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

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

        frame_module->f_lineno = 55;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 2, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301530 ], 43, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 55;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 3, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

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

        frame_module->f_lineno = 55;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 4, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

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

        frame_module->f_lineno = 55;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 5, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 55;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 6, tmp_list_element_4 );
    tmp_assattr_target_8 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileW );

    if (unlikely( tmp_assattr_target_8 == NULL ))
    {
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileW );
    }

    if ( tmp_assattr_target_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301669 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 55;
        goto try_finally_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_argtypes, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_8 );

        frame_module->f_lineno = 55;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_assattr_name_8 );
    tmp_assign_source_30 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileW );

    if (unlikely( tmp_assign_source_30 == NULL ))
    {
        tmp_assign_source_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileW );
    }

    if ( tmp_assign_source_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301669 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 56;
        goto try_finally_handler_2;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFile, tmp_assign_source_30 );
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

    tmp_tried_lineno_2 = frame_module->f_lineno;
    tmp_result = tmp_try_except_1__unhandled_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_try_except_1__unhandled_indicator.object );
        tmp_try_except_1__unhandled_indicator.object = NULL;
    }

    assert( tmp_result != false );
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
    tmp_assign_source_31 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301394 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 58;
        goto try_finally_handler_3;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_31, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases.object == NULL );
    tmp_class_creation_2__bases.object = tmp_assign_source_31;

    tmp_assign_source_32 = impl_class_3__OVERLAPPED_of_module_serial$win32(  );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 58;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_2__class_dict.object == NULL );
    tmp_class_creation_2__class_dict.object = tmp_assign_source_32;

    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_2__class_dict.object;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 58;
        goto try_finally_handler_3;
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
    tmp_assign_source_33 = DICT_GET_ITEM( tmp_dget_dict_2, tmp_dget_key_2 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 58;
        goto try_finally_handler_3;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_bases_2 = tmp_class_creation_2__bases.object;

    tmp_assign_source_33 = SELECT_METACLASS( tmp_class_bases_2, GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass.object == NULL );
    tmp_class_creation_2__metaclass.object = tmp_assign_source_33;

    tmp_called_6 = tmp_class_creation_2__metaclass.object;

    tmp_call_arg_element_7 = const_str_plain__OVERLAPPED;
    tmp_call_arg_element_8 = tmp_class_creation_2__bases.object;

    tmp_call_arg_element_9 = tmp_class_creation_2__class_dict.object;

    frame_module->f_lineno = 58;
    tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS3( tmp_called_6, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 58;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_2__class.object == NULL );
    tmp_class_creation_2__class.object = tmp_assign_source_34;

    tmp_assign_source_35 = tmp_class_creation_2__class.object;

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__OVERLAPPED, tmp_assign_source_35 );
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
    Py_XDECREF( tmp_class_creation_2__class.object );
    tmp_class_creation_2__class.object = NULL;

    Py_XDECREF( tmp_class_creation_2__bases.object );
    tmp_class_creation_2__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict.object );
    tmp_class_creation_2__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass.object );
    tmp_class_creation_2__metaclass.object = NULL;

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
    tmp_assign_source_36 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );

    if (unlikely( tmp_assign_source_36 == NULL ))
    {
        tmp_assign_source_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );
    }

    if ( tmp_assign_source_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301702 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 60;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_OVERLAPPED, tmp_assign_source_36 );
    // Tried code
    tmp_assign_source_37 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_37 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301394 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 62;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_37, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_3__bases.object == NULL );
    tmp_class_creation_3__bases.object = tmp_assign_source_37;

    tmp_assign_source_38 = impl_class_4__COMSTAT_of_module_serial$win32(  );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 62;
        goto try_finally_handler_4;
    }
    assert( tmp_class_creation_3__class_dict.object == NULL );
    tmp_class_creation_3__class_dict.object = tmp_assign_source_38;

    tmp_compare_left_5 = const_str_plain___metaclass__;
    tmp_compare_right_5 = tmp_class_creation_3__class_dict.object;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 62;
        goto try_finally_handler_4;
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
    tmp_assign_source_39 = DICT_GET_ITEM( tmp_dget_dict_3, tmp_dget_key_3 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 62;
        goto try_finally_handler_4;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_class_bases_3 = tmp_class_creation_3__bases.object;

    tmp_assign_source_39 = SELECT_METACLASS( tmp_class_bases_3, GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass.object == NULL );
    tmp_class_creation_3__metaclass.object = tmp_assign_source_39;

    tmp_called_7 = tmp_class_creation_3__metaclass.object;

    tmp_call_arg_element_10 = const_str_plain__COMSTAT;
    tmp_call_arg_element_11 = tmp_class_creation_3__bases.object;

    tmp_call_arg_element_12 = tmp_class_creation_3__class_dict.object;

    frame_module->f_lineno = 62;
    tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS3( tmp_called_7, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 62;
        goto try_finally_handler_4;
    }
    assert( tmp_class_creation_3__class.object == NULL );
    tmp_class_creation_3__class.object = tmp_assign_source_40;

    tmp_assign_source_41 = tmp_class_creation_3__class.object;

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMSTAT, tmp_assign_source_41 );
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
    Py_XDECREF( tmp_class_creation_3__class.object );
    tmp_class_creation_3__class.object = NULL;

    Py_XDECREF( tmp_class_creation_3__bases.object );
    tmp_class_creation_3__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict.object );
    tmp_class_creation_3__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass.object );
    tmp_class_creation_3__metaclass.object = NULL;

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
    tmp_assign_source_42 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMSTAT );

    if (unlikely( tmp_assign_source_42 == NULL ))
    {
        tmp_assign_source_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMSTAT );
    }

    if ( tmp_assign_source_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301735 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 64;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_COMSTAT, tmp_assign_source_42 );
    // Tried code
    tmp_assign_source_43 = PyTuple_New( 1 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_43 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301394 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 66;
        goto try_finally_handler_5;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_43, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_4__bases.object == NULL );
    tmp_class_creation_4__bases.object = tmp_assign_source_43;

    tmp_assign_source_44 = impl_class_5__DCB_of_module_serial$win32(  );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 66;
        goto try_finally_handler_5;
    }
    assert( tmp_class_creation_4__class_dict.object == NULL );
    tmp_class_creation_4__class_dict.object = tmp_assign_source_44;

    tmp_compare_left_6 = const_str_plain___metaclass__;
    tmp_compare_right_6 = tmp_class_creation_4__class_dict.object;

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    if ( tmp_cmp_In_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 66;
        goto try_finally_handler_5;
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
    tmp_assign_source_45 = DICT_GET_ITEM( tmp_dget_dict_4, tmp_dget_key_4 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 66;
        goto try_finally_handler_5;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_class_bases_4 = tmp_class_creation_4__bases.object;

    tmp_assign_source_45 = SELECT_METACLASS( tmp_class_bases_4, GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass.object == NULL );
    tmp_class_creation_4__metaclass.object = tmp_assign_source_45;

    tmp_called_8 = tmp_class_creation_4__metaclass.object;

    tmp_call_arg_element_13 = const_str_plain__DCB;
    tmp_call_arg_element_14 = tmp_class_creation_4__bases.object;

    tmp_call_arg_element_15 = tmp_class_creation_4__class_dict.object;

    frame_module->f_lineno = 66;
    tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS3( tmp_called_8, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_15 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 66;
        goto try_finally_handler_5;
    }
    assert( tmp_class_creation_4__class.object == NULL );
    tmp_class_creation_4__class.object = tmp_assign_source_46;

    tmp_assign_source_47 = tmp_class_creation_4__class.object;

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__DCB, tmp_assign_source_47 );
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
    Py_XDECREF( tmp_class_creation_4__class.object );
    tmp_class_creation_4__class.object = NULL;

    Py_XDECREF( tmp_class_creation_4__bases.object );
    tmp_class_creation_4__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_4__class_dict.object );
    tmp_class_creation_4__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass.object );
    tmp_class_creation_4__metaclass.object = NULL;

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
    tmp_assign_source_48 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__DCB );

    if (unlikely( tmp_assign_source_48 == NULL ))
    {
        tmp_assign_source_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DCB );
    }

    if ( tmp_assign_source_48 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301765 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 68;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DCB, tmp_assign_source_48 );
    // Tried code
    tmp_assign_source_49 = PyTuple_New( 1 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_49 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301394 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 70;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_49, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_5__bases.object == NULL );
    tmp_class_creation_5__bases.object = tmp_assign_source_49;

    tmp_assign_source_50 = impl_class_6__COMMTIMEOUTS_of_module_serial$win32(  );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 70;
        goto try_finally_handler_6;
    }
    assert( tmp_class_creation_5__class_dict.object == NULL );
    tmp_class_creation_5__class_dict.object = tmp_assign_source_50;

    tmp_compare_left_7 = const_str_plain___metaclass__;
    tmp_compare_right_7 = tmp_class_creation_5__class_dict.object;

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    if ( tmp_cmp_In_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 70;
        goto try_finally_handler_6;
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
    tmp_assign_source_51 = DICT_GET_ITEM( tmp_dget_dict_5, tmp_dget_key_5 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 70;
        goto try_finally_handler_6;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_class_bases_5 = tmp_class_creation_5__bases.object;

    tmp_assign_source_51 = SELECT_METACLASS( tmp_class_bases_5, GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass.object == NULL );
    tmp_class_creation_5__metaclass.object = tmp_assign_source_51;

    tmp_called_9 = tmp_class_creation_5__metaclass.object;

    tmp_call_arg_element_16 = const_str_plain__COMMTIMEOUTS;
    tmp_call_arg_element_17 = tmp_class_creation_5__bases.object;

    tmp_call_arg_element_18 = tmp_class_creation_5__class_dict.object;

    frame_module->f_lineno = 70;
    tmp_assign_source_52 = CALL_FUNCTION_WITH_ARGS3( tmp_called_9, tmp_call_arg_element_16, tmp_call_arg_element_17, tmp_call_arg_element_18 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 70;
        goto try_finally_handler_6;
    }
    assert( tmp_class_creation_5__class.object == NULL );
    tmp_class_creation_5__class.object = tmp_assign_source_52;

    tmp_assign_source_53 = tmp_class_creation_5__class.object;

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS, tmp_assign_source_53 );
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
    Py_XDECREF( tmp_class_creation_5__class.object );
    tmp_class_creation_5__class.object = NULL;

    Py_XDECREF( tmp_class_creation_5__bases.object );
    tmp_class_creation_5__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_5__class_dict.object );
    tmp_class_creation_5__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass.object );
    tmp_class_creation_5__metaclass.object = NULL;

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
    tmp_assign_source_54 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );

    if (unlikely( tmp_assign_source_54 == NULL ))
    {
        tmp_assign_source_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );
    }

    if ( tmp_assign_source_54 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301791 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 72;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_COMMTIMEOUTS, tmp_assign_source_54 );
    tmp_subscr_target_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_5 == NULL ))
    {
        tmp_subscr_target_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 74;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_5 = const_str_plain_kernel32;
    tmp_source_name_6 = LOOKUP_SUBSCRIPT( tmp_subscr_target_5, tmp_subscr_subscript_5 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 74;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_55 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_GetLastError );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 74;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetLastError, tmp_assign_source_55 );
    tmp_assattr_name_9 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_assattr_name_9 == NULL ))
    {
        tmp_assattr_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_assattr_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_9 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetLastError );

    if (unlikely( tmp_assattr_target_9 == NULL ))
    {
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetLastError );
    }

    if ( tmp_assattr_target_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300745 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_restype, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_10 = PyList_New( 0 );
    tmp_assattr_target_10 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetLastError );

    if (unlikely( tmp_assattr_target_10 == NULL ))
    {
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetLastError );
    }

    if ( tmp_assattr_target_10 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 300745 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_argtypes, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_10 );

        frame_module->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_10 );
    tmp_called_10 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

    if (unlikely( tmp_called_10 == NULL ))
    {
        tmp_called_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
    }

    if ( tmp_called_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301425 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_19 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );

    if (unlikely( tmp_call_arg_element_19 == NULL ))
    {
        tmp_call_arg_element_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );
    }

    if ( tmp_call_arg_element_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301702 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 78;
    tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_19 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED, tmp_assign_source_56 );
    tmp_called_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

    if (unlikely( tmp_called_11 == NULL ))
    {
        tmp_called_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
    }

    if ( tmp_called_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301425 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_20 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_call_arg_element_20 == NULL ))
    {
        tmp_call_arg_element_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_call_arg_element_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 79;
    tmp_assign_source_57 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_20 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD, tmp_assign_source_57 );
    tmp_subscr_target_6 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_6 == NULL ))
    {
        tmp_subscr_target_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_6 = const_str_plain_kernel32;
    tmp_source_name_7 = LOOKUP_SUBSCRIPT( tmp_subscr_target_6, tmp_subscr_subscript_6 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_58 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_GetOverlappedResult );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetOverlappedResult, tmp_assign_source_58 );
    tmp_assattr_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_11 == NULL ))
    {
        tmp_assattr_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetOverlappedResult );

    if (unlikely( tmp_assattr_target_11 == NULL ))
    {
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetOverlappedResult );
    }

    if ( tmp_assattr_target_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301826 ], 41, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_restype, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_12 = PyList_New( 4 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_12, 0, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301867 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_12, 1, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299496 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_12, 2, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_12, 3, tmp_list_element_5 );
    tmp_assattr_target_12 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetOverlappedResult );

    if (unlikely( tmp_assattr_target_12 == NULL ))
    {
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetOverlappedResult );
    }

    if ( tmp_assattr_target_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301826 ], 41, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_argtypes, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        frame_module->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_12 );
    tmp_subscr_target_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_7 == NULL ))
    {
        tmp_subscr_target_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_7 = const_str_plain_kernel32;
    tmp_source_name_8 = LOOKUP_SUBSCRIPT( tmp_subscr_target_7, tmp_subscr_subscript_7 );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_59 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ResetEvent );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ResetEvent, tmp_assign_source_59 );
    tmp_assattr_name_13 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_13 == NULL ))
    {
        tmp_assattr_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_13 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ResetEvent );

    if (unlikely( tmp_assattr_target_13 == NULL ))
    {
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResetEvent );
    }

    if ( tmp_assattr_target_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301901 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_restype, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_14 = PyList_New( 1 );
    tmp_list_element_6 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_6 == NULL ))
    {
        tmp_list_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 87;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_6 );
    PyList_SET_ITEM( tmp_assattr_name_14, 0, tmp_list_element_6 );
    tmp_assattr_target_14 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ResetEvent );

    if (unlikely( tmp_assattr_target_14 == NULL ))
    {
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResetEvent );
    }

    if ( tmp_assattr_target_14 == NULL )
    {
        Py_DECREF( tmp_assattr_name_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301901 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_argtypes, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_14 );

        frame_module->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_14 );
    tmp_assign_source_60 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_void_p );

    if (unlikely( tmp_assign_source_60 == NULL ))
    {
        tmp_assign_source_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p );
    }

    if ( tmp_assign_source_60 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301933 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 89;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCVOID, tmp_assign_source_60 );
    tmp_subscr_target_8 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_8 == NULL ))
    {
        tmp_subscr_target_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_8 = const_str_plain_kernel32;
    tmp_source_name_9 = LOOKUP_SUBSCRIPT( tmp_subscr_target_8, tmp_subscr_subscript_8 );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_61 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_WriteFile );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WriteFile, tmp_assign_source_61 );
    tmp_assattr_name_15 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_15 == NULL ))
    {
        tmp_assattr_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_15 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WriteFile );

    if (unlikely( tmp_assattr_target_15 == NULL ))
    {
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WriteFile );
    }

    if ( tmp_assattr_target_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301963 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_restype, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_16 = PyList_New( 5 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_16, 0, tmp_list_element_7 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCVOID );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCVOID );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301994 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_16, 1, tmp_list_element_7 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_16, 2, tmp_list_element_7 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299496 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_16, 3, tmp_list_element_7 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301867 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_16, 4, tmp_list_element_7 );
    tmp_assattr_target_16 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WriteFile );

    if (unlikely( tmp_assattr_target_16 == NULL ))
    {
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WriteFile );
    }

    if ( tmp_assattr_target_16 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301963 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_argtypes, tmp_assattr_name_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_16 );

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_16 );
    tmp_assign_source_62 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_void_p );

    if (unlikely( tmp_assign_source_62 == NULL ))
    {
        tmp_assign_source_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p );
    }

    if ( tmp_assign_source_62 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301933 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPVOID, tmp_assign_source_62 );
    tmp_subscr_target_9 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_9 == NULL ))
    {
        tmp_subscr_target_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_9 = const_str_plain_kernel32;
    tmp_source_name_10 = LOOKUP_SUBSCRIPT( tmp_subscr_target_9, tmp_subscr_subscript_9 );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_63 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_ReadFile );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ReadFile, tmp_assign_source_63 );
    tmp_assattr_name_17 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_17 == NULL ))
    {
        tmp_assattr_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_17 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ReadFile );

    if (unlikely( tmp_assattr_target_17 == NULL ))
    {
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadFile );
    }

    if ( tmp_assattr_target_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302023 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_restype, tmp_assattr_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_18 = PyList_New( 5 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_18, 0, tmp_list_element_8 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPVOID );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPVOID );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302053 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_18, 1, tmp_list_element_8 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_18, 2, tmp_list_element_8 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299496 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_18, 3, tmp_list_element_8 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301867 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_18, 4, tmp_list_element_8 );
    tmp_assattr_target_18 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ReadFile );

    if (unlikely( tmp_assattr_target_18 == NULL ))
    {
        tmp_assattr_target_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadFile );
    }

    if ( tmp_assattr_target_18 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302023 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_argtypes, tmp_assattr_name_18 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_18 );

        frame_module->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_18 );
    tmp_subscr_target_10 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_10 == NULL ))
    {
        tmp_subscr_target_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_10 = const_str_plain_kernel32;
    tmp_source_name_11 = LOOKUP_SUBSCRIPT( tmp_subscr_target_10, tmp_subscr_subscript_10 );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_64 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_CloseHandle );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CloseHandle, tmp_assign_source_64 );
    tmp_assattr_name_19 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_19 == NULL ))
    {
        tmp_assattr_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_19 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CloseHandle );

    if (unlikely( tmp_assattr_target_19 == NULL ))
    {
        tmp_assattr_target_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CloseHandle );
    }

    if ( tmp_assattr_target_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302081 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain_restype, tmp_assattr_name_19 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_20 = PyList_New( 1 );
    tmp_list_element_9 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_9 == NULL ))
    {
        tmp_list_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_9 );
    PyList_SET_ITEM( tmp_assattr_name_20, 0, tmp_list_element_9 );
    tmp_assattr_target_20 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CloseHandle );

    if (unlikely( tmp_assattr_target_20 == NULL ))
    {
        tmp_assattr_target_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CloseHandle );
    }

    if ( tmp_assattr_target_20 == NULL )
    {
        Py_DECREF( tmp_assattr_name_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302081 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain_argtypes, tmp_assattr_name_20 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_20 );

        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_20 );
    tmp_subscr_target_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_11 == NULL ))
    {
        tmp_subscr_target_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_11 = const_str_plain_kernel32;
    tmp_source_name_12 = LOOKUP_SUBSCRIPT( tmp_subscr_target_11, tmp_subscr_subscript_11 );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_65 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_ClearCommBreak );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommBreak, tmp_assign_source_65 );
    tmp_assattr_name_21 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_21 == NULL ))
    {
        tmp_assattr_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_21 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommBreak );

    if (unlikely( tmp_assattr_target_21 == NULL ))
    {
        tmp_assattr_target_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClearCommBreak );
    }

    if ( tmp_assattr_target_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302114 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_21, const_str_plain_restype, tmp_assattr_name_21 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_22 = PyList_New( 1 );
    tmp_list_element_10 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_10 == NULL ))
    {
        tmp_list_element_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_10 == NULL )
    {
        Py_DECREF( tmp_assattr_name_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 107;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_10 );
    PyList_SET_ITEM( tmp_assattr_name_22, 0, tmp_list_element_10 );
    tmp_assattr_target_22 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommBreak );

    if (unlikely( tmp_assattr_target_22 == NULL ))
    {
        tmp_assattr_target_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClearCommBreak );
    }

    if ( tmp_assattr_target_22 == NULL )
    {
        Py_DECREF( tmp_assattr_name_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302114 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 107;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_22, const_str_plain_argtypes, tmp_assattr_name_22 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_22 );

        frame_module->f_lineno = 107;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_22 );
    tmp_called_12 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

    if (unlikely( tmp_called_12 == NULL ))
    {
        tmp_called_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
    }

    if ( tmp_called_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301425 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 109;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_21 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMSTAT );

    if (unlikely( tmp_call_arg_element_21 == NULL ))
    {
        tmp_call_arg_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMSTAT );
    }

    if ( tmp_call_arg_element_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301735 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 109;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 109;
    tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_21 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCOMSTAT, tmp_assign_source_66 );
    tmp_subscr_target_12 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_12 == NULL ))
    {
        tmp_subscr_target_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_12 = const_str_plain_kernel32;
    tmp_source_name_13 = LOOKUP_SUBSCRIPT( tmp_subscr_target_12, tmp_subscr_subscript_12 );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_67 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_ClearCommError );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommError, tmp_assign_source_67 );
    tmp_assattr_name_23 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_23 == NULL ))
    {
        tmp_assattr_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 112;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_23 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommError );

    if (unlikely( tmp_assattr_target_23 == NULL ))
    {
        tmp_assattr_target_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClearCommError );
    }

    if ( tmp_assattr_target_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302150 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 112;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_23, const_str_plain_restype, tmp_assattr_name_23 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_24 = PyList_New( 3 );
    tmp_list_element_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_11 == NULL ))
    {
        tmp_list_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_11 == NULL )
    {
        Py_DECREF( tmp_assattr_name_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 113;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_11 );
    PyList_SET_ITEM( tmp_assattr_name_24, 0, tmp_list_element_11 );
    tmp_list_element_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD );

    if (unlikely( tmp_list_element_11 == NULL ))
    {
        tmp_list_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
    }

    if ( tmp_list_element_11 == NULL )
    {
        Py_DECREF( tmp_assattr_name_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299496 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 113;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_11 );
    PyList_SET_ITEM( tmp_assattr_name_24, 1, tmp_list_element_11 );
    tmp_list_element_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCOMSTAT );

    if (unlikely( tmp_list_element_11 == NULL ))
    {
        tmp_list_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCOMSTAT );
    }

    if ( tmp_list_element_11 == NULL )
    {
        Py_DECREF( tmp_assattr_name_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302186 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 113;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_11 );
    PyList_SET_ITEM( tmp_assattr_name_24, 2, tmp_list_element_11 );
    tmp_assattr_target_24 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommError );

    if (unlikely( tmp_assattr_target_24 == NULL ))
    {
        tmp_assattr_target_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClearCommError );
    }

    if ( tmp_assattr_target_24 == NULL )
    {
        Py_DECREF( tmp_assattr_name_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302150 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_24, const_str_plain_argtypes, tmp_assattr_name_24 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_24 );

        frame_module->f_lineno = 113;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_24 );
    tmp_subscr_target_13 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_13 == NULL ))
    {
        tmp_subscr_target_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_13 = const_str_plain_kernel32;
    tmp_source_name_14 = LOOKUP_SUBSCRIPT( tmp_subscr_target_13, tmp_subscr_subscript_13 );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 115;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_68 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_SetupComm );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 115;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetupComm, tmp_assign_source_68 );
    tmp_assattr_name_25 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_25 == NULL ))
    {
        tmp_assattr_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_25 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetupComm );

    if (unlikely( tmp_assattr_target_25 == NULL ))
    {
        tmp_assattr_target_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupComm );
    }

    if ( tmp_assattr_target_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302217 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_25, const_str_plain_restype, tmp_assattr_name_25 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_26 = PyList_New( 3 );
    tmp_list_element_12 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_12 == NULL ))
    {
        tmp_list_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_26 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 117;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_12 );
    PyList_SET_ITEM( tmp_assattr_name_26, 0, tmp_list_element_12 );
    tmp_list_element_12 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_12 == NULL ))
    {
        tmp_list_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_26 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 117;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_12 );
    PyList_SET_ITEM( tmp_assattr_name_26, 1, tmp_list_element_12 );
    tmp_list_element_12 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_12 == NULL ))
    {
        tmp_list_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_26 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 117;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_12 );
    PyList_SET_ITEM( tmp_assattr_name_26, 2, tmp_list_element_12 );
    tmp_assattr_target_26 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetupComm );

    if (unlikely( tmp_assattr_target_26 == NULL ))
    {
        tmp_assattr_target_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupComm );
    }

    if ( tmp_assattr_target_26 == NULL )
    {
        Py_DECREF( tmp_assattr_name_26 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302217 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_26, const_str_plain_argtypes, tmp_assattr_name_26 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_26 );

        frame_module->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_26 );
    tmp_subscr_target_14 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_14 == NULL ))
    {
        tmp_subscr_target_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_14 = const_str_plain_kernel32;
    tmp_source_name_15 = LOOKUP_SUBSCRIPT( tmp_subscr_target_14, tmp_subscr_subscript_14 );
    if ( tmp_source_name_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_69 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_EscapeCommFunction );
    Py_DECREF( tmp_source_name_15 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EscapeCommFunction, tmp_assign_source_69 );
    tmp_assattr_name_27 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_27 == NULL ))
    {
        tmp_assattr_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_27 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EscapeCommFunction );

    if (unlikely( tmp_assattr_target_27 == NULL ))
    {
        tmp_assattr_target_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EscapeCommFunction );
    }

    if ( tmp_assattr_target_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302248 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_27, const_str_plain_restype, tmp_assattr_name_27 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_28 = PyList_New( 2 );
    tmp_list_element_13 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_13 == NULL ))
    {
        tmp_list_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_13 == NULL )
    {
        Py_DECREF( tmp_assattr_name_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_13 );
    PyList_SET_ITEM( tmp_assattr_name_28, 0, tmp_list_element_13 );
    tmp_list_element_13 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_13 == NULL ))
    {
        tmp_list_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_13 == NULL )
    {
        Py_DECREF( tmp_assattr_name_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_13 );
    PyList_SET_ITEM( tmp_assattr_name_28, 1, tmp_list_element_13 );
    tmp_assattr_target_28 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EscapeCommFunction );

    if (unlikely( tmp_assattr_target_28 == NULL ))
    {
        tmp_assattr_target_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EscapeCommFunction );
    }

    if ( tmp_assattr_target_28 == NULL )
    {
        Py_DECREF( tmp_assattr_name_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302248 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_28, const_str_plain_argtypes, tmp_assattr_name_28 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_28 );

        frame_module->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_28 );
    tmp_subscr_target_15 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_15 == NULL ))
    {
        tmp_subscr_target_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_15 = const_str_plain_kernel32;
    tmp_source_name_16 = LOOKUP_SUBSCRIPT( tmp_subscr_target_15, tmp_subscr_subscript_15 );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_70 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_GetCommModemStatus );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommModemStatus, tmp_assign_source_70 );
    tmp_assattr_name_29 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_29 == NULL ))
    {
        tmp_assattr_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_29 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommModemStatus );

    if (unlikely( tmp_assattr_target_29 == NULL ))
    {
        tmp_assattr_target_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommModemStatus );
    }

    if ( tmp_assattr_target_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302288 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_29, const_str_plain_restype, tmp_assattr_name_29 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_30 = PyList_New( 2 );
    tmp_list_element_14 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_14 == NULL ))
    {
        tmp_list_element_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_14 == NULL )
    {
        Py_DECREF( tmp_assattr_name_30 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 125;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_14 );
    PyList_SET_ITEM( tmp_assattr_name_30, 0, tmp_list_element_14 );
    tmp_list_element_14 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD );

    if (unlikely( tmp_list_element_14 == NULL ))
    {
        tmp_list_element_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
    }

    if ( tmp_list_element_14 == NULL )
    {
        Py_DECREF( tmp_assattr_name_30 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299496 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 125;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_14 );
    PyList_SET_ITEM( tmp_assattr_name_30, 1, tmp_list_element_14 );
    tmp_assattr_target_30 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommModemStatus );

    if (unlikely( tmp_assattr_target_30 == NULL ))
    {
        tmp_assattr_target_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommModemStatus );
    }

    if ( tmp_assattr_target_30 == NULL )
    {
        Py_DECREF( tmp_assattr_name_30 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302288 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_30, const_str_plain_argtypes, tmp_assattr_name_30 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_30 );

        frame_module->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_30 );
    tmp_called_13 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

    if (unlikely( tmp_called_13 == NULL ))
    {
        tmp_called_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
    }

    if ( tmp_called_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301425 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_22 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__DCB );

    if (unlikely( tmp_call_arg_element_22 == NULL ))
    {
        tmp_call_arg_element_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DCB );
    }

    if ( tmp_call_arg_element_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301765 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 127;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 127;
    tmp_assign_source_71 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_22 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDCB, tmp_assign_source_71 );
    tmp_subscr_target_16 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_16 == NULL ))
    {
        tmp_subscr_target_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 129;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_16 = const_str_plain_kernel32;
    tmp_source_name_17 = LOOKUP_SUBSCRIPT( tmp_subscr_target_16, tmp_subscr_subscript_16 );
    if ( tmp_source_name_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 129;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_72 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_GetCommState );
    Py_DECREF( tmp_source_name_17 );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 129;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommState, tmp_assign_source_72 );
    tmp_assattr_name_31 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_31 == NULL ))
    {
        tmp_assattr_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 130;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_31 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommState );

    if (unlikely( tmp_assattr_target_31 == NULL ))
    {
        tmp_assattr_target_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommState );
    }

    if ( tmp_assattr_target_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302328 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 130;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_31, const_str_plain_restype, tmp_assattr_name_31 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_32 = PyList_New( 2 );
    tmp_list_element_15 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_15 == NULL ))
    {
        tmp_list_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_15 == NULL )
    {
        Py_DECREF( tmp_assattr_name_32 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 131;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_15 );
    PyList_SET_ITEM( tmp_assattr_name_32, 0, tmp_list_element_15 );
    tmp_list_element_15 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDCB );

    if (unlikely( tmp_list_element_15 == NULL ))
    {
        tmp_list_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDCB );
    }

    if ( tmp_list_element_15 == NULL )
    {
        Py_DECREF( tmp_assattr_name_32 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302362 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 131;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_15 );
    PyList_SET_ITEM( tmp_assattr_name_32, 1, tmp_list_element_15 );
    tmp_assattr_target_32 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommState );

    if (unlikely( tmp_assattr_target_32 == NULL ))
    {
        tmp_assattr_target_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommState );
    }

    if ( tmp_assattr_target_32 == NULL )
    {
        Py_DECREF( tmp_assattr_name_32 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302328 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 131;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_32, const_str_plain_argtypes, tmp_assattr_name_32 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_32 );

        frame_module->f_lineno = 131;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_32 );
    tmp_called_14 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

    if (unlikely( tmp_called_14 == NULL ))
    {
        tmp_called_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
    }

    if ( tmp_called_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301425 ], 29, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 133;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_23 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );

    if (unlikely( tmp_call_arg_element_23 == NULL ))
    {
        tmp_call_arg_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );
    }

    if ( tmp_call_arg_element_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301791 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 133;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 133;
    tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_23 );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 133;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCOMMTIMEOUTS, tmp_assign_source_73 );
    tmp_subscr_target_17 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_17 == NULL ))
    {
        tmp_subscr_target_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 135;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_17 = const_str_plain_kernel32;
    tmp_source_name_18 = LOOKUP_SUBSCRIPT( tmp_subscr_target_17, tmp_subscr_subscript_17 );
    if ( tmp_source_name_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 135;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_74 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_GetCommTimeouts );
    Py_DECREF( tmp_source_name_18 );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 135;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommTimeouts, tmp_assign_source_74 );
    tmp_assattr_name_33 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_33 == NULL ))
    {
        tmp_assattr_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 136;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_33 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommTimeouts );

    if (unlikely( tmp_assattr_target_33 == NULL ))
    {
        tmp_assattr_target_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommTimeouts );
    }

    if ( tmp_assattr_target_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302389 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 136;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_33, const_str_plain_restype, tmp_assattr_name_33 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 136;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_34 = PyList_New( 2 );
    tmp_list_element_16 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_16 == NULL ))
    {
        tmp_list_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_16 == NULL )
    {
        Py_DECREF( tmp_assattr_name_34 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 137;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_16 );
    PyList_SET_ITEM( tmp_assattr_name_34, 0, tmp_list_element_16 );
    tmp_list_element_16 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCOMMTIMEOUTS );

    if (unlikely( tmp_list_element_16 == NULL ))
    {
        tmp_list_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCOMMTIMEOUTS );
    }

    if ( tmp_list_element_16 == NULL )
    {
        Py_DECREF( tmp_assattr_name_34 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302426 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 137;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_16 );
    PyList_SET_ITEM( tmp_assattr_name_34, 1, tmp_list_element_16 );
    tmp_assattr_target_34 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommTimeouts );

    if (unlikely( tmp_assattr_target_34 == NULL ))
    {
        tmp_assattr_target_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommTimeouts );
    }

    if ( tmp_assattr_target_34 == NULL )
    {
        Py_DECREF( tmp_assattr_name_34 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302389 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 137;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_34, const_str_plain_argtypes, tmp_assattr_name_34 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_34 );

        frame_module->f_lineno = 137;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_34 );
    tmp_subscr_target_18 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_18 == NULL ))
    {
        tmp_subscr_target_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_18 = const_str_plain_kernel32;
    tmp_source_name_19 = LOOKUP_SUBSCRIPT( tmp_subscr_target_18, tmp_subscr_subscript_18 );
    if ( tmp_source_name_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_75 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_PurgeComm );
    Py_DECREF( tmp_source_name_19 );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PurgeComm, tmp_assign_source_75 );
    tmp_assattr_name_35 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_35 == NULL ))
    {
        tmp_assattr_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 140;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_35 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PurgeComm );

    if (unlikely( tmp_assattr_target_35 == NULL ))
    {
        tmp_assattr_target_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PurgeComm );
    }

    if ( tmp_assattr_target_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302462 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 140;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_35, const_str_plain_restype, tmp_assattr_name_35 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 140;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_36 = PyList_New( 2 );
    tmp_list_element_17 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_17 == NULL ))
    {
        tmp_list_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_17 == NULL )
    {
        Py_DECREF( tmp_assattr_name_36 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 141;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_17 );
    PyList_SET_ITEM( tmp_assattr_name_36, 0, tmp_list_element_17 );
    tmp_list_element_17 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_17 == NULL ))
    {
        tmp_list_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_17 == NULL )
    {
        Py_DECREF( tmp_assattr_name_36 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 141;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_17 );
    PyList_SET_ITEM( tmp_assattr_name_36, 1, tmp_list_element_17 );
    tmp_assattr_target_36 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PurgeComm );

    if (unlikely( tmp_assattr_target_36 == NULL ))
    {
        tmp_assattr_target_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PurgeComm );
    }

    if ( tmp_assattr_target_36 == NULL )
    {
        Py_DECREF( tmp_assattr_name_36 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302462 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 141;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_36, const_str_plain_argtypes, tmp_assattr_name_36 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_36 );

        frame_module->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_36 );
    tmp_subscr_target_19 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_19 == NULL ))
    {
        tmp_subscr_target_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_19 = const_str_plain_kernel32;
    tmp_source_name_20 = LOOKUP_SUBSCRIPT( tmp_subscr_target_19, tmp_subscr_subscript_19 );
    if ( tmp_source_name_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 143;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_76 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_SetCommBreak );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 143;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommBreak, tmp_assign_source_76 );
    tmp_assattr_name_37 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_37 == NULL ))
    {
        tmp_assattr_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_37 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_37 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommBreak );

    if (unlikely( tmp_assattr_target_37 == NULL ))
    {
        tmp_assattr_target_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommBreak );
    }

    if ( tmp_assattr_target_37 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302493 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_37, const_str_plain_restype, tmp_assattr_name_37 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 144;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_38 = PyList_New( 1 );
    tmp_list_element_18 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_18 == NULL ))
    {
        tmp_list_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_18 == NULL )
    {
        Py_DECREF( tmp_assattr_name_38 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 145;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_18 );
    PyList_SET_ITEM( tmp_assattr_name_38, 0, tmp_list_element_18 );
    tmp_assattr_target_38 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommBreak );

    if (unlikely( tmp_assattr_target_38 == NULL ))
    {
        tmp_assattr_target_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommBreak );
    }

    if ( tmp_assattr_target_38 == NULL )
    {
        Py_DECREF( tmp_assattr_name_38 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302493 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_38, const_str_plain_argtypes, tmp_assattr_name_38 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_38 );

        frame_module->f_lineno = 145;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_38 );
    tmp_subscr_target_20 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_20 == NULL ))
    {
        tmp_subscr_target_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_20 = const_str_plain_kernel32;
    tmp_source_name_21 = LOOKUP_SUBSCRIPT( tmp_subscr_target_20, tmp_subscr_subscript_20 );
    if ( tmp_source_name_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_77 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_SetCommMask );
    Py_DECREF( tmp_source_name_21 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommMask, tmp_assign_source_77 );
    tmp_assattr_name_39 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_39 == NULL ))
    {
        tmp_assattr_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_39 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommMask );

    if (unlikely( tmp_assattr_target_39 == NULL ))
    {
        tmp_assattr_target_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommMask );
    }

    if ( tmp_assattr_target_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302527 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_39, const_str_plain_restype, tmp_assattr_name_39 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_40 = PyList_New( 2 );
    tmp_list_element_19 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_19 == NULL ))
    {
        tmp_list_element_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_19 == NULL )
    {
        Py_DECREF( tmp_assattr_name_40 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 149;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_19 );
    PyList_SET_ITEM( tmp_assattr_name_40, 0, tmp_list_element_19 );
    tmp_list_element_19 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_19 == NULL ))
    {
        tmp_list_element_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_19 == NULL )
    {
        Py_DECREF( tmp_assattr_name_40 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 149;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_19 );
    PyList_SET_ITEM( tmp_assattr_name_40, 1, tmp_list_element_19 );
    tmp_assattr_target_40 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommMask );

    if (unlikely( tmp_assattr_target_40 == NULL ))
    {
        tmp_assattr_target_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommMask );
    }

    if ( tmp_assattr_target_40 == NULL )
    {
        Py_DECREF( tmp_assattr_name_40 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302527 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 149;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_40, const_str_plain_argtypes, tmp_assattr_name_40 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_40 );

        frame_module->f_lineno = 149;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_40 );
    tmp_subscr_target_21 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_21 == NULL ))
    {
        tmp_subscr_target_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 151;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_21 = const_str_plain_kernel32;
    tmp_source_name_22 = LOOKUP_SUBSCRIPT( tmp_subscr_target_21, tmp_subscr_subscript_21 );
    if ( tmp_source_name_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_78 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_SetCommState );
    Py_DECREF( tmp_source_name_22 );
    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommState, tmp_assign_source_78 );
    tmp_assattr_name_41 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_41 == NULL ))
    {
        tmp_assattr_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_41 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommState );

    if (unlikely( tmp_assattr_target_41 == NULL ))
    {
        tmp_assattr_target_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommState );
    }

    if ( tmp_assattr_target_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302560 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_41, const_str_plain_restype, tmp_assattr_name_41 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_42 = PyList_New( 2 );
    tmp_list_element_20 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_20 == NULL ))
    {
        tmp_list_element_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_20 == NULL )
    {
        Py_DECREF( tmp_assattr_name_42 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_20 );
    PyList_SET_ITEM( tmp_assattr_name_42, 0, tmp_list_element_20 );
    tmp_list_element_20 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDCB );

    if (unlikely( tmp_list_element_20 == NULL ))
    {
        tmp_list_element_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDCB );
    }

    if ( tmp_list_element_20 == NULL )
    {
        Py_DECREF( tmp_assattr_name_42 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302362 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_20 );
    PyList_SET_ITEM( tmp_assattr_name_42, 1, tmp_list_element_20 );
    tmp_assattr_target_42 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommState );

    if (unlikely( tmp_assattr_target_42 == NULL ))
    {
        tmp_assattr_target_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommState );
    }

    if ( tmp_assattr_target_42 == NULL )
    {
        Py_DECREF( tmp_assattr_name_42 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302560 ], 34, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_42, const_str_plain_argtypes, tmp_assattr_name_42 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_42 );

        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_42 );
    tmp_subscr_target_22 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_22 == NULL ))
    {
        tmp_subscr_target_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 155;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_22 = const_str_plain_kernel32;
    tmp_source_name_23 = LOOKUP_SUBSCRIPT( tmp_subscr_target_22, tmp_subscr_subscript_22 );
    if ( tmp_source_name_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_79 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_SetCommTimeouts );
    Py_DECREF( tmp_source_name_23 );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommTimeouts, tmp_assign_source_79 );
    tmp_assattr_name_43 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_43 == NULL ))
    {
        tmp_assattr_name_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_43 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 156;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_43 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommTimeouts );

    if (unlikely( tmp_assattr_target_43 == NULL ))
    {
        tmp_assattr_target_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommTimeouts );
    }

    if ( tmp_assattr_target_43 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302594 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 156;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_43, const_str_plain_restype, tmp_assattr_name_43 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 156;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_44 = PyList_New( 2 );
    tmp_list_element_21 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_21 == NULL ))
    {
        tmp_list_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_21 == NULL )
    {
        Py_DECREF( tmp_assattr_name_44 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 157;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_21 );
    PyList_SET_ITEM( tmp_assattr_name_44, 0, tmp_list_element_21 );
    tmp_list_element_21 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCOMMTIMEOUTS );

    if (unlikely( tmp_list_element_21 == NULL ))
    {
        tmp_list_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCOMMTIMEOUTS );
    }

    if ( tmp_list_element_21 == NULL )
    {
        Py_DECREF( tmp_assattr_name_44 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302426 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 157;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_21 );
    PyList_SET_ITEM( tmp_assattr_name_44, 1, tmp_list_element_21 );
    tmp_assattr_target_44 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommTimeouts );

    if (unlikely( tmp_assattr_target_44 == NULL ))
    {
        tmp_assattr_target_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommTimeouts );
    }

    if ( tmp_assattr_target_44 == NULL )
    {
        Py_DECREF( tmp_assattr_name_44 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302594 ], 37, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 157;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_44, const_str_plain_argtypes, tmp_assattr_name_44 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_44 );

        frame_module->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_44 );
    tmp_subscr_target_23 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscr_target_23 == NULL ))
    {
        tmp_subscr_target_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscr_target_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301268 ], 40, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 159;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_23 = const_str_plain_kernel32;
    tmp_source_name_24 = LOOKUP_SUBSCRIPT( tmp_subscr_target_23, tmp_subscr_subscript_23 );
    if ( tmp_source_name_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 159;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_80 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_WaitForSingleObject );
    Py_DECREF( tmp_source_name_24 );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 159;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WaitForSingleObject, tmp_assign_source_80 );
    tmp_assattr_name_45 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_assattr_name_45 == NULL ))
    {
        tmp_assattr_name_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_assattr_name_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 160;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_45 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WaitForSingleObject );

    if (unlikely( tmp_assattr_target_45 == NULL ))
    {
        tmp_assattr_target_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WaitForSingleObject );
    }

    if ( tmp_assattr_target_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302631 ], 41, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 160;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_45, const_str_plain_restype, tmp_assattr_name_45 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 160;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_46 = PyList_New( 2 );
    tmp_list_element_22 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_22 == NULL ))
    {
        tmp_list_element_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_22 == NULL )
    {
        Py_DECREF( tmp_assattr_name_46 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_22 );
    PyList_SET_ITEM( tmp_assattr_name_46, 0, tmp_list_element_22 );
    tmp_list_element_22 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_22 == NULL ))
    {
        tmp_list_element_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_22 == NULL )
    {
        Py_DECREF( tmp_assattr_name_46 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_22 );
    PyList_SET_ITEM( tmp_assattr_name_46, 1, tmp_list_element_22 );
    tmp_assattr_target_46 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WaitForSingleObject );

    if (unlikely( tmp_assattr_target_46 == NULL ))
    {
        tmp_assattr_target_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WaitForSingleObject );
    }

    if ( tmp_assattr_target_46 == NULL )
    {
        Py_DECREF( tmp_assattr_name_46 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302631 ], 41, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_46, const_str_plain_argtypes, tmp_assattr_name_46 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_46 );

        frame_module->f_lineno = 161;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_46 );
    tmp_assign_source_81 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ONESTOPBIT, tmp_assign_source_81 );
    tmp_assign_source_82 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_TWOSTOPBITS, tmp_assign_source_82 );
    tmp_assign_source_83 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ONE5STOPBITS, tmp_assign_source_83 );
    tmp_assign_source_84 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_NOPARITY, tmp_assign_source_84 );
    tmp_assign_source_85 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ODDPARITY, tmp_assign_source_85 );
    tmp_assign_source_86 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EVENPARITY, tmp_assign_source_86 );
    tmp_assign_source_87 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MARKPARITY, tmp_assign_source_87 );
    tmp_assign_source_88 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SPACEPARITY, tmp_assign_source_88 );
    tmp_assign_source_89 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_RTS_CONTROL_HANDSHAKE, tmp_assign_source_89 );
    tmp_assign_source_90 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_RTS_CONTROL_DISABLE, tmp_assign_source_90 );
    tmp_assign_source_91 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_RTS_CONTROL_ENABLE, tmp_assign_source_91 );
    tmp_assign_source_92 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_RTS_CONTROL_TOGGLE, tmp_assign_source_92 );
    tmp_assign_source_93 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SETRTS, tmp_assign_source_93 );
    tmp_assign_source_94 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CLRRTS, tmp_assign_source_94 );
    tmp_assign_source_95 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DTR_CONTROL_HANDSHAKE, tmp_assign_source_95 );
    tmp_assign_source_96 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DTR_CONTROL_DISABLE, tmp_assign_source_96 );
    tmp_assign_source_97 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DTR_CONTROL_ENABLE, tmp_assign_source_97 );
    tmp_assign_source_98 = const_int_pos_5;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SETDTR, tmp_assign_source_98 );
    tmp_assign_source_99 = const_int_pos_6;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CLRDTR, tmp_assign_source_99 );
    tmp_assign_source_100 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MS_DSR_ON, tmp_assign_source_100 );
    tmp_assign_source_101 = const_int_pos_256;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_RING, tmp_assign_source_101 );
    tmp_assign_source_102 = const_int_pos_512;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_PERR, tmp_assign_source_102 );
    tmp_assign_source_103 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_ERR, tmp_assign_source_103 );
    tmp_assign_source_104 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SETXOFF, tmp_assign_source_104 );
    tmp_assign_source_105 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_RXCHAR, tmp_assign_source_105 );
    tmp_assign_source_106 = const_int_pos_1073741824;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GENERIC_WRITE, tmp_assign_source_106 );
    tmp_assign_source_107 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PURGE_TXCLEAR, tmp_assign_source_107 );
    tmp_assign_source_108 = const_int_pos_1073741824;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_FILE_FLAG_OVERLAPPED, tmp_assign_source_108 );
    tmp_assign_source_109 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_DSR, tmp_assign_source_109 );
    tmp_assign_source_110 = const_long_pos_4294967295;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MAXDWORD, tmp_assign_source_110 );
    tmp_assign_source_111 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_RLSD, tmp_assign_source_111 );
    tmp_assign_source_112 = const_int_pos_997;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ERROR_IO_PENDING, tmp_assign_source_112 );
    tmp_assign_source_113 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MS_CTS_ON, tmp_assign_source_113 );
    tmp_assign_source_114 = const_int_pos_2048;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_EVENT1, tmp_assign_source_114 );
    tmp_assign_source_115 = const_int_pos_1024;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_RX80FULL, tmp_assign_source_115 );
    tmp_assign_source_116 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PURGE_RXABORT, tmp_assign_source_116 );
    tmp_assign_source_117 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_NORMAL, tmp_assign_source_117 );
    tmp_assign_source_118 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PURGE_TXABORT, tmp_assign_source_118 );
    tmp_assign_source_119 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SETXON, tmp_assign_source_119 );
    tmp_assign_source_120 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_OPEN_EXISTING, tmp_assign_source_120 );
    tmp_assign_source_121 = const_int_pos_64;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MS_RING_ON, tmp_assign_source_121 );
    tmp_assign_source_122 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_TXEMPTY, tmp_assign_source_122 );
    tmp_assign_source_123 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_RXFLAG, tmp_assign_source_123 );
    tmp_assign_source_124 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MS_RLSD_ON, tmp_assign_source_124 );
    tmp_assign_source_125 = const_long_pos_2147483648;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GENERIC_READ, tmp_assign_source_125 );
    tmp_assign_source_126 = const_int_pos_4096;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_EVENT2, tmp_assign_source_126 );
    tmp_assign_source_127 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_CTS, tmp_assign_source_127 );
    tmp_assign_source_128 = const_int_pos_64;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_BREAK, tmp_assign_source_128 );
    tmp_assign_source_129 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PURGE_RXCLEAR, tmp_assign_source_129 );
    tmp_assign_source_130 = const_long_pos_4294967295;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_INFINITE, tmp_assign_source_130 );
    // Tried code
    tmp_assign_source_131 = PyTuple_New( 1 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Union );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Union );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_131 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302672 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 219;
        goto try_finally_handler_7;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_131, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_6__bases.object == NULL );
    tmp_class_creation_6__bases.object = tmp_assign_source_131;

    tmp_assign_source_132 = impl_class_7_N11_OVERLAPPED4DOLLAR_48E_of_module_serial$win32(  );
    if ( tmp_assign_source_132 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 219;
        goto try_finally_handler_7;
    }
    assert( tmp_class_creation_6__class_dict.object == NULL );
    tmp_class_creation_6__class_dict.object = tmp_assign_source_132;

    tmp_compare_left_8 = const_str_plain___metaclass__;
    tmp_compare_right_8 = tmp_class_creation_6__class_dict.object;

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    if ( tmp_cmp_In_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 219;
        goto try_finally_handler_7;
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
    tmp_assign_source_133 = DICT_GET_ITEM( tmp_dget_dict_6, tmp_dget_key_6 );
    if ( tmp_assign_source_133 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 219;
        goto try_finally_handler_7;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_class_bases_6 = tmp_class_creation_6__bases.object;

    tmp_assign_source_133 = SELECT_METACLASS( tmp_class_bases_6, GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass.object == NULL );
    tmp_class_creation_6__metaclass.object = tmp_assign_source_133;

    tmp_called_15 = tmp_class_creation_6__metaclass.object;

    tmp_call_arg_element_24 = const_str_plain_N11_OVERLAPPED4DOLLAR_48E;
    tmp_call_arg_element_25 = tmp_class_creation_6__bases.object;

    tmp_call_arg_element_26 = tmp_class_creation_6__class_dict.object;

    frame_module->f_lineno = 219;
    tmp_assign_source_134 = CALL_FUNCTION_WITH_ARGS3( tmp_called_15, tmp_call_arg_element_24, tmp_call_arg_element_25, tmp_call_arg_element_26 );
    if ( tmp_assign_source_134 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 219;
        goto try_finally_handler_7;
    }
    assert( tmp_class_creation_6__class.object == NULL );
    tmp_class_creation_6__class.object = tmp_assign_source_134;

    tmp_assign_source_135 = tmp_class_creation_6__class.object;

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E, tmp_assign_source_135 );
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
    Py_XDECREF( tmp_class_creation_6__class.object );
    tmp_class_creation_6__class.object = NULL;

    Py_XDECREF( tmp_class_creation_6__bases.object );
    tmp_class_creation_6__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_6__class_dict.object );
    tmp_class_creation_6__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass.object );
    tmp_class_creation_6__metaclass.object = NULL;

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
    tmp_assign_source_136 = PyTuple_New( 1 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
    }

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_136 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301394 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 221;
        goto try_finally_handler_8;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_136, 0, tmp_tuple_element_7 );
    assert( tmp_class_creation_7__bases.object == NULL );
    tmp_class_creation_7__bases.object = tmp_assign_source_136;

    tmp_assign_source_137 = impl_class_8_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E_of_module_serial$win32(  );
    if ( tmp_assign_source_137 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 221;
        goto try_finally_handler_8;
    }
    assert( tmp_class_creation_7__class_dict.object == NULL );
    tmp_class_creation_7__class_dict.object = tmp_assign_source_137;

    tmp_compare_left_9 = const_str_plain___metaclass__;
    tmp_compare_right_9 = tmp_class_creation_7__class_dict.object;

    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    if ( tmp_cmp_In_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 221;
        goto try_finally_handler_8;
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
    tmp_assign_source_138 = DICT_GET_ITEM( tmp_dget_dict_7, tmp_dget_key_7 );
    if ( tmp_assign_source_138 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 221;
        goto try_finally_handler_8;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_class_bases_7 = tmp_class_creation_7__bases.object;

    tmp_assign_source_138 = SELECT_METACLASS( tmp_class_bases_7, GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_7:;
    assert( tmp_class_creation_7__metaclass.object == NULL );
    tmp_class_creation_7__metaclass.object = tmp_assign_source_138;

    tmp_called_16 = tmp_class_creation_7__metaclass.object;

    tmp_call_arg_element_27 = const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E;
    tmp_call_arg_element_28 = tmp_class_creation_7__bases.object;

    tmp_call_arg_element_29 = tmp_class_creation_7__class_dict.object;

    frame_module->f_lineno = 221;
    tmp_assign_source_139 = CALL_FUNCTION_WITH_ARGS3( tmp_called_16, tmp_call_arg_element_27, tmp_call_arg_element_28, tmp_call_arg_element_29 );
    if ( tmp_assign_source_139 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 221;
        goto try_finally_handler_8;
    }
    assert( tmp_class_creation_7__class.object == NULL );
    tmp_class_creation_7__class.object = tmp_assign_source_139;

    tmp_assign_source_140 = tmp_class_creation_7__class.object;

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E, tmp_assign_source_140 );
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
    Py_XDECREF( tmp_class_creation_7__class.object );
    tmp_class_creation_7__class.object = NULL;

    Py_XDECREF( tmp_class_creation_7__bases.object );
    tmp_class_creation_7__bases.object = NULL;

    Py_XDECREF( tmp_class_creation_7__class_dict.object );
    tmp_class_creation_7__class_dict.object = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass.object );
    tmp_class_creation_7__metaclass.object = NULL;

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
    tmp_assattr_name_47 = PyList_New( 2 );
    tmp_list_element_23 = PyTuple_New( 2 );
    tmp_tuple_element_8 = const_str_plain_Offset;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_list_element_23, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_8 == NULL ))
    {
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_47 );
        Py_DECREF( tmp_list_element_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 224;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_list_element_23, 1, tmp_tuple_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_47, 0, tmp_list_element_23 );
    tmp_list_element_23 = PyTuple_New( 2 );
    tmp_tuple_element_9 = const_str_plain_OffsetHigh;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_list_element_23, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_47 );
        Py_DECREF( tmp_list_element_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 225;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_list_element_23, 1, tmp_tuple_element_9 );
    PyList_SET_ITEM( tmp_assattr_name_47, 1, tmp_list_element_23 );
    tmp_assattr_target_47 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E );

    if (unlikely( tmp_assattr_target_47 == NULL ))
    {
        tmp_assattr_target_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E );
    }

    if ( tmp_assattr_target_47 == NULL )
    {
        Py_DECREF( tmp_assattr_name_47 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302699 ], 57, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 223;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_47, const_str_plain__fields_, tmp_assattr_name_47 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_47 );

        frame_module->f_lineno = 225;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_47 );
    tmp_assign_source_141 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_void_p );

    if (unlikely( tmp_assign_source_141 == NULL ))
    {
        tmp_assign_source_141 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p );
    }

    if ( tmp_assign_source_141 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301933 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PVOID, tmp_assign_source_141 );
    tmp_assattr_name_48 = LIST_COPY( const_list_str_plain__0_list );
    tmp_assattr_target_48 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );

    if (unlikely( tmp_assattr_target_48 == NULL ))
    {
        tmp_assattr_target_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );
    }

    if ( tmp_assattr_target_48 == NULL )
    {
        Py_DECREF( tmp_assattr_name_48 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302756 ], 47, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 230;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_48, const_str_plain__anonymous_, tmp_assattr_name_48 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_48 );

        frame_module->f_lineno = 230;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_48 );
    tmp_assattr_name_49 = PyList_New( 2 );
    tmp_list_element_24 = PyTuple_New( 2 );
    tmp_tuple_element_10 = const_str_plain__0;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_list_element_24, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E );

    if (unlikely( tmp_tuple_element_10 == NULL ))
    {
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E );
    }

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_assattr_name_49 );
        Py_DECREF( tmp_list_element_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302699 ], 57, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 232;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_list_element_24, 1, tmp_tuple_element_10 );
    PyList_SET_ITEM( tmp_assattr_name_49, 0, tmp_list_element_24 );
    tmp_list_element_24 = PyTuple_New( 2 );
    tmp_tuple_element_11 = const_str_plain_Pointer;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_list_element_24, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PVOID );

    if (unlikely( tmp_tuple_element_11 == NULL ))
    {
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PVOID );
    }

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_assattr_name_49 );
        Py_DECREF( tmp_list_element_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302803 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_list_element_24, 1, tmp_tuple_element_11 );
    PyList_SET_ITEM( tmp_assattr_name_49, 1, tmp_list_element_24 );
    tmp_assattr_target_49 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );

    if (unlikely( tmp_assattr_target_49 == NULL ))
    {
        tmp_assattr_target_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );
    }

    if ( tmp_assattr_target_49 == NULL )
    {
        Py_DECREF( tmp_assattr_name_49 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302756 ], 47, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 231;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_49, const_str_plain__fields_, tmp_assattr_name_49 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_49 );

        frame_module->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_49 );
    tmp_assattr_name_50 = LIST_COPY( const_list_str_plain__0_list );
    tmp_assattr_target_50 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );

    if (unlikely( tmp_assattr_target_50 == NULL ))
    {
        tmp_assattr_target_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );
    }

    if ( tmp_assattr_target_50 == NULL )
    {
        Py_DECREF( tmp_assattr_name_50 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301702 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 235;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_50, const_str_plain__anonymous_, tmp_assattr_name_50 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_50 );

        frame_module->f_lineno = 235;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_50 );
    tmp_assattr_name_51 = PyList_New( 4 );
    tmp_list_element_25 = PyTuple_New( 2 );
    tmp_tuple_element_12 = const_str_plain_Internal;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_list_element_25, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );
    }

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_51 );
        Py_DECREF( tmp_list_element_25 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299756 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_list_element_25, 1, tmp_tuple_element_12 );
    PyList_SET_ITEM( tmp_assattr_name_51, 0, tmp_list_element_25 );
    tmp_list_element_25 = PyTuple_New( 2 );
    tmp_tuple_element_13 = const_str_plain_InternalHigh;
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_list_element_25, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );

    if (unlikely( tmp_tuple_element_13 == NULL ))
    {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );
    }

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_assattr_name_51 );
        Py_DECREF( tmp_list_element_25 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299756 ], 31, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 238;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_list_element_25, 1, tmp_tuple_element_13 );
    PyList_SET_ITEM( tmp_assattr_name_51, 1, tmp_list_element_25 );
    tmp_list_element_25 = PyTuple_New( 2 );
    tmp_tuple_element_14 = const_str_plain__0;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_list_element_25, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );

    if (unlikely( tmp_tuple_element_14 == NULL ))
    {
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );
    }

    if ( tmp_tuple_element_14 == NULL )
    {
        Py_DECREF( tmp_assattr_name_51 );
        Py_DECREF( tmp_list_element_25 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302756 ], 47, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 239;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_list_element_25, 1, tmp_tuple_element_14 );
    PyList_SET_ITEM( tmp_assattr_name_51, 2, tmp_list_element_25 );
    tmp_list_element_25 = PyTuple_New( 2 );
    tmp_tuple_element_15 = const_str_plain_hEvent;
    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_list_element_25, 0, tmp_tuple_element_15 );
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_assattr_name_51 );
        Py_DECREF( tmp_list_element_25 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301308 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 240;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_list_element_25, 1, tmp_tuple_element_15 );
    PyList_SET_ITEM( tmp_assattr_name_51, 3, tmp_list_element_25 );
    tmp_assattr_target_51 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );

    if (unlikely( tmp_assattr_target_51 == NULL ))
    {
        tmp_assattr_target_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );
    }

    if ( tmp_assattr_target_51 == NULL )
    {
        Py_DECREF( tmp_assattr_name_51 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301702 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_51, const_str_plain__fields_, tmp_assattr_name_51 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_51 );

        frame_module->f_lineno = 240;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_51 );
    tmp_assattr_name_52 = PyList_New( 3 );
    tmp_list_element_26 = PyTuple_New( 2 );
    tmp_tuple_element_16 = const_str_plain_nLength;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_list_element_26, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_16 == NULL ))
    {
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_16 == NULL )
    {
        Py_DECREF( tmp_assattr_name_52 );
        Py_DECREF( tmp_list_element_26 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_list_element_26, 1, tmp_tuple_element_16 );
    PyList_SET_ITEM( tmp_assattr_name_52, 0, tmp_list_element_26 );
    tmp_list_element_26 = PyTuple_New( 2 );
    tmp_tuple_element_17 = const_str_plain_lpSecurityDescriptor;
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_list_element_26, 0, tmp_tuple_element_17 );
    tmp_tuple_element_17 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPVOID );

    if (unlikely( tmp_tuple_element_17 == NULL ))
    {
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPVOID );
    }

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_assattr_name_52 );
        Py_DECREF( tmp_list_element_26 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302053 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 244;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_list_element_26, 1, tmp_tuple_element_17 );
    PyList_SET_ITEM( tmp_assattr_name_52, 1, tmp_list_element_26 );
    tmp_list_element_26 = PyTuple_New( 2 );
    tmp_tuple_element_18 = const_str_plain_bInheritHandle;
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_list_element_26, 0, tmp_tuple_element_18 );
    tmp_tuple_element_18 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_tuple_element_18 == NULL ))
    {
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_tuple_element_18 == NULL )
    {
        Py_DECREF( tmp_assattr_name_52 );
        Py_DECREF( tmp_list_element_26 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298779 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 245;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_list_element_26, 1, tmp_tuple_element_18 );
    PyList_SET_ITEM( tmp_assattr_name_52, 2, tmp_list_element_26 );
    tmp_assattr_target_52 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__SECURITY_ATTRIBUTES );

    if (unlikely( tmp_assattr_target_52 == NULL ))
    {
        tmp_assattr_target_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SECURITY_ATTRIBUTES );
    }

    if ( tmp_assattr_target_52 == NULL )
    {
        Py_DECREF( tmp_assattr_name_52 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301454 ], 42, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 242;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_52, const_str_plain__fields_, tmp_assattr_name_52 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_52 );

        frame_module->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_52 );
    tmp_assattr_name_53 = PyList_New( 10 );
    tmp_list_element_27 = PyTuple_New( 3 );
    tmp_tuple_element_19 = const_str_plain_fCtsHold;
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_list_element_27, 0, tmp_tuple_element_19 );
    tmp_tuple_element_19 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_19 == NULL ))
    {
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_19 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        Py_DECREF( tmp_list_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 248;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_list_element_27, 1, tmp_tuple_element_19 );
    tmp_tuple_element_19 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_list_element_27, 2, tmp_tuple_element_19 );
    PyList_SET_ITEM( tmp_assattr_name_53, 0, tmp_list_element_27 );
    tmp_list_element_27 = PyTuple_New( 3 );
    tmp_tuple_element_20 = const_str_plain_fDsrHold;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_list_element_27, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_20 == NULL ))
    {
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_20 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        Py_DECREF( tmp_list_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 249;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_list_element_27, 1, tmp_tuple_element_20 );
    tmp_tuple_element_20 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_list_element_27, 2, tmp_tuple_element_20 );
    PyList_SET_ITEM( tmp_assattr_name_53, 1, tmp_list_element_27 );
    tmp_list_element_27 = PyTuple_New( 3 );
    tmp_tuple_element_21 = const_str_plain_fRlsdHold;
    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_list_element_27, 0, tmp_tuple_element_21 );
    tmp_tuple_element_21 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_21 == NULL ))
    {
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_21 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        Py_DECREF( tmp_list_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_list_element_27, 1, tmp_tuple_element_21 );
    tmp_tuple_element_21 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_list_element_27, 2, tmp_tuple_element_21 );
    PyList_SET_ITEM( tmp_assattr_name_53, 2, tmp_list_element_27 );
    tmp_list_element_27 = PyTuple_New( 3 );
    tmp_tuple_element_22 = const_str_plain_fXoffHold;
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_list_element_27, 0, tmp_tuple_element_22 );
    tmp_tuple_element_22 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_22 == NULL ))
    {
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_22 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        Py_DECREF( tmp_list_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_list_element_27, 1, tmp_tuple_element_22 );
    tmp_tuple_element_22 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_list_element_27, 2, tmp_tuple_element_22 );
    PyList_SET_ITEM( tmp_assattr_name_53, 3, tmp_list_element_27 );
    tmp_list_element_27 = PyTuple_New( 3 );
    tmp_tuple_element_23 = const_str_plain_fXoffSent;
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_list_element_27, 0, tmp_tuple_element_23 );
    tmp_tuple_element_23 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_23 == NULL ))
    {
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_23 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        Py_DECREF( tmp_list_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 252;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_list_element_27, 1, tmp_tuple_element_23 );
    tmp_tuple_element_23 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_list_element_27, 2, tmp_tuple_element_23 );
    PyList_SET_ITEM( tmp_assattr_name_53, 4, tmp_list_element_27 );
    tmp_list_element_27 = PyTuple_New( 3 );
    tmp_tuple_element_24 = const_str_plain_fEof;
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_list_element_27, 0, tmp_tuple_element_24 );
    tmp_tuple_element_24 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_24 == NULL ))
    {
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_24 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        Py_DECREF( tmp_list_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 253;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_list_element_27, 1, tmp_tuple_element_24 );
    tmp_tuple_element_24 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_list_element_27, 2, tmp_tuple_element_24 );
    PyList_SET_ITEM( tmp_assattr_name_53, 5, tmp_list_element_27 );
    tmp_list_element_27 = PyTuple_New( 3 );
    tmp_tuple_element_25 = const_str_plain_fTxim;
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_list_element_27, 0, tmp_tuple_element_25 );
    tmp_tuple_element_25 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_25 == NULL ))
    {
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_25 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        Py_DECREF( tmp_list_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 254;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_list_element_27, 1, tmp_tuple_element_25 );
    tmp_tuple_element_25 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_list_element_27, 2, tmp_tuple_element_25 );
    PyList_SET_ITEM( tmp_assattr_name_53, 6, tmp_list_element_27 );
    tmp_list_element_27 = PyTuple_New( 3 );
    tmp_tuple_element_26 = const_str_plain_fReserved;
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_list_element_27, 0, tmp_tuple_element_26 );
    tmp_tuple_element_26 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_26 == NULL ))
    {
        tmp_tuple_element_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_26 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        Py_DECREF( tmp_list_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 255;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_list_element_27, 1, tmp_tuple_element_26 );
    tmp_tuple_element_26 = const_int_pos_25;
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_list_element_27, 2, tmp_tuple_element_26 );
    PyList_SET_ITEM( tmp_assattr_name_53, 7, tmp_list_element_27 );
    tmp_list_element_27 = PyTuple_New( 2 );
    tmp_tuple_element_27 = const_str_plain_cbInQue;
    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_list_element_27, 0, tmp_tuple_element_27 );
    tmp_tuple_element_27 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_27 == NULL ))
    {
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_27 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        Py_DECREF( tmp_list_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 256;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_list_element_27, 1, tmp_tuple_element_27 );
    PyList_SET_ITEM( tmp_assattr_name_53, 8, tmp_list_element_27 );
    tmp_list_element_27 = PyTuple_New( 2 );
    tmp_tuple_element_28 = const_str_plain_cbOutQue;
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_list_element_27, 0, tmp_tuple_element_28 );
    tmp_tuple_element_28 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_28 == NULL ))
    {
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_28 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        Py_DECREF( tmp_list_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 257;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_list_element_27, 1, tmp_tuple_element_28 );
    PyList_SET_ITEM( tmp_assattr_name_53, 9, tmp_list_element_27 );
    tmp_assattr_target_53 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMSTAT );

    if (unlikely( tmp_assattr_target_53 == NULL ))
    {
        tmp_assattr_target_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMSTAT );
    }

    if ( tmp_assattr_target_53 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301735 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_53, const_str_plain__fields_, tmp_assattr_name_53 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_53 );

        frame_module->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_53 );
    tmp_assattr_name_54 = PyList_New( 28 );
    tmp_list_element_28 = PyTuple_New( 2 );
    tmp_tuple_element_29 = const_str_plain_DCBlength;
    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_29 );
    tmp_tuple_element_29 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_29 == NULL ))
    {
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_29 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 260;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_29 );
    PyList_SET_ITEM( tmp_assattr_name_54, 0, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 2 );
    tmp_tuple_element_30 = const_str_plain_BaudRate;
    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_30 );
    tmp_tuple_element_30 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_30 == NULL ))
    {
        tmp_tuple_element_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_30 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_30 );
    PyList_SET_ITEM( tmp_assattr_name_54, 1, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_31 = const_str_plain_fBinary;
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_31 );
    tmp_tuple_element_31 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_31 == NULL ))
    {
        tmp_tuple_element_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_31 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_31 );
    tmp_tuple_element_31 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_31 );
    PyList_SET_ITEM( tmp_assattr_name_54, 2, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_32 = const_str_plain_fParity;
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_32 );
    tmp_tuple_element_32 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_32 == NULL ))
    {
        tmp_tuple_element_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_32 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 263;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_32 );
    tmp_tuple_element_32 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_32 );
    PyList_SET_ITEM( tmp_assattr_name_54, 3, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_33 = const_str_plain_fOutxCtsFlow;
    Py_INCREF( tmp_tuple_element_33 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_33 );
    tmp_tuple_element_33 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_33 == NULL ))
    {
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_33 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 264;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_33 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_33 );
    tmp_tuple_element_33 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_33 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_33 );
    PyList_SET_ITEM( tmp_assattr_name_54, 4, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_34 = const_str_plain_fOutxDsrFlow;
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_34 );
    tmp_tuple_element_34 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_34 == NULL ))
    {
        tmp_tuple_element_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_34 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_34 );
    tmp_tuple_element_34 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_34 );
    PyList_SET_ITEM( tmp_assattr_name_54, 5, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_35 = const_str_plain_fDtrControl;
    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_35 );
    tmp_tuple_element_35 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_35 == NULL ))
    {
        tmp_tuple_element_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_35 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 266;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_35 );
    tmp_tuple_element_35 = const_int_pos_2;
    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_35 );
    PyList_SET_ITEM( tmp_assattr_name_54, 6, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_36 = const_str_plain_fDsrSensitivity;
    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_36 );
    tmp_tuple_element_36 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_36 == NULL ))
    {
        tmp_tuple_element_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_36 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 267;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_36 );
    tmp_tuple_element_36 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_36 );
    PyList_SET_ITEM( tmp_assattr_name_54, 7, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_37 = const_str_plain_fTXContinueOnXoff;
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_37 );
    tmp_tuple_element_37 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_37 == NULL ))
    {
        tmp_tuple_element_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_37 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_37 );
    tmp_tuple_element_37 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_37 );
    PyList_SET_ITEM( tmp_assattr_name_54, 8, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_38 = const_str_plain_fOutX;
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_38 );
    tmp_tuple_element_38 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_38 == NULL ))
    {
        tmp_tuple_element_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_38 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 269;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_38 );
    tmp_tuple_element_38 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_38 );
    PyList_SET_ITEM( tmp_assattr_name_54, 9, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_39 = const_str_plain_fInX;
    Py_INCREF( tmp_tuple_element_39 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_39 );
    tmp_tuple_element_39 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_39 == NULL ))
    {
        tmp_tuple_element_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_39 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 270;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_39 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_39 );
    tmp_tuple_element_39 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_39 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_39 );
    PyList_SET_ITEM( tmp_assattr_name_54, 10, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_40 = const_str_plain_fErrorChar;
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_40 );
    tmp_tuple_element_40 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_40 == NULL ))
    {
        tmp_tuple_element_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_40 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_40 );
    tmp_tuple_element_40 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_40 );
    PyList_SET_ITEM( tmp_assattr_name_54, 11, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_41 = const_str_plain_fNull;
    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_41 );
    tmp_tuple_element_41 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_41 == NULL ))
    {
        tmp_tuple_element_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_41 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 272;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_41 );
    tmp_tuple_element_41 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_41 );
    PyList_SET_ITEM( tmp_assattr_name_54, 12, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_42 = const_str_plain_fRtsControl;
    Py_INCREF( tmp_tuple_element_42 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_42 );
    tmp_tuple_element_42 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_42 == NULL ))
    {
        tmp_tuple_element_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_42 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 273;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_42 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_42 );
    tmp_tuple_element_42 = const_int_pos_2;
    Py_INCREF( tmp_tuple_element_42 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_42 );
    PyList_SET_ITEM( tmp_assattr_name_54, 13, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_43 = const_str_plain_fAbortOnError;
    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_43 );
    tmp_tuple_element_43 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_43 == NULL ))
    {
        tmp_tuple_element_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_43 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 274;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_43 );
    tmp_tuple_element_43 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_43 );
    PyList_SET_ITEM( tmp_assattr_name_54, 14, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_44 = const_str_plain_fDummy2;
    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_44 );
    tmp_tuple_element_44 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_44 == NULL ))
    {
        tmp_tuple_element_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_44 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 275;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_44 );
    tmp_tuple_element_44 = const_int_pos_17;
    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_44 );
    PyList_SET_ITEM( tmp_assattr_name_54, 15, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 2 );
    tmp_tuple_element_45 = const_str_plain_wReserved;
    Py_INCREF( tmp_tuple_element_45 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_45 );
    tmp_tuple_element_45 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WORD );

    if (unlikely( tmp_tuple_element_45 == NULL ))
    {
        tmp_tuple_element_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
    }

    if ( tmp_tuple_element_45 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299690 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 276;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_45 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_45 );
    PyList_SET_ITEM( tmp_assattr_name_54, 16, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 2 );
    tmp_tuple_element_46 = const_str_plain_XonLim;
    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_46 );
    tmp_tuple_element_46 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WORD );

    if (unlikely( tmp_tuple_element_46 == NULL ))
    {
        tmp_tuple_element_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
    }

    if ( tmp_tuple_element_46 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299690 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 277;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_46 );
    PyList_SET_ITEM( tmp_assattr_name_54, 17, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 2 );
    tmp_tuple_element_47 = const_str_plain_XoffLim;
    Py_INCREF( tmp_tuple_element_47 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_47 );
    tmp_tuple_element_47 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WORD );

    if (unlikely( tmp_tuple_element_47 == NULL ))
    {
        tmp_tuple_element_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
    }

    if ( tmp_tuple_element_47 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299690 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 278;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_47 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_47 );
    PyList_SET_ITEM( tmp_assattr_name_54, 18, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 2 );
    tmp_tuple_element_48 = const_str_plain_ByteSize;
    Py_INCREF( tmp_tuple_element_48 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_48 );
    tmp_tuple_element_48 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BYTE );

    if (unlikely( tmp_tuple_element_48 == NULL ))
    {
        tmp_tuple_element_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTE );
    }

    if ( tmp_tuple_element_48 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299590 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 279;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_48 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_48 );
    PyList_SET_ITEM( tmp_assattr_name_54, 19, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 2 );
    tmp_tuple_element_49 = const_str_plain_Parity;
    Py_INCREF( tmp_tuple_element_49 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_49 );
    tmp_tuple_element_49 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BYTE );

    if (unlikely( tmp_tuple_element_49 == NULL ))
    {
        tmp_tuple_element_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTE );
    }

    if ( tmp_tuple_element_49 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299590 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 280;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_49 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_49 );
    PyList_SET_ITEM( tmp_assattr_name_54, 20, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 2 );
    tmp_tuple_element_50 = const_str_plain_StopBits;
    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_50 );
    tmp_tuple_element_50 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BYTE );

    if (unlikely( tmp_tuple_element_50 == NULL ))
    {
        tmp_tuple_element_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTE );
    }

    if ( tmp_tuple_element_50 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299590 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_50 );
    PyList_SET_ITEM( tmp_assattr_name_54, 21, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 2 );
    tmp_tuple_element_51 = const_str_plain_XonChar;
    Py_INCREF( tmp_tuple_element_51 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_51 );
    tmp_tuple_element_51 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char );

    if (unlikely( tmp_tuple_element_51 == NULL ))
    {
        tmp_tuple_element_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char );
    }

    if ( tmp_tuple_element_51 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302830 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 282;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_51 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_51 );
    PyList_SET_ITEM( tmp_assattr_name_54, 22, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 2 );
    tmp_tuple_element_52 = const_str_plain_XoffChar;
    Py_INCREF( tmp_tuple_element_52 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_52 );
    tmp_tuple_element_52 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char );

    if (unlikely( tmp_tuple_element_52 == NULL ))
    {
        tmp_tuple_element_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char );
    }

    if ( tmp_tuple_element_52 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302830 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_52 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_52 );
    PyList_SET_ITEM( tmp_assattr_name_54, 23, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 2 );
    tmp_tuple_element_53 = const_str_plain_ErrorChar;
    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_53 );
    tmp_tuple_element_53 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char );

    if (unlikely( tmp_tuple_element_53 == NULL ))
    {
        tmp_tuple_element_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char );
    }

    if ( tmp_tuple_element_53 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302830 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 284;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_53 );
    PyList_SET_ITEM( tmp_assattr_name_54, 24, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 2 );
    tmp_tuple_element_54 = const_str_plain_EofChar;
    Py_INCREF( tmp_tuple_element_54 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_54 );
    tmp_tuple_element_54 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char );

    if (unlikely( tmp_tuple_element_54 == NULL ))
    {
        tmp_tuple_element_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char );
    }

    if ( tmp_tuple_element_54 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302830 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_54 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_54 );
    PyList_SET_ITEM( tmp_assattr_name_54, 25, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 2 );
    tmp_tuple_element_55 = const_str_plain_EvtChar;
    Py_INCREF( tmp_tuple_element_55 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_55 );
    tmp_tuple_element_55 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char );

    if (unlikely( tmp_tuple_element_55 == NULL ))
    {
        tmp_tuple_element_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char );
    }

    if ( tmp_tuple_element_55 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 302830 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 286;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_55 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_55 );
    PyList_SET_ITEM( tmp_assattr_name_54, 26, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 2 );
    tmp_tuple_element_56 = const_str_plain_wReserved1;
    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_56 );
    tmp_tuple_element_56 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WORD );

    if (unlikely( tmp_tuple_element_56 == NULL ))
    {
        tmp_tuple_element_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
    }

    if ( tmp_tuple_element_56 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 299690 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 287;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_56 );
    PyList_SET_ITEM( tmp_assattr_name_54, 27, tmp_list_element_28 );
    tmp_assattr_target_54 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__DCB );

    if (unlikely( tmp_assattr_target_54 == NULL ))
    {
        tmp_assattr_target_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DCB );
    }

    if ( tmp_assattr_target_54 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301765 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 259;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_54, const_str_plain__fields_, tmp_assattr_name_54 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_54 );

        frame_module->f_lineno = 287;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_54 );
    tmp_assattr_name_55 = PyList_New( 5 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_57 = const_str_plain_ReadIntervalTimeout;
    Py_INCREF( tmp_tuple_element_57 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_57 );
    tmp_tuple_element_57 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_57 == NULL ))
    {
        tmp_tuple_element_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_57 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 290;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_57 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_57 );
    PyList_SET_ITEM( tmp_assattr_name_55, 0, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_58 = const_str_plain_ReadTotalTimeoutMultiplier;
    Py_INCREF( tmp_tuple_element_58 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_58 );
    tmp_tuple_element_58 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_58 == NULL ))
    {
        tmp_tuple_element_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_58 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_58 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_58 );
    PyList_SET_ITEM( tmp_assattr_name_55, 1, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_59 = const_str_plain_ReadTotalTimeoutConstant;
    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_59 );
    tmp_tuple_element_59 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_59 == NULL ))
    {
        tmp_tuple_element_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_59 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_59 );
    PyList_SET_ITEM( tmp_assattr_name_55, 2, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_60 = const_str_plain_WriteTotalTimeoutMultiplier;
    Py_INCREF( tmp_tuple_element_60 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_60 );
    tmp_tuple_element_60 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_60 == NULL ))
    {
        tmp_tuple_element_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_60 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_60 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_60 );
    PyList_SET_ITEM( tmp_assattr_name_55, 3, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_61 = const_str_plain_WriteTotalTimeoutConstant;
    Py_INCREF( tmp_tuple_element_61 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_61 );
    tmp_tuple_element_61 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_61 == NULL ))
    {
        tmp_tuple_element_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_61 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298500 ], 27, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 294;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_61 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_61 );
    PyList_SET_ITEM( tmp_assattr_name_55, 4, tmp_list_element_29 );
    tmp_assattr_target_55 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );

    if (unlikely( tmp_assattr_target_55 == NULL ))
    {
        tmp_assattr_target_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );
    }

    if ( tmp_assattr_target_55 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 301791 ], 35, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 289;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_55, const_str_plain__fields_, tmp_assattr_name_55 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_55 );

        frame_module->f_lineno = 294;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_55 );

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
    tmp_assign_source_142 = LIST_COPY( const_list_5fe71ecb740c0898f445980823e1ece2_list );
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_142 );

    return MOD_RETURN_VALUE( module_serial$win32 );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
