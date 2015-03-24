// Generated code for Python source for module 'serial.tools.list_ports_posix'
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

// The _module_serial$tools$list_ports_posix is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_serial$tools$list_ports_posix;
PyDictObject *moduledict_serial$tools$list_ports_posix;

// The module constants used
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
extern PyObject *const_str_space;
extern PyObject *const_dict_empty;
extern PyObject *const_str_chr_45;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_m;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_hp;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_re;
static PyObject *const_str_plain_si;
static PyObject *const_str_plain_so;
extern PyObject *const_str_plain_aix;
extern PyObject *const_str_plain_bsd;
static PyObject *const_str_plain_bus;
extern PyObject *const_str_plain_dev;
static PyObject *const_str_plain_snr;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_argv;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain_desc;
extern PyObject *const_str_plain_glob;
extern PyObject *const_str_plain_irix;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_line;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_plat;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_text;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_group;
extern PyObject *const_str_plain_linux;
extern PyObject *const_str_plain_lower;
static PyObject *const_str_plain_lsusb;
static PyObject *const_str_plain_popen;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_sunos;
extern PyObject *const_str_plain_write;
static PyObject *const_str_plain_STDOUT;
extern PyObject *const_str_plain_cygwin;
extern PyObject *const_str_plain_darwin;
extern PyObject *const_str_plain_device;
extern PyObject *const_str_plain_exists;
static PyObject *const_str_plain_hwinfo;
extern PyObject *const_str_plain_netbsd;
static PyObject *const_str_plain_popen4;
extern PyObject *const_str_plain_regexp;
extern PyObject *const_str_plain_search;
extern PyObject *const_str_plain_serial;
extern PyObject *const_str_plain_stderr;
static PyObject *const_str_plain_ttyACM;
extern PyObject *const_str_plain_VERSION;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_devices;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain_freebsd;
static PyObject *const_str_plain_iSerial;
extern PyObject *const_str_plain_openbsd;
static PyObject *const_str_plain_snr_txt;
static PyObject *const_str_plain_sys_usb;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_basename;
extern PyObject *const_str_plain_comports;
static PyObject *const_str_plain_describe;
extern PyObject *const_str_plain_filename;
static PyObject *const_str_plain_iProduct;
static PyObject *const_str_plain_idVendor;
extern PyObject *const_str_plain_openbsd3;
extern PyObject *const_str_plain_platform;
static PyObject *const_str_plain_re_group;
extern PyObject *const_str_plain_readline;
extern PyObject *const_str_plain_realpath;
static PyObject *const_str_plain_idProduct;
static PyObject *const_str_plain_read_line;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_subprocess;
static PyObject *const_str_plain_sysfs_path;
static PyObject *const_str_plain_sys_id_path;
extern PyObject *const_str_plain_check_output;
static PyObject *const_str_plain_sys_dev_path;
static PyObject *const_str_plain_iManufacturer;
static PyObject *const_str_plain_list_ports_posix;
static PyObject *const_str_plain_usb_lsusb_string;
extern PyObject *const_tuple_str_plain_argv_tuple;
static PyObject *const_tuple_str_plain_device_tuple;
static PyObject *const_str_plain_usb_sysfs_hw_string;
extern PyObject *const_tuple_str_plain_filename_tuple;
static PyObject *const_tuple_str_plain_sysfs_path_tuple;
static PyObject *const_tuple_str_plain_devices_str_plain_d_tuple;
static PyObject *const_str_digest_07db3988f84635096bb360424717d25b;
static PyObject *const_str_digest_0855177692aa1e165f9f99da068705f2;
static PyObject *const_str_digest_0c18980f6670be24f0ab3ad5d1e8066a;
static PyObject *const_str_digest_0cbbeec9fe941bf7500bb07c7f0dfb1d;
static PyObject *const_str_digest_1135b0e16b63ef77af80649551a04bfb;
static PyObject *const_str_digest_121fa5f8bb18ea2ccea35015dcf7af1d;
static PyObject *const_str_digest_13fa4ff38a89d057941ce2d41ca70c0b;
static PyObject *const_str_digest_2018320101d4195e3065cc7d9b086938;
static PyObject *const_str_digest_22bcbc7fcd6894e1e0ef46a5a66c4eb6;
static PyObject *const_str_digest_274b68192b056e268f128ff63bfcd4a4;
static PyObject *const_str_digest_285d9ea4b60b6c372ee0e02aba839d69;
static PyObject *const_str_digest_2d8bc5c7d4378a343fe521011ecc28b1;
static PyObject *const_str_digest_2f7bbaab59b56042d6304e102c3a9292;
static PyObject *const_str_digest_3b2331c9bb0e209669885040c873c011;
static PyObject *const_str_digest_3b39a9c571b4058d0dc9f0ff2bf72f24;
static PyObject *const_str_digest_3da33b87e219e6636c62fc3811d81681;
extern PyObject *const_str_digest_406381251d2d4637ebfac7f24cc49c6f;
extern PyObject *const_str_digest_47fa03ef5536c5573b137cec5adc2d39;
extern PyObject *const_str_digest_530ccab821bb1f0f9080f24abeeee028;
static PyObject *const_str_digest_5d52561e767cf924c37e9734e31689a9;
static PyObject *const_str_digest_5e7cb0794f8208bd0a50fdae41ba8eed;
static PyObject *const_str_digest_6118a4aba35de126b33269bf0105f494;
static PyObject *const_str_digest_6484455bc9291033dc410ed871f8000b;
static PyObject *const_str_digest_7df1b8b38da0f76482e64ef2717aacdd;
static PyObject *const_str_digest_8581765044f705db207672d75792aab9;
static PyObject *const_str_digest_865473f8d387905b691d279b4d029ea9;
static PyObject *const_str_digest_909ba5838227c5c604999c5ccca231d7;
static PyObject *const_str_digest_94c556070c13cdcbe63e60adc05d473a;
static PyObject *const_str_digest_96ee50bbc972ea6e48ffeaff8d77e40b;
static PyObject *const_str_digest_9a3cc80d0c0ee021ef381e84356ceea6;
extern PyObject *const_str_digest_9baf1aa941aff86d6ae068e24720a889;
static PyObject *const_str_digest_a17a53bd203b5c4cf836825aa02bfdc3;
static PyObject *const_str_digest_a7cf5a9555cfdf4d84b065eafc493984;
static PyObject *const_str_digest_a9d289ab39a24c582e8287da1c0a4ccc;
static PyObject *const_str_digest_aa430993508f55bbdc3086f826788d92;
static PyObject *const_str_digest_b157980f86d1f28bc14347f23d518093;
static PyObject *const_str_digest_b4f54f793a0fbe6c2ed42eaddf5902d6;
static PyObject *const_str_digest_bfd58db2ae190b4162fbc0303e783867;
static PyObject *const_str_digest_ccba7fdc2421edc86fd9cef975878b80;
static PyObject *const_str_digest_e0ef292810f6421c2ac79497902c20ff;
static PyObject *const_str_digest_ec7442fe88c318f199986664543774a6;
static PyObject *const_str_digest_f8beb8172b71d00f65a7c5ff1b52d31a;
extern PyObject *const_str_digest_ff216eaf21244ea79ffa794370aa703e;
static PyObject *const_tuple_str_plain_regexp_str_plain_text_tuple;
static PyObject *const_tuple_16181cb43337e03ec054ef017b752cb3_tuple;
static PyObject *const_tuple_84bf03c2e9309c6e61db429945e51a8b_tuple;
static PyObject *const_tuple_9b2f56342a155e8f5fdee08864717908_tuple;
static PyObject *const_tuple_9fddd5004b8a739dd516ae31dc137bd9_tuple;
static PyObject *const_tuple_str_plain_argv_str_plain_si_str_plain_so_tuple;
static PyObject *const_tuple_str_plain_regexp_str_plain_text_str_plain_m_tuple;
static PyObject *const_tuple_str_plain_filename_str_plain_f_str_plain_line_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_si = UNSTREAM_STRING( &constant_bin[ 42 ], 2, 1 );
    const_str_plain_so = UNSTREAM_STRING( &constant_bin[ 160 ], 2, 1 );
    const_str_plain_bus = UNSTREAM_STRING( &constant_bin[ 297962 ], 3, 1 );
    const_str_plain_snr = UNSTREAM_STRING( &constant_bin[ 981526 ], 3, 1 );
    const_str_plain_lsusb = UNSTREAM_STRING( &constant_bin[ 298352 ], 5, 1 );
    const_str_plain_popen = UNSTREAM_STRING( &constant_bin[ 297925 ], 5, 1 );
    const_str_plain_STDOUT = UNSTREAM_STRING( &constant_bin[ 2539473 ], 6, 1 );
    const_str_plain_hwinfo = UNSTREAM_STRING( &constant_bin[ 298478 ], 6, 1 );
    const_str_plain_popen4 = UNSTREAM_STRING( &constant_bin[ 2539479 ], 6, 1 );
    const_str_plain_ttyACM = UNSTREAM_STRING( &constant_bin[ 2539485 ], 6, 1 );
    const_str_plain_iSerial = UNSTREAM_STRING( &constant_bin[ 298265 ], 7, 1 );
    const_str_plain_snr_txt = UNSTREAM_STRING( &constant_bin[ 2539491 ], 7, 1 );
    const_str_plain_sys_usb = UNSTREAM_STRING( &constant_bin[ 2539498 ], 7, 1 );
    const_str_plain_describe = UNSTREAM_STRING( &constant_bin[ 298441 ], 8, 1 );
    const_str_plain_iProduct = UNSTREAM_STRING( &constant_bin[ 298156 ], 8, 1 );
    const_str_plain_idVendor = UNSTREAM_STRING( &constant_bin[ 2539505 ], 8, 1 );
    const_str_plain_re_group = UNSTREAM_STRING( &constant_bin[ 298057 ], 8, 1 );
    const_str_plain_idProduct = UNSTREAM_STRING( &constant_bin[ 298210 ], 9, 1 );
    const_str_plain_read_line = UNSTREAM_STRING( &constant_bin[ 297887 ], 9, 1 );
    const_str_plain_sysfs_path = UNSTREAM_STRING( &constant_bin[ 297834 ], 10, 1 );
    const_str_plain_sys_id_path = UNSTREAM_STRING( &constant_bin[ 2539513 ], 11, 1 );
    const_str_plain_sys_dev_path = UNSTREAM_STRING( &constant_bin[ 2539524 ], 12, 1 );
    const_str_plain_iManufacturer = UNSTREAM_STRING( &constant_bin[ 298097 ], 13, 1 );
    const_str_plain_list_ports_posix = UNSTREAM_STRING( &constant_bin[ 2539536 ], 16, 1 );
    const_str_plain_usb_lsusb_string = UNSTREAM_STRING( &constant_bin[ 298348 ], 16, 1 );
    const_tuple_str_plain_device_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_device_tuple, 0, const_str_plain_device ); Py_INCREF( const_str_plain_device );
    const_str_plain_usb_sysfs_hw_string = UNSTREAM_STRING( &constant_bin[ 298393 ], 19, 1 );
    const_tuple_str_plain_sysfs_path_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sysfs_path_tuple, 0, const_str_plain_sysfs_path ); Py_INCREF( const_str_plain_sysfs_path );
    const_tuple_str_plain_devices_str_plain_d_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_devices_str_plain_d_tuple, 0, const_str_plain_devices ); Py_INCREF( const_str_plain_devices );
    PyTuple_SET_ITEM( const_tuple_str_plain_devices_str_plain_d_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_str_digest_07db3988f84635096bb360424717d25b = UNSTREAM_STRING( &constant_bin[ 2539552 ], 10, 0 );
    const_str_digest_0855177692aa1e165f9f99da068705f2 = UNSTREAM_STRING( &constant_bin[ 2529962 ], 7, 0 );
    const_str_digest_0c18980f6670be24f0ab3ad5d1e8066a = UNSTREAM_STRING( &constant_bin[ 2539562 ], 11, 0 );
    const_str_digest_0cbbeec9fe941bf7500bb07c7f0dfb1d = UNSTREAM_STRING( &constant_bin[ 2539573 ], 42, 0 );
    const_str_digest_1135b0e16b63ef77af80649551a04bfb = UNSTREAM_STRING( &constant_bin[ 2539615 ], 12, 0 );
    const_str_digest_121fa5f8bb18ea2ccea35015dcf7af1d = UNSTREAM_STRING( &constant_bin[ 2539627 ], 10, 0 );
    const_str_digest_13fa4ff38a89d057941ce2d41ca70c0b = UNSTREAM_STRING( &constant_bin[ 2539637 ], 10, 0 );
    const_str_digest_2018320101d4195e3065cc7d9b086938 = UNSTREAM_STRING( &constant_bin[ 2539647 ], 10, 0 );
    const_str_digest_22bcbc7fcd6894e1e0ef46a5a66c4eb6 = UNSTREAM_STRING( &constant_bin[ 2539657 ], 7, 0 );
    const_str_digest_274b68192b056e268f128ff63bfcd4a4 = UNSTREAM_STRING( &constant_bin[ 954326 ], 3, 0 );
    const_str_digest_285d9ea4b60b6c372ee0e02aba839d69 = UNSTREAM_STRING( &constant_bin[ 2539664 ], 9, 0 );
    const_str_digest_2d8bc5c7d4378a343fe521011ecc28b1 = UNSTREAM_STRING( &constant_bin[ 2539673 ], 68, 0 );
    const_str_digest_2f7bbaab59b56042d6304e102c3a9292 = UNSTREAM_STRING( &constant_bin[ 2539741 ], 19, 0 );
    const_str_digest_3b2331c9bb0e209669885040c873c011 = UNSTREAM_STRING( &constant_bin[ 989857 ], 8, 0 );
    const_str_digest_3b39a9c571b4058d0dc9f0ff2bf72f24 = UNSTREAM_STRING( &constant_bin[ 2539760 ], 10, 0 );
    const_str_digest_3da33b87e219e6636c62fc3811d81681 = UNSTREAM_STRING( &constant_bin[ 2539770 ], 65, 0 );
    const_str_digest_5d52561e767cf924c37e9734e31689a9 = UNSTREAM_STRING( &constant_bin[ 2539835 ], 61, 0 );
    const_str_digest_5e7cb0794f8208bd0a50fdae41ba8eed = UNSTREAM_STRING( &constant_bin[ 2539896 ], 52, 0 );
    const_str_digest_6118a4aba35de126b33269bf0105f494 = UNSTREAM_STRING( &constant_bin[ 2539948 ], 304, 0 );
    const_str_digest_6484455bc9291033dc410ed871f8000b = UNSTREAM_STRING( &constant_bin[ 2540252 ], 10, 0 );
    const_str_digest_7df1b8b38da0f76482e64ef2717aacdd = UNSTREAM_STRING( &constant_bin[ 2540262 ], 34, 0 );
    const_str_digest_8581765044f705db207672d75792aab9 = UNSTREAM_STRING( &constant_bin[ 2540262 ], 24, 0 );
    const_str_digest_865473f8d387905b691d279b4d029ea9 = UNSTREAM_STRING( &constant_bin[ 1084362 ], 3, 0 );
    const_str_digest_909ba5838227c5c604999c5ccca231d7 = UNSTREAM_STRING( &constant_bin[ 2540296 ], 19, 0 );
    const_str_digest_94c556070c13cdcbe63e60adc05d473a = UNSTREAM_STRING( &constant_bin[ 2540315 ], 21, 0 );
    const_str_digest_96ee50bbc972ea6e48ffeaff8d77e40b = UNSTREAM_STRING( &constant_bin[ 2540336 ], 24, 0 );
    const_str_digest_9a3cc80d0c0ee021ef381e84356ceea6 = UNSTREAM_STRING( &constant_bin[ 2540360 ], 12, 0 );
    const_str_digest_a17a53bd203b5c4cf836825aa02bfdc3 = UNSTREAM_STRING( &constant_bin[ 2540372 ], 22, 0 );
    const_str_digest_a7cf5a9555cfdf4d84b065eafc493984 = UNSTREAM_STRING( &constant_bin[ 2540394 ], 196, 0 );
    const_str_digest_a9d289ab39a24c582e8287da1c0a4ccc = UNSTREAM_STRING( &constant_bin[ 2540590 ], 34, 0 );
    const_str_digest_aa430993508f55bbdc3086f826788d92 = UNSTREAM_STRING( &constant_bin[ 2540624 ], 9, 0 );
    const_str_digest_b157980f86d1f28bc14347f23d518093 = UNSTREAM_STRING( &constant_bin[ 2540633 ], 10, 0 );
    const_str_digest_b4f54f793a0fbe6c2ed42eaddf5902d6 = UNSTREAM_STRING( &constant_bin[ 2540643 ], 56, 0 );
    const_str_digest_bfd58db2ae190b4162fbc0303e783867 = UNSTREAM_STRING( &constant_bin[ 2539562 ], 9, 0 );
    const_str_digest_ccba7fdc2421edc86fd9cef975878b80 = UNSTREAM_STRING( &constant_bin[ 2540699 ], 12, 0 );
    const_str_digest_e0ef292810f6421c2ac79497902c20ff = UNSTREAM_STRING( &constant_bin[ 2540711 ], 9, 0 );
    const_str_digest_ec7442fe88c318f199986664543774a6 = UNSTREAM_STRING( &constant_bin[ 2540720 ], 27, 0 );
    const_str_digest_f8beb8172b71d00f65a7c5ff1b52d31a = UNSTREAM_STRING( &constant_bin[ 2540747 ], 18, 0 );
    const_tuple_str_plain_regexp_str_plain_text_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_regexp_str_plain_text_tuple, 0, const_str_plain_regexp ); Py_INCREF( const_str_plain_regexp );
    PyTuple_SET_ITEM( const_tuple_str_plain_regexp_str_plain_text_tuple, 1, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    const_tuple_16181cb43337e03ec054ef017b752cb3_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_16181cb43337e03ec054ef017b752cb3_tuple, 0, const_str_plain_device ); Py_INCREF( const_str_plain_device );
    PyTuple_SET_ITEM( const_tuple_16181cb43337e03ec054ef017b752cb3_tuple, 1, const_str_plain_base ); Py_INCREF( const_str_plain_base );
    PyTuple_SET_ITEM( const_tuple_16181cb43337e03ec054ef017b752cb3_tuple, 2, const_str_plain_sys_id_path ); Py_INCREF( const_str_plain_sys_id_path );
    PyTuple_SET_ITEM( const_tuple_16181cb43337e03ec054ef017b752cb3_tuple, 3, const_str_plain_sys_dev_path ); Py_INCREF( const_str_plain_sys_dev_path );
    PyTuple_SET_ITEM( const_tuple_16181cb43337e03ec054ef017b752cb3_tuple, 4, const_str_plain_sys_usb ); Py_INCREF( const_str_plain_sys_usb );
    const_tuple_84bf03c2e9309c6e61db429945e51a8b_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_84bf03c2e9309c6e61db429945e51a8b_tuple, 0, const_str_plain_device ); Py_INCREF( const_str_plain_device );
    PyTuple_SET_ITEM( const_tuple_84bf03c2e9309c6e61db429945e51a8b_tuple, 1, const_str_plain_base ); Py_INCREF( const_str_plain_base );
    PyTuple_SET_ITEM( const_tuple_84bf03c2e9309c6e61db429945e51a8b_tuple, 2, const_str_plain_sys_dev_path ); Py_INCREF( const_str_plain_sys_dev_path );
    PyTuple_SET_ITEM( const_tuple_84bf03c2e9309c6e61db429945e51a8b_tuple, 3, const_str_plain_sys_usb ); Py_INCREF( const_str_plain_sys_usb );
    const_tuple_9b2f56342a155e8f5fdee08864717908_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_9b2f56342a155e8f5fdee08864717908_tuple, 0, const_str_plain_sysfs_path ); Py_INCREF( const_str_plain_sysfs_path );
    PyTuple_SET_ITEM( const_tuple_9b2f56342a155e8f5fdee08864717908_tuple, 1, const_str_plain_bus ); Py_INCREF( const_str_plain_bus );
    PyTuple_SET_ITEM( const_tuple_9b2f56342a155e8f5fdee08864717908_tuple, 2, const_str_plain_dev ); Py_INCREF( const_str_plain_dev );
    PyTuple_SET_ITEM( const_tuple_9b2f56342a155e8f5fdee08864717908_tuple, 3, const_str_plain_snr ); Py_INCREF( const_str_plain_snr );
    PyTuple_SET_ITEM( const_tuple_9b2f56342a155e8f5fdee08864717908_tuple, 4, const_str_plain_snr_txt ); Py_INCREF( const_str_plain_snr_txt );
    const_tuple_9fddd5004b8a739dd516ae31dc137bd9_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_9fddd5004b8a739dd516ae31dc137bd9_tuple, 0, const_str_plain_sysfs_path ); Py_INCREF( const_str_plain_sysfs_path );
    PyTuple_SET_ITEM( const_tuple_9fddd5004b8a739dd516ae31dc137bd9_tuple, 1, const_str_plain_bus ); Py_INCREF( const_str_plain_bus );
    PyTuple_SET_ITEM( const_tuple_9fddd5004b8a739dd516ae31dc137bd9_tuple, 2, const_str_plain_dev ); Py_INCREF( const_str_plain_dev );
    PyTuple_SET_ITEM( const_tuple_9fddd5004b8a739dd516ae31dc137bd9_tuple, 3, const_str_plain_desc ); Py_INCREF( const_str_plain_desc );
    PyTuple_SET_ITEM( const_tuple_9fddd5004b8a739dd516ae31dc137bd9_tuple, 4, const_str_plain_iManufacturer ); Py_INCREF( const_str_plain_iManufacturer );
    PyTuple_SET_ITEM( const_tuple_9fddd5004b8a739dd516ae31dc137bd9_tuple, 5, const_str_plain_iProduct ); Py_INCREF( const_str_plain_iProduct );
    PyTuple_SET_ITEM( const_tuple_9fddd5004b8a739dd516ae31dc137bd9_tuple, 6, const_str_plain_iSerial ); Py_INCREF( const_str_plain_iSerial );
    PyTuple_SET_ITEM( const_tuple_9fddd5004b8a739dd516ae31dc137bd9_tuple, 7, const_str_plain_idVendor ); Py_INCREF( const_str_plain_idVendor );
    PyTuple_SET_ITEM( const_tuple_9fddd5004b8a739dd516ae31dc137bd9_tuple, 8, const_str_plain_idProduct ); Py_INCREF( const_str_plain_idProduct );
    const_tuple_str_plain_argv_str_plain_si_str_plain_so_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_argv_str_plain_si_str_plain_so_tuple, 0, const_str_plain_argv ); Py_INCREF( const_str_plain_argv );
    PyTuple_SET_ITEM( const_tuple_str_plain_argv_str_plain_si_str_plain_so_tuple, 1, const_str_plain_si ); Py_INCREF( const_str_plain_si );
    PyTuple_SET_ITEM( const_tuple_str_plain_argv_str_plain_si_str_plain_so_tuple, 2, const_str_plain_so ); Py_INCREF( const_str_plain_so );
    const_tuple_str_plain_regexp_str_plain_text_str_plain_m_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_regexp_str_plain_text_str_plain_m_tuple, 0, const_str_plain_regexp ); Py_INCREF( const_str_plain_regexp );
    PyTuple_SET_ITEM( const_tuple_str_plain_regexp_str_plain_text_str_plain_m_tuple, 1, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    PyTuple_SET_ITEM( const_tuple_str_plain_regexp_str_plain_text_str_plain_m_tuple, 2, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_tuple_str_plain_filename_str_plain_f_str_plain_line_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_filename_str_plain_f_str_plain_line_tuple, 0, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_str_plain_filename_str_plain_f_str_plain_line_tuple, 1, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_str_plain_filename_str_plain_f_str_plain_line_tuple, 2, const_str_plain_line ); Py_INCREF( const_str_plain_line );
}

// The module code objects.
static PyCodeObject *codeobj_e5d6db51556e9b5f333d326e0c36bb14;
static PyCodeObject *codeobj_6d1f496bdecf1be497cf3d4cebdf9053;
static PyCodeObject *codeobj_fd5f2ff2a3b3a26ba34d6172a98ea242;
static PyCodeObject *codeobj_db78a2b87b91c20015a8f066ed1bdc10;
static PyCodeObject *codeobj_9455407305625c848bb6da330bde3641;
static PyCodeObject *codeobj_aceda42b2713a7289a43c0b0d938470c;
static PyCodeObject *codeobj_9cfc1791a8da4c509c006aceb0833e17;
static PyCodeObject *codeobj_ed079f68b31f53499c4e9b4519171e67;
static PyCodeObject *codeobj_125a07a56c9663230ae3f6c4136e6d4b;
static PyCodeObject *codeobj_3c6018b5fcbb9a25011f68089928bcad;
static PyCodeObject *codeobj_65cce80e12a91486c43f4e16c3fdf59c;
static PyCodeObject *codeobj_fa316d09134f14c478b83b9cd3183327;
static PyCodeObject *codeobj_0b457283fbc75d7718ec1b8a3b262290;
static PyCodeObject *codeobj_d0b4b694fc2c19dd09cd62432dc4bdf5;
static PyCodeObject *codeobj_ad014255aa3a9ecfe76d539bda7df7d5;
static PyCodeObject *codeobj_17731b1693458b0bfb794c4e166ebc8f;
static PyCodeObject *codeobj_755ceeaa432a54f4a67ca4fe8a8da654;
static PyCodeObject *codeobj_9d49219b7278a0e1201758521e96bb14;
static PyCodeObject *codeobj_cf87a67f908542908e5c5b3d2dac2385;
static PyCodeObject *codeobj_62cfc0fd6a77270f78bacdbce75bd1a6;
static PyCodeObject *codeobj_d7038a409ad54ca48891caed7238628f;
static PyCodeObject *codeobj_6f92c5403d119554336acfefa06a434b;
static PyCodeObject *codeobj_8cafe7e7e9b94fc5cb6a88fa7686b3ae;
static PyCodeObject *codeobj_3cf276b59c90303aeb98f7f8aca8a00f;
static PyCodeObject *codeobj_3080c111207903707d1ea87c2ef21205;
static PyCodeObject *codeobj_50f82836523985a0f6442b9ea61b7e1e;
static PyCodeObject *codeobj_e888e6c86b99eb8060a4e1842208bfde;
static PyCodeObject *codeobj_d806db7a5b62b28598ac42f318114d57;
static PyCodeObject *codeobj_df649002727ce66a7d99a2c46cbdbc2c;
static PyCodeObject *codeobj_adc656c773170266f83f864cba8560b1;
static PyCodeObject *codeobj_53592f5d7070b40156ceeddd3eadf16c;
static PyCodeObject *codeobj_de0fd1d1f12e46bcccb607c904b95af5;
static PyCodeObject *codeobj_04209da838901e6f5ba9906f75e2b1a7;
static PyCodeObject *codeobj_2b3052597b2b63cc67a5b65164c6edd5;
static PyCodeObject *codeobj_71b273e856a72d7aabdece1d60a08941;
static PyCodeObject *codeobj_30cd916ccc7d4a8bcf1c87e0aff258fa;

static void _initModuleCodeObjects(void)
{
    codeobj_e5d6db51556e9b5f333d326e0c36bb14 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 120, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_6d1f496bdecf1be497cf3d4cebdf9053 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 120, const_tuple_str_plain_devices_str_plain_d_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_fd5f2ff2a3b3a26ba34d6172a98ea242 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 125, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_db78a2b87b91c20015a8f066ed1bdc10 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 125, const_tuple_str_plain_devices_str_plain_d_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_9455407305625c848bb6da330bde3641 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 130, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_aceda42b2713a7289a43c0b0d938470c = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 130, const_tuple_str_plain_devices_str_plain_d_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_9cfc1791a8da4c509c006aceb0833e17 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 138, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_ed079f68b31f53499c4e9b4519171e67 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 138, const_tuple_str_plain_devices_str_plain_d_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_125a07a56c9663230ae3f6c4136e6d4b = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 143, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_3c6018b5fcbb9a25011f68089928bcad = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 143, const_tuple_str_plain_devices_str_plain_d_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_65cce80e12a91486c43f4e16c3fdf59c = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 149, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_fa316d09134f14c478b83b9cd3183327 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 149, const_tuple_str_plain_devices_str_plain_d_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_0b457283fbc75d7718ec1b8a3b262290 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 155, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_d0b4b694fc2c19dd09cd62432dc4bdf5 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 155, const_tuple_str_plain_devices_str_plain_d_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_ad014255aa3a9ecfe76d539bda7df7d5 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 161, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_17731b1693458b0bfb794c4e166ebc8f = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 161, const_tuple_str_plain_devices_str_plain_d_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_755ceeaa432a54f4a67ca4fe8a8da654 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 167, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_9d49219b7278a0e1201758521e96bb14 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 167, const_tuple_str_plain_devices_str_plain_d_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_cf87a67f908542908e5c5b3d2dac2385 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 173, const_tuple_empty, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_62cfc0fd6a77270f78bacdbce75bd1a6 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_comports, 173, const_tuple_str_plain_devices_str_plain_d_tuple, 0, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_d7038a409ad54ca48891caed7238628f = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_describe, 82, const_tuple_str_plain_device_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_6f92c5403d119554336acfefa06a434b = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_describe, 82, const_tuple_84bf03c2e9309c6e61db429945e51a8b_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_8cafe7e7e9b94fc5cb6a88fa7686b3ae = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_hwinfo, 100, const_tuple_str_plain_device_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_3cf276b59c90303aeb98f7f8aca8a00f = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_hwinfo, 100, const_tuple_16181cb43337e03ec054ef017b752cb3_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_3080c111207903707d1ea87c2ef21205 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_list_ports_posix, 0, const_tuple_empty, 0, CO_NOFREE );
    codeobj_50f82836523985a0f6442b9ea61b7e1e = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_popen, 9, const_tuple_str_plain_argv_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_e888e6c86b99eb8060a4e1842208bfde = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_popen, 9, const_tuple_str_plain_argv_str_plain_si_str_plain_so_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_d806db7a5b62b28598ac42f318114d57 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_popen, 16, const_tuple_str_plain_argv_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_df649002727ce66a7d99a2c46cbdbc2c = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_re_group, 42, const_tuple_str_plain_regexp_str_plain_text_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_adc656c773170266f83f864cba8560b1 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_re_group, 42, const_tuple_str_plain_regexp_str_plain_text_str_plain_m_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_53592f5d7070b40156ceeddd3eadf16c = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_read_line, 32, const_tuple_str_plain_filename_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_de0fd1d1f12e46bcccb607c904b95af5 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_read_line, 32, const_tuple_str_plain_filename_str_plain_f_str_plain_line_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_04209da838901e6f5ba9906f75e2b1a7 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_usb_lsusb_string, 66, const_tuple_str_plain_sysfs_path_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_2b3052597b2b63cc67a5b65164c6edd5 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_usb_lsusb_string, 66, const_tuple_9fddd5004b8a739dd516ae31dc137bd9_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_71b273e856a72d7aabdece1d60a08941 = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_usb_sysfs_hw_string, 52, const_tuple_str_plain_sysfs_path_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_30cd916ccc7d4a8bcf1c87e0aff258fa = MAKE_CODEOBJ( const_str_digest_3da33b87e219e6636c62fc3811d81681, const_str_plain_usb_sysfs_hw_string, 52, const_tuple_9b2f56342a155e8f5fdee08864717908_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_10_comports_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_11_comports_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_12_comports_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_13_comports_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_14_comports_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_15_comports_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_16_comports_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_17_comports_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_18_comports_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_1_popen_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_2_popen_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_3_read_line_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_4_re_group_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_5_usb_sysfs_hw_string_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_6_usb_lsusb_string_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_7_describe_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_8_hwinfo_of_module_serial$tools$list_ports_posix(  );


static PyObject *MAKE_FUNCTION_function_9_comports_of_module_serial$tools$list_ports_posix(  );


// The module function definitions.
static PyObject *impl_function_1_popen_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject *_python_par_argv )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_argv; par_argv.object = _python_par_argv;
    PyObjectLocalVariable var_si;
    PyObjectLocalVariable var_so;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    int tmp_tried_lineno_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_50f82836523985a0f6442b9ea61b7e1e, module_serial$tools$list_ports_posix );
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
    // Tried code
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 11;
        goto try_finally_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_popen4 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 11;
        goto try_finally_handler_1;
    }
    tmp_source_name_2 = const_str_space;
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 11;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = par_argv.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99828 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 11;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 11;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 11;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 11;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 11;
        goto try_finally_handler_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 11;
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


        frame_function->f_lineno = 11;
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


        frame_function->f_lineno = 11;
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

    assert( var_si.object == NULL );
    var_si.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2.object;

    assert( var_so.object == NULL );
    var_so.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

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

        goto try_except_handler_1;
    }

    goto finally_end_1;
    finally_end_1:;
    tmp_source_name_4 = var_so.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297770 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 12;
        goto try_except_handler_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_read );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 12;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 12;
    tmp_source_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 12;
        goto try_except_handler_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_strip );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 12;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 12;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 12;
        goto try_except_handler_1;
    }
    goto frame_return_exit_1;
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
    tmp_make_exception_arg_1 = const_str_digest_1135b0e16b63ef77af80649551a04bfb;
    frame_function->f_lineno = 14;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_IOError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 14;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 14;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    try_except_end_1:;

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
    if ((var_si.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_si,
            var_si.object
        );

    }
    if ((var_so.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_so,
            var_so.object
        );

    }
    if ((par_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_argv,
            par_argv.object
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
static PyObject *fparse_function_1_popen_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_argv = NULL;
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
                PyErr_Format( PyExc_TypeError, "popen() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_argv == key )
            {
                assert( _python_par_argv == NULL );
                _python_par_argv = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_argv, key ) == 1 )
            {
                assert( _python_par_argv == NULL );
                _python_par_argv = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "popen() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_argv != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_argv = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_argv == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_argv = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_argv == NULL ))
    {
        PyObject *values[] = { _python_par_argv };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_popen_of_module_serial$tools$list_ports_posix( self, _python_par_argv );

error_exit:;

    Py_XDECREF( _python_par_argv );

    return NULL;
}

static PyObject *dparse_function_1_popen_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_popen_of_module_serial$tools$list_ports_posix( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_popen_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_popen_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject *_python_par_argv )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_argv; par_argv.object = _python_par_argv;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_kw_1;
    PyObject *tmp_call_pos_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d806db7a5b62b28598ac42f318114d57, module_serial$tools$list_ports_posix );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_subprocess );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_subprocess );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107157 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 18;
        goto try_except_handler_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_check_output );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 18;
        goto try_except_handler_1;
    }
    tmp_call_pos_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_argv.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 99828 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 18;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_call_pos_1, 0, tmp_tuple_element_1 );
    tmp_call_kw_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_subprocess );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_subprocess );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 107157 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 18;
        goto try_except_handler_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_STDOUT );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_pos_1 );
        Py_DECREF( tmp_call_kw_1 );

        frame_function->f_lineno = 18;
        goto try_except_handler_1;
    }
    tmp_dict_key_1 = const_str_plain_stderr;
    PyDict_SetItem( tmp_call_kw_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 18;
    tmp_source_name_1 = CALL_FUNCTION( tmp_called_2, tmp_call_pos_1, tmp_call_kw_1 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_pos_1 );
    Py_DECREF( tmp_call_kw_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 18;
        goto try_except_handler_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_strip );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 18;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 18;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 18;
        goto try_except_handler_1;
    }
    goto frame_return_exit_1;
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
    tmp_make_exception_arg_1 = const_str_digest_1135b0e16b63ef77af80649551a04bfb;
    frame_function->f_lineno = 20;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_IOError, tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    frame_function->f_lineno = 20;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    try_except_end_1:;

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
    if ((par_argv.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_argv,
            par_argv.object
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
static PyObject *fparse_function_2_popen_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_argv = NULL;
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
                PyErr_Format( PyExc_TypeError, "popen() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_argv == key )
            {
                assert( _python_par_argv == NULL );
                _python_par_argv = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_argv, key ) == 1 )
            {
                assert( _python_par_argv == NULL );
                _python_par_argv = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "popen() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_argv != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_argv = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_argv == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_argv = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_argv == NULL ))
    {
        PyObject *values[] = { _python_par_argv };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_popen_of_module_serial$tools$list_ports_posix( self, _python_par_argv );

error_exit:;

    Py_XDECREF( _python_par_argv );

    return NULL;
}

static PyObject *dparse_function_2_popen_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_popen_of_module_serial$tools$list_ports_posix( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_popen_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_read_line_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject *_python_par_filename )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_filename; par_filename.object = _python_par_filename;
    PyObjectLocalVariable var_f;
    PyObjectLocalVariable var_line;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_53592f5d7070b40156ceeddd3eadf16c, module_serial$tools$list_ports_posix );
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
    tmp_open_filename_1 = par_filename.object;

    if ( tmp_open_filename_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 2445 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 35;
        goto try_except_handler_1;
    }

    tmp_assign_source_1 = BUILTIN_OPEN( tmp_open_filename_1, NULL, NULL );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 35;
        goto try_except_handler_1;
    }
    assert( var_f.object == NULL );
    var_f.object = tmp_assign_source_1;

    tmp_source_name_2 = var_f.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_readline );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 36;
    tmp_source_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto try_except_handler_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_strip );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 36;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto try_except_handler_1;
    }
    assert( var_line.object == NULL );
    var_line.object = tmp_assign_source_2;

    tmp_source_name_3 = var_f.object;

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_close );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 37;
        goto try_except_handler_1;
    }
    frame_function->f_lineno = 37;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 37;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_line.object;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
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
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_IOError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    try_except_end_1:;

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
    if ((var_f.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_f,
            var_f.object
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
    if ((par_filename.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_filename,
            par_filename.object
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
static PyObject *fparse_function_3_read_line_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_filename = NULL;
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
                PyErr_Format( PyExc_TypeError, "read_line() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_filename == key )
            {
                assert( _python_par_filename == NULL );
                _python_par_filename = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_filename, key ) == 1 )
            {
                assert( _python_par_filename == NULL );
                _python_par_filename = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "read_line() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_filename != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_filename = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_filename == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_filename = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_filename == NULL ))
    {
        PyObject *values[] = { _python_par_filename };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_read_line_of_module_serial$tools$list_ports_posix( self, _python_par_filename );

error_exit:;

    Py_XDECREF( _python_par_filename );

    return NULL;
}

static PyObject *dparse_function_3_read_line_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_read_line_of_module_serial$tools$list_ports_posix( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_read_line_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_re_group_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject *_python_par_regexp, PyObject *_python_par_text )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_regexp; par_regexp.object = _python_par_regexp;
    PyObjectLocalVariable par_text; par_text.object = _python_par_text;
    PyObjectLocalVariable var_m;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_df649002727ce66a7d99a2c46cbdbc2c, module_serial$tools$list_ports_posix );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4450 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 44;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_search );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 44;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_regexp.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 171752 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 44;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = par_text.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 17020 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 44;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 44;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 44;
        goto frame_exception_exit_1;
    }
    assert( var_m.object == NULL );
    var_m.object = tmp_assign_source_1;

    tmp_cond_value_1 = var_m.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
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
    tmp_source_name_2 = var_m.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_group );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = const_int_pos_1;
    frame_function->f_lineno = 45;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
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
    if ((var_m.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_m,
            var_m.object
        );

    }
    if ((par_regexp.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_regexp,
            par_regexp.object
        );

    }
    if ((par_text.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_text,
            par_text.object
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
static PyObject *fparse_function_4_re_group_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_regexp = NULL;
    PyObject *_python_par_text = NULL;
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
                PyErr_Format( PyExc_TypeError, "re_group() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_regexp == key )
            {
                assert( _python_par_regexp == NULL );
                _python_par_regexp = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_text == key )
            {
                assert( _python_par_text == NULL );
                _python_par_text = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_regexp, key ) == 1 )
            {
                assert( _python_par_regexp == NULL );
                _python_par_regexp = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_text, key ) == 1 )
            {
                assert( _python_par_text == NULL );
                _python_par_text = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "re_group() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_regexp != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_regexp = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_regexp == NULL )
    {
        if ( 0 + self->m_defaults_given >= 2  )
        {
            _python_par_regexp = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
         if (unlikely( _python_par_text != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_text == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_text = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_regexp == NULL || _python_par_text == NULL ))
    {
        PyObject *values[] = { _python_par_regexp, _python_par_text };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_re_group_of_module_serial$tools$list_ports_posix( self, _python_par_regexp, _python_par_text );

error_exit:;

    Py_XDECREF( _python_par_regexp );
    Py_XDECREF( _python_par_text );

    return NULL;
}

static PyObject *dparse_function_4_re_group_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_4_re_group_of_module_serial$tools$list_ports_posix( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_re_group_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_usb_sysfs_hw_string_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject *_python_par_sysfs_path )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_sysfs_path; par_sysfs_path.object = _python_par_sysfs_path;
    PyObjectLocalVariable var_bus;
    PyObjectLocalVariable var_dev;
    PyObjectLocalVariable var_snr;
    PyObjectLocalVariable var_snr_txt;
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
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_71b273e856a72d7aabdece1d60a08941, module_serial$tools$list_ports_posix );
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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 54;
        goto try_finally_handler_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto try_finally_handler_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_basename );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto try_finally_handler_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 54;
        goto try_finally_handler_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 54;
        goto try_finally_handler_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_realpath );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 54;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = par_sysfs_path.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297818 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 54;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 54;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 54;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 54;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto try_finally_handler_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_split );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_3 = const_str_chr_45;
    frame_function->f_lineno = 54;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto try_finally_handler_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
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


        frame_function->f_lineno = 54;
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


        frame_function->f_lineno = 54;
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

    assert( var_bus.object == NULL );
    var_bus.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2.object;

    assert( var_dev.object == NULL );
    var_dev.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

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
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_read_line );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_read_line );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297874 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_1 = par_sysfs_path.object;

    if ( tmp_binop_left_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297818 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_1 = const_str_digest_0855177692aa1e165f9f99da068705f2;
    tmp_call_arg_element_4 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 55;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    assert( var_snr.object == NULL );
    var_snr.object = tmp_assign_source_6;

    tmp_cond_value_1 = var_snr.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 56;
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
    tmp_binop_left_2 = const_str_digest_22bcbc7fcd6894e1e0ef46a5a66c4eb6;
    tmp_binop_right_2 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_snr.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_1 );
    tmp_assign_source_7 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    assert( var_snr_txt.object == NULL );
    var_snr_txt.object = tmp_assign_source_7;

    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_8 = const_str_empty;
    assert( var_snr_txt.object == NULL );
    var_snr_txt.object = INCREASE_REFCOUNT( tmp_assign_source_8 );

    branch_end_1:;
    tmp_binop_left_3 = const_str_digest_909ba5838227c5c604999c5ccca231d7;
    tmp_binop_right_3 = PyTuple_New( 3 );
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_read_line );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_read_line );
    }

    if ( tmp_called_5 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297874 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_4 = par_sysfs_path.object;

    if ( tmp_binop_left_4 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297818 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_4 = const_str_digest_285d9ea4b60b6c372ee0e02aba839d69;
    tmp_call_arg_element_5 = BINARY_OPERATION_ADD( tmp_binop_left_4, tmp_binop_right_4 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 61;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_2 );
    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_read_line );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_read_line );
    }

    if ( tmp_called_6 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297874 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_5 = par_sysfs_path.object;

    if ( tmp_binop_left_5 == NULL )
    {
        Py_DECREF( tmp_binop_right_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297818 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_binop_right_5 = const_str_digest_3b39a9c571b4058d0dc9f0ff2bf72f24;
    tmp_call_arg_element_6 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 62;
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_3 );

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_binop_right_3, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_snr_txt.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 2, tmp_tuple_element_2 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 60;
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
    if ((var_bus.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bus,
            var_bus.object
        );

    }
    if ((var_dev.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dev,
            var_dev.object
        );

    }
    if ((var_snr.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_snr,
            var_snr.object
        );

    }
    if ((var_snr_txt.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_snr_txt,
            var_snr_txt.object
        );

    }
    if ((par_sysfs_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sysfs_path,
            par_sysfs_path.object
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
static PyObject *fparse_function_5_usb_sysfs_hw_string_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_sysfs_path = NULL;
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
                PyErr_Format( PyExc_TypeError, "usb_sysfs_hw_string() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_sysfs_path == key )
            {
                assert( _python_par_sysfs_path == NULL );
                _python_par_sysfs_path = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_sysfs_path, key ) == 1 )
            {
                assert( _python_par_sysfs_path == NULL );
                _python_par_sysfs_path = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "usb_sysfs_hw_string() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_sysfs_path != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_sysfs_path = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_sysfs_path == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_sysfs_path = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_sysfs_path == NULL ))
    {
        PyObject *values[] = { _python_par_sysfs_path };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5_usb_sysfs_hw_string_of_module_serial$tools$list_ports_posix( self, _python_par_sysfs_path );

error_exit:;

    Py_XDECREF( _python_par_sysfs_path );

    return NULL;
}

static PyObject *dparse_function_5_usb_sysfs_hw_string_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_5_usb_sysfs_hw_string_of_module_serial$tools$list_ports_posix( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_usb_sysfs_hw_string_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_usb_lsusb_string_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject *_python_par_sysfs_path )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_sysfs_path; par_sysfs_path.object = _python_par_sysfs_path;
    PyObjectLocalVariable var_bus;
    PyObjectLocalVariable var_dev;
    PyObjectLocalVariable var_desc;
    PyObjectLocalVariable var_iManufacturer;
    PyObjectLocalVariable var_iProduct;
    PyObjectLocalVariable var_iSerial;
    PyObjectLocalVariable var_idVendor;
    PyObjectLocalVariable var_idProduct;
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_or_2__value_1;
    PyObjectTempVariable tmp_or_3__value_1;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt_1;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_list_element_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    int tmp_tried_lineno_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_04209da838901e6f5ba9906f75e2b1a7, module_serial$tools$list_ports_posix );
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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_basename );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_realpath );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = par_sysfs_path.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297818 ], 56, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 67;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }
    frame_function->f_lineno = 67;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_split );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_3 = const_str_chr_45;
    frame_function->f_lineno = 67;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
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


        frame_function->f_lineno = 67;
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


        frame_function->f_lineno = 67;
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

    assert( var_bus.object == NULL );
    var_bus.object = INCREASE_REFCOUNT( tmp_assign_source_4 );

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2.object;

    assert( var_dev.object == NULL );
    var_dev.object = INCREASE_REFCOUNT( tmp_assign_source_5 );

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
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_popen );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_popen );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297912 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 69;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_4 = PyList_New( 4 );
    tmp_list_element_1 = const_str_plain_lsusb;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_call_arg_element_4, 0, tmp_list_element_1 );
    tmp_list_element_1 = const_str_digest_47fa03ef5536c5573b137cec5adc2d39;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_call_arg_element_4, 1, tmp_list_element_1 );
    tmp_list_element_1 = const_str_digest_406381251d2d4637ebfac7f24cc49c6f;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_call_arg_element_4, 2, tmp_list_element_1 );
    tmp_binop_left_1 = const_str_digest_530ccab821bb1f0f9080f24abeeee028;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_bus.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297946 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 69;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_dev.object;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297995 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 69;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_list_element_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 69;
        goto try_except_handler_1;
    }
    PyList_SET_ITEM( tmp_call_arg_element_4, 3, tmp_list_element_1 );
    frame_function->f_lineno = 69;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 69;
        goto try_except_handler_1;
    }
    assert( var_desc.object == NULL );
    var_desc.object = tmp_assign_source_6;

    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_re_group );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re_group );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298044 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_5 = const_str_digest_96ee50bbc972ea6e48ffeaff8d77e40b;
    tmp_call_arg_element_6 = var_desc.object;

    frame_function->f_lineno = 71;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 71;
        goto try_except_handler_1;
    }
    assert( var_iManufacturer.object == NULL );
    var_iManufacturer.object = tmp_assign_source_7;

    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_re_group );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re_group );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298044 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 72;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_7 = const_str_digest_2f7bbaab59b56042d6304e102c3a9292;
    tmp_call_arg_element_8 = var_desc.object;

    frame_function->f_lineno = 72;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_6, tmp_call_arg_element_7, tmp_call_arg_element_8 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 72;
        goto try_except_handler_1;
    }
    assert( var_iProduct.object == NULL );
    var_iProduct.object = tmp_assign_source_8;

    // Tried code
    tmp_assign_source_9 = NULL;
    // Tried code
    tmp_called_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_re_group );

    if (unlikely( tmp_called_7 == NULL ))
    {
        tmp_called_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re_group );
    }

    if ( tmp_called_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298044 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 73;
        goto try_finally_handler_3;
    }

    tmp_call_arg_element_9 = const_str_digest_f8beb8172b71d00f65a7c5ff1b52d31a;
    tmp_call_arg_element_10 = var_desc.object;

    frame_function->f_lineno = 73;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_7, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
        goto try_finally_handler_3;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = tmp_assign_source_10;

    tmp_cond_value_1 = tmp_or_1__value_1.object;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 73;
        goto try_finally_handler_3;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_assign_source_9 = tmp_or_1__value_1.object;

    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_9 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_1.object );
        tmp_or_1__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_assign_source_9 = const_str_empty;
    // Re-reraise as necessary after finally was executed.
    goto finally_end_2;
    finally_end_2:;
    condexpr_end_1:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_2 != NULL )
    {
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;

        goto try_finally_handler_2;
    }

    goto finally_end_3;
    finally_end_3:;
    assert( var_iSerial.object == NULL );
    var_iSerial.object = INCREASE_REFCOUNT( tmp_assign_source_9 );

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_2 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_3 != NULL )
    {
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;

        goto try_except_handler_1;
    }

    goto finally_end_4;
    finally_end_4:;
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_re_group );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re_group );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298044 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_11 = const_str_digest_94c556070c13cdcbe63e60adc05d473a;
    tmp_call_arg_element_12 = var_desc.object;

    if ( tmp_call_arg_element_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 103951 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 75;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_11, tmp_call_arg_element_12 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 75;
        goto try_except_handler_1;
    }
    assert( var_idVendor.object == NULL );
    var_idVendor.object = tmp_assign_source_11;

    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_re_group );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re_group );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298044 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto try_except_handler_1;
    }

    tmp_call_arg_element_13 = const_str_digest_a17a53bd203b5c4cf836825aa02bfdc3;
    tmp_call_arg_element_14 = var_desc.object;

    if ( tmp_call_arg_element_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 103951 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 76;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_9, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto try_except_handler_1;
    }
    assert( var_idProduct.object == NULL );
    var_idProduct.object = tmp_assign_source_12;

    tmp_binop_left_2 = const_str_digest_3b2331c9bb0e209669885040c873c011;
    tmp_binop_right_2 = NULL;
    // Tried code
    tmp_binop_right_2 = NULL;
    // Tried code
    tmp_binop_right_2 = PyTuple_New( 3 );
    tmp_tuple_element_2 = NULL;
    // Tried code
    tmp_assign_source_13 = var_iManufacturer.object;

    if ( tmp_assign_source_13 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298081 ], 59, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto try_finally_handler_7;
    }

    assert( tmp_or_2__value_1.object == NULL );
    tmp_or_2__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_13 );

    tmp_cond_value_2 = tmp_or_2__value_1.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 78;
        goto try_finally_handler_7;
    }
    if (tmp_cond_truth_2 == 1)
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_tuple_element_2 = tmp_or_2__value_1.object;

    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_tuple_element_2 = NULL;
    // Tried code
    tmp_result = tmp_or_2__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_2__value_1.object );
        tmp_or_2__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_tuple_element_2 = var_idVendor.object;

    // Re-reraise as necessary after finally was executed.
    goto finally_end_5;
    finally_end_5:;
    condexpr_end_2:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
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

        goto try_finally_handler_6;
    }

    goto finally_end_6;
    finally_end_6:;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = NULL;
    // Tried code
    tmp_assign_source_14 = var_iProduct.object;

    if ( tmp_assign_source_14 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298140 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto try_finally_handler_9;
    }

    assert( tmp_or_3__value_1.object == NULL );
    tmp_or_3__value_1.object = INCREASE_REFCOUNT( tmp_assign_source_14 );

    tmp_cond_value_3 = tmp_or_3__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_function->f_lineno = 78;
        goto try_finally_handler_9;
    }
    if (tmp_cond_truth_3 == 1)
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_tuple_element_2 = tmp_or_3__value_1.object;

    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_tuple_element_2 = NULL;
    // Tried code
    tmp_result = tmp_or_3__value_1.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_3__value_1.object );
        tmp_or_3__value_1.object = NULL;
    }

    assert( tmp_result != false );
    tmp_tuple_element_2 = var_idProduct.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298194 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto try_finally_handler_10;
    }

    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_10:;
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

        goto try_finally_handler_9;
    }

    goto finally_end_7;
    finally_end_7:;
    condexpr_end_3:;
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_9:;
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

        goto try_finally_handler_6;
    }

    goto finally_end_8;
    finally_end_8:;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_iSerial.object;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298249 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto try_finally_handler_6;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 2, tmp_tuple_element_2 );
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;

    tmp_tried_lineno_3 = frame_function->f_lineno;
    Py_XDECREF( tmp_or_3__value_1.object );
    tmp_or_3__value_1.object = NULL;

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

    goto finally_end_9;
    finally_end_9:;
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
    Py_XDECREF( tmp_or_2__value_1.object );
    tmp_or_2__value_1.object = NULL;

    frame_function->f_lineno = tmp_tried_lineno_4;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_8 != NULL )
    {
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;

        goto try_except_handler_1;
    }

    goto finally_end_10;
    finally_end_10:;
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto try_except_handler_1;
    }
    goto frame_return_exit_1;
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
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_IOError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
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
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_base );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298302 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_1:;
    try_except_end_1:;

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
    if ((var_bus.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bus,
            var_bus.object
        );

    }
    if ((var_dev.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dev,
            var_dev.object
        );

    }
    if ((var_desc.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_desc,
            var_desc.object
        );

    }
    if ((var_iManufacturer.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_iManufacturer,
            var_iManufacturer.object
        );

    }
    if ((var_iProduct.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_iProduct,
            var_iProduct.object
        );

    }
    if ((var_iSerial.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_iSerial,
            var_iSerial.object
        );

    }
    if ((var_idVendor.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_idVendor,
            var_idVendor.object
        );

    }
    if ((var_idProduct.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_idProduct,
            var_idProduct.object
        );

    }
    if ((par_sysfs_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sysfs_path,
            par_sysfs_path.object
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
static PyObject *fparse_function_6_usb_lsusb_string_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_sysfs_path = NULL;
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
                PyErr_Format( PyExc_TypeError, "usb_lsusb_string() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_sysfs_path == key )
            {
                assert( _python_par_sysfs_path == NULL );
                _python_par_sysfs_path = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_sysfs_path, key ) == 1 )
            {
                assert( _python_par_sysfs_path == NULL );
                _python_par_sysfs_path = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "usb_lsusb_string() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_sysfs_path != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_sysfs_path = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_sysfs_path == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_sysfs_path = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_sysfs_path == NULL ))
    {
        PyObject *values[] = { _python_par_sysfs_path };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6_usb_lsusb_string_of_module_serial$tools$list_ports_posix( self, _python_par_sysfs_path );

error_exit:;

    Py_XDECREF( _python_par_sysfs_path );

    return NULL;
}

static PyObject *dparse_function_6_usb_lsusb_string_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_6_usb_lsusb_string_of_module_serial$tools$list_ports_posix( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_usb_lsusb_string_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_describe_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject *_python_par_device )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_device; par_device.object = _python_par_device;
    PyObjectLocalVariable var_base;
    PyObjectLocalVariable var_sys_dev_path;
    PyObjectLocalVariable var_sys_usb;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
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
    PyObject *tmp_called_8;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d7038a409ad54ca48891caed7238628f, module_serial$tools$list_ports_posix );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_basename );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_device.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 165494 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 88;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    assert( var_base.object == NULL );
    var_base.object = tmp_assign_source_1;

    tmp_binop_left_1 = const_str_digest_7df1b8b38da0f76482e64ef2717aacdd;
    tmp_binop_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_base.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_base.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    assert( var_sys_dev_path.object == NULL );
    var_sys_dev_path.object = tmp_assign_source_2;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_exists );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = var_sys_dev_path.object;

    frame_function->f_lineno = 91;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 91;
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
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_path );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_path );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_realpath );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = var_sys_dev_path.object;

    frame_function->f_lineno = 92;
    tmp_call_arg_element_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_called_4 );

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 92;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 92;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    assert( var_sys_usb.object == NULL );
    var_sys_usb.object = tmp_assign_source_3;

    tmp_called_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_usb_lsusb_string );

    if (unlikely( tmp_called_6 == NULL ))
    {
        tmp_called_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_usb_lsusb_string );
    }

    if ( tmp_called_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298335 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = var_sys_usb.object;

    frame_function->f_lineno = 93;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_binop_left_2 = const_str_digest_a9d289ab39a24c582e8287da1c0a4ccc;
    tmp_binop_right_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_base.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_2 );
    tmp_assign_source_4 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    assert( var_sys_dev_path.object != NULL );
    {
        PyObject *old = var_sys_dev_path.object;
        var_sys_dev_path.object = tmp_assign_source_4;
        Py_DECREF( old );
    }

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_path );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_exists );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = var_sys_dev_path.object;

    frame_function->f_lineno = 96;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 96;
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
    tmp_called_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_read_line );

    if (unlikely( tmp_called_8 == NULL ))
    {
        tmp_called_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_read_line );
    }

    if ( tmp_called_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297874 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_8 = var_sys_dev_path.object;

    frame_function->f_lineno = 97;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_8 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;

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
    if ((var_base.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_base,
            var_base.object
        );

    }
    if ((var_sys_dev_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sys_dev_path,
            var_sys_dev_path.object
        );

    }
    if ((var_sys_usb.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sys_usb,
            var_sys_usb.object
        );

    }
    if ((par_device.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_device,
            par_device.object
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
    tmp_return_value = var_base.object;

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
static PyObject *fparse_function_7_describe_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_device = NULL;
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
                PyErr_Format( PyExc_TypeError, "describe() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_device == key )
            {
                assert( _python_par_device == NULL );
                _python_par_device = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_device, key ) == 1 )
            {
                assert( _python_par_device == NULL );
                _python_par_device = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "describe() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_device != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_device = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_device == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_device = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_device == NULL ))
    {
        PyObject *values[] = { _python_par_device };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7_describe_of_module_serial$tools$list_ports_posix( self, _python_par_device );

error_exit:;

    Py_XDECREF( _python_par_device );

    return NULL;
}

static PyObject *dparse_function_7_describe_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_7_describe_of_module_serial$tools$list_ports_posix( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_describe_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_hwinfo_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject *_python_par_device )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_device; par_device.object = _python_par_device;
    PyObjectLocalVariable var_base;
    PyObjectLocalVariable var_sys_id_path;
    PyObjectLocalVariable var_sys_dev_path;
    PyObjectLocalVariable var_sys_usb;
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
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_binop_right_3;
    PyObject *tmp_binop_right_4;
    PyObject *tmp_binop_right_5;
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
    PyObject *tmp_called_11;
    PyObject *tmp_called_12;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8cafe7e7e9b94fc5cb6a88fa7686b3ae, module_serial$tools$list_ports_posix );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_basename );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_device.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 165494 ], 52, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 102;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    assert( var_base.object == NULL );
    var_base.object = tmp_assign_source_1;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_exists );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = const_str_digest_8581765044f705db207672d75792aab9;
    tmp_binop_right_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_base.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_call_arg_element_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 103;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 103;
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
    tmp_binop_left_2 = const_str_digest_ec7442fe88c318f199986664543774a6;
    tmp_binop_right_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_base.object;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_2 );
    tmp_assign_source_2 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    assert( var_sys_id_path.object == NULL );
    var_sys_id_path.object = tmp_assign_source_2;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_path );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_exists );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = var_sys_id_path.object;

    frame_function->f_lineno = 106;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 106;
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
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_read_line );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_read_line );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 297874 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = var_sys_id_path.object;

    frame_function->f_lineno = 107;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_binop_left_3 = const_str_digest_7df1b8b38da0f76482e64ef2717aacdd;
    tmp_binop_right_3 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_base.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_base.object;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_binop_right_3, 1, tmp_tuple_element_3 );
    tmp_assign_source_3 = BINARY_OPERATION_REMAINDER( tmp_binop_left_3, tmp_binop_right_3 );
    Py_DECREF( tmp_binop_right_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    assert( var_sys_dev_path.object == NULL );
    var_sys_dev_path.object = tmp_assign_source_3;

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_exists );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = var_sys_dev_path.object;

    frame_function->f_lineno = 110;
    tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
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
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_path );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_path );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_called_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_path );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_realpath );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = var_sys_dev_path.object;

    frame_function->f_lineno = 111;
    tmp_call_arg_element_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_8, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_called_7 );

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 111;
    tmp_call_arg_element_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_6 );

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 111;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    assert( var_sys_usb.object == NULL );
    var_sys_usb.object = tmp_assign_source_4;

    tmp_called_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_usb_sysfs_hw_string );

    if (unlikely( tmp_called_9 == NULL ))
    {
        tmp_called_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_usb_sysfs_hw_string );
    }

    if ( tmp_called_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298380 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 112;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_9 = var_sys_usb.object;

    frame_function->f_lineno = 112;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_9 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_source_name_15 = var_base.object;

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_startswith );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = const_str_plain_ttyACM;
    frame_function->f_lineno = 114;
    tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if (tmp_cond_truth_4 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_binop_left_4 = const_str_digest_8581765044f705db207672d75792aab9;
    tmp_binop_right_4 = PyTuple_New( 1 );
    tmp_tuple_element_4 = var_base.object;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_binop_right_4, 0, tmp_tuple_element_4 );
    tmp_assign_source_5 = BINARY_OPERATION_REMAINDER( tmp_binop_left_4, tmp_binop_right_4 );
    Py_DECREF( tmp_binop_right_4 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }
    assert( var_sys_dev_path.object != NULL );
    {
        PyObject *old = var_sys_dev_path.object;
        var_sys_dev_path.object = tmp_assign_source_5;
        Py_DECREF( old );
    }

    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_path );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_exists );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = var_sys_dev_path.object;

    frame_function->f_lineno = 116;
    tmp_cond_value_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if (tmp_cond_truth_5 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_12 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_usb_sysfs_hw_string );

    if (unlikely( tmp_called_12 == NULL ))
    {
        tmp_called_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_usb_sysfs_hw_string );
    }

    if ( tmp_called_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298380 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_binop_left_5 = var_sys_dev_path.object;

    tmp_binop_right_5 = const_str_digest_865473f8d387905b691d279b4d029ea9;
    tmp_call_arg_element_12 = BINARY_OPERATION_ADD( tmp_binop_left_5, tmp_binop_right_5 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 117;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_12 );
    Py_DECREF( tmp_call_arg_element_12 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_5:;
    branch_no_4:;
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
    if ((var_base.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_base,
            var_base.object
        );

    }
    if ((var_sys_id_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sys_id_path,
            var_sys_id_path.object
        );

    }
    if ((var_sys_dev_path.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sys_dev_path,
            var_sys_dev_path.object
        );

    }
    if ((var_sys_usb.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sys_usb,
            var_sys_usb.object
        );

    }
    if ((par_device.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_device,
            par_device.object
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
    tmp_return_value = const_str_digest_274b68192b056e268f128ff63bfcd4a4;
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
static PyObject *fparse_function_8_hwinfo_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_device = NULL;
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
                PyErr_Format( PyExc_TypeError, "hwinfo() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_device == key )
            {
                assert( _python_par_device == NULL );
                _python_par_device = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_device, key ) == 1 )
            {
                assert( _python_par_device == NULL );
                _python_par_device = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "hwinfo() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_device != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_device = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_device == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_device = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
        }
#if PYTHON_VERSION < 330
        else
        {
#if PYTHON_VERSION < 270
            ERROR_TOO_FEW_ARGUMENTS( self, kw_size, args_given + kw_found );
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
    if (unlikely( _python_par_device == NULL ))
    {
        PyObject *values[] = { _python_par_device };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_8_hwinfo_of_module_serial$tools$list_ports_posix( self, _python_par_device );

error_exit:;

    Py_XDECREF( _python_par_device );

    return NULL;
}

static PyObject *dparse_function_8_hwinfo_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_8_hwinfo_of_module_serial$tools$list_ports_posix( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_hwinfo_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_devices;
    PyObjectLocalVariable var_d;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e5d6db51556e9b5f333d326e0c36bb14, module_serial$tools$list_ports_posix );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85514 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_glob );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_6484455bc9291033dc410ed871f8000b;
    frame_function->f_lineno = 121;
    tmp_binop_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_binop_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_binop_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85514 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_glob );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_digest_ccba7fdc2421edc86fd9cef975878b80;
    frame_function->f_lineno = 121;
    tmp_binop_right_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_binop_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_2 );

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_binop_left_1 = BINARY_OPERATION_ADD( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_left_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_binop_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_binop_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85514 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_glob );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = const_str_digest_9a3cc80d0c0ee021ef381e84356ceea6;
    frame_function->f_lineno = 121;
    tmp_binop_right_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_binop_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_left_1 );

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_left_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    assert( var_devices.object == NULL );
    var_devices.object = tmp_assign_source_1;

    // Tried code
    tmp_return_value = NULL;
    // Tried code
    tmp_iter_arg_1 = var_devices.object;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 122;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_3;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

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
        frame_function->f_lineno = 122;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_listcontr_1__iter_value_0.object;

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 0, tmp_tuple_element_1 );
    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_describe );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_describe );
    }

    if ( tmp_called_4 == NULL )
    {
        Py_DECREF( tmp_append_value_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298428 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 122;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_4 = var_d.object;

    frame_function->f_lineno = 122;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_append_value_1 );

        frame_function->f_lineno = 122;
        goto try_finally_handler_2;
    }
    PyTuple_SET_ITEM( tmp_append_value_1, 1, tmp_tuple_element_1 );
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_hwinfo );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hwinfo );
    }

    if ( tmp_called_5 == NULL )
    {
        Py_DECREF( tmp_append_value_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 298465 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 122;
        goto try_finally_handler_2;
    }

    tmp_call_arg_element_5 = var_d.object;

    frame_function->f_lineno = 122;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_append_value_1 );

        frame_function->f_lineno = 122;
        goto try_finally_handler_2;
    }
    PyTuple_SET_ITEM( tmp_append_value_1, 2, tmp_tuple_element_1 );
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 122;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 122;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_listcontr_1__listcontr_result.object;

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
    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    try_finally_handler_start_1:;
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;

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
    if ((var_devices.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_devices,
            var_devices.object
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
static PyObject *fparse_function_9_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_9_comports_of_module_serial$tools$list_ports_posix( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_9_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_9_comports_of_module_serial$tools$list_ports_posix( self );
    }
    else
    {
        PyObject *result = fparse_function_9_comports_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_devices;
    PyObjectLocalVariable var_d;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fd5f2ff2a3b3a26ba34d6172a98ea242, module_serial$tools$list_ports_posix );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85514 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_glob );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_e0ef292810f6421c2ac79497902c20ff;
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
    assert( var_devices.object == NULL );
    var_devices.object = tmp_assign_source_1;

    // Tried code
    tmp_return_value = NULL;
    // Tried code
    tmp_iter_arg_1 = var_devices.object;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_3;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

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
        frame_function->f_lineno = 127;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_listcontr_1__iter_value_0.object;

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 2, tmp_tuple_element_1 );
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_listcontr_1__listcontr_result.object;

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
    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    try_finally_handler_start_1:;
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;

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
    if ((var_devices.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_devices,
            var_devices.object
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
static PyObject *fparse_function_10_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_10_comports_of_module_serial$tools$list_ports_posix( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_10_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_10_comports_of_module_serial$tools$list_ports_posix( self );
    }
    else
    {
        PyObject *result = fparse_function_10_comports_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_devices;
    PyObjectLocalVariable var_d;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9455407305625c848bb6da330bde3641, module_serial$tools$list_ports_posix );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85514 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_glob );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_13fa4ff38a89d057941ce2d41ca70c0b;
    frame_function->f_lineno = 131;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }
    assert( var_devices.object == NULL );
    var_devices.object = tmp_assign_source_1;

    // Tried code
    tmp_return_value = NULL;
    // Tried code
    tmp_iter_arg_1 = var_devices.object;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_3;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

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
        frame_function->f_lineno = 132;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_listcontr_1__iter_value_0.object;

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 2, tmp_tuple_element_1 );
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_listcontr_1__listcontr_result.object;

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
    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    try_finally_handler_start_1:;
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;

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
    if ((var_devices.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_devices,
            var_devices.object
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
static PyObject *fparse_function_11_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_11_comports_of_module_serial$tools$list_ports_posix( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_11_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_11_comports_of_module_serial$tools$list_ports_posix( self );
    }
    else
    {
        PyObject *result = fparse_function_11_comports_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_devices;
    PyObjectLocalVariable var_d;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9cfc1791a8da4c509c006aceb0833e17, module_serial$tools$list_ports_posix );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85514 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_glob );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_07db3988f84635096bb360424717d25b;
    frame_function->f_lineno = 139;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    assert( var_devices.object == NULL );
    var_devices.object = tmp_assign_source_1;

    // Tried code
    tmp_return_value = NULL;
    // Tried code
    tmp_iter_arg_1 = var_devices.object;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 140;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_3;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

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
        frame_function->f_lineno = 140;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_listcontr_1__iter_value_0.object;

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 2, tmp_tuple_element_1 );
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 140;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 140;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_listcontr_1__listcontr_result.object;

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
    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    try_finally_handler_start_1:;
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;

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
    if ((var_devices.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_devices,
            var_devices.object
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
static PyObject *fparse_function_12_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_12_comports_of_module_serial$tools$list_ports_posix( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_12_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_12_comports_of_module_serial$tools$list_ports_posix( self );
    }
    else
    {
        PyObject *result = fparse_function_12_comports_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_devices;
    PyObjectLocalVariable var_d;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_125a07a56c9663230ae3f6c4136e6d4b, module_serial$tools$list_ports_posix );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85514 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_glob );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_2018320101d4195e3065cc7d9b086938;
    frame_function->f_lineno = 145;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }
    assert( var_devices.object == NULL );
    var_devices.object = tmp_assign_source_1;

    // Tried code
    tmp_return_value = NULL;
    // Tried code
    tmp_iter_arg_1 = var_devices.object;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 146;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_3;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

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
        frame_function->f_lineno = 146;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_listcontr_1__iter_value_0.object;

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 2, tmp_tuple_element_1 );
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 146;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 146;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_listcontr_1__listcontr_result.object;

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
    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    try_finally_handler_start_1:;
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;

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
    if ((var_devices.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_devices,
            var_devices.object
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
static PyObject *fparse_function_13_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_13_comports_of_module_serial$tools$list_ports_posix( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_13_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_13_comports_of_module_serial$tools$list_ports_posix( self );
    }
    else
    {
        PyObject *result = fparse_function_13_comports_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_devices;
    PyObjectLocalVariable var_d;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_65cce80e12a91486c43f4e16c3fdf59c, module_serial$tools$list_ports_posix );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85514 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_glob );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_aa430993508f55bbdc3086f826788d92;
    frame_function->f_lineno = 151;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    assert( var_devices.object == NULL );
    var_devices.object = tmp_assign_source_1;

    // Tried code
    tmp_return_value = NULL;
    // Tried code
    tmp_iter_arg_1 = var_devices.object;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_3;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

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
        frame_function->f_lineno = 152;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_listcontr_1__iter_value_0.object;

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 2, tmp_tuple_element_1 );
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 152;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_listcontr_1__listcontr_result.object;

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
    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    try_finally_handler_start_1:;
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;

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
    if ((var_devices.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_devices,
            var_devices.object
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
static PyObject *fparse_function_14_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_14_comports_of_module_serial$tools$list_ports_posix( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_14_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_14_comports_of_module_serial$tools$list_ports_posix( self );
    }
    else
    {
        PyObject *result = fparse_function_14_comports_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_devices;
    PyObjectLocalVariable var_d;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0b457283fbc75d7718ec1b8a3b262290, module_serial$tools$list_ports_posix );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85514 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_glob );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_b157980f86d1f28bc14347f23d518093;
    frame_function->f_lineno = 157;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    assert( var_devices.object == NULL );
    var_devices.object = tmp_assign_source_1;

    // Tried code
    tmp_return_value = NULL;
    // Tried code
    tmp_iter_arg_1 = var_devices.object;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 158;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_3;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

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
        frame_function->f_lineno = 158;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_listcontr_1__iter_value_0.object;

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 2, tmp_tuple_element_1 );
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 158;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 158;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_listcontr_1__listcontr_result.object;

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
    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    try_finally_handler_start_1:;
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;

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
    if ((var_devices.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_devices,
            var_devices.object
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
static PyObject *fparse_function_15_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_15_comports_of_module_serial$tools$list_ports_posix( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_15_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_15_comports_of_module_serial$tools$list_ports_posix( self );
    }
    else
    {
        PyObject *result = fparse_function_15_comports_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_devices;
    PyObjectLocalVariable var_d;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ad014255aa3a9ecfe76d539bda7df7d5, module_serial$tools$list_ports_posix );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85514 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_glob );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_0c18980f6670be24f0ab3ad5d1e8066a;
    frame_function->f_lineno = 163;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }
    assert( var_devices.object == NULL );
    var_devices.object = tmp_assign_source_1;

    // Tried code
    tmp_return_value = NULL;
    // Tried code
    tmp_iter_arg_1 = var_devices.object;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_3;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

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
        frame_function->f_lineno = 164;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_listcontr_1__iter_value_0.object;

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 2, tmp_tuple_element_1 );
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 164;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_listcontr_1__listcontr_result.object;

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
    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    try_finally_handler_start_1:;
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;

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
    if ((var_devices.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_devices,
            var_devices.object
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
static PyObject *fparse_function_16_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_16_comports_of_module_serial$tools$list_ports_posix( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_16_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_16_comports_of_module_serial$tools$list_ports_posix( self );
    }
    else
    {
        PyObject *result = fparse_function_16_comports_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_17_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_devices;
    PyObjectLocalVariable var_d;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_755ceeaa432a54f4a67ca4fe8a8da654, module_serial$tools$list_ports_posix );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85514 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_glob );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_121fa5f8bb18ea2ccea35015dcf7af1d;
    frame_function->f_lineno = 169;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }
    assert( var_devices.object == NULL );
    var_devices.object = tmp_assign_source_1;

    // Tried code
    tmp_return_value = NULL;
    // Tried code
    tmp_iter_arg_1 = var_devices.object;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_3;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

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
        frame_function->f_lineno = 170;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_listcontr_1__iter_value_0.object;

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 2, tmp_tuple_element_1 );
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 170;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_listcontr_1__listcontr_result.object;

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
    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    try_finally_handler_start_1:;
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;

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
    if ((var_devices.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_devices,
            var_devices.object
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
static PyObject *fparse_function_17_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_17_comports_of_module_serial$tools$list_ports_posix( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_17_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_17_comports_of_module_serial$tools$list_ports_posix( self );
    }
    else
    {
        PyObject *result = fparse_function_17_comports_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_18_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_devices;
    PyObjectLocalVariable var_d;
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
    PyObject *tmp_append_to_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_cf87a67f908542908e5c5b3d2dac2385, module_serial$tools$list_ports_posix );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_glob );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 85514 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_glob );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_bfd58db2ae190b4162fbc0303e783867;
    frame_function->f_lineno = 175;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }
    assert( var_devices.object == NULL );
    var_devices.object = tmp_assign_source_1;

    // Tried code
    tmp_return_value = NULL;
    // Tried code
    tmp_iter_arg_1 = var_devices.object;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto try_finally_handler_2;
    }
    assert( tmp_listcontr_1__listcontr_iter.object == NULL );
    tmp_listcontr_1__listcontr_iter.object = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_listcontr_1__listcontr_result.object == NULL );
    tmp_listcontr_1__listcontr_result.object = tmp_assign_source_3;

    loop_start_1:;
    tmp_next_source_1 = tmp_listcontr_1__listcontr_iter.object;

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
        frame_function->f_lineno = 176;
            goto try_finally_handler_2;
        }
    }

    if (tmp_listcontr_1__iter_value_0.object == NULL)
    {
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
    }
    else
    {
        PyObject *old = tmp_listcontr_1__iter_value_0.object;
        tmp_listcontr_1__iter_value_0.object = tmp_assign_source_4;
        Py_DECREF( old );
    }
    tmp_assign_source_5 = tmp_listcontr_1__iter_value_0.object;

    if (var_d.object == NULL)
    {
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
    }
    else
    {
        PyObject *old = var_d.object;
        var_d.object = INCREASE_REFCOUNT( tmp_assign_source_5 );
        Py_DECREF( old );
    }
    tmp_append_to_1 = tmp_listcontr_1__listcontr_result.object;

    tmp_append_value_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_d.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_append_value_1, 2, tmp_tuple_element_1 );
    tmp_res = PyList_Append( tmp_append_to_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto try_finally_handler_2;
    }
    tmp_unused = Py_None;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 176;
        goto try_finally_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_listcontr_1__listcontr_result.object;

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
    Py_INCREF( tmp_return_value );
    goto try_finally_handler_start_1;
    try_finally_handler_start_1:;
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

    // Return value if any.
    if ( tmp_return_value != NULL )
    {
        goto frame_return_exit_1;
    }

    goto finally_end_2;
    finally_end_2:;

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
    if ((var_devices.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_devices,
            var_devices.object
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
static PyObject *fparse_function_18_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_18_comports_of_module_serial$tools$list_ports_posix( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_18_comports_of_module_serial$tools$list_ports_posix( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_18_comports_of_module_serial$tools$list_ports_posix( self );
    }
    else
    {
        PyObject *result = fparse_function_18_comports_of_module_serial$tools$list_ports_posix( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_comports_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_comports_of_module_serial$tools$list_ports_posix,
        dparse_function_10_comports_of_module_serial$tools$list_ports_posix,
        const_str_plain_comports,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_db78a2b87b91c20015a8f066ed1bdc10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_comports_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_comports_of_module_serial$tools$list_ports_posix,
        dparse_function_11_comports_of_module_serial$tools$list_ports_posix,
        const_str_plain_comports,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aceda42b2713a7289a43c0b0d938470c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_comports_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_comports_of_module_serial$tools$list_ports_posix,
        dparse_function_12_comports_of_module_serial$tools$list_ports_posix,
        const_str_plain_comports,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ed079f68b31f53499c4e9b4519171e67,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_comports_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_comports_of_module_serial$tools$list_ports_posix,
        dparse_function_13_comports_of_module_serial$tools$list_ports_posix,
        const_str_plain_comports,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3c6018b5fcbb9a25011f68089928bcad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        const_str_digest_b4f54f793a0fbe6c2ed42eaddf5902d6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_comports_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_comports_of_module_serial$tools$list_ports_posix,
        dparse_function_14_comports_of_module_serial$tools$list_ports_posix,
        const_str_plain_comports,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fa316d09134f14c478b83b9cd3183327,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        const_str_digest_b4f54f793a0fbe6c2ed42eaddf5902d6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_comports_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_comports_of_module_serial$tools$list_ports_posix,
        dparse_function_15_comports_of_module_serial$tools$list_ports_posix,
        const_str_plain_comports,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d0b4b694fc2c19dd09cd62432dc4bdf5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        const_str_digest_b4f54f793a0fbe6c2ed42eaddf5902d6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_comports_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_comports_of_module_serial$tools$list_ports_posix,
        dparse_function_16_comports_of_module_serial$tools$list_ports_posix,
        const_str_plain_comports,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_17731b1693458b0bfb794c4e166ebc8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        const_str_digest_b4f54f793a0fbe6c2ed42eaddf5902d6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_comports_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17_comports_of_module_serial$tools$list_ports_posix,
        dparse_function_17_comports_of_module_serial$tools$list_ports_posix,
        const_str_plain_comports,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9d49219b7278a0e1201758521e96bb14,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        const_str_digest_b4f54f793a0fbe6c2ed42eaddf5902d6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_18_comports_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_18_comports_of_module_serial$tools$list_ports_posix,
        dparse_function_18_comports_of_module_serial$tools$list_ports_posix,
        const_str_plain_comports,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_62cfc0fd6a77270f78bacdbce75bd1a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        const_str_digest_b4f54f793a0fbe6c2ed42eaddf5902d6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_popen_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_popen_of_module_serial$tools$list_ports_posix,
        dparse_function_1_popen_of_module_serial$tools$list_ports_posix,
        const_str_plain_popen,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e888e6c86b99eb8060a4e1842208bfde,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_popen_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_popen_of_module_serial$tools$list_ports_posix,
        dparse_function_2_popen_of_module_serial$tools$list_ports_posix,
        const_str_plain_popen,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d806db7a5b62b28598ac42f318114d57,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_read_line_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_read_line_of_module_serial$tools$list_ports_posix,
        dparse_function_3_read_line_of_module_serial$tools$list_ports_posix,
        const_str_plain_read_line,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_de0fd1d1f12e46bcccb607c904b95af5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        const_str_digest_5d52561e767cf924c37e9734e31689a9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_re_group_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_re_group_of_module_serial$tools$list_ports_posix,
        dparse_function_4_re_group_of_module_serial$tools$list_ports_posix,
        const_str_plain_re_group,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_adc656c773170266f83f864cba8560b1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        const_str_digest_5e7cb0794f8208bd0a50fdae41ba8eed
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_usb_sysfs_hw_string_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_usb_sysfs_hw_string_of_module_serial$tools$list_ports_posix,
        dparse_function_5_usb_sysfs_hw_string_of_module_serial$tools$list_ports_posix,
        const_str_plain_usb_sysfs_hw_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_30cd916ccc7d4a8bcf1c87e0aff258fa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        const_str_digest_2d8bc5c7d4378a343fe521011ecc28b1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_usb_lsusb_string_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_usb_lsusb_string_of_module_serial$tools$list_ports_posix,
        dparse_function_6_usb_lsusb_string_of_module_serial$tools$list_ports_posix,
        const_str_plain_usb_lsusb_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2b3052597b2b63cc67a5b65164c6edd5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_describe_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_describe_of_module_serial$tools$list_ports_posix,
        dparse_function_7_describe_of_module_serial$tools$list_ports_posix,
        const_str_plain_describe,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6f92c5403d119554336acfefa06a434b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        const_str_digest_a7cf5a9555cfdf4d84b065eafc493984
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_hwinfo_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_hwinfo_of_module_serial$tools$list_ports_posix,
        dparse_function_8_hwinfo_of_module_serial$tools$list_ports_posix,
        const_str_plain_hwinfo,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3cf276b59c90303aeb98f7f8aca8a00f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        const_str_digest_0cbbeec9fe941bf7500bb07c7f0dfb1d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_comports_of_module_serial$tools$list_ports_posix(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_comports_of_module_serial$tools$list_ports_posix,
        dparse_function_9_comports_of_module_serial$tools$list_ports_posix,
        const_str_plain_comports,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6d1f496bdecf1be497cf3d4cebdf9053,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_posix,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial$tools$list_ports_posix =
{
    PyModuleDef_HEAD_INIT,
    "serial.tools.list_ports_posix",   /* m_name */
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

MOD_INIT_DECL( serial$tools$list_ports_posix )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial$tools$list_ports_posix );
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

    // puts( "in initserial$tools$list_ports_posix" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial$tools$list_ports_posix = Py_InitModule4(
        "serial.tools.list_ports_posix",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_serial$tools$list_ports_posix = PyModule_Create( &mdef_serial$tools$list_ports_posix );
#endif

    moduledict_serial$tools$list_ports_posix = (PyDictObject *)((PyModuleObject *)module_serial$tools$list_ports_posix)->md_dict;

    assertObject( module_serial$tools$list_ports_posix );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9baf1aa941aff86d6ae068e24720a889, module_serial$tools$list_ports_posix );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_serial$tools$list_ports_posix );

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
    PyObjectTempVariable tmp_try_except_1__unhandled_indicator;
    PyObjectTempVariable tmp_or_1__value_1;
    PyObjectTempVariable tmp_or_1__value_2;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
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
    PyObject *tmp_binop_left_1;
    PyObject *tmp_binop_left_2;
    PyObject *tmp_binop_right_1;
    PyObject *tmp_binop_right_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Eq_5;
    int tmp_cmp_Eq_6;
    int tmp_cmp_Eq_7;
    int tmp_cmp_Eq_8;
    int tmp_cmp_Eq_9;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    bool tmp_is_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    Py_ssize_t tmp_slice_index_upper_3;
    Py_ssize_t tmp_slice_index_upper_4;
    Py_ssize_t tmp_slice_index_upper_5;
    Py_ssize_t tmp_slice_index_upper_6;
    Py_ssize_t tmp_slice_index_upper_7;
    Py_ssize_t tmp_slice_index_upper_8;
    Py_ssize_t tmp_slice_index_upper_9;
    Py_ssize_t tmp_slice_index_upper_10;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    PyObject *tmp_slice_source_5;
    PyObject *tmp_slice_source_6;
    PyObject *tmp_slice_source_7;
    PyObject *tmp_slice_source_8;
    PyObject *tmp_slice_source_9;
    PyObject *tmp_slice_source_10;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_3;
    Py_ssize_t tmp_sliceslicedel_index_lower_4;
    Py_ssize_t tmp_sliceslicedel_index_lower_5;
    Py_ssize_t tmp_sliceslicedel_index_lower_6;
    Py_ssize_t tmp_sliceslicedel_index_lower_7;
    Py_ssize_t tmp_sliceslicedel_index_lower_8;
    Py_ssize_t tmp_sliceslicedel_index_lower_9;
    Py_ssize_t tmp_sliceslicedel_index_lower_10;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_3da33b87e219e6636c62fc3811d81681;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_3080c111207903707d1ea87c2ef21205, module_serial$tools$list_ports_posix );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_serial$tools$list_ports_posix)->md_dict;
    frame_module->f_lineno = 1;
    tmp_assign_source_3 = IMPORT_MODULE( const_str_plain_glob, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_glob, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_serial$tools$list_ports_posix)->md_dict;
    frame_module->f_lineno = 2;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_serial$tools$list_ports_posix)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_serial$tools$list_ports_posix)->md_dict;
    frame_module->f_lineno = 4;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_6 );
    tmp_assign_source_7 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator.object == NULL );
    tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_7 );

    // Tried code
    // Tried block of try/except
    tmp_import_globals_5 = ((PyModuleObject *)module_serial$tools$list_ports_posix)->md_dict;
    frame_module->f_lineno = 7;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_subprocess, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 7;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_subprocess, tmp_assign_source_8 );
    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    tmp_assign_source_9 = Py_False;
    if (tmp_try_except_1__unhandled_indicator.object == NULL)
    {
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
    }
    else
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator.object;
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_9 );
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
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto try_finally_handler_1;
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
    tmp_assign_source_10 = MAKE_FUNCTION_function_1_popen_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        frame_module->f_lineno = 9;
        goto try_finally_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_popen, tmp_assign_source_10 );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_finally_handler_1;
    branch_end_1:;
    try_except_end_1:;
    tmp_compare_left_2 = tmp_try_except_1__unhandled_indicator.object;

    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if (tmp_is_1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_11 = MAKE_FUNCTION_function_2_popen_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_module->f_lineno = 16;
        goto try_finally_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_popen, tmp_assign_source_11 );
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

    tmp_tried_lineno_1 = frame_module->f_lineno;
    tmp_result = tmp_try_except_1__unhandled_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_try_except_1__unhandled_indicator.object );
        tmp_try_except_1__unhandled_indicator.object = NULL;
    }

    assert( tmp_result != false );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 30;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_platform );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_lower );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 30;
    tmp_assign_source_12 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_function_3_read_line_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_13 );

        frame_module->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_read_line, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_function_4_re_group_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_14 );

        frame_module->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_re_group, tmp_assign_source_14 );
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 5;
    tmp_slice_source_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

    if (unlikely( tmp_slice_source_1 == NULL ))
    {
        tmp_slice_source_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
    }

    if ( tmp_slice_source_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294857 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_str_plain_linux;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_module->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_15 = MAKE_FUNCTION_function_5_usb_sysfs_hw_string_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_15 );

        frame_module->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_usb_sysfs_hw_string, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_function_6_usb_lsusb_string_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_16 );

        frame_module->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_usb_lsusb_string, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_function_7_describe_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_17 );

        frame_module->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_describe, tmp_assign_source_17 );
    tmp_assign_source_18 = MAKE_FUNCTION_function_8_hwinfo_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_18 );

        frame_module->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_hwinfo, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_function_9_comports_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_19 );

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_19 );
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

    if (unlikely( tmp_compare_left_4 == NULL ))
    {
        tmp_compare_left_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
    }

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294857 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = const_str_plain_cygwin;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 124;
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
    tmp_assign_source_20 = MAKE_FUNCTION_function_10_comports_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_20 );

        frame_module->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_20 );
    goto branch_end_4;
    branch_no_4:;
    tmp_compare_left_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

    if (unlikely( tmp_compare_left_5 == NULL ))
    {
        tmp_compare_left_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
    }

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294857 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 129;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = const_str_plain_openbsd3;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 129;
        goto frame_exception_exit_1;
    }
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_21 = MAKE_FUNCTION_function_11_comports_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_21 );

        frame_module->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_21 );
    goto branch_end_5;
    branch_no_5:;
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = 3;
    tmp_slice_source_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

    if (unlikely( tmp_slice_source_2 == NULL ))
    {
        tmp_slice_source_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
    }

    if ( tmp_slice_source_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294857 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 134;
        goto try_finally_handler_3;
    }

    tmp_compexpr_left_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 134;
        goto try_finally_handler_3;
    }
    tmp_compexpr_right_1 = const_str_plain_bsd;
    tmp_assign_source_22 = RICH_COMPARE_EQ_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 134;
        goto try_finally_handler_3;
    }
    assert( tmp_or_1__value_2.object == NULL );
    tmp_or_1__value_2.object = tmp_assign_source_22;

    tmp_cond_value_2 = tmp_or_1__value_2.object;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 134;
        goto try_finally_handler_3;
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
    tmp_cond_value_1 = tmp_or_1__value_2.object;

    Py_INCREF( tmp_cond_value_1 );
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_result = tmp_or_1__value_2.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_or_1__value_2.object );
        tmp_or_1__value_2.object = NULL;
    }

    assert( tmp_result != false );
    tmp_cond_value_1 = NULL;
    // Tried code
    tmp_sliceslicedel_index_lower_3 = 0;
    tmp_slice_index_upper_3 = 7;
    tmp_slice_source_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

    if (unlikely( tmp_slice_source_3 == NULL ))
    {
        tmp_slice_source_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
    }

    if ( tmp_slice_source_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294857 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 135;
        goto try_finally_handler_6;
    }

    tmp_compexpr_left_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 135;
        goto try_finally_handler_6;
    }
    tmp_compexpr_right_2 = const_str_plain_freebsd;
    tmp_assign_source_23 = RICH_COMPARE_EQ_NORECURSE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 135;
        goto try_finally_handler_6;
    }
    assert( tmp_or_1__value_1.object == NULL );
    tmp_or_1__value_1.object = tmp_assign_source_23;

    tmp_cond_value_3 = tmp_or_1__value_1.object;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 134;
        goto try_finally_handler_6;
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
    tmp_sliceslicedel_index_lower_4 = 0;
    tmp_slice_index_upper_4 = 7;
    tmp_slice_source_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

    if (unlikely( tmp_slice_source_4 == NULL ))
    {
        tmp_slice_source_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
    }

    if ( tmp_slice_source_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294857 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 136;
        goto try_finally_handler_7;
    }

    tmp_compexpr_left_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_4, tmp_sliceslicedel_index_lower_4, tmp_slice_index_upper_4 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 136;
        goto try_finally_handler_7;
    }
    tmp_compexpr_right_3 = const_str_plain_openbsd;
    tmp_cond_value_1 = RICH_COMPARE_EQ_NORECURSE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 136;
        goto try_finally_handler_7;
    }
    // Final block of try/finally
    // Tried block ends with no exception occured, note that.
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    try_finally_handler_7:;
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

    goto finally_end_2;
    finally_end_2:;
    condexpr_end_2:;
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

    tmp_tried_lineno_2 = frame_module->f_lineno;
    Py_XDECREF( tmp_or_1__value_1.object );
    tmp_or_1__value_1.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_2;
    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_5 != NULL )
    {
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;

        goto try_finally_handler_3;
    }

    goto finally_end_5;
    finally_end_5:;
    condexpr_end_1:;
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

    // Re-reraise as necessary after finally was executed.
    // Reraise exception if any.
    if ( exception_keeper_type_6 != NULL )
    {
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;

        goto try_finally_handler_2;
    }

    goto finally_end_6;
    finally_end_6:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_module->f_lineno = 134;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_24 = MAKE_FUNCTION_function_12_comports_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_24 );

        frame_module->f_lineno = 138;
        goto try_finally_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_24 );
    goto branch_end_6;
    branch_no_6:;
    tmp_sliceslicedel_index_lower_5 = 0;
    tmp_slice_index_upper_5 = 6;
    tmp_slice_source_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

    if (unlikely( tmp_slice_source_5 == NULL ))
    {
        tmp_slice_source_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
    }

    if ( tmp_slice_source_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294857 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 142;
        goto try_finally_handler_2;
    }

    tmp_compare_left_6 = LOOKUP_INDEX_SLICE( tmp_slice_source_5, tmp_sliceslicedel_index_lower_5, tmp_slice_index_upper_5 );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 142;
        goto try_finally_handler_2;
    }
    tmp_compare_right_6 = const_str_plain_darwin;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_6 );

        frame_module->f_lineno = 142;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_compare_left_6 );
    if (tmp_cmp_Eq_4 == 1)
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_25 = MAKE_FUNCTION_function_13_comports_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_25 );

        frame_module->f_lineno = 143;
        goto try_finally_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_25 );
    goto branch_end_7;
    branch_no_7:;
    tmp_sliceslicedel_index_lower_6 = 0;
    tmp_slice_index_upper_6 = 6;
    tmp_slice_source_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

    if (unlikely( tmp_slice_source_6 == NULL ))
    {
        tmp_slice_source_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
    }

    if ( tmp_slice_source_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294857 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 148;
        goto try_finally_handler_2;
    }

    tmp_compare_left_7 = LOOKUP_INDEX_SLICE( tmp_slice_source_6, tmp_sliceslicedel_index_lower_6, tmp_slice_index_upper_6 );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto try_finally_handler_2;
    }
    tmp_compare_right_7 = const_str_plain_netbsd;
    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        frame_module->f_lineno = 148;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_compare_left_7 );
    if (tmp_cmp_Eq_5 == 1)
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_26 = MAKE_FUNCTION_function_14_comports_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_26 );

        frame_module->f_lineno = 149;
        goto try_finally_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_26 );
    goto branch_end_8;
    branch_no_8:;
    tmp_sliceslicedel_index_lower_7 = 0;
    tmp_slice_index_upper_7 = 4;
    tmp_slice_source_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

    if (unlikely( tmp_slice_source_7 == NULL ))
    {
        tmp_slice_source_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
    }

    if ( tmp_slice_source_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294857 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 154;
        goto try_finally_handler_2;
    }

    tmp_compare_left_8 = LOOKUP_INDEX_SLICE( tmp_slice_source_7, tmp_sliceslicedel_index_lower_7, tmp_slice_index_upper_7 );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 154;
        goto try_finally_handler_2;
    }
    tmp_compare_right_8 = const_str_plain_irix;
    tmp_cmp_Eq_6 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_6 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        frame_module->f_lineno = 154;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_compare_left_8 );
    if (tmp_cmp_Eq_6 == 1)
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assign_source_27 = MAKE_FUNCTION_function_15_comports_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_27 );

        frame_module->f_lineno = 155;
        goto try_finally_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_27 );
    goto branch_end_9;
    branch_no_9:;
    tmp_sliceslicedel_index_lower_8 = 0;
    tmp_slice_index_upper_8 = 2;
    tmp_slice_source_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

    if (unlikely( tmp_slice_source_8 == NULL ))
    {
        tmp_slice_source_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
    }

    if ( tmp_slice_source_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294857 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 160;
        goto try_finally_handler_2;
    }

    tmp_compare_left_9 = LOOKUP_INDEX_SLICE( tmp_slice_source_8, tmp_sliceslicedel_index_lower_8, tmp_slice_index_upper_8 );
    if ( tmp_compare_left_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 160;
        goto try_finally_handler_2;
    }
    tmp_compare_right_9 = const_str_plain_hp;
    tmp_cmp_Eq_7 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_7 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_9 );

        frame_module->f_lineno = 160;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_compare_left_9 );
    if (tmp_cmp_Eq_7 == 1)
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_28 = MAKE_FUNCTION_function_16_comports_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_28 );

        frame_module->f_lineno = 161;
        goto try_finally_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_28 );
    goto branch_end_10;
    branch_no_10:;
    tmp_sliceslicedel_index_lower_9 = 0;
    tmp_slice_index_upper_9 = 5;
    tmp_slice_source_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

    if (unlikely( tmp_slice_source_9 == NULL ))
    {
        tmp_slice_source_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
    }

    if ( tmp_slice_source_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294857 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 166;
        goto try_finally_handler_2;
    }

    tmp_compare_left_10 = LOOKUP_INDEX_SLICE( tmp_slice_source_9, tmp_sliceslicedel_index_lower_9, tmp_slice_index_upper_9 );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 166;
        goto try_finally_handler_2;
    }
    tmp_compare_right_10 = const_str_plain_sunos;
    tmp_cmp_Eq_8 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Eq_8 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_10 );

        frame_module->f_lineno = 166;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_compare_left_10 );
    if (tmp_cmp_Eq_8 == 1)
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assign_source_29 = MAKE_FUNCTION_function_17_comports_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_29 );

        frame_module->f_lineno = 167;
        goto try_finally_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_29 );
    goto branch_end_11;
    branch_no_11:;
    tmp_sliceslicedel_index_lower_10 = 0;
    tmp_slice_index_upper_10 = 3;
    tmp_slice_source_10 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_plat );

    if (unlikely( tmp_slice_source_10 == NULL ))
    {
        tmp_slice_source_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_plat );
    }

    if ( tmp_slice_source_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 294857 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 172;
        goto try_finally_handler_2;
    }

    tmp_compare_left_11 = LOOKUP_INDEX_SLICE( tmp_slice_source_10, tmp_sliceslicedel_index_lower_10, tmp_slice_index_upper_10 );
    if ( tmp_compare_left_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 172;
        goto try_finally_handler_2;
    }
    tmp_compare_right_11 = const_str_plain_aix;
    tmp_cmp_Eq_9 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Eq_9 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_11 );

        frame_module->f_lineno = 172;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_compare_left_11 );
    if (tmp_cmp_Eq_9 == 1)
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_30 = MAKE_FUNCTION_function_18_comports_of_module_serial$tools$list_ports_posix(  );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_30 );

        frame_module->f_lineno = 173;
        goto try_finally_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_30 );
    goto branch_end_12;
    branch_no_12:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 180;
        goto try_finally_handler_2;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_stderr );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 180;
        goto try_finally_handler_2;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_write );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 180;
        goto try_finally_handler_2;
    }
    tmp_binop_left_1 = const_str_digest_6118a4aba35de126b33269bf0105f494;
    tmp_binop_right_1 = PyTuple_New( 3 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 191;
        goto try_finally_handler_2;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_platform );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_binop_right_1 );

        frame_module->f_lineno = 191;
        goto try_finally_handler_2;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 0, tmp_tuple_element_1 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 191;
        goto try_finally_handler_2;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_name );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_binop_right_1 );

        frame_module->f_lineno = 191;
        goto try_finally_handler_2;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 1, tmp_tuple_element_1 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_serial );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serial );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_binop_right_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 45662 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 191;
        goto try_finally_handler_2;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_VERSION );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_binop_right_1 );

        frame_module->f_lineno = 191;
        goto try_finally_handler_2;
    }
    PyTuple_SET_ITEM( tmp_binop_right_1, 2, tmp_tuple_element_1 );
    tmp_call_arg_element_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_1, tmp_binop_right_1 );
    Py_DECREF( tmp_binop_right_1 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_module->f_lineno = 191;
        goto try_finally_handler_2;
    }
    frame_module->f_lineno = 191;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 191;
        goto try_finally_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_binop_left_2 = const_str_digest_ff216eaf21244ea79ffa794370aa703e;
    tmp_binop_right_2 = PyTuple_New( 1 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_posix, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_binop_right_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6467 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 192;
        goto try_finally_handler_2;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_name );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_binop_right_2 );

        frame_module->f_lineno = 192;
        goto try_finally_handler_2;
    }
    PyTuple_SET_ITEM( tmp_binop_right_2, 0, tmp_tuple_element_2 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_binop_left_2, tmp_binop_right_2 );
    Py_DECREF( tmp_binop_right_2 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 192;
        goto try_finally_handler_2;
    }
    frame_module->f_lineno = 192;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, tmp_make_exception_arg_1 );
    Py_DECREF( tmp_make_exception_arg_1 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 192;
        goto try_finally_handler_2;
    }
    exception_type = tmp_raise_type_1;
    frame_module->f_lineno = 192;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_finally_handler_2;
    branch_end_12:;
    branch_end_11:;
    branch_end_10:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
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

    tmp_tried_lineno_3 = frame_module->f_lineno;
    Py_XDECREF( tmp_or_1__value_2.object );
    tmp_or_1__value_2.object = NULL;

    frame_module->f_lineno = tmp_tried_lineno_3;
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
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;

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

    return MOD_RETURN_VALUE( module_serial$tools$list_ports_posix );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
