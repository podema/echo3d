// Generated code for Python source for module 'serial.serialwin32'
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

// The _module_serial$serialwin32 is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_serial$serialwin32;
PyDictObject *moduledict_serial$serialwin32;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_6;
extern PyObject *const_int_pos_7;
extern PyObject *const_int_pos_8;
extern PyObject *const_dict_empty;
extern PyObject *const_float_0_25;
extern PyObject *const_int_pos_50;
extern PyObject *const_int_pos_75;
extern PyObject *const_str_chr_42;
extern PyObject *const_int_pos_110;
extern PyObject *const_int_pos_134;
extern PyObject *const_int_pos_150;
extern PyObject *const_int_pos_200;
extern PyObject *const_int_pos_300;
extern PyObject *const_int_pos_600;
extern PyObject *const_str_plain_n;
extern PyObject *const_tuple_empty;
extern PyObject *const_int_pos_1000;
extern PyObject *const_int_pos_1200;
extern PyObject *const_int_pos_1800;
extern PyObject *const_int_pos_2400;
extern PyObject *const_int_pos_4096;
extern PyObject *const_int_pos_4800;
extern PyObject *const_int_pos_9600;
extern PyObject *const_str_plain_io;
extern PyObject *const_str_plain_rc;
extern PyObject *const_int_pos_19200;
extern PyObject *const_int_pos_38400;
extern PyObject *const_int_pos_57600;
extern PyObject *const_str_plain_COM;
extern PyObject *const_str_plain_DCB;
extern PyObject *const_str_plain_XON;
extern PyObject *const_str_plain_buf;
extern PyObject *const_str_plain_doc;
extern PyObject *const_str_plain_err;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_raw;
extern PyObject *const_int_pos_115200;
extern PyObject *const_str_plain_XOFF;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_fInX;
extern PyObject *const_str_plain_open;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_stat;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_DWORD;
extern PyObject *const_str_plain__port;
extern PyObject *const_str_plain_byref;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_fNull;
extern PyObject *const_str_plain_fOutX;
extern PyObject *const_str_plain_flags;
extern PyObject *const_str_plain_getCD;
extern PyObject *const_str_plain_getRI;
extern PyObject *const_str_plain_level;
extern PyObject *const_str_plain_sleep;
extern PyObject *const_str_plain_upper;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_win32;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_CLRDTR;
extern PyObject *const_str_plain_CLRRTS;
extern PyObject *const_str_plain_EV_ERR;
extern PyObject *const_str_plain_Parity;
extern PyObject *const_str_plain_SETDTR;
extern PyObject *const_str_plain_SETRTS;
extern PyObject *const_str_plain_SETXON;
extern PyObject *const_str_plain_Serial;
static PyObject *const_str_plain_comDCB;
extern PyObject *const_str_plain_ctypes;
extern PyObject *const_str_plain_device;
extern PyObject *const_str_plain_getCTS;
extern PyObject *const_str_plain_getDSR;
extern PyObject *const_str_plain_hEvent;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_serial;
extern PyObject *const_str_plain_setDTR;
extern PyObject *const_str_plain_setRTS;
static PyObject *const_str_plain_setXON;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain_COMSTAT;
extern PyObject *const_str_plain_SETXOFF;
extern PyObject *const_str_plain_SIXBITS;
extern PyObject *const_str_plain_XonChar;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain__dsrdtr;
extern PyObject *const_str_plain__isOpen;
extern PyObject *const_str_plain__parity;
extern PyObject *const_str_plain__rtscts;
extern PyObject *const_str_plain_cbInQue;
static PyObject *const_str_plain_comstat;
extern PyObject *const_str_plain_fBinary;
extern PyObject *const_str_plain_fParity;
extern PyObject *const_str_plain_portnum;
extern PyObject *const_str_plain_portstr;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain_BaudRate;
extern PyObject *const_str_plain_ByteSize;
extern PyObject *const_str_plain_FIVEBITS;
extern PyObject *const_str_plain_FileLike;
extern PyObject *const_str_plain_INFINITE;
extern PyObject *const_str_plain_MAXDWORD;
extern PyObject *const_str_plain_NOPARITY;
extern PyObject *const_str_plain_ReadFile;
extern PyObject *const_str_plain_StopBits;
extern PyObject *const_str_plain_WinError;
extern PyObject *const_str_plain_XoffChar;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain__timeout;
extern PyObject *const_str_plain__xonxoff;
extern PyObject *const_str_plain_cbOutQue;
extern PyObject *const_str_plain_duration;
static PyObject *const_str_plain_hComPort;
extern PyObject *const_str_plain_property;
extern PyObject *const_str_plain_setBreak;
static PyObject *const_str_plain_timeouts;
extern PyObject *const_str_plain_BAUDRATES;
extern PyObject *const_str_plain_EIGHTBITS;
extern PyObject *const_str_plain_MS_CTS_ON;
extern PyObject *const_str_plain_MS_DSR_ON;
extern PyObject *const_str_plain_ODDPARITY;
extern PyObject *const_str_plain_PurgeComm;
extern PyObject *const_str_plain_RawIOBase;
extern PyObject *const_str_plain_SEVENBITS;
extern PyObject *const_str_plain_SetupComm;
extern PyObject *const_str_plain_WriteFile;
extern PyObject *const_str_plain__baudrate;
extern PyObject *const_str_plain__bytesize;
static PyObject *const_str_plain__dtrState;
static PyObject *const_str_plain__rtsState;
extern PyObject *const_str_plain__stopbits;
extern PyObject *const_str_plain_inWaiting;
static PyObject *const_str_plain_rtsToggle;
extern PyObject *const_str_plain_sendBreak;
extern PyObject *const_str_plain_CreateFile;
extern PyObject *const_str_plain_EVENPARITY;
extern PyObject *const_str_plain_MARKPARITY;
extern PyObject *const_str_plain_MS_RING_ON;
extern PyObject *const_str_plain_MS_RLSD_ON;
extern PyObject *const_str_plain_ONESTOPBIT;
extern PyObject *const_str_plain_OVERLAPPED;
extern PyObject *const_str_plain_PARITY_ODD;
extern PyObject *const_str_plain_ResetEvent;
extern PyObject *const_str_plain_SerialBase;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain__rtsToggle;
extern PyObject *const_str_plain_fErrorChar;
extern PyObject *const_str_plain_flushInput;
static PyObject *const_str_plain_outWaiting;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_CloseHandle;
extern PyObject *const_str_plain_CreateEvent;
extern PyObject *const_str_plain_PARITY_EVEN;
extern PyObject *const_str_plain_PARITY_MARK;
extern PyObject *const_str_plain_PARITY_NONE;
extern PyObject *const_str_plain_SPACEPARITY;
extern PyObject *const_str_plain_SetCommMask;
extern PyObject *const_str_plain_TWOSTOPBITS;
static PyObject *const_str_plain_Win32Serial;
extern PyObject *const_str_plain_fDtrControl;
extern PyObject *const_str_plain_fRtsControl;
extern PyObject *const_str_plain_flushOutput;
static PyObject *const_str_plain_serialwin32;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_COMMTIMEOUTS;
extern PyObject *const_str_plain_GENERIC_READ;
extern PyObject *const_str_plain_GetCommState;
extern PyObject *const_str_plain_GetLastError;
extern PyObject *const_str_plain_ONE5STOPBITS;
extern PyObject *const_str_plain_PARITY_SPACE;
extern PyObject *const_str_plain_STOPBITS_ONE;
extern PyObject *const_str_plain_STOPBITS_TWO;
extern PyObject *const_str_plain_SetCommBreak;
extern PyObject *const_str_plain_SetCommState;
static PyObject *const_str_plain__orgTimeouts;
extern PyObject *const_str_plain_fOutxCtsFlow;
extern PyObject *const_str_plain_fOutxDsrFlow;
static PyObject *const_str_plain_getRtsToggle;
static PyObject *const_str_plain_setRtsToggle;
extern PyObject *const_tuple_float_0_25_tuple;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_GENERIC_WRITE;
extern PyObject *const_str_plain_OPEN_EXISTING;
extern PyObject *const_str_plain_PURGE_RXABORT;
extern PyObject *const_str_plain_PURGE_RXCLEAR;
extern PyObject *const_str_plain_PURGE_TXABORT;
extern PyObject *const_str_plain_PURGE_TXCLEAR;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain__writeTimeout;
extern PyObject *const_str_plain_fAbortOnError;
extern PyObject *const_str_plain_ClearCommBreak;
extern PyObject *const_str_plain_ClearCommError;
extern PyObject *const_str_plain_makeDeviceName;
extern PyObject *const_str_plain_GetCommTimeouts;
extern PyObject *const_str_plain_SerialException;
extern PyObject *const_str_plain_SetCommTimeouts;
static PyObject *const_str_plain__overlappedRead;
extern PyObject *const_str_plain_ERROR_IO_PENDING;
static PyObject *const_str_plain__overlappedWrite;
extern PyObject *const_str_plain__reconfigurePort;
extern PyObject *const_str_plain_portNotOpenError;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain__interCharTimeout;
extern PyObject *const_str_plain_writeTimeoutError;
static PyObject *const_tuple_str_plain_win32_tuple;
extern PyObject *const_str_plain_DTR_CONTROL_ENABLE;
extern PyObject *const_str_plain_EscapeCommFunction;
extern PyObject *const_str_plain_GetCommModemStatus;
extern PyObject *const_str_plain_RTS_CONTROL_ENABLE;
extern PyObject *const_str_plain_RTS_CONTROL_TOGGLE;
extern PyObject *const_str_plain_DTR_CONTROL_DISABLE;
extern PyObject *const_str_plain_GetOverlappedResult;
extern PyObject *const_str_plain_RTS_CONTROL_DISABLE;
extern PyObject *const_str_plain_WaitForSingleObject;
static PyObject *const_str_plain__GetCommModemStatus;
extern PyObject *const_tuple_str_plain_portnum_tuple;
extern PyObject *const_str_plain_FILE_FLAG_OVERLAPPED;
extern PyObject *const_str_plain_INVALID_HANDLE_VALUE;
static PyObject *const_str_plain_create_string_buffer;
extern PyObject *const_str_plain_DTR_CONTROL_HANDSHAKE;
extern PyObject *const_str_plain_FILE_ATTRIBUTE_NORMAL;
extern PyObject *const_str_plain_RTS_CONTROL_HANDSHAKE;
extern PyObject *const_str_plain_STOPBITS_ONE_POINT_FIVE;
static PyObject *const_dict_aa57a87be5674b501c93d35121ab329d;
static PyObject *const_tuple_int_0_int_0_int_0_int_0_int_0_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_port_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_size_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_stat_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_level_tuple;
static PyObject *const_str_digest_0155ef029c7ccca1944cf6ba6455abfb;
extern PyObject *const_str_digest_104037fc11d151855fa2a0a50e44d182;
extern PyObject *const_str_digest_1119d0b4a52bcb5eb18432fe820f54f2;
static PyObject *const_str_digest_123de9e53ec7ee47f1e1cbf2e6e5773c;
extern PyObject *const_str_digest_12424fe61ccffb566ffb154dd4787d55;
extern PyObject *const_str_digest_286c08f9e7c012f40d24cff6bb6dd5bb;
extern PyObject *const_str_digest_2ba30bf4706b437c9d41b40018031665;
extern PyObject *const_str_digest_38e3102941775e56fb2cd97b5c788a52;
extern PyObject *const_str_digest_3dc5bdb9b4c8a0d596fa824b8adf35e7;
extern PyObject *const_str_digest_3edb300aadd90a53307d94e7aa43dbd6;
extern PyObject *const_str_digest_49da4c6860f40fd891c2963b9821e229;
extern PyObject *const_str_digest_4c5851b83620673fed2a793f7b115bc8;
extern PyObject *const_str_digest_562b9916e2496f65c6f5ad2c39397082;
extern PyObject *const_str_digest_598cfcbd275a4d09ed6b77004ad38ee8;
extern PyObject *const_str_digest_5cc5c88cea0684ad0c20e4946cd8d5a6;
extern PyObject *const_str_digest_5fcbb0ca072a0b03323bf510c84a6a49;
extern PyObject *const_str_digest_65d49447792356cfa05d29d5819bbeb8;
static PyObject *const_str_digest_6647a04cacc6ca8e36185afe3483ffc8;
static PyObject *const_str_digest_67702a7325e5053cf169923a3aa0ccc0;
static PyObject *const_str_digest_67b39fa9ec16af2a8a119e2b42bd2e97;
extern PyObject *const_str_digest_690b251c3b5c99f5b47a4befeef2b5b0;
static PyObject *const_str_digest_6949f64b1d8d531ba934716a6f637c2c;
extern PyObject *const_str_digest_781070e6f3ee51f7ae159c538a586b35;
static PyObject *const_str_digest_8a6bdff82cb0ee4ef64aa22fb950e2af;
extern PyObject *const_str_digest_8dcbd0ef4c198dec6777328f172b27cf;
extern PyObject *const_str_digest_928adb730a065474c803f13158de09f8;
extern PyObject *const_str_digest_93ce6cfe16d4162110e1228eff37f85f;
static PyObject *const_str_digest_9cfa39ce6b23e97166ba2fcf7332c782;
extern PyObject *const_str_digest_af3c9c94a9a1b17be3d36dd9e81e913d;
static PyObject *const_str_digest_b9e71011a39be7e7b51fe99a7ba38d22;
extern PyObject *const_str_digest_bef5fe91ba305079fdf2d02bfd00bc74;
static PyObject *const_str_digest_bf008619e476734658c8ccb452b5cea0;
static PyObject *const_str_digest_c0dcf7594b5ff5461264dfa5b6971d60;
extern PyObject *const_str_digest_cb7be6e57c45482bff454b3e85065525;
extern PyObject *const_str_digest_cd1132fbda732995410714a97f17b18a;
extern PyObject *const_str_digest_d01ad20d78115e98cae65267ee91b47b;
static PyObject *const_str_digest_e07541812a32910e24f0f8a100a349e3;
static PyObject *const_str_digest_e9b31ca913a58fa33278b11caf2ed222;
extern PyObject *const_str_digest_ffaa881711284f0a754055b21cf825c5;
extern PyObject *const_tuple_5aee5ca7adb77075f0cc1cb4927b0a43_tuple;
static PyObject *const_tuple_86a8375a416df595d554bb7fb4096e3e_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_duration_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_rtsToggle_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_duration_str_plain_time_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_n_str_plain_err_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_comDCB = UNSTREAM_STRING( &constant_bin[ 2537862 ], 6, 1 );
    const_str_plain_setXON = UNSTREAM_STRING( &constant_bin[ 2537868 ], 6, 1 );
    const_str_plain_comstat = UNSTREAM_STRING( &constant_bin[ 2537874 ], 7, 1 );
    const_str_plain_hComPort = UNSTREAM_STRING( &constant_bin[ 2537881 ], 8, 1 );
    const_str_plain_timeouts = UNSTREAM_STRING( &constant_bin[ 297442 ], 8, 1 );
    const_str_plain__dtrState = UNSTREAM_STRING( &constant_bin[ 2537889 ], 9, 1 );
    const_str_plain__rtsState = UNSTREAM_STRING( &constant_bin[ 2537898 ], 9, 1 );
    const_str_plain_rtsToggle = UNSTREAM_STRING( &constant_bin[ 297561 ], 9, 1 );
    const_str_plain__rtsToggle = UNSTREAM_STRING( &constant_bin[ 2537907 ], 10, 1 );
    const_str_plain_outWaiting = UNSTREAM_STRING( &constant_bin[ 2537917 ], 10, 1 );
    const_str_plain_Win32Serial = UNSTREAM_STRING( &constant_bin[ 297326 ], 11, 1 );
    const_str_plain_serialwin32 = UNSTREAM_STRING( &constant_bin[ 2537927 ], 11, 1 );
    const_str_plain__orgTimeouts = UNSTREAM_STRING( &constant_bin[ 2537938 ], 12, 1 );
    const_str_plain_getRtsToggle = UNSTREAM_STRING( &constant_bin[ 2537950 ], 12, 1 );
    const_str_plain_setRtsToggle = UNSTREAM_STRING( &constant_bin[ 2537962 ], 12, 1 );
    const_str_plain__overlappedRead = UNSTREAM_STRING( &constant_bin[ 2537974 ], 15, 1 );
    const_str_plain__overlappedWrite = UNSTREAM_STRING( &constant_bin[ 2537989 ], 16, 1 );
    const_tuple_str_plain_win32_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_win32_tuple, 0, const_str_plain_win32 ); Py_INCREF( const_str_plain_win32 );
    const_str_plain__GetCommModemStatus = UNSTREAM_STRING( &constant_bin[ 2538005 ], 19, 1 );
    const_str_plain_create_string_buffer = UNSTREAM_STRING( &constant_bin[ 2538024 ], 20, 1 );
    const_dict_aa57a87be5674b501c93d35121ab329d = _PyDict_NewPresized( 1 );
    const_str_digest_6647a04cacc6ca8e36185afe3483ffc8 = UNSTREAM_STRING( &constant_bin[ 2538044 ], 26, 0 );
    PyDict_SetItem( const_dict_aa57a87be5674b501c93d35121ab329d, const_str_plain_doc, const_str_digest_6647a04cacc6ca8e36185afe3483ffc8 );
    const_tuple_int_0_int_0_int_0_int_0_int_0_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_0_int_0_int_0_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_0_int_0_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_0_int_0_int_0_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_0_int_0_int_0_tuple, 3, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_int_0_int_0_int_0_tuple, 4, const_int_0 ); Py_INCREF( const_int_0 );
    const_tuple_str_plain_self_str_plain_stat_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_stat_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_stat_tuple, 1, const_str_plain_stat ); Py_INCREF( const_str_plain_stat );
    const_str_digest_0155ef029c7ccca1944cf6ba6455abfb = UNSTREAM_STRING( &constant_bin[ 2538070 ], 21, 0 );
    const_str_digest_123de9e53ec7ee47f1e1cbf2e6e5773c = UNSTREAM_STRING( &constant_bin[ 2538091 ], 53, 0 );
    const_str_digest_67702a7325e5053cf169923a3aa0ccc0 = UNSTREAM_STRING( &constant_bin[ 2538144 ], 35, 0 );
    const_str_digest_67b39fa9ec16af2a8a119e2b42bd2e97 = UNSTREAM_STRING( &constant_bin[ 2538179 ], 67, 0 );
    const_str_digest_6949f64b1d8d531ba934716a6f637c2c = UNSTREAM_STRING( &constant_bin[ 2538246 ], 43, 0 );
    const_str_digest_8a6bdff82cb0ee4ef64aa22fb950e2af = UNSTREAM_STRING( &constant_bin[ 2538289 ], 53, 0 );
    const_str_digest_9cfa39ce6b23e97166ba2fcf7332c782 = UNSTREAM_STRING( &constant_bin[ 2538342 ], 34, 0 );
    const_str_digest_b9e71011a39be7e7b51fe99a7ba38d22 = UNSTREAM_STRING( &constant_bin[ 2538376 ], 20, 0 );
    const_str_digest_bf008619e476734658c8ccb452b5cea0 = UNSTREAM_STRING( &constant_bin[ 2538396 ], 29, 0 );
    const_str_digest_c0dcf7594b5ff5461264dfa5b6971d60 = UNSTREAM_STRING( &constant_bin[ 2538425 ], 5, 0 );
    const_str_digest_e07541812a32910e24f0f8a100a349e3 = UNSTREAM_STRING( &constant_bin[ 2538430 ], 54, 0 );
    const_str_digest_e9b31ca913a58fa33278b11caf2ed222 = UNSTREAM_STRING( &constant_bin[ 2538484 ], 4, 0 );
    const_tuple_86a8375a416df595d554bb7fb4096e3e_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_86a8375a416df595d554bb7fb4096e3e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_86a8375a416df595d554bb7fb4096e3e_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_86a8375a416df595d554bb7fb4096e3e_tuple, 2, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    PyTuple_SET_ITEM( const_tuple_86a8375a416df595d554bb7fb4096e3e_tuple, 3, const_str_plain_comstat ); Py_INCREF( const_str_plain_comstat );
    PyTuple_SET_ITEM( const_tuple_86a8375a416df595d554bb7fb4096e3e_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_86a8375a416df595d554bb7fb4096e3e_tuple, 5, const_str_plain_buf ); Py_INCREF( const_str_plain_buf );
    PyTuple_SET_ITEM( const_tuple_86a8375a416df595d554bb7fb4096e3e_tuple, 6, const_str_plain_rc ); Py_INCREF( const_str_plain_rc );
    PyTuple_SET_ITEM( const_tuple_86a8375a416df595d554bb7fb4096e3e_tuple, 7, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    PyTuple_SET_ITEM( const_tuple_86a8375a416df595d554bb7fb4096e3e_tuple, 8, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    const_tuple_str_plain_self_str_plain_rtsToggle_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_rtsToggle_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_rtsToggle_tuple, 1, const_str_plain_rtsToggle ); Py_INCREF( const_str_plain_rtsToggle );
    const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple, 1, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple, 2, const_str_plain_comstat ); Py_INCREF( const_str_plain_comstat );
    const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple, 1, const_str_plain_timeouts ); Py_INCREF( const_str_plain_timeouts );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple, 2, const_str_plain_comDCB ); Py_INCREF( const_str_plain_comDCB );
    const_tuple_str_plain_self_str_plain_data_str_plain_n_str_plain_err_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_n_str_plain_err_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_n_str_plain_err_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_n_str_plain_err_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_n_str_plain_err_tuple, 3, const_str_plain_err ); Py_INCREF( const_str_plain_err );
}

// The module code objects.
static PyCodeObject *codeobj_153185ee52d7a80367d51325daa27cd9;
static PyCodeObject *codeobj_7618c1ad94a4d6d8abd6806a897847dd;
static PyCodeObject *codeobj_0192630dc60854e97adf5e7bd4513605;
static PyCodeObject *codeobj_175890d9286d869460bde1eb91ab75b1;
static PyCodeObject *codeobj_d0f153aa88d44950551abd61e72f25da;
static PyCodeObject *codeobj_4b3fd1bf2a36e91c572f5a1e51e7ca39;
static PyCodeObject *codeobj_1e3b4ab3bf4c8a1d258ba16b8436e1a8;
static PyCodeObject *codeobj_f354aa69f6d0e36ce44ef93ca0ffd360;
static PyCodeObject *codeobj_d77e6c6c1682a706787e7d8b58be2570;
static PyCodeObject *codeobj_8c1269e0f7475cf6be1c07972b3d806b;
static PyCodeObject *codeobj_610f79d63f21093b2ae0e8c11c6bea4e;
static PyCodeObject *codeobj_981118fdc492da3f0b33b5345b869f99;
static PyCodeObject *codeobj_dc318f10d0c904c86dee474021b237c1;
static PyCodeObject *codeobj_92ef1a4f3649bf5e92b2af376f25fbf3;
static PyCodeObject *codeobj_a886e765f1d741bfad4a9e11dc759149;
static PyCodeObject *codeobj_1baa4a3c2647338d4ed258f573ee89da;
static PyCodeObject *codeobj_fdf2dbad84643bf6d509fc7daea7d433;
static PyCodeObject *codeobj_bcc9cf5c3a0e1e9a2f6cf245a8857c27;
static PyCodeObject *codeobj_0c17c978784c91d6cb01d142163e8596;
static PyCodeObject *codeobj_65e741bcbda22bcd97fc6e56ad5ae873;
static PyCodeObject *codeobj_0a432e85766e0b55fc8ae63f1efa9c54;
static PyCodeObject *codeobj_b3ed9a9b56c4219bc25e21a0c19458ad;
static PyCodeObject *codeobj_07aff1a9131fdb37de82fd36ab76fbcf;
static PyCodeObject *codeobj_f8b5f390d7f3d695b7d60532dcf46a87;
static PyCodeObject *codeobj_a16a910df8f3b5b14826b3f7d4cfa70d;
static PyCodeObject *codeobj_67e03c9772f98381eb3c20126c505232;
static PyCodeObject *codeobj_22e472d51805b2d9b69912d0db1b627d;
static PyCodeObject *codeobj_a53727488bfaa97f87a87f09f74e6379;
static PyCodeObject *codeobj_3349c30d5d9084afb29873323276600a;
static PyCodeObject *codeobj_f8b58a78c8d046aff9c7128c59fe206e;
static PyCodeObject *codeobj_04b2fcbd7a6e08ef4b9bab01ef26976e;
static PyCodeObject *codeobj_99b3696297da5d47413926c170e5fa2f;
static PyCodeObject *codeobj_b3104f32d50102bdfdf0274d7e641a68;
static PyCodeObject *codeobj_4a90712c64ed1992ba324f0ba5d1dc4f;
static PyCodeObject *codeobj_4743a604e8baa703342f7e1720860a0a;

static void _initModuleCodeObjects(void)
{
    codeobj_153185ee52d7a80367d51325daa27cd9 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_Win32Serial, 22, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_7618c1ad94a4d6d8abd6806a897847dd = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain__GetCommModemStatus, 323, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_0192630dc60854e97adf5e7bd4513605 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain__GetCommModemStatus, 323, const_tuple_str_plain_self_str_plain_stat_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_175890d9286d869460bde1eb91ab75b1 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain___init__, 28, const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_d0f153aa88d44950551abd61e72f25da = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain___init__, 28, const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_4b3fd1bf2a36e91c572f5a1e51e7ca39 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain__reconfigurePort, 86, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_1e3b4ab3bf4c8a1d258ba16b8436e1a8 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain__reconfigurePort, 86, const_tuple_str_plain_self_str_plain_timeouts_str_plain_comDCB_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_f354aa69f6d0e36ce44ef93ca0ffd360 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_close, 191, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_d77e6c6c1682a706787e7d8b58be2570 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_device, 17, const_tuple_str_plain_portnum_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_8c1269e0f7475cf6be1c07972b3d806b = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_flushInput, 276, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_610f79d63f21093b2ae0e8c11c6bea4e = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_flushOutput, 281, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_981118fdc492da3f0b33b5345b869f99 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_getCD, 343, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_dc318f10d0c904c86dee474021b237c1 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_getCTS, 328, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_92ef1a4f3649bf5e92b2af376f25fbf3 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_getDSR, 333, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_a886e765f1d741bfad4a9e11dc759149 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_getRI, 338, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_1baa4a3c2647338d4ed258f573ee89da = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_getRtsToggle, 372, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_fdf2dbad84643bf6d509fc7daea7d433 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_inWaiting, 209, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_bcc9cf5c3a0e1e9a2f6cf245a8857c27 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_inWaiting, 209, const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_0c17c978784c91d6cb01d142163e8596 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_makeDeviceName, 204, const_tuple_str_plain_self_str_plain_port_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_65e741bcbda22bcd97fc6e56ad5ae873 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_open, 33, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_0a432e85766e0b55fc8ae63f1efa9c54 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_open, 33, const_tuple_str_plain_self_str_plain_port_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_b3ed9a9b56c4219bc25e21a0c19458ad = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_outWaiting, 358, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_07aff1a9131fdb37de82fd36ab76fbcf = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_outWaiting, 358, const_tuple_str_plain_self_str_plain_flags_str_plain_comstat_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_f8b5f390d7f3d695b7d60532dcf46a87 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_read, 217, const_tuple_str_plain_self_str_plain_size_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_a16a910df8f3b5b14826b3f7d4cfa70d = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_read, 217, const_tuple_86a8375a416df595d554bb7fb4096e3e_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_67e03c9772f98381eb3c20126c505232 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_sendBreak, 287, const_tuple_str_plain_self_str_plain_duration_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_22e472d51805b2d9b69912d0db1b627d = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_sendBreak, 287, const_tuple_str_plain_self_str_plain_duration_str_plain_time_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_a53727488bfaa97f87a87f09f74e6379 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_serialwin32, 0, const_tuple_empty, 0, CO_NOFREE );
    codeobj_3349c30d5d9084afb29873323276600a = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_setBreak, 295, const_tuple_str_plain_self_str_plain_level_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_f8b58a78c8d046aff9c7128c59fe206e = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_setDTR, 313, const_tuple_str_plain_self_str_plain_level_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_04b2fcbd7a6e08ef4b9bab01ef26976e = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_setRTS, 303, const_tuple_str_plain_self_str_plain_level_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_99b3696297da5d47413926c170e5fa2f = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_setRtsToggle, 367, const_tuple_str_plain_self_str_plain_rtsToggle_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_b3104f32d50102bdfdf0274d7e641a68 = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_setXON, 350, const_tuple_str_plain_self_str_plain_level_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_4a90712c64ed1992ba324f0ba5d1dc4f = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_write, 252, const_tuple_str_plain_self_str_plain_data_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_4743a604e8baa703342f7e1720860a0a = MAKE_CODEOBJ( const_str_digest_e07541812a32910e24f0f8a100a349e3, const_str_plain_write, 252, const_tuple_str_plain_self_str_plain_data_str_plain_n_str_plain_err_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_2_Win32Serial_of_module_serial$serialwin32(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_Serial_of_module_serial$serialwin32(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_Serial_of_module_serial$serialwin32(  );


NUITKA_CROSS_MODULE PyObject *impl_function_6_complex_call_helper_pos_star_list_star_dict_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_args, PyObject *_python_par_star_arg_list, PyObject *_python_par_star_arg_dict );


NUITKA_CROSS_MODULE PyObject *impl_function_3_complex_call_helper_star_list_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_star_arg_list );


static PyObject *MAKE_FUNCTION_function_10_flushOutput_of_class_2_Win32Serial_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_11_sendBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_12_setBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_13_setRTS_of_class_2_Win32Serial_of_module_serial$serialwin32( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_14_setDTR_of_class_2_Win32Serial_of_module_serial$serialwin32( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_15__GetCommModemStatus_of_class_2_Win32Serial_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_16_getCTS_of_class_2_Win32Serial_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_17_getDSR_of_class_2_Win32Serial_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_18_getRI_of_class_2_Win32Serial_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_19_getCD_of_class_2_Win32Serial_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_Win32Serial_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_1_device_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_20_setXON_of_class_2_Win32Serial_of_module_serial$serialwin32( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_21_outWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_22_setRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_23_getRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_2_open_of_class_2_Win32Serial_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_3__reconfigurePort_of_class_2_Win32Serial_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_4_close_of_class_2_Win32Serial_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_5_makeDeviceName_of_class_2_Win32Serial_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_6_inWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_7_read_of_class_2_Win32Serial_of_module_serial$serialwin32( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_8_write_of_class_2_Win32Serial_of_module_serial$serialwin32(  );


static PyObject *MAKE_FUNCTION_function_9_flushInput_of_class_2_Win32Serial_of_module_serial$serialwin32(  );


// The module function definitions.
static PyObject *impl_function_1_device_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_portnum )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_portnum; par_portnum.object = _python_par_portnum;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d77e6c6c1682a706787e7d8b58be2570, module_serial$serialwin32 );
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
    tmp_binop_left_1 = const_str_digest_c0dcf7594b5ff5461264dfa5b6971d60;
    tmp_binop_left_2 = par_portnum.object;

    if ( tmp_binop_left_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293463 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = const_int_pos_1;
    tmp_binop_right_1 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 19;
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
    if ((par_portnum.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_portnum,
            par_portnum.object
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
static PyObject *fparse_function_1_device_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_portnum = NULL;
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
                PyErr_Format( PyExc_TypeError, "device() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_portnum == key )
            {
                assert( _python_par_portnum == NULL );
                _python_par_portnum = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_portnum, key ) == 1 )
            {
                assert( _python_par_portnum == NULL );
                _python_par_portnum = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "device() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_portnum != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_portnum = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_portnum == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_portnum = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_portnum == NULL ))
    {
        PyObject *values[] = { _python_par_portnum };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_device_of_module_serial$serialwin32( self, _python_par_portnum );

error_exit:;

    Py_XDECREF( _python_par_portnum );

    return NULL;
}

static PyObject *dparse_function_1_device_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_device_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_device_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var_BAUDRATES;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var_open;
    PyObjectLocalVariable var__reconfigurePort;
    PyObjectLocalVariable var_close;
    PyObjectLocalVariable var_makeDeviceName;
    PyObjectLocalVariable var_inWaiting;
    PyObjectLocalVariable var_read;
    PyObjectLocalVariable var_write;
    PyObjectLocalVariable var_flushInput;
    PyObjectLocalVariable var_flushOutput;
    PyObjectLocalVariable var_sendBreak;
    PyObjectLocalVariable var_setBreak;
    PyObjectLocalVariable var_setRTS;
    PyObjectLocalVariable var_setDTR;
    PyObjectLocalVariable var__GetCommModemStatus;
    PyObjectLocalVariable var_getCTS;
    PyObjectLocalVariable var_getDSR;
    PyObjectLocalVariable var_getRI;
    PyObjectLocalVariable var_getCD;
    PyObjectLocalVariable var_setXON;
    PyObjectLocalVariable var_outWaiting;
    PyObjectLocalVariable var_setRtsToggle;
    PyObjectLocalVariable var_getRtsToggle;
    PyObjectLocalVariable var_rtsToggle;
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
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_93ce6cfe16d4162110e1228eff37f85f;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_123de9e53ec7ee47f1e1cbf2e6e5773c;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    tmp_assign_source_3 = const_tuple_5aee5ca7adb77075f0cc1cb4927b0a43_tuple;
    assert( var_BAUDRATES.object == NULL );
    var_BAUDRATES.object = INCREASE_REFCOUNT( tmp_assign_source_3 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_153185ee52d7a80367d51325daa27cd9, module_serial$serialwin32 );
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
    tmp_assign_source_4 = MAKE_FUNCTION_function_1___init___of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_2_open_of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    assert( var_open.object == NULL );
    var_open.object = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_3__reconfigurePort_of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    assert( var__reconfigurePort.object == NULL );
    var__reconfigurePort.object = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_4_close_of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_function->f_lineno = 191;
        goto frame_exception_exit_1;
    }
    assert( var_close.object == NULL );
    var_close.object = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_function_5_makeDeviceName_of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_function->f_lineno = 204;
        goto frame_exception_exit_1;
    }
    assert( var_makeDeviceName.object == NULL );
    var_makeDeviceName.object = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_function_6_inWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_function->f_lineno = 209;
        goto frame_exception_exit_1;
    }
    assert( var_inWaiting.object == NULL );
    var_inWaiting.object = tmp_assign_source_9;

    tmp_defaults_1 = const_tuple_int_pos_1_tuple;
    tmp_assign_source_10 = MAKE_FUNCTION_function_7_read_of_class_2_Win32Serial_of_module_serial$serialwin32( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        frame_function->f_lineno = 217;
        goto frame_exception_exit_1;
    }
    assert( var_read.object == NULL );
    var_read.object = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_function_8_write_of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_function->f_lineno = 252;
        goto frame_exception_exit_1;
    }
    assert( var_write.object == NULL );
    var_write.object = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_function_9_flushInput_of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_12 );

        frame_function->f_lineno = 276;
        goto frame_exception_exit_1;
    }
    assert( var_flushInput.object == NULL );
    var_flushInput.object = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_function_10_flushOutput_of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_13 );

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    assert( var_flushOutput.object == NULL );
    var_flushOutput.object = tmp_assign_source_13;

    tmp_defaults_2 = const_tuple_float_0_25_tuple;
    tmp_assign_source_14 = MAKE_FUNCTION_function_11_sendBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_14 );

        frame_function->f_lineno = 287;
        goto frame_exception_exit_1;
    }
    assert( var_sendBreak.object == NULL );
    var_sendBreak.object = tmp_assign_source_14;

    tmp_defaults_3 = const_tuple_int_pos_1_tuple;
    tmp_assign_source_15 = MAKE_FUNCTION_function_12_setBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_15 );

        frame_function->f_lineno = 295;
        goto frame_exception_exit_1;
    }
    assert( var_setBreak.object == NULL );
    var_setBreak.object = tmp_assign_source_15;

    tmp_defaults_4 = const_tuple_int_pos_1_tuple;
    tmp_assign_source_16 = MAKE_FUNCTION_function_13_setRTS_of_class_2_Win32Serial_of_module_serial$serialwin32( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );

        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    assert( var_setRTS.object == NULL );
    var_setRTS.object = tmp_assign_source_16;

    tmp_defaults_5 = const_tuple_int_pos_1_tuple;
    tmp_assign_source_17 = MAKE_FUNCTION_function_14_setDTR_of_class_2_Win32Serial_of_module_serial$serialwin32( INCREASE_REFCOUNT( tmp_defaults_5 ) );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_17 );

        frame_function->f_lineno = 313;
        goto frame_exception_exit_1;
    }
    assert( var_setDTR.object == NULL );
    var_setDTR.object = tmp_assign_source_17;

    tmp_assign_source_18 = MAKE_FUNCTION_function_15__GetCommModemStatus_of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        frame_function->f_lineno = 323;
        goto frame_exception_exit_1;
    }
    assert( var__GetCommModemStatus.object == NULL );
    var__GetCommModemStatus.object = tmp_assign_source_18;

    tmp_assign_source_19 = MAKE_FUNCTION_function_16_getCTS_of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_19 );

        frame_function->f_lineno = 328;
        goto frame_exception_exit_1;
    }
    assert( var_getCTS.object == NULL );
    var_getCTS.object = tmp_assign_source_19;

    tmp_assign_source_20 = MAKE_FUNCTION_function_17_getDSR_of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_20 );

        frame_function->f_lineno = 333;
        goto frame_exception_exit_1;
    }
    assert( var_getDSR.object == NULL );
    var_getDSR.object = tmp_assign_source_20;

    tmp_assign_source_21 = MAKE_FUNCTION_function_18_getRI_of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_21 );

        frame_function->f_lineno = 338;
        goto frame_exception_exit_1;
    }
    assert( var_getRI.object == NULL );
    var_getRI.object = tmp_assign_source_21;

    tmp_assign_source_22 = MAKE_FUNCTION_function_19_getCD_of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_22 );

        frame_function->f_lineno = 343;
        goto frame_exception_exit_1;
    }
    assert( var_getCD.object == NULL );
    var_getCD.object = tmp_assign_source_22;

    tmp_defaults_6 = const_tuple_true_tuple;
    tmp_assign_source_23 = MAKE_FUNCTION_function_20_setXON_of_class_2_Win32Serial_of_module_serial$serialwin32( INCREASE_REFCOUNT( tmp_defaults_6 ) );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_23 );

        frame_function->f_lineno = 350;
        goto frame_exception_exit_1;
    }
    assert( var_setXON.object == NULL );
    var_setXON.object = tmp_assign_source_23;

    tmp_assign_source_24 = MAKE_FUNCTION_function_21_outWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_24 );

        frame_function->f_lineno = 358;
        goto frame_exception_exit_1;
    }
    assert( var_outWaiting.object == NULL );
    var_outWaiting.object = tmp_assign_source_24;

    tmp_assign_source_25 = MAKE_FUNCTION_function_22_setRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_25 );

        frame_function->f_lineno = 367;
        goto frame_exception_exit_1;
    }
    assert( var_setRtsToggle.object == NULL );
    var_setRtsToggle.object = tmp_assign_source_25;

    tmp_assign_source_26 = MAKE_FUNCTION_function_23_getRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_26 );

        frame_function->f_lineno = 372;
        goto frame_exception_exit_1;
    }
    assert( var_getRtsToggle.object == NULL );
    var_getRtsToggle.object = tmp_assign_source_26;

    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_property );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto frame_exception_exit_1;
    }
    tmp_call_pos_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_getRtsToggle.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_setRtsToggle.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 1, tmp_tuple_element_1 );
    tmp_call_kw_1 = PyDict_Copy( const_dict_aa57a87be5674b501c93d35121ab329d );
    frame_function->f_lineno = 376;
    tmp_assign_source_27 = CALL_FUNCTION( tmp_called_1, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 376;
        goto frame_exception_exit_1;
    }
    assert( var_rtsToggle.object == NULL );
    var_rtsToggle.object = tmp_assign_source_27;


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
    if ((var_BAUDRATES.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_BAUDRATES,
            var_BAUDRATES.object
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
    if ((var_open.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_open,
            var_open.object
        );

    }
    if ((var__reconfigurePort.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__reconfigurePort,
            var__reconfigurePort.object
        );

    }
    if ((var_close.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_close,
            var_close.object
        );

    }
    if ((var_makeDeviceName.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_makeDeviceName,
            var_makeDeviceName.object
        );

    }
    if ((var_inWaiting.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_inWaiting,
            var_inWaiting.object
        );

    }
    if ((var_read.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_read,
            var_read.object
        );

    }
    if ((var_write.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_write,
            var_write.object
        );

    }
    if ((var_flushInput.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_flushInput,
            var_flushInput.object
        );

    }
    if ((var_flushOutput.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_flushOutput,
            var_flushOutput.object
        );

    }
    if ((var_sendBreak.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sendBreak,
            var_sendBreak.object
        );

    }
    if ((var_setBreak.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_setBreak,
            var_setBreak.object
        );

    }
    if ((var_setRTS.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_setRTS,
            var_setRTS.object
        );

    }
    if ((var_setDTR.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_setDTR,
            var_setDTR.object
        );

    }
    if ((var__GetCommModemStatus.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__GetCommModemStatus,
            var__GetCommModemStatus.object
        );

    }
    if ((var_getCTS.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_getCTS,
            var_getCTS.object
        );

    }
    if ((var_getDSR.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_getDSR,
            var_getDSR.object
        );

    }
    if ((var_getRI.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_getRI,
            var_getRI.object
        );

    }
    if ((var_getCD.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_getCD,
            var_getCD.object
        );

    }
    if ((var_setXON.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_setXON,
            var_setXON.object
        );

    }
    if ((var_outWaiting.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_outWaiting,
            var_outWaiting.object
        );

    }
    if ((var_setRtsToggle.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_setRtsToggle,
            var_setRtsToggle.object
        );

    }
    if ((var_getRtsToggle.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_getRtsToggle,
            var_getRtsToggle.object
        );

    }
    if ((var_rtsToggle.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rtsToggle,
            var_rtsToggle.object
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
    if ((var_BAUDRATES.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_BAUDRATES,
            var_BAUDRATES.object
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
    if ((var_open.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_open,
            var_open.object
        );

    }
    if ((var__reconfigurePort.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__reconfigurePort,
            var__reconfigurePort.object
        );

    }
    if ((var_close.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_close,
            var_close.object
        );

    }
    if ((var_makeDeviceName.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_makeDeviceName,
            var_makeDeviceName.object
        );

    }
    if ((var_inWaiting.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_inWaiting,
            var_inWaiting.object
        );

    }
    if ((var_read.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_read,
            var_read.object
        );

    }
    if ((var_write.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_write,
            var_write.object
        );

    }
    if ((var_flushInput.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_flushInput,
            var_flushInput.object
        );

    }
    if ((var_flushOutput.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_flushOutput,
            var_flushOutput.object
        );

    }
    if ((var_sendBreak.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_sendBreak,
            var_sendBreak.object
        );

    }
    if ((var_setBreak.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_setBreak,
            var_setBreak.object
        );

    }
    if ((var_setRTS.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_setRTS,
            var_setRTS.object
        );

    }
    if ((var_setDTR.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_setDTR,
            var_setDTR.object
        );

    }
    if ((var__GetCommModemStatus.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__GetCommModemStatus,
            var__GetCommModemStatus.object
        );

    }
    if ((var_getCTS.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_getCTS,
            var_getCTS.object
        );

    }
    if ((var_getDSR.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_getDSR,
            var_getDSR.object
        );

    }
    if ((var_getRI.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_getRI,
            var_getRI.object
        );

    }
    if ((var_getCD.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_getCD,
            var_getCD.object
        );

    }
    if ((var_setXON.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_setXON,
            var_setXON.object
        );

    }
    if ((var_outWaiting.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_outWaiting,
            var_outWaiting.object
        );

    }
    if ((var_setRtsToggle.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_setRtsToggle,
            var_setRtsToggle.object
        );

    }
    if ((var_getRtsToggle.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_getRtsToggle,
            var_getRtsToggle.object
        );

    }
    if ((var_rtsToggle.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_rtsToggle,
            var_rtsToggle.object
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


static PyObject *impl_function_1___init___of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_args; par_args.object = _python_par_args;
    PyObjectLocalVariable par_kwargs; par_kwargs.object = _python_par_kwargs;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d0f153aa88d44950551abd61e72f25da, module_serial$serialwin32 );
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

        frame_function->f_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_hComPort, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_False;
    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 30;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__rtsToggle, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialBase );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialBase );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297353 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
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

        frame_function->f_lineno = 31;
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

        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg4_1 = par_kwargs.object;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 71458 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }

    tmp_unused = impl_function_6_complex_call_helper_pos_star_list_star_dict_of_module___internal__( tmp_dircall_arg1_1, tmp_dircall_arg2_1, INCREASE_REFCOUNT( tmp_dircall_arg3_1 ), INCREASE_REFCOUNT( tmp_dircall_arg4_1 ) );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
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
static PyObject *fparse_function_1___init___of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                        PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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


    return impl_function_1___init___of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_1___init___of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_open_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_port;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_left_3;
    PyObject *tmp_binop_left_4;
    PyObject *tmp_binop_left_5;
    PyObject *tmp_binop_left_6;
    PyObject *tmp_binop_left_7;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
    PyObject *tmp_binop_right_6;
    PyObject *tmp_binop_right_7;
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
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
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
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_65e741bcbda22bcd97fc6e56ad5ae873, module_serial$serialwin32 );
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

        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__port );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_is_1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293548 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 37;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = const_str_digest_3dc5bdb9b4c8a0d596fa824b8adf35e7;
    frame_function->f_lineno = 37;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 37;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 37;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__isOpen );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 38;
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
    tmp_called_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_2 == NULL ))
    {
        tmp_called_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293548 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = const_str_digest_38e3102941775e56fb2cd97b5c788a52;
    frame_function->f_lineno = 39;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 39;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_portstr );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    assert( var_port.object == NULL );
    var_port.object = tmp_assign_source_1;

    // Tried block of try/except
    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_source_name_5 = var_port.object;

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_upper );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto try_finally_handler_2;
    }
    frame_function->f_lineno = 45;
    tmp_source_name_4 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto try_finally_handler_2;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_startswith );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto try_finally_handler_2;
    }
    tmp_call_arg_element_3 = const_str_plain_COM;
    frame_function->f_lineno = 45;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto try_finally_handler_2;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_2;

    tmp_cond_value_3 = tmp_and_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto try_finally_handler_2;
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
    tmp_sliceslicedel_index_lower_1 = 3;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = var_port.object;

    tmp_int_arg_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto try_finally_handler_3;
    }
    tmp_compexpr_left_1 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto try_finally_handler_3;
    }
    tmp_compexpr_right_1 = const_int_pos_8;
    tmp_cond_value_2 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
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
    tmp_cond_value_2 = tmp_and_1__value_1.object;

    Py_INCREF( tmp_cond_value_2 );
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
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 45;
        goto try_finally_handler_1;
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
    tmp_binop_left_1 = const_str_digest_e9b31ca913a58fa33278b11caf2ed222;
    tmp_binop_right_1 = var_port.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto try_finally_handler_1;
    }

    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto try_finally_handler_1;
    }
    if (var_port.object == NULL)
    {
        var_port.object = tmp_assign_source_3;
    }
    else
    {
        PyObject *old = var_port.object;
        var_port.object = tmp_assign_source_3;
        Py_DECREF( old );
    }
    branch_no_3:;
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

        goto try_except_handler_1;
    }

    goto finally_end_3;
    finally_end_3:;
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
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_ValueError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    if (tmp_exc_match_exception_match_1 == 1)
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_no_4:;
    try_except_end_1:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_CreateFile );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = var_port.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_GENERIC_READ );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_GENERIC_WRITE );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = const_int_0;
    tmp_call_arg_element_7 = Py_None;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_OPEN_EXISTING );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_FILE_ATTRIBUTE_NORMAL );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_binop_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_FILE_FLAG_OVERLAPPED );
    if ( tmp_binop_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_binop_left_3 );

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = const_int_0;
    frame_function->f_lineno = 56;
    tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS7( tmp_called_5, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_hComPort, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_12 = par_self.object;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_hComPort );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_INVALID_HANDLE_VALUE );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_hComPort, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293548 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_4 = const_str_digest_1119d0b4a52bcb5eb18432fe820f54f2;
    tmp_binop_right_4 = PyTuple_New( 2 );
    tmp_source_name_14 = par_self.object;

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_portstr );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_4 );

        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_4, 0, tmp_tuple_element_1 );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_WinError );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_4 );

        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 59;
    tmp_tuple_element_1 = CALL_FUNCTION_NO_ARGS( tmp_called_7 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_4 );

        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_4, 1, tmp_tuple_element_1 );
    tmp_call_arg_element_11 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 59;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_11 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 59;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_SetupComm );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = par_self.object;

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_hComPort );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = const_int_pos_4096;
    tmp_call_arg_element_14 = const_int_pos_4096;
    frame_function->f_lineno = 62;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_8, tmp_call_arg_element_12, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_COMMTIMEOUTS );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 65;
    tmp_assattr_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_9 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self.object;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__orgTimeouts, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_GetCommTimeouts );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = par_self.object;

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_15 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_hComPort );
    if ( tmp_call_arg_element_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_byref );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_source_name_22 = par_self.object;

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_17 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__orgTimeouts );
    if ( tmp_call_arg_element_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 66;
    tmp_call_arg_element_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_arg_element_17 );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_15 );

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 66;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_10, tmp_call_arg_element_15, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_arg_element_15 );
    Py_DECREF( tmp_call_arg_element_16 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_RTS_CONTROL_ENABLE );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self.object;

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__rtsState, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_DTR_CONTROL_ENABLE );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self.object;

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__dtrState, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_source_name_25 = par_self.object;

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__reconfigurePort );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 71;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_12 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_PurgeComm );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    tmp_source_name_27 = par_self.object;

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_18 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_hComPort );
    if ( tmp_call_arg_element_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_arg_element_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_PURGE_TXCLEAR );
    if ( tmp_binop_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_arg_element_18 );

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_source_name_29 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_29 == NULL ))
    {
        tmp_source_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_29 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_binop_left_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_PURGE_TXABORT );
    if ( tmp_binop_right_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_binop_left_7 );

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_6 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_left_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_arg_element_18 );

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_source_name_30 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_30 == NULL ))
    {
        tmp_source_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_binop_left_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_PURGE_RXCLEAR );
    if ( tmp_binop_right_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_binop_left_6 );

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_5 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    Py_DECREF( tmp_binop_right_6 );
    if ( tmp_binop_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_arg_element_18 );

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_31 == NULL )
    {
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_binop_left_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_PURGE_RXABORT );
    if ( tmp_binop_right_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_arg_element_18 );
        Py_DECREF( tmp_binop_left_5 );

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_19 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_left_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_call_arg_element_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_13 );
        Py_DECREF( tmp_call_arg_element_18 );

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 77;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_13, tmp_call_arg_element_18, tmp_call_arg_element_19 );
    Py_DECREF( tmp_called_13 );
    Py_DECREF( tmp_call_arg_element_18 );
    Py_DECREF( tmp_call_arg_element_19 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_OVERLAPPED );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 79;
    tmp_assattr_name_6 = CALL_FUNCTION_NO_ARGS( tmp_called_14 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_6 = par_self.object;

    if ( tmp_assattr_target_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__overlappedRead, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_CreateEvent );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_20 = Py_None;
    tmp_call_arg_element_21 = const_int_pos_1;
    tmp_call_arg_element_22 = const_int_0;
    tmp_call_arg_element_23 = Py_None;
    frame_function->f_lineno = 80;
    tmp_assattr_name_7 = CALL_FUNCTION_WITH_ARGS4( tmp_called_15, tmp_call_arg_element_20, tmp_call_arg_element_21, tmp_call_arg_element_22, tmp_call_arg_element_23 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_assattr_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_source_name_34 = par_self.object;

    if ( tmp_source_name_34 == NULL )
    {
        Py_DECREF( tmp_assattr_name_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_7 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain__overlappedRead );
    if ( tmp_assattr_target_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_hEvent, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_7 );
        Py_DECREF( tmp_assattr_target_7 );

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_7 );
    Py_DECREF( tmp_assattr_target_7 );
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_OVERLAPPED );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 81;
    tmp_assattr_name_8 = CALL_FUNCTION_NO_ARGS( tmp_called_16 );
    Py_DECREF( tmp_called_16 );
    if ( tmp_assattr_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_8 = par_self.object;

    if ( tmp_assattr_target_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain__overlappedWrite, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_8 );

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_8 );
    tmp_source_name_36 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_36 == NULL ))
    {
        tmp_source_name_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_CreateEvent );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_24 = Py_None;
    tmp_call_arg_element_25 = const_int_0;
    tmp_call_arg_element_26 = const_int_0;
    tmp_call_arg_element_27 = Py_None;
    frame_function->f_lineno = 83;
    tmp_assattr_name_9 = CALL_FUNCTION_WITH_ARGS4( tmp_called_17, tmp_call_arg_element_24, tmp_call_arg_element_25, tmp_call_arg_element_26, tmp_call_arg_element_27 );
    Py_DECREF( tmp_called_17 );
    if ( tmp_assattr_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_source_name_37 = par_self.object;

    if ( tmp_source_name_37 == NULL )
    {
        Py_DECREF( tmp_assattr_name_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_9 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain__overlappedWrite );
    if ( tmp_assattr_target_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_9 );

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_hEvent, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_9 );
        Py_DECREF( tmp_assattr_target_9 );

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_9 );
    Py_DECREF( tmp_assattr_target_9 );
    tmp_assattr_name_10 = Py_True;
    tmp_assattr_target_10 = par_self.object;

    if ( tmp_assattr_target_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain__isOpen, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }

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
    if ((var_port.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_port,
            var_port.object
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
static PyObject *fparse_function_2_open_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "open() keywords must be strings" );
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
                   "open() got an unexpected keyword argument '%s'",
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


    return impl_function_2_open_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_open_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_open_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_open_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__reconfigurePort_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_timeouts;
    PyObjectLocalVariable var_comDCB;
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
    PyObject *tmp_call_arg_element_10;
    PyObject *tmp_call_arg_element_11;
    PyObject *tmp_call_arg_element_12;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Eq_5;
    int tmp_cmp_Eq_6;
    int tmp_cmp_Eq_7;
    int tmp_cmp_Eq_8;
    int tmp_cmp_Eq_9;
    int tmp_cmp_Eq_10;
    int tmp_cmp_Eq_11;
    int tmp_cmp_Eq_12;
    int tmp_cmp_Eq_13;
    int tmp_cmp_Eq_14;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
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
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_int_arg_3;
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    bool tmp_result;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    Py_ssize_t tmp_slice_index_upper_3;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_3;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4b3fd1bf2a36e91c572f5a1e51e7ca39, module_serial$serialwin32 );
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

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hComPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 88;
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293548 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = const_str_digest_104037fc11d151855fa2a0a50e44d182;
    frame_function->f_lineno = 89;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 89;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__timeout );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_is_1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_1 = const_tuple_int_0_int_0_int_0_int_0_int_0_tuple;
    assert( var_timeouts.object == NULL );
    var_timeouts.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__timeout );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_2 = PyTuple_New( 5 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_MAXDWORD );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_2 );

        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_2, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_2, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_2, 3, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_2, 4, tmp_tuple_element_1 );
    assert( var_timeouts.object == NULL );
    var_timeouts.object = tmp_assign_source_2;

    goto branch_end_3;
    branch_no_3:;
    tmp_assign_source_3 = PyTuple_New( 5 );
    tmp_tuple_element_2 = const_int_0;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_0;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 1, tmp_tuple_element_2 );
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__timeout );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_1 = const_int_pos_1000;
    tmp_int_arg_1 = BINARY_OPERATION_MUL( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_3, 2, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_0;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 3, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_0;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_3, 4, tmp_tuple_element_2 );
    assert( var_timeouts.object == NULL );
    var_timeouts.object = tmp_assign_source_3;

    branch_end_3:;
    branch_end_2:;
    // Tried code
    tmp_cond_value_2 = NULL;
    // Tried code
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 102;
        goto try_finally_handler_2;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__timeout );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto try_finally_handler_2;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_assign_source_4 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto try_finally_handler_2;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = tmp_assign_source_4;

    tmp_cond_value_3 = tmp_and_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto try_finally_handler_2;
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
    tmp_source_name_7 = par_self.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 102;
        goto try_finally_handler_3;
    }

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__interCharTimeout );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto try_finally_handler_3;
    }
    tmp_compexpr_right_2 = Py_None;
    tmp_cond_value_2 = BOOL_FROM( tmp_compexpr_left_2 != tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
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
    tmp_cond_value_2 = tmp_and_1__value_1.object;

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
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_binop_left_2 = PyTuple_New( 1 );
    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 103;
        goto try_finally_handler_1;
    }

    tmp_binop_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__interCharTimeout );
    if ( tmp_binop_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 103;
        goto try_finally_handler_1;
    }
    tmp_binop_right_3 = const_int_pos_1000;
    tmp_int_arg_2 = BINARY_OPERATION_MUL( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_left_3 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 103;
        goto try_finally_handler_1;
    }
    tmp_tuple_element_3 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 103;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_binop_left_2, 0, tmp_tuple_element_3 );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = var_timeouts.object;

    if ( tmp_slice_source_1 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297426 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 103;
        goto try_finally_handler_1;
    }

    tmp_binop_right_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 103;
        goto try_finally_handler_1;
    }
    tmp_assign_source_5 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto try_finally_handler_1;
    }
    if (var_timeouts.object == NULL)
    {
        var_timeouts.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = var_timeouts.object;
        var_timeouts.object = tmp_assign_source_5;
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
    tmp_source_name_9 = par_self.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__writeTimeout );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_isnot_1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_10 = par_self.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__writeTimeout );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = -2;
    tmp_slice_source_2 = var_timeouts.object;

    if ( tmp_slice_source_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297426 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_binop_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_4 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_int_0;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 0, tmp_tuple_element_4 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_binop_left_4 );
        Py_DECREF( tmp_binop_right_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_MAXDWORD );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_4 );
        Py_DECREF( tmp_binop_right_4 );

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_4, 1, tmp_tuple_element_4 );
    tmp_assign_source_6 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_left_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    if (var_timeouts.object == NULL)
    {
        var_timeouts.object = tmp_assign_source_6;
    }
    else
    {
        PyObject *old = var_timeouts.object;
        var_timeouts.object = tmp_assign_source_6;
        Py_DECREF( old );
    }
    goto branch_end_6;
    branch_no_6:;
    tmp_sliceslicedel_index_lower_3 = 0;
    tmp_slice_index_upper_3 = -2;
    tmp_slice_source_3 = var_timeouts.object;

    if ( tmp_slice_source_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297426 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_5 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    if ( tmp_binop_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_5 = PyTuple_New( 2 );
    tmp_tuple_element_5 = const_int_0;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_binop_right_5, 0, tmp_tuple_element_5 );
    tmp_source_name_12 = par_self.object;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_binop_left_5 );
        Py_DECREF( tmp_binop_right_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__writeTimeout );
    if ( tmp_binop_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_5 );
        Py_DECREF( tmp_binop_right_5 );

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_binop_right_6 = const_int_pos_1000;
    tmp_int_arg_3 = BINARY_OPERATION_MUL( tmp_binop_left_6, tmp_binop_right_6 );
    Py_DECREF( tmp_binop_left_6 );
    if ( tmp_int_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_5 );
        Py_DECREF( tmp_binop_right_5 );

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_5 = PyNumber_Int( tmp_int_arg_3 );
    Py_DECREF( tmp_int_arg_3 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_5 );
        Py_DECREF( tmp_binop_right_5 );

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_5, 1, tmp_tuple_element_5 );
    tmp_assign_source_7 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    Py_DECREF( tmp_binop_left_5 );
    Py_DECREF( tmp_binop_right_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    if (var_timeouts.object == NULL)
    {
        var_timeouts.object = tmp_assign_source_7;
    }
    else
    {
        PyObject *old = var_timeouts.object;
        var_timeouts.object = tmp_assign_source_7;
        Py_DECREF( old );
    }
    branch_end_6:;
    branch_no_5:;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_SetCommTimeouts );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = par_self.object;

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_hComPort );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_byref );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_2 );
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_COMMTIMEOUTS );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_2 );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = var_timeouts.object;

    if ( tmp_dircall_arg2_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_2 );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297426 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = impl_function_3_complex_call_helper_star_list_of_module___internal__( tmp_dircall_arg1_1, INCREASE_REFCOUNT( tmp_dircall_arg2_1 ) );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_2 );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 111;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 111;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_SetCommMask );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_source_name_18 = par_self.object;

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_hComPort );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_EV_ERR );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 113;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 113;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 113;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_DCB );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 117;
    tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    assert( var_comDCB.object == NULL );
    var_comDCB.object = tmp_assign_source_8;

    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_GetCommState );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_source_name_22 = par_self.object;

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_hComPort );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_byref );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = var_comDCB.object;

    frame_function->f_lineno = 118;
    tmp_call_arg_element_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 118;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_24 = par_self.object;

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain__baudrate );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_BaudRate, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_25 = par_self.object;

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__bytesize );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_FIVEBITS );

    if (unlikely( tmp_compare_right_5 == NULL ))
    {
        tmp_compare_right_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FIVEBITS );
    }

    if ( tmp_compare_right_5 == NULL )
    {
        Py_DECREF( tmp_compare_left_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293592 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assattr_name_2 = const_int_pos_5;
    tmp_assattr_target_2 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_ByteSize, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 122;
        goto frame_exception_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    tmp_source_name_26 = par_self.object;

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain__bytesize );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SIXBITS );

    if (unlikely( tmp_compare_right_6 == NULL ))
    {
        tmp_compare_right_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SIXBITS );
    }

    if ( tmp_compare_right_6 == NULL )
    {
        Py_DECREF( tmp_compare_left_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293629 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_6 );
    if (tmp_cmp_Eq_4 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assattr_name_3 = const_int_pos_6;
    tmp_assattr_target_3 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_ByteSize, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    goto branch_end_8;
    branch_no_8:;
    tmp_source_name_27 = par_self.object;

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain__bytesize );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SEVENBITS );

    if (unlikely( tmp_compare_right_7 == NULL ))
    {
        tmp_compare_right_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SEVENBITS );
    }

    if ( tmp_compare_right_7 == NULL )
    {
        Py_DECREF( tmp_compare_left_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293665 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_7 );
    if (tmp_cmp_Eq_5 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assattr_name_4 = const_int_pos_7;
    tmp_assattr_target_4 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_ByteSize, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    goto branch_end_9;
    branch_no_9:;
    tmp_source_name_28 = par_self.object;

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain__bytesize );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_EIGHTBITS );

    if (unlikely( tmp_compare_right_8 == NULL ))
    {
        tmp_compare_right_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EIGHTBITS );
    }

    if ( tmp_compare_right_8 == NULL )
    {
        Py_DECREF( tmp_compare_left_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293703 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_6 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_8 );
    if (tmp_cmp_Eq_6 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assattr_name_5 = const_int_pos_8;
    tmp_assattr_target_5 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_ByteSize, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 128;
        goto frame_exception_exit_1;
    }
    goto branch_end_10;
    branch_no_10:;
    tmp_binop_left_7 = const_str_digest_5fcbb0ca072a0b03323bf510c84a6a49;
    tmp_source_name_29 = par_self.object;

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain__bytesize );
    if ( tmp_binop_right_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_7, tmp_binop_right_7 );
    Py_DECREF( tmp_binop_right_7 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 130;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 130;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_10:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    tmp_source_name_30 = par_self.object;

    if ( tmp_source_name_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain__parity );
    if ( tmp_compare_left_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_PARITY_NONE );

    if (unlikely( tmp_compare_right_9 == NULL ))
    {
        tmp_compare_right_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_NONE );
    }

    if ( tmp_compare_right_9 == NULL )
    {
        Py_DECREF( tmp_compare_left_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293741 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_7 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_9 );

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_9 );
    if (tmp_cmp_Eq_7 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_NOPARITY );
    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_6 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_Parity, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_assattr_name_7 = const_int_0;
    tmp_assattr_target_7 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_fParity, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 134;
        goto frame_exception_exit_1;
    }
    goto branch_end_11;
    branch_no_11:;
    tmp_source_name_32 = par_self.object;

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain__parity );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_10 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_PARITY_EVEN );

    if (unlikely( tmp_compare_right_10 == NULL ))
    {
        tmp_compare_right_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_EVEN );
    }

    if ( tmp_compare_right_10 == NULL )
    {
        Py_DECREF( tmp_compare_left_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293781 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_8 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Eq_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_10 );

        frame_function->f_lineno = 135;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_10 );
    if (tmp_cmp_Eq_8 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_EVENPARITY );
    if ( tmp_assattr_name_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_8 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_Parity, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_8 );

        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_8 );
    tmp_assattr_name_9 = const_int_pos_1;
    tmp_assattr_target_9 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_fParity, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 137;
        goto frame_exception_exit_1;
    }
    goto branch_end_12;
    branch_no_12:;
    tmp_source_name_34 = par_self.object;

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 138;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_11 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain__parity );
    if ( tmp_compare_left_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 138;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_PARITY_ODD );

    if (unlikely( tmp_compare_right_11 == NULL ))
    {
        tmp_compare_right_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_ODD );
    }

    if ( tmp_compare_right_11 == NULL )
    {
        Py_DECREF( tmp_compare_left_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293821 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 138;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_9 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Eq_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_11 );

        frame_function->f_lineno = 138;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_11 );
    if (tmp_cmp_Eq_9 == 1)
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_ODDPARITY );
    if ( tmp_assattr_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_10 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_Parity, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_10 );

        frame_function->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_10 );
    tmp_assattr_name_11 = const_int_pos_1;
    tmp_assattr_target_11 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_fParity, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 140;
        goto frame_exception_exit_1;
    }
    goto branch_end_13;
    branch_no_13:;
    tmp_source_name_36 = par_self.object;

    if ( tmp_source_name_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_12 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain__parity );
    if ( tmp_compare_left_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_12 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_PARITY_MARK );

    if (unlikely( tmp_compare_right_12 == NULL ))
    {
        tmp_compare_right_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_MARK );
    }

    if ( tmp_compare_right_12 == NULL )
    {
        Py_DECREF( tmp_compare_left_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293860 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_10 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_Eq_10 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_12 );

        frame_function->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_12 );
    if (tmp_cmp_Eq_10 == 1)
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_37 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_37 == NULL ))
    {
        tmp_source_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_37 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 142;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_MARKPARITY );
    if ( tmp_assattr_name_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 142;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_12 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_Parity, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        frame_function->f_lineno = 142;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_12 );
    tmp_assattr_name_13 = const_int_pos_1;
    tmp_assattr_target_13 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_fParity, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }
    goto branch_end_14;
    branch_no_14:;
    tmp_source_name_38 = par_self.object;

    if ( tmp_source_name_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_13 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain__parity );
    if ( tmp_compare_left_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_13 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_PARITY_SPACE );

    if (unlikely( tmp_compare_right_13 == NULL ))
    {
        tmp_compare_right_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PARITY_SPACE );
    }

    if ( tmp_compare_right_13 == NULL )
    {
        Py_DECREF( tmp_compare_left_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293900 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_11 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_13, tmp_compare_right_13 );
    if ( tmp_cmp_Eq_11 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_13 );

        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_13 );
    if (tmp_cmp_Eq_11 == 1)
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_source_name_39 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_39 == NULL ))
    {
        tmp_source_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_SPACEPARITY );
    if ( tmp_assattr_name_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_14 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_Parity, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_14 );

        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_14 );
    tmp_assattr_name_15 = const_int_pos_1;
    tmp_assattr_target_15 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_fParity, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }
    goto branch_end_15;
    branch_no_15:;
    tmp_binop_left_8 = const_str_digest_286c08f9e7c012f40d24cff6bb6dd5bb;
    tmp_source_name_40 = par_self.object;

    if ( tmp_source_name_40 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain__parity );
    if ( tmp_binop_right_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_8, tmp_binop_right_8 );
    Py_DECREF( tmp_binop_right_8 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 148;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_2 );
    Py_DECREF( tmp_make_exception_arg_2 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 148;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_15:;
    branch_end_14:;
    branch_end_13:;
    branch_end_12:;
    branch_end_11:;
    tmp_source_name_41 = par_self.object;

    if ( tmp_source_name_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_14 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain__stopbits );
    if ( tmp_compare_left_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_14 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE );

    if (unlikely( tmp_compare_right_14 == NULL ))
    {
        tmp_compare_right_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE );
    }

    if ( tmp_compare_right_14 == NULL )
    {
        Py_DECREF( tmp_compare_left_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293941 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_12 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_14, tmp_compare_right_14 );
    if ( tmp_cmp_Eq_12 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_14 );

        frame_function->f_lineno = 150;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_14 );
    if (tmp_cmp_Eq_12 == 1)
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_source_name_42 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_42 == NULL ))
    {
        tmp_source_name_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_ONESTOPBIT );
    if ( tmp_assattr_name_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_16 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_StopBits, tmp_assattr_name_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_16 );

        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_16 );
    goto branch_end_16;
    branch_no_16:;
    tmp_source_name_43 = par_self.object;

    if ( tmp_source_name_43 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_15 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain__stopbits );
    if ( tmp_compare_left_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_15 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE_POINT_FIVE );

    if (unlikely( tmp_compare_right_15 == NULL ))
    {
        tmp_compare_right_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STOPBITS_ONE_POINT_FIVE );
    }

    if ( tmp_compare_right_15 == NULL )
    {
        Py_DECREF( tmp_compare_left_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293982 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_13 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_15, tmp_compare_right_15 );
    if ( tmp_cmp_Eq_13 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_15 );

        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_15 );
    if (tmp_cmp_Eq_13 == 1)
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_source_name_44 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_44 == NULL ))
    {
        tmp_source_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_44 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_ONE5STOPBITS );
    if ( tmp_assattr_name_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_17 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_StopBits, tmp_assattr_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_17 );

        frame_function->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_17 );
    goto branch_end_17;
    branch_no_17:;
    tmp_source_name_45 = par_self.object;

    if ( tmp_source_name_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_16 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain__stopbits );
    if ( tmp_compare_left_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_16 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_STOPBITS_TWO );

    if (unlikely( tmp_compare_right_16 == NULL ))
    {
        tmp_compare_right_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_STOPBITS_TWO );
    }

    if ( tmp_compare_right_16 == NULL )
    {
        Py_DECREF( tmp_compare_left_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294034 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_14 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_16, tmp_compare_right_16 );
    if ( tmp_cmp_Eq_14 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_16 );

        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_16 );
    if (tmp_cmp_Eq_14 == 1)
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_source_name_46 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_46 == NULL ))
    {
        tmp_source_name_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_46 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_TWOSTOPBITS );
    if ( tmp_assattr_name_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_18 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_StopBits, tmp_assattr_name_18 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_18 );

        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_18 );
    goto branch_end_18;
    branch_no_18:;
    tmp_binop_left_9 = const_str_digest_bef5fe91ba305079fdf2d02bfd00bc74;
    tmp_source_name_47 = par_self.object;

    if ( tmp_source_name_47 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_9 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain__stopbits );
    if ( tmp_binop_right_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_9, tmp_binop_right_9 );
    Py_DECREF( tmp_binop_right_9 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 157;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_3 );
    Py_DECREF( tmp_make_exception_arg_3 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_4;
    frame_function->f_lineno = 157;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_end_18:;
    branch_end_17:;
    branch_end_16:;
    tmp_assattr_name_19 = const_int_pos_1;
    tmp_assattr_target_19 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain_fBinary, tmp_assattr_name_19 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 159;
        goto frame_exception_exit_1;
    }
    tmp_source_name_48 = par_self.object;

    if ( tmp_source_name_48 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain__rtscts );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_source_name_49 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_49 == NULL ))
    {
        tmp_source_name_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_49 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_RTS_CONTROL_HANDSHAKE );
    if ( tmp_assattr_name_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_20 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain_fRtsControl, tmp_assattr_name_20 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_20 );

        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_20 );
    goto branch_end_19;
    branch_no_19:;
    tmp_source_name_50 = par_self.object;

    if ( tmp_source_name_50 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain__rtsToggle );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_source_name_51 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_51 == NULL ))
    {
        tmp_source_name_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_51 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_RTS_CONTROL_TOGGLE );
    if ( tmp_assattr_name_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_21 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_21, const_str_plain_fRtsControl, tmp_assattr_name_21 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_21 );

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_21 );
    goto branch_end_20;
    branch_no_20:;
    tmp_source_name_52 = par_self.object;

    if ( tmp_source_name_52 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain__rtsState );
    if ( tmp_assattr_name_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_22 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_22, const_str_plain_fRtsControl, tmp_assattr_name_22 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_22 );

        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_22 );
    branch_end_20:;
    branch_end_19:;
    tmp_source_name_53 = par_self.object;

    if ( tmp_source_name_53 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain__dsrdtr );
    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_6 );
    if (tmp_cond_truth_6 == 1)
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_source_name_54 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_54 == NULL ))
    {
        tmp_source_name_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_54 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_DTR_CONTROL_HANDSHAKE );
    if ( tmp_assattr_name_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_23 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_23, const_str_plain_fDtrControl, tmp_assattr_name_23 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_23 );

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_23 );
    goto branch_end_21;
    branch_no_21:;
    tmp_source_name_55 = par_self.object;

    if ( tmp_source_name_55 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain__dtrState );
    if ( tmp_assattr_name_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_24 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_24, const_str_plain_fDtrControl, tmp_assattr_name_24 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_24 );

        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_24 );
    branch_end_21:;
    tmp_source_name_56 = par_self.object;

    if ( tmp_source_name_56 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain__rtsToggle );
    if ( tmp_cond_value_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_7 );

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_7 );
    if (tmp_cond_truth_7 == 1)
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_assattr_name_25 = const_int_0;
    tmp_assattr_target_25 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_25, const_str_plain_fOutxCtsFlow, tmp_assattr_name_25 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }
    goto branch_end_22;
    branch_no_22:;
    tmp_source_name_57 = par_self.object;

    if ( tmp_source_name_57 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain__rtscts );
    if ( tmp_assattr_name_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_26 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_26, const_str_plain_fOutxCtsFlow, tmp_assattr_name_26 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_26 );

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_26 );
    branch_end_22:;
    tmp_source_name_58 = par_self.object;

    if ( tmp_source_name_58 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain__dsrdtr );
    if ( tmp_assattr_name_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_27 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_27, const_str_plain_fOutxDsrFlow, tmp_assattr_name_27 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_27 );

        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_27 );
    tmp_source_name_59 = par_self.object;

    if ( tmp_source_name_59 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain__xonxoff );
    if ( tmp_assattr_name_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_28 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_28, const_str_plain_fOutX, tmp_assattr_name_28 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_28 );

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_28 );
    tmp_source_name_60 = par_self.object;

    if ( tmp_source_name_60 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain__xonxoff );
    if ( tmp_assattr_name_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_29 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_29, const_str_plain_fInX, tmp_assattr_name_29 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_29 );

        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_29 );
    tmp_assattr_name_30 = const_int_0;
    tmp_assattr_target_30 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_30, const_str_plain_fNull, tmp_assattr_name_30 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 179;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_31 = const_int_0;
    tmp_assattr_target_31 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_31, const_str_plain_fErrorChar, tmp_assattr_name_31 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 180;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_32 = const_int_0;
    tmp_assattr_target_32 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_32, const_str_plain_fAbortOnError, tmp_assattr_name_32 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 181;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_33 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_XON );

    if (unlikely( tmp_assattr_name_33 == NULL ))
    {
        tmp_assattr_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XON );
    }

    if ( tmp_assattr_name_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297480 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 182;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_33 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_33, const_str_plain_XonChar, tmp_assattr_name_33 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 182;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_34 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_XOFF );

    if (unlikely( tmp_assattr_name_34 == NULL ))
    {
        tmp_assattr_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_XOFF );
    }

    if ( tmp_assattr_name_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297512 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_34 = var_comDCB.object;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_34, const_str_plain_XoffChar, tmp_assattr_name_34 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }
    tmp_source_name_61 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_61 == NULL ))
    {
        tmp_source_name_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_61 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_SetCommState );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }
    tmp_source_name_62 = par_self.object;

    if ( tmp_source_name_62 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_hComPort );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }
    tmp_source_name_63 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_63 == NULL ))
    {
        tmp_source_name_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_63 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_byref );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = var_comDCB.object;

    frame_function->f_lineno = 185;
    tmp_call_arg_element_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 185;
    tmp_cond_value_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_10, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_8 );
    if (tmp_cond_truth_8 == 1)
    {
        goto branch_no_23;
    }
    else
    {
        goto branch_yes_23;
    }
    branch_yes_23:;
    tmp_binop_left_10 = const_str_digest_67b39fa9ec16af2a8a119e2b42bd2e97;
    tmp_source_name_64 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_64 == NULL ))
    {
        tmp_source_name_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_64 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_WinError );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 186;
    tmp_binop_right_10 = CALL_FUNCTION_NO_ARGS( tmp_called_10 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_binop_right_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_4 = BINARY_OPERATION_REMAINDER( tmp_binop_left_10, tmp_binop_right_10 );
    Py_DECREF( tmp_binop_right_10 );
    if ( tmp_make_exception_arg_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 186;
    tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, tmp_make_exception_arg_4 );
    Py_DECREF( tmp_make_exception_arg_4 );
    if ( tmp_raise_type_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_5;
    frame_function->f_lineno = 186;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_23:;

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
    if ((var_timeouts.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_timeouts,
            var_timeouts.object
        );

    }
    if ((var_comDCB.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_comDCB,
            var_comDCB.object
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
static PyObject *fparse_function_3__reconfigurePort_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_reconfigurePort() keywords must be strings" );
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
                   "_reconfigurePort() got an unexpected keyword argument '%s'",
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


    return impl_function_3__reconfigurePort_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3__reconfigurePort_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3__reconfigurePort_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__reconfigurePort_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_close_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self )
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f354aa69f6d0e36ce44ef93ca0ffd360, module_serial$serialwin32 );
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

        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__isOpen );
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

        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_hComPort );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 194;
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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SetCommTimeouts );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_hComPort );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__orgTimeouts );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 196;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_CloseHandle );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self.object;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_hComPort );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 198;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_CloseHandle );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = par_self.object;

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__overlappedRead );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_hEvent );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 199;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_CloseHandle );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = par_self.object;

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__overlappedWrite );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_hEvent );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 200;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_hComPort, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_assattr_name_2 = Py_False;
    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__isOpen, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }
    branch_no_1:;

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
static PyObject *fparse_function_4_close_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "close() keywords must be strings" );
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
                   "close() got an unexpected keyword argument '%s'",
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


    return impl_function_4_close_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4_close_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_4_close_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_close_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_makeDeviceName_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_port )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_port; par_port.object = _python_par_port;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0c17c978784c91d6cb01d142163e8596, module_serial$serialwin32 );
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
    tmp_called_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_device );

    if (unlikely( tmp_called_1 == NULL ))
    {
        tmp_called_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_device );
    }

    if ( tmp_called_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294075 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 205;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = par_port.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 205;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 205;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 205;
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
    if ((par_port.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_port,
            par_port.object
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
static PyObject *fparse_function_5_makeDeviceName_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_port = NULL;
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
                PyErr_Format( PyExc_TypeError, "makeDeviceName() keywords must be strings" );
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
            if ( found == false && const_str_plain_port == key )
            {
                assert( _python_par_port == NULL );
                _python_par_port = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_port, key ) == 1 )
            {
                assert( _python_par_port == NULL );
                _python_par_port = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "makeDeviceName() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_port != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_port = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_port == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_port = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_port == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_port };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5_makeDeviceName_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self, _python_par_port );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_port );

    return NULL;
}

static PyObject *dparse_function_5_makeDeviceName_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_5_makeDeviceName_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_makeDeviceName_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_inWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_flags;
    PyObjectLocalVariable var_comstat;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fdf2dbad84643bf6d509fc7daea7d433, module_serial$serialwin32 );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 211;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DWORD );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 211;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 211;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 211;
        goto frame_exception_exit_1;
    }
    assert( var_flags.object == NULL );
    var_flags.object = tmp_assign_source_1;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 212;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_COMSTAT );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 212;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 212;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 212;
        goto frame_exception_exit_1;
    }
    assert( var_comstat.object == NULL );
    var_comstat.object = tmp_assign_source_2;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ClearCommError );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_hComPort );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_byref );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = var_flags.object;

    frame_function->f_lineno = 213;
    tmp_call_arg_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_byref );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = var_comstat.object;

    frame_function->f_lineno = 213;
    tmp_call_arg_element_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 213;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_3, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 213;
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
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293548 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = const_str_digest_bf008619e476734658c8ccb452b5cea0;
    frame_function->f_lineno = 214;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 214;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_7 = var_comstat.object;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_cbInQue );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 215;
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
    if ((var_flags.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_flags,
            var_flags.object
        );

    }
    if ((var_comstat.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_comstat,
            var_comstat.object
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
static PyObject *fparse_function_6_inWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "inWaiting() keywords must be strings" );
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
                   "inWaiting() got an unexpected keyword argument '%s'",
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


    return impl_function_6_inWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6_inWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_6_inWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_inWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_read_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_size )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_size; par_size.object = _python_par_size;
    PyObjectLocalVariable var_flags;
    PyObjectLocalVariable var_comstat;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_buf;
    PyObjectLocalVariable var_rc;
    PyObjectLocalVariable var_err;
    PyObjectLocalVariable var_read;
    PyObjectTempVariable tmp_and_1__value_1;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
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
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_slice_upper_2;
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
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_unary_arg_1;
    PyObject *tmp_unary_arg_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f8b5f390d7f3d695b7d60532dcf46a87, module_serial$serialwin32 );
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

        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hComPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 221;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294110 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 221;
        goto frame_exception_exit_1;
    }

    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 221;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_compare_left_1 = par_size.object;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 222;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 222;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 223;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ResetEvent );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 223;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 223;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__overlappedRead );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 223;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hEvent );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 223;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 223;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 223;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_DWORD );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 224;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 224;
        goto frame_exception_exit_1;
    }
    assert( var_flags.object == NULL );
    var_flags.object = tmp_assign_source_1;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 225;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_COMSTAT );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 225;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 225;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 225;
        goto frame_exception_exit_1;
    }
    assert( var_comstat.object == NULL );
    var_comstat.object = tmp_assign_source_2;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ClearCommError );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_hComPort );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_byref );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = var_flags.object;

    frame_function->f_lineno = 226;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_2 );
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_byref );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_2 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = var_comstat.object;

    frame_function->f_lineno = 226;
    tmp_call_arg_element_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_4 );
        Py_DECREF( tmp_call_arg_element_2 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 226;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_4, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 226;
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
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293548 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = const_str_digest_bf008619e476734658c8ccb452b5cea0;
    frame_function->f_lineno = 227;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_7 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 227;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_source_name_11 = par_self.object;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_timeout );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 228;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_8 = LOOKUP_BUILTIN( const_str_plain_min );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = var_comstat.object;

    tmp_call_arg_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_cbInQue );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = par_size.object;

    if ( tmp_call_arg_element_9 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 229;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }
    assert( var_n.object == NULL );
    var_n.object = tmp_assign_source_3;

    tmp_compare_left_3 = var_n.object;

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 230;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Gt_2 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_create_string_buffer );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = var_n.object;

    frame_function->f_lineno = 231;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    assert( var_buf.object == NULL );
    var_buf.object = tmp_assign_source_4;

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 232;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_DWORD );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 232;
    tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_10 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
        goto frame_exception_exit_1;
    }
    assert( var_rc.object == NULL );
    var_rc.object = tmp_assign_source_5;

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_ReadFile );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = par_self.object;

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_hComPort );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = var_buf.object;

    tmp_call_arg_element_13 = var_n.object;

    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_byref );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_11 );

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_15 = var_rc.object;

    frame_function->f_lineno = 233;
    tmp_call_arg_element_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_11 );

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_byref );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_14 );

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = par_self.object;

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_called_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_17 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__overlappedRead );
    if ( tmp_call_arg_element_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_called_13 );

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 233;
    tmp_call_arg_element_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_17 );
    Py_DECREF( tmp_called_13 );
    Py_DECREF( tmp_call_arg_element_17 );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_14 );

        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 233;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS5( tmp_called_11, tmp_call_arg_element_11, tmp_call_arg_element_12, tmp_call_arg_element_13, tmp_call_arg_element_14, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_arg_element_11 );
    Py_DECREF( tmp_call_arg_element_14 );
    Py_DECREF( tmp_call_arg_element_16 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 233;
        goto frame_exception_exit_1;
    }
    assert( var_err.object == NULL );
    var_err.object = tmp_assign_source_6;

    // Tried code
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_unary_arg_1 = var_err.object;

    tmp_assign_source_7 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
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


        frame_function->f_lineno = 234;
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
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto try_finally_handler_3;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_GetLastError );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
        goto try_finally_handler_3;
    }
    frame_function->f_lineno = 234;
    tmp_compexpr_left_1 = CALL_FUNCTION_NO_ARGS( tmp_called_14 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
        goto try_finally_handler_3;
    }
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 234;
        goto try_finally_handler_3;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_ERROR_IO_PENDING );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        frame_function->f_lineno = 234;
        goto try_finally_handler_3;
    }
    tmp_cond_value_3 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 234;
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

    Py_INCREF( tmp_cond_value_3 );
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
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 234;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if (tmp_cond_truth_3 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_15 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_15 == NULL ))
    {
        tmp_called_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293548 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto try_finally_handler_1;
    }

    tmp_binop_left_1 = const_str_digest_b9e71011a39be7e7b51fe99a7ba38d22;
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 235;
        goto try_finally_handler_1;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_WinError );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 235;
    tmp_binop_right_1 = CALL_FUNCTION_NO_ARGS( tmp_called_16 );
    Py_DECREF( tmp_called_16 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_18 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 235;
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_18 );
    Py_DECREF( tmp_call_arg_element_18 );
    if ( tmp_raise_type_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 235;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_3;
    frame_function->f_lineno = 235;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_6:;
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
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_WaitForSingleObject );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    tmp_source_name_25 = par_self.object;

    if ( tmp_source_name_25 == NULL )
    {
        Py_DECREF( tmp_called_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_source_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__overlappedRead );
    if ( tmp_source_name_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_17 );

        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_19 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_hEvent );
    Py_DECREF( tmp_source_name_24 );
    if ( tmp_call_arg_element_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_17 );

        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_called_17 );
        Py_DECREF( tmp_call_arg_element_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_20 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_INFINITE );
    if ( tmp_call_arg_element_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_17 );
        Py_DECREF( tmp_call_arg_element_19 );

        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 236;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_17, tmp_call_arg_element_19, tmp_call_arg_element_20 );
    Py_DECREF( tmp_called_17 );
    Py_DECREF( tmp_call_arg_element_19 );
    Py_DECREF( tmp_call_arg_element_20 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    if (var_err.object == NULL)
    {
        var_err.object = tmp_assign_source_8;
    }
    else
    {
        PyObject *old = var_err.object;
        var_err.object = tmp_assign_source_8;
        Py_DECREF( old );
    }
    tmp_source_name_27 = var_buf.object;

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 77050 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_raw );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    tmp_source_name_28 = var_rc.object;

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_slice_source_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 217228 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_slice_upper_1 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_value );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_slice_source_1 );

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    assert( var_read.object == NULL );
    var_read.object = tmp_assign_source_9;

    goto branch_end_5;
    branch_no_5:;
    tmp_called_18 = LOOKUP_BUILTIN( const_str_plain_bytes );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 239;
    tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS( tmp_called_18 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    assert( var_read.object == NULL );
    var_read.object = tmp_assign_source_10;

    branch_end_5:;
    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_29 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_29 == NULL ))
    {
        tmp_source_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_create_string_buffer );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_21 = par_size.object;

    if ( tmp_call_arg_element_21 == NULL )
    {
        Py_DECREF( tmp_called_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 241;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_19, tmp_call_arg_element_21 );
    Py_DECREF( tmp_called_19 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    assert( var_buf.object == NULL );
    var_buf.object = tmp_assign_source_11;

    tmp_source_name_30 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_30 == NULL ))
    {
        tmp_source_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_DWORD );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 242;
    tmp_assign_source_12 = CALL_FUNCTION_NO_ARGS( tmp_called_20 );
    Py_DECREF( tmp_called_20 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 242;
        goto frame_exception_exit_1;
    }
    assert( var_rc.object == NULL );
    var_rc.object = tmp_assign_source_12;

    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_called_21 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_ReadFile );
    if ( tmp_called_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    tmp_source_name_32 = par_self.object;

    if ( tmp_source_name_32 == NULL )
    {
        Py_DECREF( tmp_called_21 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_22 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_hComPort );
    if ( tmp_call_arg_element_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_21 );

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_23 = var_buf.object;

    tmp_call_arg_element_24 = par_size.object;

    if ( tmp_call_arg_element_24 == NULL )
    {
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_arg_element_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6737 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_33 == NULL )
    {
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_arg_element_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_called_22 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_byref );
    if ( tmp_called_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_arg_element_22 );

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_26 = var_rc.object;

    frame_function->f_lineno = 243;
    tmp_call_arg_element_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_22, tmp_call_arg_element_26 );
    Py_DECREF( tmp_called_22 );
    if ( tmp_call_arg_element_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_arg_element_22 );

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    tmp_source_name_34 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_34 == NULL ))
    {
        tmp_source_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_34 == NULL )
    {
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_25 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_byref );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_25 );

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    tmp_source_name_35 = par_self.object;

    if ( tmp_source_name_35 == NULL )
    {
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_25 );
        Py_DECREF( tmp_called_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_28 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain__overlappedRead );
    if ( tmp_call_arg_element_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_25 );
        Py_DECREF( tmp_called_23 );

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 243;
    tmp_call_arg_element_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_23, tmp_call_arg_element_28 );
    Py_DECREF( tmp_called_23 );
    Py_DECREF( tmp_call_arg_element_28 );
    if ( tmp_call_arg_element_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_21 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_25 );

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 243;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS5( tmp_called_21, tmp_call_arg_element_22, tmp_call_arg_element_23, tmp_call_arg_element_24, tmp_call_arg_element_25, tmp_call_arg_element_27 );
    Py_DECREF( tmp_called_21 );
    Py_DECREF( tmp_call_arg_element_22 );
    Py_DECREF( tmp_call_arg_element_25 );
    Py_DECREF( tmp_call_arg_element_27 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    assert( var_err.object == NULL );
    var_err.object = tmp_assign_source_13;

    // Tried code
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_unary_arg_2 = var_err.object;

    tmp_assign_source_14 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto try_finally_handler_5;
    }
    assert( tmp_and_2__value_1.object == NULL );
    tmp_and_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_14 );

    tmp_cond_value_6 = tmp_and_2__value_1.object;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto try_finally_handler_5;
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
    tmp_cond_value_5 = NULL;
    // Tried code
    tmp_result = tmp_and_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_and_2__value_1.object );
        tmp_and_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_source_name_36 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_36 == NULL ))
    {
        tmp_source_name_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 244;
        goto try_finally_handler_6;
    }

    tmp_called_24 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_GetLastError );
    if ( tmp_called_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto try_finally_handler_6;
    }
    frame_function->f_lineno = 244;
    tmp_compexpr_left_2 = CALL_FUNCTION_NO_ARGS( tmp_called_24 );
    Py_DECREF( tmp_called_24 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto try_finally_handler_6;
    }
    tmp_source_name_37 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_37 == NULL ))
    {
        tmp_source_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_37 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 244;
        goto try_finally_handler_6;
    }

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_ERROR_IO_PENDING );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        frame_function->f_lineno = 244;
        goto try_finally_handler_6;
    }
    tmp_cond_value_5 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 244;
        goto try_finally_handler_6;
    }
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
    tmp_cond_value_5 = tmp_and_2__value_1.object;

    Py_INCREF( tmp_cond_value_5 );
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
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 244;
        goto try_finally_handler_4;
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
    tmp_called_25 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_25 == NULL ))
    {
        tmp_called_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293548 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto try_finally_handler_4;
    }

    tmp_binop_left_2 = const_str_digest_b9e71011a39be7e7b51fe99a7ba38d22;
    tmp_source_name_38 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_38 == NULL ))
    {
        tmp_source_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 245;
        goto try_finally_handler_4;
    }

    tmp_called_26 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_WinError );
    if ( tmp_called_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 245;
    tmp_binop_right_2 = CALL_FUNCTION_NO_ARGS( tmp_called_26 );
    Py_DECREF( tmp_called_26 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_4;
    }
    tmp_call_arg_element_29 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_call_arg_element_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_4;
    }
    frame_function->f_lineno = 245;
    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_25, tmp_call_arg_element_29 );
    Py_DECREF( tmp_call_arg_element_29 );
    if ( tmp_raise_type_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto try_finally_handler_4;
    }
    exception_type = tmp_raise_type_4;
    frame_function->f_lineno = 245;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_4;
    branch_no_7:;
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

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_and_2__value_1.object );
    tmp_and_2__value_1.object = NULL;

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
    tmp_source_name_39 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_39 == NULL ))
    {
        tmp_source_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }

    tmp_called_27 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_GetOverlappedResult );
    if ( tmp_called_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_source_name_40 = par_self.object;

    if ( tmp_source_name_40 == NULL )
    {
        Py_DECREF( tmp_called_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_30 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_hComPort );
    if ( tmp_call_arg_element_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_source_name_41 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_41 == NULL ))
    {
        tmp_source_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_41 == NULL )
    {
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_30 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }

    tmp_called_28 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_byref );
    if ( tmp_called_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_30 );

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_source_name_42 = par_self.object;

    if ( tmp_source_name_42 == NULL )
    {
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_called_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_32 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain__overlappedRead );
    if ( tmp_call_arg_element_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_called_28 );

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 246;
    tmp_call_arg_element_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_28, tmp_call_arg_element_32 );
    Py_DECREF( tmp_called_28 );
    Py_DECREF( tmp_call_arg_element_32 );
    if ( tmp_call_arg_element_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_30 );

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_source_name_43 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_43 == NULL ))
    {
        tmp_source_name_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_43 == NULL )
    {
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_call_arg_element_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }

    tmp_called_29 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_byref );
    if ( tmp_called_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_call_arg_element_31 );

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_34 = var_rc.object;

    if ( tmp_call_arg_element_34 == NULL )
    {
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_call_arg_element_31 );
        Py_DECREF( tmp_called_29 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 217228 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 246;
    tmp_call_arg_element_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_29, tmp_call_arg_element_34 );
    Py_DECREF( tmp_called_29 );
    if ( tmp_call_arg_element_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_call_arg_element_31 );

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_35 = Py_True;
    frame_function->f_lineno = 246;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS4( tmp_called_27, tmp_call_arg_element_30, tmp_call_arg_element_31, tmp_call_arg_element_33, tmp_call_arg_element_35 );
    Py_DECREF( tmp_called_27 );
    Py_DECREF( tmp_call_arg_element_30 );
    Py_DECREF( tmp_call_arg_element_31 );
    Py_DECREF( tmp_call_arg_element_33 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }
    if (var_err.object == NULL)
    {
        var_err.object = tmp_assign_source_15;
    }
    else
    {
        PyObject *old = var_err.object;
        var_err.object = tmp_assign_source_15;
        Py_DECREF( old );
    }
    tmp_source_name_44 = var_buf.object;

    if ( tmp_source_name_44 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 77050 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_slice_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_raw );
    if ( tmp_slice_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }
    tmp_source_name_45 = var_rc.object;

    if ( tmp_source_name_45 == NULL )
    {
        Py_DECREF( tmp_slice_source_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 217228 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_slice_upper_2 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_value );
    if ( tmp_slice_upper_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_slice_source_2 );

        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = LOOKUP_SLICE( tmp_slice_source_2, Py_None, tmp_slice_upper_2 );
    Py_DECREF( tmp_slice_source_2 );
    Py_DECREF( tmp_slice_upper_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 247;
        goto frame_exception_exit_1;
    }
    if (var_read.object == NULL)
    {
        var_read.object = tmp_assign_source_16;
    }
    else
    {
        PyObject *old = var_read.object;
        var_read.object = tmp_assign_source_16;
        Py_DECREF( old );
    }
    branch_end_4:;
    goto branch_end_2;
    branch_no_2:;
    tmp_called_30 = LOOKUP_BUILTIN( const_str_plain_bytes );
    if ( tmp_called_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 249;
    tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS( tmp_called_30 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 249;
        goto frame_exception_exit_1;
    }
    assert( var_read.object == NULL );
    var_read.object = tmp_assign_source_17;

    branch_end_2:;
    tmp_called_31 = LOOKUP_BUILTIN( const_str_plain_bytes );
    if ( tmp_called_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_36 = var_read.object;

    if ( tmp_call_arg_element_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1026 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 250;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_31, tmp_call_arg_element_36 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
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
    if ((var_flags.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_flags,
            var_flags.object
        );

    }
    if ((var_comstat.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_comstat,
            var_comstat.object
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
    if ((var_buf.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_buf,
            var_buf.object
        );

    }
    if ((var_rc.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rc,
            var_rc.object
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
    if ((var_read.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_read,
            var_read.object
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
    if ((par_size.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_size,
            par_size.object
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
static PyObject *fparse_function_7_read_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_size = NULL;
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
                PyErr_Format( PyExc_TypeError, "read() keywords must be strings" );
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
            if ( found == false && const_str_plain_size == key )
            {
                assert( _python_par_size == NULL );
                _python_par_size = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_size, key ) == 1 )
            {
                assert( _python_par_size == NULL );
                _python_par_size = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "read() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_size != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_size = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_size == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_size = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_size == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_size };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7_read_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self, _python_par_size );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_size );

    return NULL;
}

static PyObject *dparse_function_7_read_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_7_read_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_read_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_write_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_data )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_data; par_data.object = _python_par_data;
    PyObjectLocalVariable var_n;
    PyObjectLocalVariable var_err;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    PyObject *tmp_called_9;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
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
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    int tmp_tried_lineno_1;
    PyObject *tmp_unary_arg_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4a90712c64ed1992ba324f0ba5d1dc4f, module_serial$serialwin32 );
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

        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hComPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 254;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294110 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }

    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 254;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_1 = LOOKUP_BUILTIN( const_str_plain_bytes );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_data.object;

    if ( tmp_call_arg_element_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 258;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 258;
        goto frame_exception_exit_1;
    }
    if (par_data.object == NULL)
    {
        par_data.object = tmp_assign_source_1;
    }
    else
    {
        PyObject *old = par_data.object;
        par_data.object = tmp_assign_source_1;
        Py_DECREF( old );
    }
    tmp_cond_value_2 = par_data.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_DWORD );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 261;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 261;
        goto frame_exception_exit_1;
    }
    assert( var_n.object == NULL );
    var_n.object = tmp_assign_source_2;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_WriteFile );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_hComPort );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = par_data.object;

    tmp_len_arg_1 = par_data.object;

    tmp_call_arg_element_4 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_2 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_byref );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_2 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = var_n.object;

    frame_function->f_lineno = 262;
    tmp_call_arg_element_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_2 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_2 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__overlappedWrite );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_2 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 262;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS5( tmp_called_3, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }
    assert( var_err.object == NULL );
    var_err.object = tmp_assign_source_3;

    // Tried code
    tmp_cond_value_3 = NULL;
    // Tried code
    tmp_unary_arg_1 = var_err.object;

    tmp_assign_source_4 = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto try_finally_handler_2;
    }
    assert( tmp_and_1__value_1.object == NULL );
    tmp_and_1__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    tmp_cond_value_4 = tmp_and_1__value_1.object;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
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
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 263;
        goto try_finally_handler_3;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_GetLastError );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto try_finally_handler_3;
    }
    frame_function->f_lineno = 263;
    tmp_compexpr_left_1 = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto try_finally_handler_3;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 263;
        goto try_finally_handler_3;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ERROR_IO_PENDING );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        frame_function->f_lineno = 263;
        goto try_finally_handler_3;
    }
    tmp_cond_value_3 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
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

    Py_INCREF( tmp_cond_value_3 );
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
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 263;
        goto try_finally_handler_1;
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
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293548 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto try_finally_handler_1;
    }

    tmp_binop_left_1 = const_str_digest_0155ef029c7ccca1944cf6ba6455abfb;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 264;
        goto try_finally_handler_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_WinError );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 264;
    tmp_binop_right_1 = CALL_FUNCTION_NO_ARGS( tmp_called_7 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_8 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 264;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_8 );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto try_finally_handler_1;
    }
    exception_type = tmp_raise_type_2;
    frame_function->f_lineno = 264;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_1;
    branch_no_3:;
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
    tmp_source_name_10 = par_self.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__writeTimeout );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if (tmp_cmp_NotEq_1 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_GetOverlappedResult );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = par_self.object;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_hComPort );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = par_self.object;

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_10 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__overlappedWrite );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_9 );

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_byref );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = var_n.object;

    if ( tmp_call_arg_element_12 == NULL )
    {
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 268;
    tmp_call_arg_element_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_9 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = Py_True;
    frame_function->f_lineno = 268;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS4( tmp_called_8, tmp_call_arg_element_9, tmp_call_arg_element_10, tmp_call_arg_element_11, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_9 );
    Py_DECREF( tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_11 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    if (var_err.object == NULL)
    {
        var_err.object = tmp_assign_source_5;
    }
    else
    {
        PyObject *old = var_err.object;
        var_err.object = tmp_assign_source_5;
        Py_DECREF( old );
    }
    tmp_source_name_15 = var_n.object;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_value );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_data.object;

    if ( tmp_len_arg_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 0 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 269;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if (tmp_cmp_NotEq_2 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_raise_type_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_writeTimeoutError );

    if (unlikely( tmp_raise_type_3 == NULL ))
    {
        tmp_raise_type_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_writeTimeoutError );
    }

    if ( tmp_raise_type_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294197 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 270;
        goto frame_exception_exit_1;
    }

    exception_type = INCREASE_REFCOUNT( tmp_raise_type_3 );
    frame_function->f_lineno = 270;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_5:;
    branch_no_4:;
    tmp_source_name_16 = var_n.object;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12516 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_value );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 271;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
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
    if ((var_n.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_n,
            var_n.object
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


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_8_write_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "write() keywords must be strings" );
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
                   "write() got an unexpected keyword argument '%s'",
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


    return impl_function_8_write_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self, _python_par_data );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_data );

    return NULL;
}

static PyObject *dparse_function_8_write_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_8_write_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_write_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_flushInput_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8c1269e0f7475cf6be1c07972b3d806b, module_serial$serialwin32 );
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

        frame_function->f_lineno = 278;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hComPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 278;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 278;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294110 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 278;
        goto frame_exception_exit_1;
    }

    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 278;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PurgeComm );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hComPort );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_PURGE_RXCLEAR );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_PURGE_RXABORT );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 279;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 279;
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
static PyObject *fparse_function_9_flushInput_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "flushInput() keywords must be strings" );
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
                   "flushInput() got an unexpected keyword argument '%s'",
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


    return impl_function_9_flushInput_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_9_flushInput_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_9_flushInput_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_flushInput_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_flushOutput_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_610f79d63f21093b2ae0e8c11c6bea4e, module_serial$serialwin32 );
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

        frame_function->f_lineno = 284;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hComPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 284;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 284;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294110 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 284;
        goto frame_exception_exit_1;
    }

    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 284;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PurgeComm );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hComPort );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_PURGE_TXCLEAR );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_PURGE_TXABORT );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = BINARY_OPERATION( PyNumber_Or, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 285;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 285;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 285;
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
static PyObject *fparse_function_10_flushOutput_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "flushOutput() keywords must be strings" );
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
                   "flushOutput() got an unexpected keyword argument '%s'",
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


    return impl_function_10_flushOutput_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_10_flushOutput_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_10_flushOutput_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_flushOutput_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_sendBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_duration )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_duration; par_duration.object = _python_par_duration;
    PyObjectLocalVariable var_time;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_67e03c9772f98381eb3c20126c505232, module_serial$serialwin32 );
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

        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hComPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 289;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294110 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 289;
        goto frame_exception_exit_1;
    }

    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 289;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_import_globals_1 = ((PyModuleObject *)module_serial$serialwin32)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_time.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_time,
            var_time.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_duration.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_duration,
            par_duration.object
        );

    }
    frame_function->f_lineno = 290;
    tmp_assign_source_1 = IMPORT_MODULE( const_str_plain_time, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 290;
        goto frame_exception_exit_1;
    }
    assert( var_time.object == NULL );
    var_time.object = tmp_assign_source_1;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SetCommBreak );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hComPort );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 291;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 291;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = var_time.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sleep );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_duration.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294243 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 292;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 292;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ClearCommBreak );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_hComPort );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 293;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 293;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 293;
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
    if ((var_time.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_time,
            var_time.object
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
    if ((par_duration.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_duration,
            par_duration.object
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
static PyObject *fparse_function_11_sendBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_duration = NULL;
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
                PyErr_Format( PyExc_TypeError, "sendBreak() keywords must be strings" );
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
            if ( found == false && const_str_plain_duration == key )
            {
                assert( _python_par_duration == NULL );
                _python_par_duration = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_duration, key ) == 1 )
            {
                assert( _python_par_duration == NULL );
                _python_par_duration = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "sendBreak() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_duration != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_duration = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_duration == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_duration = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_duration == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_duration };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_11_sendBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self, _python_par_duration );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_duration );

    return NULL;
}

static PyObject *dparse_function_11_sendBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_11_sendBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_sendBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_setBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_level )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_level; par_level.object = _python_par_level;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3349c30d5d9084afb29873323276600a, module_serial$serialwin32 );
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

        frame_function->f_lineno = 297;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hComPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 297;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 297;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294110 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 297;
        goto frame_exception_exit_1;
    }

    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 297;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_cond_value_2 = par_level.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94014 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 298;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 298;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SetCommBreak );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hComPort );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 299;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 299;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ClearCommBreak );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_hComPort );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 301;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 301;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 301;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_level.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_level,
            par_level.object
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
static PyObject *fparse_function_12_setBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_level = NULL;
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
                PyErr_Format( PyExc_TypeError, "setBreak() keywords must be strings" );
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
            if ( found == false && const_str_plain_level == key )
            {
                assert( _python_par_level == NULL );
                _python_par_level = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_level, key ) == 1 )
            {
                assert( _python_par_level == NULL );
                _python_par_level = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "setBreak() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_level != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_level = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_level == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_level = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_level == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_level };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_12_setBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self, _python_par_level );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_level );

    return NULL;
}

static PyObject *dparse_function_12_setBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_12_setBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_setBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_setRTS_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_level )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_level; par_level.object = _python_par_level;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_04b2fcbd7a6e08ef4b9bab01ef26976e, module_serial$serialwin32 );
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

        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hComPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 305;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294110 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }

    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 305;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_cond_value_2 = par_level.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94014 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 306;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 306;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_RTS_CONTROL_ENABLE );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__rtsState, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 307;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_EscapeCommFunction );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_hComPort );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_SETRTS );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 308;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_RTS_CONTROL_DISABLE );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__rtsState, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        frame_function->f_lineno = 310;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_EscapeCommFunction );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_hComPort );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_CLRRTS );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 311;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 311;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 311;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_level.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_level,
            par_level.object
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
static PyObject *fparse_function_13_setRTS_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_level = NULL;
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
                PyErr_Format( PyExc_TypeError, "setRTS() keywords must be strings" );
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
            if ( found == false && const_str_plain_level == key )
            {
                assert( _python_par_level == NULL );
                _python_par_level = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_level, key ) == 1 )
            {
                assert( _python_par_level == NULL );
                _python_par_level = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "setRTS() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_level != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_level = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_level == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_level = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_level == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_level };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_13_setRTS_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self, _python_par_level );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_level );

    return NULL;
}

static PyObject *dparse_function_13_setRTS_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_13_setRTS_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_setRTS_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_setDTR_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_level )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_level; par_level.object = _python_par_level;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f8b58a78c8d046aff9c7128c59fe206e, module_serial$serialwin32 );
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

        frame_function->f_lineno = 315;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hComPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 315;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 315;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294110 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 315;
        goto frame_exception_exit_1;
    }

    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 315;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_cond_value_2 = par_level.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94014 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 316;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 316;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_DTR_CONTROL_ENABLE );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 317;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 317;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__dtrState, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 317;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 318;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_EscapeCommFunction );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 318;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 318;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_hComPort );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 318;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 318;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_SETDTR );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 318;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 318;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 318;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 320;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_DTR_CONTROL_DISABLE );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 320;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 320;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__dtrState, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        frame_function->f_lineno = 320;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_EscapeCommFunction );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_hComPort );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_CLRDTR );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 321;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 321;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 321;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_level.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_level,
            par_level.object
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
static PyObject *fparse_function_14_setDTR_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_level = NULL;
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
                PyErr_Format( PyExc_TypeError, "setDTR() keywords must be strings" );
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
            if ( found == false && const_str_plain_level == key )
            {
                assert( _python_par_level == NULL );
                _python_par_level = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_level, key ) == 1 )
            {
                assert( _python_par_level == NULL );
                _python_par_level = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "setDTR() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_level != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_level = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_level == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_level = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_level == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_level };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_14_setDTR_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self, _python_par_level );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_level );

    return NULL;
}

static PyObject *dparse_function_14_setDTR_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_14_setDTR_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14_setDTR_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15__GetCommModemStatus_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_stat;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7618c1ad94a4d6d8abd6806a897847dd, module_serial$serialwin32 );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DWORD );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 324;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 324;
        goto frame_exception_exit_1;
    }
    assert( var_stat.object == NULL );
    var_stat.object = tmp_assign_source_1;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_GetCommModemStatus );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hComPort );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_byref );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = var_stat.object;

    frame_function->f_lineno = 325;
    tmp_call_arg_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 325;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 325;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = var_stat.object;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_value );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 326;
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
    if ((var_stat.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stat,
            var_stat.object
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
static PyObject *fparse_function_15__GetCommModemStatus_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_GetCommModemStatus() keywords must be strings" );
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
                   "_GetCommModemStatus() got an unexpected keyword argument '%s'",
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


    return impl_function_15__GetCommModemStatus_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_15__GetCommModemStatus_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_15__GetCommModemStatus_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15__GetCommModemStatus_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_getCTS_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_called_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_dc318f10d0c904c86dee474021b237c1, module_serial$serialwin32 );
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

        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hComPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 330;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294110 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 330;
        goto frame_exception_exit_1;
    }

    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 330;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 331;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_MS_CTS_ON );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 331;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 331;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__GetCommModemStatus );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 331;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 331;
    tmp_binop_right_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 331;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = BINARY_OPERATION( PyNumber_And, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 331;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 331;
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
static PyObject *fparse_function_16_getCTS_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "getCTS() keywords must be strings" );
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
                   "getCTS() got an unexpected keyword argument '%s'",
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


    return impl_function_16_getCTS_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_16_getCTS_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_16_getCTS_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_16_getCTS_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_17_getDSR_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_called_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_92ef1a4f3649bf5e92b2af376f25fbf3, module_serial$serialwin32 );
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

        frame_function->f_lineno = 335;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hComPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 335;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 335;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294110 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 335;
        goto frame_exception_exit_1;
    }

    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 335;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 336;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_MS_DSR_ON );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 336;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 336;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__GetCommModemStatus );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 336;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 336;
    tmp_binop_right_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 336;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = BINARY_OPERATION( PyNumber_And, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 336;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 336;
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
static PyObject *fparse_function_17_getDSR_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "getDSR() keywords must be strings" );
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
                   "getDSR() got an unexpected keyword argument '%s'",
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


    return impl_function_17_getDSR_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_17_getDSR_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_17_getDSR_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_17_getDSR_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_18_getRI_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_called_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a886e765f1d741bfad4a9e11dc759149, module_serial$serialwin32 );
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

        frame_function->f_lineno = 340;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hComPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 340;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 340;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294110 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 340;
        goto frame_exception_exit_1;
    }

    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 340;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_MS_RING_ON );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__GetCommModemStatus );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 341;
    tmp_binop_right_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = BINARY_OPERATION( PyNumber_And, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 341;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 341;
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
static PyObject *fparse_function_18_getRI_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "getRI() keywords must be strings" );
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
                   "getRI() got an unexpected keyword argument '%s'",
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


    return impl_function_18_getRI_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_18_getRI_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_18_getRI_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_18_getRI_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_19_getCD_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_called_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_981118fdc492da3f0b33b5345b869f99, module_serial$serialwin32 );
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

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hComPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 345;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294110 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 345;
        goto frame_exception_exit_1;
    }

    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 345;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_MS_RLSD_ON );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__GetCommModemStatus );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 346;
    tmp_binop_right_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = BINARY_OPERATION( PyNumber_And, tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 346;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_return_value = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
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
static PyObject *fparse_function_19_getCD_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "getCD() keywords must be strings" );
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
                   "getCD() got an unexpected keyword argument '%s'",
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


    return impl_function_19_getCD_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_19_getCD_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_19_getCD_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_19_getCD_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_20_setXON_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_level )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_level; par_level.object = _python_par_level;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b3104f32d50102bdfdf0274d7e641a68, module_serial$serialwin32 );
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

        frame_function->f_lineno = 352;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hComPort );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 352;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 352;
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
    tmp_raise_type_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_portNotOpenError );

    if (unlikely( tmp_raise_type_1 == NULL ))
    {
        tmp_raise_type_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_portNotOpenError );
    }

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294110 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 352;
        goto frame_exception_exit_1;
    }

    exception_type = INCREASE_REFCOUNT( tmp_raise_type_1 );
    frame_function->f_lineno = 352;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_cond_value_2 = par_level.object;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 94014 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 353;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 353;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_EscapeCommFunction );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_hComPort );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SETXON );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 354;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 354;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_EscapeCommFunction );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_hComPort );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_SETXOFF );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_function->f_lineno = 356;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 356;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 356;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_level.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_level,
            par_level.object
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
static PyObject *fparse_function_20_setXON_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_level = NULL;
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
                PyErr_Format( PyExc_TypeError, "setXON() keywords must be strings" );
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
            if ( found == false && const_str_plain_level == key )
            {
                assert( _python_par_level == NULL );
                _python_par_level = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_level, key ) == 1 )
            {
                assert( _python_par_level == NULL );
                _python_par_level = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "setXON() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_level != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_level = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_level == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_level = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_level == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_level };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_20_setXON_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self, _python_par_level );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_level );

    return NULL;
}

static PyObject *dparse_function_20_setXON_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_20_setXON_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_20_setXON_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_21_outWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_flags;
    PyObjectLocalVariable var_comstat;
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b3ed9a9b56c4219bc25e21a0c19458ad, module_serial$serialwin32 );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DWORD );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 360;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 360;
        goto frame_exception_exit_1;
    }
    assert( var_flags.object == NULL );
    var_flags.object = tmp_assign_source_1;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_COMSTAT );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 361;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 361;
        goto frame_exception_exit_1;
    }
    assert( var_comstat.object == NULL );
    var_comstat.object = tmp_assign_source_2;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32 );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32 );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297392 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ClearCommError );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_hComPort );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_byref );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = var_flags.object;

    frame_function->f_lineno = 362;
    tmp_call_arg_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 78629 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_byref );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = var_comstat.object;

    frame_function->f_lineno = 362;
    tmp_call_arg_element_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_2 );

        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 362;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_3, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_2 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 362;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 362;
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
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialException );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialException );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293548 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 363;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = const_str_digest_bf008619e476734658c8ccb452b5cea0;
    frame_function->f_lineno = 363;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 363;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 363;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_7 = var_comstat.object;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_cbOutQue );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 364;
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
    if ((var_flags.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_flags,
            var_flags.object
        );

    }
    if ((var_comstat.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_comstat,
            var_comstat.object
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
static PyObject *fparse_function_21_outWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "outWaiting() keywords must be strings" );
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
                   "outWaiting() got an unexpected keyword argument '%s'",
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


    return impl_function_21_outWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_21_outWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_21_outWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_21_outWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_22_setRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_rtsToggle )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_rtsToggle; par_rtsToggle.object = _python_par_rtsToggle;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_99b3696297da5d47413926c170e5fa2f, module_serial$serialwin32 );
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
    tmp_assattr_name_1 = par_rtsToggle.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297545 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 369;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__rtsToggle, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 369;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 370;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__isOpen );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 370;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 370;
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

        frame_function->f_lineno = 370;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__reconfigurePort );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 370;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 370;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 370;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;

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
    if ((par_rtsToggle.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_rtsToggle,
            par_rtsToggle.object
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
static PyObject *fparse_function_22_setRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_rtsToggle = NULL;
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
                PyErr_Format( PyExc_TypeError, "setRtsToggle() keywords must be strings" );
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
            if ( found == false && const_str_plain_rtsToggle == key )
            {
                assert( _python_par_rtsToggle == NULL );
                _python_par_rtsToggle = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_rtsToggle, key ) == 1 )
            {
                assert( _python_par_rtsToggle == NULL );
                _python_par_rtsToggle = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "setRtsToggle() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_rtsToggle != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_rtsToggle = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_rtsToggle == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_rtsToggle = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_self == NULL || _python_par_rtsToggle == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_rtsToggle };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_22_setRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self, _python_par_rtsToggle );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_rtsToggle );

    return NULL;
}

static PyObject *dparse_function_22_setRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_22_setRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_22_setRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_23_getRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject *_python_par_self )
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1baa4a3c2647338d4ed258f573ee89da, module_serial$serialwin32 );
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

        frame_function->f_lineno = 374;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__rtsToggle );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 374;
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
static PyObject *fparse_function_23_getRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "getRtsToggle() keywords must be strings" );
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
                   "getRtsToggle() got an unexpected keyword argument '%s'",
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


    return impl_function_23_getRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_23_getRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_23_getRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_23_getRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_Serial_of_module_serial$serialwin32(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_93ce6cfe16d4162110e1228eff37f85f;
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


NUITKA_LOCAL_MODULE PyObject *impl_class_4_Serial_of_module_serial$serialwin32(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_93ce6cfe16d4162110e1228eff37f85f;
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



static PyObject *MAKE_FUNCTION_function_10_flushOutput_of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_flushOutput_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_10_flushOutput_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_flushOutput,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_610f79d63f21093b2ae0e8c11c6bea4e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_562b9916e2496f65c6f5ad2c39397082
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_sendBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_sendBreak_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_11_sendBreak_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_sendBreak,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_22e472d51805b2d9b69912d0db1b627d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_8dcbd0ef4c198dec6777328f172b27cf
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_setBreak_of_class_2_Win32Serial_of_module_serial$serialwin32( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_setBreak_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_12_setBreak_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_setBreak,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3349c30d5d9084afb29873323276600a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_cd1132fbda732995410714a97f17b18a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_setRTS_of_class_2_Win32Serial_of_module_serial$serialwin32( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_setRTS_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_13_setRTS_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_setRTS,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_04b2fcbd7a6e08ef4b9bab01ef26976e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_5cc5c88cea0684ad0c20e4946cd8d5a6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_setDTR_of_class_2_Win32Serial_of_module_serial$serialwin32( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_setDTR_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_14_setDTR_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_setDTR,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f8b58a78c8d046aff9c7128c59fe206e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_781070e6f3ee51f7ae159c538a586b35
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15__GetCommModemStatus_of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15__GetCommModemStatus_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_15__GetCommModemStatus_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain__GetCommModemStatus,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0192630dc60854e97adf5e7bd4513605,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_getCTS_of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_getCTS_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_16_getCTS_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_getCTS,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dc318f10d0c904c86dee474021b237c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_12424fe61ccffb566ffb154dd4787d55
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_getDSR_of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17_getDSR_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_17_getDSR_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_getDSR,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_92ef1a4f3649bf5e92b2af376f25fbf3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_2ba30bf4706b437c9d41b40018031665
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_18_getRI_of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_18_getRI_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_18_getRI_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_getRI,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a886e765f1d741bfad4a9e11dc759149,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_49da4c6860f40fd891c2963b9821e229
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_19_getCD_of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_19_getCD_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_19_getCD_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_getCD,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_981118fdc492da3f0b33b5345b869f99,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_af3c9c94a9a1b17be3d36dd9e81e913d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_1___init___of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_175890d9286d869460bde1eb91ab75b1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_device_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_device_of_module_serial$serialwin32,
        dparse_function_1_device_of_module_serial$serialwin32,
        const_str_plain_device,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d77e6c6c1682a706787e7d8b58be2570,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_d01ad20d78115e98cae65267ee91b47b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_20_setXON_of_class_2_Win32Serial_of_module_serial$serialwin32( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_20_setXON_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_20_setXON_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_setXON,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b3104f32d50102bdfdf0274d7e641a68,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_67702a7325e5053cf169923a3aa0ccc0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_21_outWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_21_outWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_21_outWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_outWaiting,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_07aff1a9131fdb37de82fd36ab76fbcf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_8a6bdff82cb0ee4ef64aa22fb950e2af
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_22_setRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_22_setRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_22_setRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_setRtsToggle,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_99b3696297da5d47413926c170e5fa2f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_9cfa39ce6b23e97166ba2fcf7332c782
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_23_getRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_23_getRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_23_getRtsToggle_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_getRtsToggle,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1baa4a3c2647338d4ed258f573ee89da,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_6949f64b1d8d531ba934716a6f637c2c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_open_of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_open_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_2_open_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_open,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0a432e85766e0b55fc8ae63f1efa9c54,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_65d49447792356cfa05d29d5819bbeb8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__reconfigurePort_of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__reconfigurePort_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_3__reconfigurePort_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain__reconfigurePort,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1e3b4ab3bf4c8a1d258ba16b8436e1a8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_3edb300aadd90a53307d94e7aa43dbd6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_close_of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_close_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_4_close_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f354aa69f6d0e36ce44ef93ca0ffd360,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_928adb730a065474c803f13158de09f8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_makeDeviceName_of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_makeDeviceName_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_5_makeDeviceName_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_makeDeviceName,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0c17c978784c91d6cb01d142163e8596,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_inWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_inWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_6_inWaiting_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_inWaiting,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bcc9cf5c3a0e1e9a2f6cf245a8857c27,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_cb7be6e57c45482bff454b3e85065525
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_read_of_class_2_Win32Serial_of_module_serial$serialwin32( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_read_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_7_read_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_read,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a16a910df8f3b5b14826b3f7d4cfa70d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_4c5851b83620673fed2a793f7b115bc8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_write_of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_write_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_8_write_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_write,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4743a604e8baa703342f7e1720860a0a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_ffaa881711284f0a754055b21cf825c5
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_flushInput_of_class_2_Win32Serial_of_module_serial$serialwin32(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_flushInput_of_class_2_Win32Serial_of_module_serial$serialwin32,
        dparse_function_9_flushInput_of_class_2_Win32Serial_of_module_serial$serialwin32,
        const_str_plain_flushInput,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8c1269e0f7475cf6be1c07972b3d806b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$serialwin32,
        const_str_digest_598cfcbd275a4d09ed6b77004ad38ee8
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial$serialwin32 =
{
    PyModuleDef_HEAD_INIT,
    "serial.serialwin32",   /* m_name */
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

MOD_INIT_DECL( serial$serialwin32 )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial$serialwin32 );
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

    // puts( "in initserial$serialwin32" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial$serialwin32 = Py_InitModule4(
        "serial.serialwin32",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_serial$serialwin32 = PyModule_Create( &mdef_serial$serialwin32 );
#endif

    moduledict_serial$serialwin32 = (PyDictObject *)((PyModuleObject *)module_serial$serialwin32)->md_dict;

    assertObject( module_serial$serialwin32 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_93ce6cfe16d4162110e1228eff37f85f, module_serial$serialwin32 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_serial$serialwin32 );

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
    PyObjectTempVariable tmp_try_except_1__unhandled_indicator;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_arg_element_8;
    PyObject *tmp_call_arg_element_9;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_class_bases_1;
    PyObject *tmp_class_bases_2;
    PyObject *tmp_class_bases_3;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
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
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_dict_2;
    PyObject *tmp_dget_dict_3;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_dget_key_2;
    PyObject *tmp_dget_key_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_name_from_1;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_star_imported_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e07541812a32910e24f0f8a100a349e3;
    UPDATE_STRING_DICT0( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_a53727488bfaa97f87a87f09f74e6379, module_serial$serialwin32 );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_serial$serialwin32)->md_dict;
    frame_module->f_lineno = 11;
    tmp_assign_source_3 = IMPORT_MODULE( const_str_plain_ctypes, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_ctypes, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_serial$serialwin32)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_serial, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_win32_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_win32 );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_win32, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_serial$serialwin32)->md_dict;
    frame_module->f_lineno = 14;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_digest_690b251c3b5c99f5b47a4befeef2b5b0, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_serial$serialwin32, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_1 );
    tmp_assign_source_5 = MAKE_FUNCTION_function_1_device_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_device, tmp_assign_source_5 );
    // Tried code
    tmp_assign_source_6 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_SerialBase );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SerialBase );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293334 ], 32, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 22;
        goto try_finally_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_6, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_6;

    tmp_assign_source_7 = impl_class_2_Win32Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_7;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
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
    tmp_assign_source_8 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_8 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_8;

    tmp_called_1 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_1 = const_str_plain_Win32Serial;
    tmp_call_arg_element_2 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_3 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 22;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 22;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_9;

    tmp_assign_source_10 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_Win32Serial, tmp_assign_source_10 );
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
    tmp_assign_source_11 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator.object == NULL );
    tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_11 );

    // Tried code
    // Tried block of try/except
    tmp_import_globals_4 = ((PyModuleObject *)module_serial$serialwin32)->md_dict;
    frame_module->f_lineno = 383;
    tmp_assign_source_12 = IMPORT_MODULE( const_str_plain_io, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 383;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_io, tmp_assign_source_12 );
    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    tmp_assign_source_13 = Py_False;
    if (tmp_try_except_1__unhandled_indicator.object == NULL)
    {
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
    }
    else
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator.object;
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_13 );
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
    tmp_compare_right_2 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 384;
        goto try_finally_handler_2;
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
    // Tried code
    tmp_assign_source_14 = PyTuple_New( 2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_Win32Serial );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Win32Serial );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297320 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 386;
        goto try_finally_handler_3;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_14, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_FileLike );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FileLike );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 293398 ], 30, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 386;
        goto try_finally_handler_3;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_14, 1, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases.object == NULL );
    tmp_class_creation_2__bases.object = tmp_assign_source_14;

    tmp_assign_source_15 = impl_class_3_Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 386;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_2__class_dict.object == NULL );
    tmp_class_creation_2__class_dict.object = tmp_assign_source_15;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_2__class_dict.object;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 386;
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
    tmp_assign_source_16 = DICT_GET_ITEM( tmp_dget_dict_2, tmp_dget_key_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 386;
        goto try_finally_handler_3;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_bases_2 = tmp_class_creation_2__bases.object;

    tmp_assign_source_16 = SELECT_METACLASS( tmp_class_bases_2, GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass.object == NULL );
    tmp_class_creation_2__metaclass.object = tmp_assign_source_16;

    tmp_called_2 = tmp_class_creation_2__metaclass.object;

    tmp_call_arg_element_4 = const_str_plain_Serial;
    tmp_call_arg_element_5 = tmp_class_creation_2__bases.object;

    tmp_call_arg_element_6 = tmp_class_creation_2__class_dict.object;

    frame_module->f_lineno = 386;
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 386;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_2__class.object == NULL );
    tmp_class_creation_2__class.object = tmp_assign_source_17;

    tmp_assign_source_18 = tmp_class_creation_2__class.object;

    UPDATE_STRING_DICT0( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_Serial, tmp_assign_source_18 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_3:;
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

        goto try_finally_handler_2;
    }

    goto finally_end_2;
    finally_end_2:;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_2;
    branch_end_1:;
    try_except_end_1:;
    tmp_compare_left_4 = tmp_try_except_1__unhandled_indicator.object;

    tmp_compare_right_4 = Py_True;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if (tmp_is_1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    // Tried code
    tmp_assign_source_19 = PyTuple_New( 2 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_Win32Serial );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Win32Serial );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297320 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 390;
        goto try_finally_handler_4;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_19, 0, tmp_tuple_element_3 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_io );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 12666 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 390;
        goto try_finally_handler_4;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_RawIOBase );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_19 );

        frame_module->f_lineno = 390;
        goto try_finally_handler_4;
    }
    PyTuple_SET_ITEM( tmp_assign_source_19, 1, tmp_tuple_element_3 );
    assert( tmp_class_creation_3__bases.object == NULL );
    tmp_class_creation_3__bases.object = tmp_assign_source_19;

    tmp_assign_source_20 = impl_class_4_Serial_of_module_serial$serialwin32(  );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 390;
        goto try_finally_handler_4;
    }
    assert( tmp_class_creation_3__class_dict.object == NULL );
    tmp_class_creation_3__class_dict.object = tmp_assign_source_20;

    tmp_compare_left_5 = const_str_plain___metaclass__;
    tmp_compare_right_5 = tmp_class_creation_3__class_dict.object;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 390;
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
    tmp_assign_source_21 = DICT_GET_ITEM( tmp_dget_dict_3, tmp_dget_key_3 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 390;
        goto try_finally_handler_4;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_class_bases_3 = tmp_class_creation_3__bases.object;

    tmp_assign_source_21 = SELECT_METACLASS( tmp_class_bases_3, GET_STRING_DICT_VALUE( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass.object == NULL );
    tmp_class_creation_3__metaclass.object = tmp_assign_source_21;

    tmp_called_3 = tmp_class_creation_3__metaclass.object;

    tmp_call_arg_element_7 = const_str_plain_Serial;
    tmp_call_arg_element_8 = tmp_class_creation_3__bases.object;

    tmp_call_arg_element_9 = tmp_class_creation_3__class_dict.object;

    frame_module->f_lineno = 390;
    tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS3( tmp_called_3, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 390;
        goto try_finally_handler_4;
    }
    assert( tmp_class_creation_3__class.object == NULL );
    tmp_class_creation_3__class.object = tmp_assign_source_22;

    tmp_assign_source_23 = tmp_class_creation_3__class.object;

    UPDATE_STRING_DICT0( moduledict_serial$serialwin32, (Nuitka_StringObject *)const_str_plain_Serial, tmp_assign_source_23 );
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

        goto try_finally_handler_2;
    }

    goto finally_end_3;
    finally_end_3:;
    branch_no_2:;
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

    tmp_tried_lineno_4 = frame_module->f_lineno;
    tmp_result = tmp_try_except_1__unhandled_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_try_except_1__unhandled_indicator.object );
        tmp_try_except_1__unhandled_indicator.object = NULL;
    }

    assert( tmp_result != false );
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

    return MOD_RETURN_VALUE( module_serial$serialwin32 );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
