// Generated code for Python source for module 'pykeyboard.windows'
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

// The _module_pykeyboard$windows is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_pykeyboard$windows;
PyDictObject *moduledict_pykeyboard$windows;

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
extern PyObject *const_int_pos_9;
extern PyObject *const_str_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_float_0_01;
extern PyObject *const_str_chr_42;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_F1;
static PyObject *const_str_plain_F2;
static PyObject *const_str_plain_F3;
static PyObject *const_str_plain_F4;
extern PyObject *const_str_plain_Up;
static PyObject *const_str_plain_WM;
static PyObject *const_str_plain_hm;
static PyObject *const_str_plain_Add;
extern PyObject *const_str_plain_End;
extern PyObject *const_str_plain_Tab;
extern PyObject *const_str_plain_run;
extern PyObject *const_str_plain_Down;
extern PyObject *const_str_plain_Home;
extern PyObject *const_str_plain_Left;
extern PyObject *const_str_plain_Menu;
extern PyObject *const_str_plain_Next;
extern PyObject *const_str_plain_base;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_stop;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_Begin;
static PyObject *const_str_plain_Enter;
static PyObject *const_str_plain_Equal;
static PyObject *const_str_plain_KeyID;
static PyObject *const_str_plain_Lmenu;
extern PyObject *const_str_plain_Prior;
extern PyObject *const_str_plain_Right;
static PyObject *const_str_plain_Rmenu;
extern PyObject *const_str_plain_Shift;
extern PyObject *const_str_plain_Space;
static PyObject *const_str_plain_VK_F1;
static PyObject *const_str_plain_VK_F2;
static PyObject *const_str_plain_VK_F3;
static PyObject *const_str_plain_VK_F4;
static PyObject *const_str_plain_VK_F5;
static PyObject *const_str_plain_VK_F6;
static PyObject *const_str_plain_VK_F7;
static PyObject *const_str_plain_VK_F8;
static PyObject *const_str_plain_VK_F9;
static PyObject *const_str_plain_VK_UP;
extern PyObject *const_str_plain_event;
extern PyObject *const_str_plain_reply;
extern PyObject *const_str_plain_sleep;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_Delete;
static PyObject *const_str_plain_Divide;
static PyObject *const_str_plain_GetKey;
extern PyObject *const_str_plain_Insert;
static PyObject *const_str_plain_KeyAll;
static PyObject *const_str_plain_Lshift;
static PyObject *const_str_plain_Rshift;
static PyObject *const_str_plain_VK_ADD;
static PyObject *const_str_plain_VK_END;
static PyObject *const_str_plain_VK_F10;
static PyObject *const_str_plain_VK_F11;
static PyObject *const_str_plain_VK_F12;
static PyObject *const_str_plain_VK_F13;
static PyObject *const_str_plain_VK_F14;
static PyObject *const_str_plain_VK_F15;
static PyObject *const_str_plain_VK_F16;
static PyObject *const_str_plain_VK_F17;
static PyObject *const_str_plain_VK_F18;
static PyObject *const_str_plain_VK_F19;
static PyObject *const_str_plain_VK_F20;
static PyObject *const_str_plain_VK_F21;
static PyObject *const_str_plain_VK_F22;
static PyObject *const_str_plain_VK_F23;
static PyObject *const_str_plain_VK_F24;
static PyObject *const_str_plain_VK_PA1;
static PyObject *const_str_plain_VK_TAB;
extern PyObject *const_str_plain_ctypes;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_l_keys;
static PyObject *const_str_plain_pyHook;
extern PyObject *const_str_plain_r_keys;
static PyObject *const_str_plain_states;
extern PyObject *const_str_plain_up_key;
static PyObject *const_str_plain_Capital;
static PyObject *const_str_plain_Decimal;
static PyObject *const_str_plain_Message;
extern PyObject *const_str_plain_Page_Up;
static PyObject *const_str_plain_VK_APPS;
static PyObject *const_str_plain_VK_ATTN;
static PyObject *const_str_plain_VK_BACK;
static PyObject *const_str_plain_VK_DOWN;
static PyObject *const_str_plain_VK_HELP;
static PyObject *const_str_plain_VK_HOME;
static PyObject *const_str_plain_VK_KANA;
static PyObject *const_str_plain_VK_LEFT;
static PyObject *const_str_plain_VK_LWIN;
static PyObject *const_str_plain_VK_MENU;
static PyObject *const_str_plain_VK_NEXT;
static PyObject *const_str_plain_VK_PLAY;
static PyObject *const_str_plain_VK_RWIN;
static PyObject *const_str_plain_VK_ZOOM;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___str__;
extern PyObject *const_str_plain_alt_key;
extern PyObject *const_str_plain_capture;
static PyObject *const_str_plain_char_vk;
extern PyObject *const_str_plain_end_key;
extern PyObject *const_str_plain_handler;
static PyObject *const_str_plain_pa1_key;
extern PyObject *const_str_plain_shifted;
extern PyObject *const_str_plain_tab_key;
extern PyObject *const_str_plain_windows;
static PyObject *const_str_plain_Multiply;
static PyObject *const_str_plain_SYSKEYUP;
static PyObject *const_str_plain_Subtract;
static PyObject *const_str_plain_VK_CLEAR;
static PyObject *const_str_plain_VK_CRSEL;
static PyObject *const_str_plain_VK_EREOF;
static PyObject *const_str_plain_VK_EXSEL;
static PyObject *const_str_plain_VK_FINAL;
static PyObject *const_str_plain_VK_HANJA;
static PyObject *const_str_plain_VK_JUNJA;
static PyObject *const_str_plain_VK_KANJI;
static PyObject *const_str_plain_VK_LMENU;
static PyObject *const_str_plain_VK_PAUSE;
static PyObject *const_str_plain_VK_PRINT;
static PyObject *const_str_plain_VK_PRIOR;
static PyObject *const_str_plain_VK_RIGHT;
static PyObject *const_str_plain_VK_RMENU;
static PyObject *const_str_plain_VK_SHIFT;
static PyObject *const_str_plain_VK_SPACE;
static PyObject *const_str_plain_WM_KEYUP;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_apps_key;
static PyObject *const_str_plain_attn_key;
extern PyObject *const_str_plain_down_key;
extern PyObject *const_str_plain_find_key;
extern PyObject *const_str_plain_help_key;
extern PyObject *const_str_plain_home_key;
extern PyObject *const_str_plain_kana_key;
extern PyObject *const_str_plain_left_key;
extern PyObject *const_str_plain_menu_key;
extern PyObject *const_str_plain_next_key;
static PyObject *const_str_plain_play_key;
extern PyObject *const_str_plain_redo_key;
extern PyObject *const_str_plain_undo_key;
static PyObject *const_str_plain_win32api;
static PyObject *const_str_plain_win32con;
static PyObject *const_str_plain_zoom_key;
extern PyObject *const_str_plain_Page_Down;
static PyObject *const_str_plain_Separator;
static PyObject *const_str_plain_VK_ACCEPT;
static PyObject *const_str_plain_VK_CANCEL;
static PyObject *const_str_plain_VK_DELETE;
static PyObject *const_str_plain_VK_DIVIDE;
static PyObject *const_str_plain_VK_ESCAPE;
static PyObject *const_str_plain_VK_HANGUL;
static PyObject *const_str_plain_VK_INSERT;
static PyObject *const_str_plain_VK_LSHIFT;
static PyObject *const_str_plain_VK_NONAME;
static PyObject *const_str_plain_VK_RETURN;
static PyObject *const_str_plain_VK_RSHIFT;
static PyObject *const_str_plain_VK_SCROLL;
static PyObject *const_str_plain_VK_SELECT;
static PyObject *const_str_plain_VkKeyScan;
extern PyObject *const_str_plain_alt_l_key;
extern PyObject *const_str_plain_alt_r_key;
static PyObject *const_str_plain_alt_state;
extern PyObject *const_str_plain_begin_key;
extern PyObject *const_str_plain_break_key;
extern PyObject *const_str_plain_character;
extern PyObject *const_str_plain_clear_key;
static PyObject *const_str_plain_crsel_key;
extern PyObject *const_str_plain_enter_key;
static PyObject *const_str_plain_ereof_key;
static PyObject *const_str_plain_exsel_key;
extern PyObject *const_str_plain_final_key;
extern PyObject *const_str_plain_hanja_key;
extern PyObject *const_str_plain_kanji_key;
extern PyObject *const_str_plain_pause_key;
extern PyObject *const_str_plain_press_key;
extern PyObject *const_str_plain_print_key;
extern PyObject *const_str_plain_prior_key;
static PyObject *const_str_plain_pythoncom;
extern PyObject *const_str_plain_right_key;
extern PyObject *const_str_plain_shift_key;
static PyObject *const_str_plain_space_key;
extern PyObject *const_str_plain_PyKeyboard;
static PyObject *const_str_plain_VK_CAPITAL;
static PyObject *const_str_plain_VK_CONTROL;
static PyObject *const_str_plain_VK_CONVERT;
static PyObject *const_str_plain_VK_DECIMAL;
static PyObject *const_str_plain_VK_EXECUTE;
static PyObject *const_str_plain_VK_HANGEUL;
static PyObject *const_str_plain_VK_NUMLOCK;
static PyObject *const_str_plain_VK_NUMPAD0;
static PyObject *const_str_plain_VK_NUMPAD1;
static PyObject *const_str_plain_VK_NUMPAD2;
static PyObject *const_str_plain_VK_NUMPAD3;
static PyObject *const_str_plain_VK_NUMPAD4;
static PyObject *const_str_plain_VK_NUMPAD5;
static PyObject *const_str_plain_VK_NUMPAD6;
static PyObject *const_str_plain_VK_NUMPAD7;
static PyObject *const_str_plain_VK_NUMPAD8;
static PyObject *const_str_plain_VK_NUMPAD9;
static PyObject *const_str_plain_WM_KEYDOWN;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain__key_press;
extern PyObject *const_str_plain_accept_key;
extern PyObject *const_str_plain_cancel_key;
extern PyObject *const_str_plain_delete_key;
extern PyObject *const_str_plain_escape_key;
extern PyObject *const_str_plain_hangul_key;
extern PyObject *const_str_plain_insert_key;
extern PyObject *const_str_plain_junjua_key;
extern PyObject *const_str_plain_meta_l_key;
extern PyObject *const_str_plain_meta_r_key;
static PyObject *const_str_plain_noname_key;
extern PyObject *const_str_plain_return_key;
extern PyObject *const_str_plain_select_key;
static PyObject *const_str_plain_HookManager;
static PyObject *const_str_plain_VK_LCONTROL;
static PyObject *const_str_plain_VK_MULTIPLY;
static PyObject *const_str_plain_VK_RCONTROL;
static PyObject *const_str_plain_VK_SNAPSHOT;
static PyObject *const_str_plain_VK_SUBTRACT;
extern PyObject *const_str_plain_capital_key;
extern PyObject *const_str_plain_control_key;
extern PyObject *const_str_plain_convert_key;
static PyObject *const_str_plain_escape_code;
extern PyObject *const_str_plain_execute_key;
extern PyObject *const_str_plain_hangeul_key;
extern PyObject *const_str_plain_hyper_l_key;
extern PyObject *const_str_plain_hyper_r_key;
extern PyObject *const_str_plain_key_release;
static PyObject *const_str_plain_keybd_event;
extern PyObject *const_str_plain_keypad_keys;
extern PyObject *const_str_plain_numpad_keys;
extern PyObject *const_str_plain_page_up_key;
extern PyObject *const_str_plain_release_key;
extern PyObject *const_str_plain_shift_l_key;
extern PyObject *const_str_plain_shift_r_key;
static PyObject *const_str_plain_shift_state;
extern PyObject *const_str_plain_super_l_key;
extern PyObject *const_str_plain_super_r_key;
extern PyObject *const_str_plain_sys_req_key;
extern PyObject *const_tuple_str_empty_tuple;
static PyObject *const_str_plain_HookKeyboard;
static PyObject *const_str_plain_SupportError;
static PyObject *const_str_plain_VK_OEM_CLEAR;
static PyObject *const_str_plain_VK_SEPARATOR;
static PyObject *const_str_plain_VK_VOLUME_UP;
static PyObject *const_str_plain__key_release;
extern PyObject *const_str_plain_linefeed_key;
extern PyObject *const_str_plain_num_lock_key;
extern PyObject *const_str_plain_snapshot_key;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain_HookConstants;
static PyObject *const_str_plain_VK_MODECHANGE;
static PyObject *const_str_plain_VK_NONCONVERT;
static PyObject *const_str_plain_VK_PROCESSKEY;
static PyObject *const_str_plain_WM_SYSKEYDOWN;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_backspace_key;
extern PyObject *const_str_plain_caps_lock_key;
extern PyObject *const_str_plain_control_l_key;
extern PyObject *const_str_plain_control_r_key;
extern PyObject *const_str_plain_function_keys;
static PyObject *const_str_plain_oem_clear_key;
extern PyObject *const_str_plain_page_down_key;
extern PyObject *const_str_plain_volume_up_key;
extern PyObject *const_str_plain_windows_l_key;
extern PyObject *const_str_plain_windows_r_key;
extern PyObject *const_str_plain_PyKeyboardMeta;
static PyObject *const_str_plain_UnhookKeyboard;
static PyObject *const_str_plain_VK_VOLUME_DOWN;
static PyObject *const_str_plain_VK_VOLUME_MUTE;
extern PyObject *const_str_plain_modechange_key;
extern PyObject *const_str_plain_nonconvert_key;
static PyObject *const_str_plain_processkey_key;
static PyObject *const_list_int_pos_1_int_0_list;
static PyObject *const_str_plain_KEYEVENTF_KEYUP;
extern PyObject *const_str_plain_PyKeyboardEvent;
static PyObject *const_str_plain_VK_BROWSER_BACK;
extern PyObject *const_str_plain_is_char_shifted;
extern PyObject *const_str_plain_mode_switch_key;
extern PyObject *const_str_plain_scroll_lock_key;
extern PyObject *const_str_plain_volume_down_key;
extern PyObject *const_str_plain_volume_mute_key;
static PyObject *const_str_plain_browser_back_key;
extern PyObject *const_str_plain_print_screen_key;
static PyObject *const_str_plain_toggle_alt_state;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_script_switch_key;
static PyObject *const_str_plain_VK_BROWSER_FORWARD;
static PyObject *const_str_plain_toggle_shift_state;
static PyObject *const_str_plain_PumpWaitingMessages;
extern PyObject *const_str_plain_PyKeyboardEventMeta;
static PyObject *const_str_plain_VK_MEDIA_NEXT_TRACK;
static PyObject *const_str_plain_VK_MEDIA_PLAY_PAUSE;
static PyObject *const_str_plain_VK_MEDIA_PREV_TRACK;
static PyObject *const_str_plain_browser_forward_key;
static PyObject *const_list_int_pos_2_none_int_0_list;
static PyObject *const_str_plain_media_next_track_key;
extern PyObject *const_str_plain_media_play_pause_key;
static PyObject *const_str_plain_media_prev_track_key;
extern PyObject *const_str_plain_special_key_assignment;
static PyObject *const_list_680e49127fd1969fec06bde96e9ded36_list;
static PyObject *const_list_dc472e9501fdc5a3a8696cd87daa6c57_list;
extern PyObject *const_tuple_str_plain_self_str_plain_event_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_reply_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
static PyObject *const_str_digest_02aedd624c8ff354e1ecf13b591869f5;
static PyObject *const_str_digest_304b294387f880a85f802114650f74f9;
static PyObject *const_str_digest_363635719b6bc144bc9d42955626ab7b;
static PyObject *const_str_digest_430f294c53e5fe2cdd661c1597267a61;
static PyObject *const_str_digest_7496ce02796dc12770c69aa72858be28;
static PyObject *const_str_digest_77e8f90c2593181743d95d3e93e26d38;
static PyObject *const_str_digest_79a3b804ad0ad8a340b82b6ee9b4027b;
extern PyObject *const_str_digest_81131154dd8af0cb400c481a2c6e6bc0;
static PyObject *const_str_digest_8d62b11565e4be9b03a0543777df1786;
static PyObject *const_str_digest_8f8a0d293c0f0029c0df8b44d84a2605;
static PyObject *const_str_digest_c82f3033fe58beddbe2080652c7e6f8c;
static PyObject *const_str_digest_d866d0e1730b8837c21bfc4ddd57e540;
extern PyObject *const_str_digest_ede8e273ef0cc55d613221af7d241c77;
static PyObject *const_str_digest_f44127ac7deee22c8e2fdeefb8c8d1f3;
extern PyObject *const_str_digest_f903992cc3a359806bda4e6e222f2cd9;
static PyObject *const_tuple_str_plain_self_str_plain_pyHook_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_states_tuple;
static PyObject *const_tuple_74449dbff28f3435473d87d30be64f40_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_character_tuple;
static PyObject *const_list_str_plain_Menu_str_plain_Lmenu_str_plain_Rmenu_list;
static PyObject *const_list_none_none_none_none_none_none_none_none_none_none_none_list;
extern PyObject *const_tuple_str_plain_PyKeyboardMeta_str_plain_PyKeyboardEventMeta_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_F1 = UNSTREAM_STRING( &constant_bin[ 233642 ], 2, 1 );
    const_str_plain_F2 = UNSTREAM_STRING( &constant_bin[ 125769 ], 2, 1 );
    const_str_plain_F3 = UNSTREAM_STRING( &constant_bin[ 233710 ], 2, 1 );
    const_str_plain_F4 = UNSTREAM_STRING( &constant_bin[ 233744 ], 2, 1 );
    const_str_plain_WM = UNSTREAM_STRING( &constant_bin[ 2514 ], 2, 1 );
    const_str_plain_hm = UNSTREAM_STRING( &constant_bin[ 239086 ], 2, 1 );
    const_str_plain_Add = UNSTREAM_STRING( &constant_bin[ 230668 ], 3, 1 );
    const_str_plain_Enter = UNSTREAM_STRING( &constant_bin[ 32250 ], 5, 1 );
    const_str_plain_Equal = UNSTREAM_STRING( &constant_bin[ 186985 ], 5, 1 );
    const_str_plain_KeyID = UNSTREAM_STRING( &constant_bin[ 2082422 ], 5, 1 );
    const_str_plain_Lmenu = UNSTREAM_STRING( &constant_bin[ 2082427 ], 5, 1 );
    const_str_plain_Rmenu = UNSTREAM_STRING( &constant_bin[ 2082432 ], 5, 1 );
    const_str_plain_VK_F1 = UNSTREAM_STRING( &constant_bin[ 233639 ], 5, 1 );
    const_str_plain_VK_F2 = UNSTREAM_STRING( &constant_bin[ 233673 ], 5, 1 );
    const_str_plain_VK_F3 = UNSTREAM_STRING( &constant_bin[ 233707 ], 5, 1 );
    const_str_plain_VK_F4 = UNSTREAM_STRING( &constant_bin[ 233741 ], 5, 1 );
    const_str_plain_VK_F5 = UNSTREAM_STRING( &constant_bin[ 233775 ], 5, 1 );
    const_str_plain_VK_F6 = UNSTREAM_STRING( &constant_bin[ 233809 ], 5, 1 );
    const_str_plain_VK_F7 = UNSTREAM_STRING( &constant_bin[ 233843 ], 5, 1 );
    const_str_plain_VK_F8 = UNSTREAM_STRING( &constant_bin[ 233877 ], 5, 1 );
    const_str_plain_VK_F9 = UNSTREAM_STRING( &constant_bin[ 233911 ], 5, 1 );
    const_str_plain_VK_UP = UNSTREAM_STRING( &constant_bin[ 232464 ], 5, 1 );
    const_str_plain_Divide = UNSTREAM_STRING( &constant_bin[ 187255 ], 6, 1 );
    const_str_plain_GetKey = UNSTREAM_STRING( &constant_bin[ 36903 ], 6, 1 );
    const_str_plain_KeyAll = UNSTREAM_STRING( &constant_bin[ 2082437 ], 6, 1 );
    const_str_plain_Lshift = UNSTREAM_STRING( &constant_bin[ 2082443 ], 6, 1 );
    const_str_plain_Rshift = UNSTREAM_STRING( &constant_bin[ 2082449 ], 6, 1 );
    const_str_plain_VK_ADD = UNSTREAM_STRING( &constant_bin[ 233446 ], 6, 1 );
    const_str_plain_VK_END = UNSTREAM_STRING( &constant_bin[ 232607 ], 6, 1 );
    const_str_plain_VK_F10 = UNSTREAM_STRING( &constant_bin[ 233945 ], 6, 1 );
    const_str_plain_VK_F11 = UNSTREAM_STRING( &constant_bin[ 233980 ], 6, 1 );
    const_str_plain_VK_F12 = UNSTREAM_STRING( &constant_bin[ 234015 ], 6, 1 );
    const_str_plain_VK_F13 = UNSTREAM_STRING( &constant_bin[ 234050 ], 6, 1 );
    const_str_plain_VK_F14 = UNSTREAM_STRING( &constant_bin[ 234085 ], 6, 1 );
    const_str_plain_VK_F15 = UNSTREAM_STRING( &constant_bin[ 234120 ], 6, 1 );
    const_str_plain_VK_F16 = UNSTREAM_STRING( &constant_bin[ 234155 ], 6, 1 );
    const_str_plain_VK_F17 = UNSTREAM_STRING( &constant_bin[ 234190 ], 6, 1 );
    const_str_plain_VK_F18 = UNSTREAM_STRING( &constant_bin[ 234225 ], 6, 1 );
    const_str_plain_VK_F19 = UNSTREAM_STRING( &constant_bin[ 234260 ], 6, 1 );
    const_str_plain_VK_F20 = UNSTREAM_STRING( &constant_bin[ 234295 ], 6, 1 );
    const_str_plain_VK_F21 = UNSTREAM_STRING( &constant_bin[ 234330 ], 6, 1 );
    const_str_plain_VK_F22 = UNSTREAM_STRING( &constant_bin[ 234365 ], 6, 1 );
    const_str_plain_VK_F23 = UNSTREAM_STRING( &constant_bin[ 234400 ], 6, 1 );
    const_str_plain_VK_F24 = UNSTREAM_STRING( &constant_bin[ 234435 ], 6, 1 );
    const_str_plain_VK_PA1 = UNSTREAM_STRING( &constant_bin[ 234898 ], 6, 1 );
    const_str_plain_VK_TAB = UNSTREAM_STRING( &constant_bin[ 231253 ], 6, 1 );
    const_str_plain_pyHook = UNSTREAM_STRING( &constant_bin[ 235382 ], 6, 1 );
    const_str_plain_states = UNSTREAM_STRING( &constant_bin[ 183073 ], 6, 1 );
    const_str_plain_Capital = UNSTREAM_STRING( &constant_bin[ 2082455 ], 7, 1 );
    const_str_plain_Decimal = UNSTREAM_STRING( &constant_bin[ 649181 ], 7, 1 );
    const_str_plain_Message = UNSTREAM_STRING( &constant_bin[ 24354 ], 7, 1 );
    const_str_plain_VK_APPS = UNSTREAM_STRING( &constant_bin[ 232980 ], 7, 1 );
    const_str_plain_VK_ATTN = UNSTREAM_STRING( &constant_bin[ 234641 ], 7, 1 );
    const_str_plain_VK_BACK = UNSTREAM_STRING( &constant_bin[ 231217 ], 7, 1 );
    const_str_plain_VK_DOWN = UNSTREAM_STRING( &constant_bin[ 232498 ], 7, 1 );
    const_str_plain_VK_HELP = UNSTREAM_STRING( &constant_bin[ 232872 ], 7, 1 );
    const_str_plain_VK_HOME = UNSTREAM_STRING( &constant_bin[ 232428 ], 7, 1 );
    const_str_plain_VK_KANA = UNSTREAM_STRING( &constant_bin[ 231858 ], 7, 1 );
    const_str_plain_VK_LEFT = UNSTREAM_STRING( &constant_bin[ 232534 ], 7, 1 );
    const_str_plain_VK_LWIN = UNSTREAM_STRING( &constant_bin[ 232908 ], 7, 1 );
    const_str_plain_VK_MENU = UNSTREAM_STRING( &constant_bin[ 231595 ], 7, 1 );
    const_str_plain_VK_NEXT = UNSTREAM_STRING( &constant_bin[ 232392 ], 7, 1 );
    const_str_plain_VK_PLAY = UNSTREAM_STRING( &constant_bin[ 234788 ], 7, 1 );
    const_str_plain_VK_RWIN = UNSTREAM_STRING( &constant_bin[ 232944 ], 7, 1 );
    const_str_plain_VK_ZOOM = UNSTREAM_STRING( &constant_bin[ 234824 ], 7, 1 );
    const_str_plain_char_vk = UNSTREAM_STRING( &constant_bin[ 2082462 ], 7, 1 );
    const_str_plain_pa1_key = UNSTREAM_STRING( &constant_bin[ 2082469 ], 7, 1 );
    const_str_plain_Multiply = UNSTREAM_STRING( &constant_bin[ 1323493 ], 8, 1 );
    const_str_plain_SYSKEYUP = UNSTREAM_STRING( &constant_bin[ 2082476 ], 8, 1 );
    const_str_plain_Subtract = UNSTREAM_STRING( &constant_bin[ 369002 ], 8, 1 );
    const_str_plain_VK_CLEAR = UNSTREAM_STRING( &constant_bin[ 231288 ], 8, 1 );
    const_str_plain_VK_CRSEL = UNSTREAM_STRING( &constant_bin[ 234677 ], 8, 1 );
    const_str_plain_VK_EREOF = UNSTREAM_STRING( &constant_bin[ 234751 ], 8, 1 );
    const_str_plain_VK_EXSEL = UNSTREAM_STRING( &constant_bin[ 234714 ], 8, 1 );
    const_str_plain_VK_FINAL = UNSTREAM_STRING( &constant_bin[ 232008 ], 8, 1 );
    const_str_plain_VK_HANJA = UNSTREAM_STRING( &constant_bin[ 232045 ], 8, 1 );
    const_str_plain_VK_JUNJA = UNSTREAM_STRING( &constant_bin[ 231971 ], 8, 1 );
    const_str_plain_VK_KANJI = UNSTREAM_STRING( &constant_bin[ 232082 ], 8, 1 );
    const_str_plain_VK_LMENU = UNSTREAM_STRING( &constant_bin[ 231631 ], 8, 1 );
    const_str_plain_VK_PAUSE = UNSTREAM_STRING( &constant_bin[ 231705 ], 8, 1 );
    const_str_plain_VK_PRINT = UNSTREAM_STRING( &constant_bin[ 232680 ], 8, 1 );
    const_str_plain_VK_PRIOR = UNSTREAM_STRING( &constant_bin[ 232355 ], 8, 1 );
    const_str_plain_VK_RIGHT = UNSTREAM_STRING( &constant_bin[ 232570 ], 8, 1 );
    const_str_plain_VK_RMENU = UNSTREAM_STRING( &constant_bin[ 231668 ], 8, 1 );
    const_str_plain_VK_SHIFT = UNSTREAM_STRING( &constant_bin[ 231363 ], 8, 1 );
    const_str_plain_VK_SPACE = UNSTREAM_STRING( &constant_bin[ 232318 ], 8, 1 );
    const_str_plain_WM_KEYUP = UNSTREAM_STRING( &constant_bin[ 2082484 ], 8, 1 );
    const_str_plain_attn_key = UNSTREAM_STRING( &constant_bin[ 2082492 ], 8, 1 );
    const_str_plain_play_key = UNSTREAM_STRING( &constant_bin[ 2082500 ], 8, 1 );
    const_str_plain_win32api = UNSTREAM_STRING( &constant_bin[ 231083 ], 8, 1 );
    const_str_plain_win32con = UNSTREAM_STRING( &constant_bin[ 2082508 ], 8, 1 );
    const_str_plain_zoom_key = UNSTREAM_STRING( &constant_bin[ 2082516 ], 8, 1 );
    const_str_plain_Separator = UNSTREAM_STRING( &constant_bin[ 454083 ], 9, 1 );
    const_str_plain_VK_ACCEPT = UNSTREAM_STRING( &constant_bin[ 232200 ], 9, 1 );
    const_str_plain_VK_CANCEL = UNSTREAM_STRING( &constant_bin[ 234470 ], 9, 1 );
    const_str_plain_VK_DELETE = UNSTREAM_STRING( &constant_bin[ 232834 ], 9, 1 );
    const_str_plain_VK_DIVIDE = UNSTREAM_STRING( &constant_bin[ 233562 ], 9, 1 );
    const_str_plain_VK_ESCAPE = UNSTREAM_STRING( &constant_bin[ 232280 ], 9, 1 );
    const_str_plain_VK_HANGUL = UNSTREAM_STRING( &constant_bin[ 231933 ], 9, 1 );
    const_str_plain_VK_INSERT = UNSTREAM_STRING( &constant_bin[ 232796 ], 9, 1 );
    const_str_plain_VK_LSHIFT = UNSTREAM_STRING( &constant_bin[ 231400 ], 9, 1 );
    const_str_plain_VK_NONAME = UNSTREAM_STRING( &constant_bin[ 234860 ], 9, 1 );
    const_str_plain_VK_RETURN = UNSTREAM_STRING( &constant_bin[ 231325 ], 9, 1 );
    const_str_plain_VK_RSHIFT = UNSTREAM_STRING( &constant_bin[ 231438 ], 9, 1 );
    const_str_plain_VK_SCROLL = UNSTREAM_STRING( &constant_bin[ 231820 ], 9, 1 );
    const_str_plain_VK_SELECT = UNSTREAM_STRING( &constant_bin[ 232642 ], 9, 1 );
    const_str_plain_VkKeyScan = UNSTREAM_STRING( &constant_bin[ 2082524 ], 9, 1 );
    const_str_plain_alt_state = UNSTREAM_STRING( &constant_bin[ 2082533 ], 9, 1 );
    const_str_plain_crsel_key = UNSTREAM_STRING( &constant_bin[ 2082542 ], 9, 1 );
    const_str_plain_ereof_key = UNSTREAM_STRING( &constant_bin[ 2082551 ], 9, 1 );
    const_str_plain_exsel_key = UNSTREAM_STRING( &constant_bin[ 2082560 ], 9, 1 );
    const_str_plain_pythoncom = UNSTREAM_STRING( &constant_bin[ 235293 ], 9, 1 );
    const_str_plain_space_key = UNSTREAM_STRING( &constant_bin[ 2082569 ], 9, 1 );
    const_str_plain_VK_CAPITAL = UNSTREAM_STRING( &constant_bin[ 231742 ], 10, 1 );
    const_str_plain_VK_CONTROL = UNSTREAM_STRING( &constant_bin[ 231476 ], 10, 1 );
    const_str_plain_VK_CONVERT = UNSTREAM_STRING( &constant_bin[ 232119 ], 10, 1 );
    const_str_plain_VK_DECIMAL = UNSTREAM_STRING( &constant_bin[ 233367 ], 10, 1 );
    const_str_plain_VK_EXECUTE = UNSTREAM_STRING( &constant_bin[ 232757 ], 10, 1 );
    const_str_plain_VK_HANGEUL = UNSTREAM_STRING( &constant_bin[ 231894 ], 10, 1 );
    const_str_plain_VK_NUMLOCK = UNSTREAM_STRING( &constant_bin[ 231781 ], 10, 1 );
    const_str_plain_VK_NUMPAD0 = UNSTREAM_STRING( &constant_bin[ 233328 ], 10, 1 );
    const_str_plain_VK_NUMPAD1 = UNSTREAM_STRING( &constant_bin[ 233289 ], 10, 1 );
    const_str_plain_VK_NUMPAD2 = UNSTREAM_STRING( &constant_bin[ 233172 ], 10, 1 );
    const_str_plain_VK_NUMPAD3 = UNSTREAM_STRING( &constant_bin[ 233250 ], 10, 1 );
    const_str_plain_VK_NUMPAD4 = UNSTREAM_STRING( &constant_bin[ 233055 ], 10, 1 );
    const_str_plain_VK_NUMPAD5 = UNSTREAM_STRING( &constant_bin[ 233600 ], 10, 1 );
    const_str_plain_VK_NUMPAD6 = UNSTREAM_STRING( &constant_bin[ 233133 ], 10, 1 );
    const_str_plain_VK_NUMPAD7 = UNSTREAM_STRING( &constant_bin[ 233016 ], 10, 1 );
    const_str_plain_VK_NUMPAD8 = UNSTREAM_STRING( &constant_bin[ 233094 ], 10, 1 );
    const_str_plain_VK_NUMPAD9 = UNSTREAM_STRING( &constant_bin[ 233211 ], 10, 1 );
    const_str_plain_WM_KEYDOWN = UNSTREAM_STRING( &constant_bin[ 2082578 ], 10, 1 );
    const_str_plain__key_press = UNSTREAM_STRING( &constant_bin[ 2082588 ], 10, 1 );
    const_str_plain_noname_key = UNSTREAM_STRING( &constant_bin[ 2082598 ], 10, 1 );
    const_str_plain_HookManager = UNSTREAM_STRING( &constant_bin[ 2082608 ], 11, 1 );
    const_str_plain_VK_LCONTROL = UNSTREAM_STRING( &constant_bin[ 231515 ], 11, 1 );
    const_str_plain_VK_MULTIPLY = UNSTREAM_STRING( &constant_bin[ 233406 ], 11, 1 );
    const_str_plain_VK_RCONTROL = UNSTREAM_STRING( &constant_bin[ 231555 ], 11, 1 );
    const_str_plain_VK_SNAPSHOT = UNSTREAM_STRING( &constant_bin[ 232717 ], 11, 1 );
    const_str_plain_VK_SUBTRACT = UNSTREAM_STRING( &constant_bin[ 233522 ], 11, 1 );
    const_str_plain_escape_code = UNSTREAM_STRING( &constant_bin[ 2082619 ], 11, 1 );
    const_str_plain_keybd_event = UNSTREAM_STRING( &constant_bin[ 2082630 ], 11, 1 );
    const_str_plain_shift_state = UNSTREAM_STRING( &constant_bin[ 2082641 ], 11, 1 );
    const_str_plain_HookKeyboard = UNSTREAM_STRING( &constant_bin[ 2082652 ], 12, 1 );
    const_str_plain_SupportError = UNSTREAM_STRING( &constant_bin[ 2082664 ], 12, 1 );
    const_str_plain_VK_OEM_CLEAR = UNSTREAM_STRING( &constant_bin[ 234933 ], 12, 1 );
    const_str_plain_VK_SEPARATOR = UNSTREAM_STRING( &constant_bin[ 233481 ], 12, 1 );
    const_str_plain_VK_VOLUME_UP = UNSTREAM_STRING( &constant_bin[ 235060 ], 12, 1 );
    const_str_plain__key_release = UNSTREAM_STRING( &constant_bin[ 2082676 ], 12, 1 );
    const_str_plain_HookConstants = UNSTREAM_STRING( &constant_bin[ 2082688 ], 13, 1 );
    const_str_plain_VK_MODECHANGE = UNSTREAM_STRING( &constant_bin[ 232238 ], 13, 1 );
    const_str_plain_VK_NONCONVERT = UNSTREAM_STRING( &constant_bin[ 232158 ], 13, 1 );
    const_str_plain_VK_PROCESSKEY = UNSTREAM_STRING( &constant_bin[ 234599 ], 13, 1 );
    const_str_plain_WM_SYSKEYDOWN = UNSTREAM_STRING( &constant_bin[ 2082701 ], 13, 1 );
    const_str_plain_oem_clear_key = UNSTREAM_STRING( &constant_bin[ 2082714 ], 13, 1 );
    const_str_plain_UnhookKeyboard = UNSTREAM_STRING( &constant_bin[ 2082727 ], 14, 1 );
    const_str_plain_VK_VOLUME_DOWN = UNSTREAM_STRING( &constant_bin[ 235017 ], 14, 1 );
    const_str_plain_VK_VOLUME_MUTE = UNSTREAM_STRING( &constant_bin[ 234974 ], 14, 1 );
    const_str_plain_processkey_key = UNSTREAM_STRING( &constant_bin[ 2082741 ], 14, 1 );
    const_list_int_pos_1_int_0_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_int_pos_1_int_0_list, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyList_SET_ITEM( const_list_int_pos_1_int_0_list, 1, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_plain_KEYEVENTF_KEYUP = UNSTREAM_STRING( &constant_bin[ 231173 ], 15, 1 );
    const_str_plain_VK_BROWSER_BACK = UNSTREAM_STRING( &constant_bin[ 234508 ], 15, 1 );
    const_str_plain_browser_back_key = UNSTREAM_STRING( &constant_bin[ 2082755 ], 16, 1 );
    const_str_plain_toggle_alt_state = UNSTREAM_STRING( &constant_bin[ 2082771 ], 16, 1 );
    const_str_plain_VK_BROWSER_FORWARD = UNSTREAM_STRING( &constant_bin[ 234552 ], 18, 1 );
    const_str_plain_toggle_shift_state = UNSTREAM_STRING( &constant_bin[ 2082787 ], 18, 1 );
    const_str_plain_PumpWaitingMessages = UNSTREAM_STRING( &constant_bin[ 2082805 ], 19, 1 );
    const_str_plain_VK_MEDIA_NEXT_TRACK = UNSTREAM_STRING( &constant_bin[ 235101 ], 19, 1 );
    const_str_plain_VK_MEDIA_PLAY_PAUSE = UNSTREAM_STRING( &constant_bin[ 235197 ], 19, 1 );
    const_str_plain_VK_MEDIA_PREV_TRACK = UNSTREAM_STRING( &constant_bin[ 235149 ], 19, 1 );
    const_str_plain_browser_forward_key = UNSTREAM_STRING( &constant_bin[ 2082824 ], 19, 1 );
    const_list_int_pos_2_none_int_0_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_int_pos_2_none_int_0_list, 0, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyList_SET_ITEM( const_list_int_pos_2_none_int_0_list, 1, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_int_pos_2_none_int_0_list, 2, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_plain_media_next_track_key = UNSTREAM_STRING( &constant_bin[ 2082843 ], 20, 1 );
    const_str_plain_media_prev_track_key = UNSTREAM_STRING( &constant_bin[ 2082863 ], 20, 1 );
    const_list_680e49127fd1969fec06bde96e9ded36_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_680e49127fd1969fec06bde96e9ded36_list, 0, const_str_plain_Shift ); Py_INCREF( const_str_plain_Shift );
    PyList_SET_ITEM( const_list_680e49127fd1969fec06bde96e9ded36_list, 1, const_str_plain_Lshift ); Py_INCREF( const_str_plain_Lshift );
    PyList_SET_ITEM( const_list_680e49127fd1969fec06bde96e9ded36_list, 2, const_str_plain_Rshift ); Py_INCREF( const_str_plain_Rshift );
    PyList_SET_ITEM( const_list_680e49127fd1969fec06bde96e9ded36_list, 3, const_str_plain_Capital ); Py_INCREF( const_str_plain_Capital );
    const_list_dc472e9501fdc5a3a8696cd87daa6c57_list = PyList_New( 16 );
    PyList_SET_ITEM( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list, 0, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list, 1, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list, 2, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list, 3, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list, 4, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list, 5, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list, 6, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list, 7, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list, 8, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list, 9, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list, 10, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list, 11, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list, 12, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list, 13, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list, 14, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list, 15, Py_None ); Py_INCREF( Py_None );
    const_str_digest_02aedd624c8ff354e1ecf13b591869f5 = UNSTREAM_STRING( &constant_bin[ 2082883 ], 52, 0 );
    const_str_digest_304b294387f880a85f802114650f74f9 = UNSTREAM_STRING( &constant_bin[ 2082935 ], 18, 0 );
    const_str_digest_363635719b6bc144bc9d42955626ab7b = UNSTREAM_STRING( &constant_bin[ 2082953 ], 60, 0 );
    const_str_digest_430f294c53e5fe2cdd661c1597267a61 = UNSTREAM_STRING( &constant_bin[ 2083013 ], 37, 0 );
    const_str_digest_7496ce02796dc12770c69aa72858be28 = UNSTREAM_STRING( &constant_bin[ 2083050 ], 108, 0 );
    const_str_digest_77e8f90c2593181743d95d3e93e26d38 = UNSTREAM_STRING( &constant_bin[ 2083158 ], 46, 0 );
    const_str_digest_79a3b804ad0ad8a340b82b6ee9b4027b = UNSTREAM_STRING( &constant_bin[ 2083204 ], 37, 0 );
    const_str_digest_8d62b11565e4be9b03a0543777df1786 = UNSTREAM_STRING( &constant_bin[ 2083241 ], 32, 0 );
    const_str_digest_8f8a0d293c0f0029c0df8b44d84a2605 = UNSTREAM_STRING( &constant_bin[ 2083273 ], 34, 0 );
    const_str_digest_c82f3033fe58beddbe2080652c7e6f8c = UNSTREAM_STRING( &constant_bin[ 2083307 ], 115, 0 );
    const_str_digest_d866d0e1730b8837c21bfc4ddd57e540 = UNSTREAM_STRING( &constant_bin[ 2083422 ], 39, 0 );
    const_str_digest_f44127ac7deee22c8e2fdeefb8c8d1f3 = UNSTREAM_STRING( &constant_bin[ 2083461 ], 48, 0 );
    const_tuple_str_plain_self_str_plain_pyHook_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pyHook_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_pyHook_tuple, 1, const_str_plain_pyHook ); Py_INCREF( const_str_plain_pyHook );
    const_tuple_str_plain_self_str_plain_states_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_states_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_states_tuple, 1, const_str_plain_states ); Py_INCREF( const_str_plain_states );
    const_tuple_74449dbff28f3435473d87d30be64f40_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_74449dbff28f3435473d87d30be64f40_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_74449dbff28f3435473d87d30be64f40_tuple, 1, const_str_plain_character ); Py_INCREF( const_str_plain_character );
    PyTuple_SET_ITEM( const_tuple_74449dbff28f3435473d87d30be64f40_tuple, 2, const_str_plain_shifted ); Py_INCREF( const_str_plain_shifted );
    PyTuple_SET_ITEM( const_tuple_74449dbff28f3435473d87d30be64f40_tuple, 3, const_str_plain_char_vk ); Py_INCREF( const_str_plain_char_vk );
    const_list_str_plain_Menu_str_plain_Lmenu_str_plain_Rmenu_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_Menu_str_plain_Lmenu_str_plain_Rmenu_list, 0, const_str_plain_Menu ); Py_INCREF( const_str_plain_Menu );
    PyList_SET_ITEM( const_list_str_plain_Menu_str_plain_Lmenu_str_plain_Rmenu_list, 1, const_str_plain_Lmenu ); Py_INCREF( const_str_plain_Lmenu );
    PyList_SET_ITEM( const_list_str_plain_Menu_str_plain_Lmenu_str_plain_Rmenu_list, 2, const_str_plain_Rmenu ); Py_INCREF( const_str_plain_Rmenu );
    const_list_none_none_none_none_none_none_none_none_none_none_none_list = PyList_New( 11 );
    PyList_SET_ITEM( const_list_none_none_none_none_none_none_none_none_none_none_none_list, 0, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_none_none_none_none_none_none_none_none_none_none_none_list, 1, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_none_none_none_none_none_none_none_none_none_none_none_list, 2, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_none_none_none_none_none_none_none_none_none_none_none_list, 3, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_none_none_none_none_none_none_none_none_none_none_none_list, 4, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_none_none_none_none_none_none_none_none_none_none_none_list, 5, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_none_none_none_none_none_none_none_none_none_none_none_list, 6, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_none_none_none_none_none_none_none_none_none_none_none_list, 7, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_none_none_none_none_none_none_none_none_none_none_none_list, 8, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_none_none_none_none_none_none_none_none_none_none_none_list, 9, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_none_none_none_none_none_none_none_none_none_none_none_list, 10, Py_None ); Py_INCREF( Py_None );
}

// The module code objects.
static PyCodeObject *codeobj_ef0329441220437008f01e7a6768bdb9;
static PyCodeObject *codeobj_13fbede9355df563f4a765affb988dad;
static PyCodeObject *codeobj_3459dcdd4904d280f61d95e2e0957166;
static PyCodeObject *codeobj_0166ce6280b5fd070ae7bf505408acb2;
static PyCodeObject *codeobj_b039baefabde27ba9ba012ed49313be3;
static PyCodeObject *codeobj_11e77e342d38e87ea5d98cd040c85b11;
static PyCodeObject *codeobj_da3ef9ebca85eb6fb58f9276411d33e6;
static PyCodeObject *codeobj_03f3338f6b0135ca6e3a5641b1339f1c;
static PyCodeObject *codeobj_ab8907a456750c61c856f4824f8a4c10;
static PyCodeObject *codeobj_bf6e774eb49cdfd59af2afafeb64442e;
static PyCodeObject *codeobj_f18e4665d4eaaf7cce3b48815baa3dd6;
static PyCodeObject *codeobj_106f4763299e004cd8d8f598295ff36b;
static PyCodeObject *codeobj_b4a4890c39f6e96b1a7ad9ddf00a43df;
static PyCodeObject *codeobj_dfbe36f9ba4be8eff921f90e4971fab2;
static PyCodeObject *codeobj_a47c4757991d2e316afd4ced7eccc3ba;
static PyCodeObject *codeobj_d722d6cc7706a7949c25db26e163bd25;
static PyCodeObject *codeobj_b8f3512d26a82ef54c1a2576effdbedf;
static PyCodeObject *codeobj_10d8039b9eaf7b5b7a5783ff51877c3f;
static PyCodeObject *codeobj_dc94b12c77634a9ba5a35d031bc569da;
static PyCodeObject *codeobj_de5dcb42ca3b5a563dbf666ad8c16075;
static PyCodeObject *codeobj_d3fb1a1f4de9a34a4bbd2428e18f07cd;
static PyCodeObject *codeobj_4690012f44f047f011ded50be21900b4;
static PyCodeObject *codeobj_dda3850a9a885c7b3ea9e661d44f1d79;
static PyCodeObject *codeobj_f56ea80294b91b4cd52d24e2ddd0fdf5;

static void _initModuleCodeObjects(void)
{
    codeobj_ef0329441220437008f01e7a6768bdb9 = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_PyKeyboard, 33, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_13fbede9355df563f4a765affb988dad = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_PyKeyboardEvent, 221, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_3459dcdd4904d280f61d95e2e0957166 = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_SupportError, 25, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_0166ce6280b5fd070ae7bf505408acb2 = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain___init__, 27, const_tuple_str_plain_self_str_plain_value_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_b039baefabde27ba9ba012ed49313be3 = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain___init__, 38, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_11e77e342d38e87ea5d98cd040c85b11 = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain___init__, 226, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_da3ef9ebca85eb6fb58f9276411d33e6 = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain___init__, 226, const_tuple_str_plain_self_str_plain_pyHook_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_03f3338f6b0135ca6e3a5641b1339f1c = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain___str__, 30, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_ab8907a456750c61c856f4824f8a4c10 = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain__key_press, 262, const_tuple_str_plain_self_str_plain_event_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_bf6e774eb49cdfd59af2afafeb64442e = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain__key_release, 279, const_tuple_str_plain_self_str_plain_event_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_f18e4665d4eaaf7cce3b48815baa3dd6 = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_escape_code, 295, const_tuple_str_plain_self_str_plain_event_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_106f4763299e004cd8d8f598295ff36b = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_handler, 248, const_tuple_str_plain_self_str_plain_reply_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_b4a4890c39f6e96b1a7ad9ddf00a43df = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_press_key, 42, const_tuple_str_plain_self_str_plain_character_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_dfbe36f9ba4be8eff921f90e4971fab2 = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_press_key, 42, const_tuple_74449dbff28f3435473d87d30be64f40_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_a47c4757991d2e316afd4ced7eccc3ba = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_release_key, 56, const_tuple_str_plain_self_str_plain_character_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_d722d6cc7706a7949c25db26e163bd25 = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_release_key, 56, const_tuple_74449dbff28f3435473d87d30be64f40_tuple, 2, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_b8f3512d26a82ef54c1a2576effdbedf = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_run, 234, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_10d8039b9eaf7b5b7a5783ff51877c3f = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_special_key_assignment, 70, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_dc94b12c77634a9ba5a35d031bc569da = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_stop, 243, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_de5dcb42ca3b5a563dbf666ad8c16075 = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_toggle_alt_state, 305, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_d3fb1a1f4de9a34a4bbd2428e18f07cd = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_toggle_alt_state, 305, const_tuple_str_plain_self_str_plain_states_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_4690012f44f047f011ded50be21900b4 = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_toggle_shift_state, 300, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_dda3850a9a885c7b3ea9e661d44f1d79 = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_toggle_shift_state, 300, const_tuple_str_plain_self_str_plain_states_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_f56ea80294b91b4cd52d24e2ddd0fdf5 = MAKE_CODEOBJ( const_str_digest_363635719b6bc144bc9d42955626ab7b, const_str_plain_windows, 0, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_SupportError_of_module_pykeyboard$windows(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_PyKeyboard_of_module_pykeyboard$windows(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_SupportError_of_module_pykeyboard$windows(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_PyKeyboard_of_module_pykeyboard$windows(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );


static PyObject *MAKE_FUNCTION_function_2___str___of_class_1_SupportError_of_module_pykeyboard$windows(  );


static PyObject *MAKE_FUNCTION_function_2_press_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_2_run_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );


static PyObject *MAKE_FUNCTION_function_3_release_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_3_stop_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );


static PyObject *MAKE_FUNCTION_function_4_handler_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );


static PyObject *MAKE_FUNCTION_function_4_special_key_assignment_of_class_2_PyKeyboard_of_module_pykeyboard$windows(  );


static PyObject *MAKE_FUNCTION_function_5__key_press_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );


static PyObject *MAKE_FUNCTION_function_6__key_release_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );


static PyObject *MAKE_FUNCTION_function_7_escape_code_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );


static PyObject *MAKE_FUNCTION_function_8_toggle_shift_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );


static PyObject *MAKE_FUNCTION_function_9_toggle_alt_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_SupportError_of_module_pykeyboard$windows(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var___str__;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_304b294387f880a85f802114650f74f9;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_79a3b804ad0ad8a340b82b6ee9b4027b;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3459dcdd4904d280f61d95e2e0957166, module_pykeyboard$windows );
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
    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_1_SupportError_of_module_pykeyboard$windows(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_2___str___of_class_1_SupportError_of_module_pykeyboard$windows(  );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 30;
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
    if ((var___doc__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___doc__,
            var___doc__.object
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
    if ((var___doc__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___doc__,
            var___doc__.object
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


static PyObject *impl_function_1___init___of_class_1_SupportError_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_value; par_value.object = _python_par_value;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0166ce6280b5fd070ae7bf505408acb2, module_pykeyboard$windows );
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
    tmp_assattr_name_1 = par_value.object;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5634 ], 51, 0 );
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

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_value, tmp_assattr_name_1 );
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
    if ((par_value.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_value,
            par_value.object
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
static PyObject *fparse_function_1___init___of_class_1_SupportError_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_value = NULL;
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
            if ( found == false && const_str_plain_value == key )
            {
                assert( _python_par_value == NULL );
                _python_par_value = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_value, key ) == 1 )
            {
                assert( _python_par_value == NULL );
                _python_par_value = value;

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
         if (unlikely( _python_par_value != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_value == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_value = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_value == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_value };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1___init___of_class_1_SupportError_of_module_pykeyboard$windows( self, _python_par_self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_SupportError_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_1___init___of_class_1_SupportError_of_module_pykeyboard$windows( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_SupportError_of_module_pykeyboard$windows( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___str___of_class_1_SupportError_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_03f3338f6b0135ca6e3a5641b1339f1c, module_pykeyboard$windows );
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
    tmp_source_name_1 = const_str_digest_d866d0e1730b8837c21bfc4ddd57e540;
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_value );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 31;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
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
static PyObject *fparse_function_2___str___of_class_1_SupportError_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_2___str___of_class_1_SupportError_of_module_pykeyboard$windows( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___str___of_class_1_SupportError_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2___str___of_class_1_SupportError_of_module_pykeyboard$windows( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___str___of_class_1_SupportError_of_module_pykeyboard$windows( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_PyKeyboard_of_module_pykeyboard$windows(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var_press_key;
    PyObjectLocalVariable var_release_key;
    PyObjectLocalVariable var_special_key_assignment;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_304b294387f880a85f802114650f74f9;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_7496ce02796dc12770c69aa72858be28;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ef0329441220437008f01e7a6768bdb9, module_pykeyboard$windows );
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
    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_2_PyKeyboard_of_module_pykeyboard$windows(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_3;

    tmp_defaults_1 = const_tuple_str_empty_tuple;
    tmp_assign_source_4 = MAKE_FUNCTION_function_2_press_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    assert( var_press_key.object == NULL );
    var_press_key.object = tmp_assign_source_4;

    tmp_defaults_2 = const_tuple_str_empty_tuple;
    tmp_assign_source_5 = MAKE_FUNCTION_function_3_release_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    assert( var_release_key.object == NULL );
    var_release_key.object = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_4_special_key_assignment_of_class_2_PyKeyboard_of_module_pykeyboard$windows(  );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    assert( var_special_key_assignment.object == NULL );
    var_special_key_assignment.object = tmp_assign_source_6;


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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___init__,
            var___init__.object
        );

    }
    if ((var_press_key.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_press_key,
            var_press_key.object
        );

    }
    if ((var_release_key.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_release_key,
            var_release_key.object
        );

    }
    if ((var_special_key_assignment.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_special_key_assignment,
            var_special_key_assignment.object
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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__.object
        );

    }
    if ((var_press_key.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_press_key,
            var_press_key.object
        );

    }
    if ((var_release_key.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_release_key,
            var_release_key.object
        );

    }
    if ((var_special_key_assignment.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_special_key_assignment,
            var_special_key_assignment.object
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


static PyObject *impl_function_1___init___of_class_2_PyKeyboard_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b039baefabde27ba9ba012ed49313be3, module_pykeyboard$windows );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_PyKeyboardMeta );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyKeyboardMeta );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231027 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_self.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 39;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 40;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_special_key_assignment );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 40;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 40;
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
static PyObject *fparse_function_1___init___of_class_2_PyKeyboard_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___init___of_class_2_PyKeyboard_of_module_pykeyboard$windows( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_PyKeyboard_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1___init___of_class_2_PyKeyboard_of_module_pykeyboard$windows( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_PyKeyboard_of_module_pykeyboard$windows( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_press_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_character )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_character; par_character.object = _python_par_character;
    PyObjectLocalVariable var_shifted;
    PyObjectLocalVariable var_char_vk;
    PyObjectTempVariable tmp_try_except_1__unhandled_indicator;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator.object == NULL );
    tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b4a4890c39f6e96b1a7ad9ddf00a43df, module_pykeyboard$windows );
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
    // Tried block of try/except
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 47;
        goto try_except_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_char_shifted );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 47;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_1 = par_character.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 229561 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 47;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 47;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 47;
        goto try_except_handler_1;
    }
    assert( var_shifted.object == NULL );
    var_shifted.object = tmp_assign_source_2;

    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    tmp_assign_source_3 = Py_False;
    if (tmp_try_except_1__unhandled_indicator.object == NULL)
    {
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator.object;
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
        Py_DECREF( old );
    }
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
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 48;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_win32api );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32api );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231070 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 49;
        goto try_finally_handler_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_keybd_event );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = par_character.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 229561 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 49;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_3 = const_int_0;
    tmp_call_arg_element_4 = const_int_0;
    tmp_call_arg_element_5 = const_int_0;
    frame_function->f_lineno = 49;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
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
    tmp_cond_value_1 = var_shifted.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231107 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 51;
        goto try_finally_handler_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 51;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_win32api );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32api );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231070 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 52;
        goto try_finally_handler_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_keybd_event );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 52;
        goto try_finally_handler_1;
    }
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 52;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shift_key );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 52;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_7 = const_int_0;
    tmp_call_arg_element_8 = const_int_0;
    tmp_call_arg_element_9 = const_int_0;
    frame_function->f_lineno = 52;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_3, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 52;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_win32api );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32api );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231070 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 53;
        goto try_finally_handler_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_VkKeyScan );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 53;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_10 = par_character.object;

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 229561 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 53;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 53;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 53;
        goto try_finally_handler_1;
    }
    assert( var_char_vk.object == NULL );
    var_char_vk.object = tmp_assign_source_4;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_win32api );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32api );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231070 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 54;
        goto try_finally_handler_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_keybd_event );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_11 = var_char_vk.object;

    tmp_call_arg_element_12 = const_int_0;
    tmp_call_arg_element_13 = const_int_0;
    tmp_call_arg_element_14 = const_int_0;
    frame_function->f_lineno = 54;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_5, tmp_call_arg_element_11, tmp_call_arg_element_12, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
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

    tmp_tried_lineno_1 = frame_function->f_lineno;
    tmp_result = tmp_try_except_1__unhandled_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_try_except_1__unhandled_indicator.object );
        tmp_try_except_1__unhandled_indicator.object = NULL;
    }

    assert( tmp_result != false );
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
    if ((var_shifted.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_shifted,
            var_shifted.object
        );

    }
    if ((var_char_vk.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_char_vk,
            var_char_vk.object
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
    if ((par_character.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_character,
            par_character.object
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
static PyObject *fparse_function_2_press_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_character = NULL;
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
                PyErr_Format( PyExc_TypeError, "press_key() keywords must be strings" );
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
            if ( found == false && const_str_plain_character == key )
            {
                assert( _python_par_character == NULL );
                _python_par_character = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_character, key ) == 1 )
            {
                assert( _python_par_character == NULL );
                _python_par_character = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "press_key() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_character != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_character = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_character == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_character = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_character == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_character };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_press_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( self, _python_par_self, _python_par_character );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_character );

    return NULL;
}

static PyObject *dparse_function_2_press_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_2_press_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_press_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_release_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_character )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_character; par_character.object = _python_par_character;
    PyObjectLocalVariable var_shifted;
    PyObjectLocalVariable var_char_vk;
    PyObjectTempVariable tmp_try_except_1__unhandled_indicator;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator.object == NULL );
    tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a47c4757991d2e316afd4ced7eccc3ba, module_pykeyboard$windows );
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
    // Tried block of try/except
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto try_except_handler_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_char_shifted );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto try_except_handler_1;
    }
    tmp_call_arg_element_1 = par_character.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 229561 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto try_except_handler_1;
    }

    frame_function->f_lineno = 61;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 61;
        goto try_except_handler_1;
    }
    assert( var_shifted.object == NULL );
    var_shifted.object = tmp_assign_source_2;

    goto try_except_end_1;
    try_except_handler_1:;
    // Exception handler of try/except
    tmp_assign_source_3 = Py_False;
    if (tmp_try_except_1__unhandled_indicator.object == NULL)
    {
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
    }
    else
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator.object;
        tmp_try_except_1__unhandled_indicator.object = INCREASE_REFCOUNT( tmp_assign_source_3 );
        Py_DECREF( old );
    }
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
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_win32api );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32api );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231070 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto try_finally_handler_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_keybd_event );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_2 = par_character.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 229561 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_3 = const_int_0;
    tmp_call_arg_element_4 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_KEYEVENTF_KEYUP );

    if (unlikely( tmp_call_arg_element_4 == NULL ))
    {
        tmp_call_arg_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_KEYEVENTF_KEYUP );
    }

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231160 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_5 = const_int_0;
    frame_function->f_lineno = 63;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_2, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
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
    tmp_cond_value_1 = var_shifted.object;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231107 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 65;
        goto try_finally_handler_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 65;
        goto try_finally_handler_1;
    }
    if (tmp_cond_truth_1 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_win32api );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32api );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231070 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto try_finally_handler_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_keybd_event );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto try_finally_handler_1;
    }
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shift_key );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_3 );

        frame_function->f_lineno = 66;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_7 = const_int_0;
    tmp_call_arg_element_8 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_KEYEVENTF_KEYUP );

    if (unlikely( tmp_call_arg_element_8 == NULL ))
    {
        tmp_call_arg_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_KEYEVENTF_KEYUP );
    }

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231160 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_9 = const_int_0;
    frame_function->f_lineno = 66;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_3, tmp_call_arg_element_6, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_3 );
    Py_DECREF( tmp_call_arg_element_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 66;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_win32api );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32api );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231070 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_VkKeyScan );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_10 = par_character.object;

    if ( tmp_call_arg_element_10 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 229561 ], 55, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }

    frame_function->f_lineno = 67;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 67;
        goto try_finally_handler_1;
    }
    assert( var_char_vk.object == NULL );
    var_char_vk.object = tmp_assign_source_4;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_win32api );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_win32api );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231070 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 68;
        goto try_finally_handler_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_keybd_event );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 68;
        goto try_finally_handler_1;
    }
    tmp_call_arg_element_11 = var_char_vk.object;

    tmp_call_arg_element_12 = const_int_0;
    tmp_call_arg_element_13 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_KEYEVENTF_KEYUP );

    if (unlikely( tmp_call_arg_element_13 == NULL ))
    {
        tmp_call_arg_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_KEYEVENTF_KEYUP );
    }

    if ( tmp_call_arg_element_13 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231160 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 68;
        goto try_finally_handler_1;
    }

    tmp_call_arg_element_14 = const_int_0;
    frame_function->f_lineno = 68;
    tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_5, tmp_call_arg_element_11, tmp_call_arg_element_12, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 68;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
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

    tmp_tried_lineno_1 = frame_function->f_lineno;
    tmp_result = tmp_try_except_1__unhandled_indicator.object != NULL;
    if ( tmp_result == true )
    {
        Py_DECREF( tmp_try_except_1__unhandled_indicator.object );
        tmp_try_except_1__unhandled_indicator.object = NULL;
    }

    assert( tmp_result != false );
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
    if ((var_shifted.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_shifted,
            var_shifted.object
        );

    }
    if ((var_char_vk.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_char_vk,
            var_char_vk.object
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
    if ((par_character.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_character,
            par_character.object
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
static PyObject *fparse_function_3_release_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_character = NULL;
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
                PyErr_Format( PyExc_TypeError, "release_key() keywords must be strings" );
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
            if ( found == false && const_str_plain_character == key )
            {
                assert( _python_par_character == NULL );
                _python_par_character = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_character, key ) == 1 )
            {
                assert( _python_par_character == NULL );
                _python_par_character = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "release_key() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_character != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_character = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_character == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_character = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_character == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_character };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_release_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( self, _python_par_self, _python_par_character );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_character );

    return NULL;
}

static PyObject *dparse_function_3_release_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_3_release_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_release_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_special_key_assignment_of_class_2_PyKeyboard_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
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
    PyObject *tmp_assattr_name_56;
    PyObject *tmp_assattr_name_57;
    PyObject *tmp_assattr_name_58;
    PyObject *tmp_assattr_name_59;
    PyObject *tmp_assattr_name_60;
    PyObject *tmp_assattr_name_61;
    PyObject *tmp_assattr_name_62;
    PyObject *tmp_assattr_name_63;
    PyObject *tmp_assattr_name_64;
    PyObject *tmp_assattr_name_65;
    PyObject *tmp_assattr_name_66;
    PyObject *tmp_assattr_name_67;
    PyObject *tmp_assattr_name_68;
    PyObject *tmp_assattr_name_69;
    PyObject *tmp_assattr_name_70;
    PyObject *tmp_assattr_name_71;
    PyObject *tmp_assattr_name_72;
    PyObject *tmp_assattr_name_73;
    PyObject *tmp_assattr_name_74;
    PyObject *tmp_assattr_name_75;
    PyObject *tmp_assattr_name_76;
    PyObject *tmp_assattr_name_77;
    PyObject *tmp_assattr_name_78;
    PyObject *tmp_assattr_name_79;
    PyObject *tmp_assattr_name_80;
    PyObject *tmp_assattr_name_81;
    PyObject *tmp_assattr_name_82;
    PyObject *tmp_assattr_name_83;
    PyObject *tmp_assattr_name_84;
    PyObject *tmp_assattr_name_85;
    PyObject *tmp_assattr_name_86;
    PyObject *tmp_assattr_name_87;
    PyObject *tmp_assattr_name_88;
    PyObject *tmp_assattr_name_89;
    PyObject *tmp_assattr_name_90;
    PyObject *tmp_assattr_name_91;
    PyObject *tmp_assattr_name_92;
    PyObject *tmp_assattr_name_93;
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
    PyObject *tmp_assattr_target_56;
    PyObject *tmp_assattr_target_57;
    PyObject *tmp_assattr_target_58;
    PyObject *tmp_assattr_target_59;
    PyObject *tmp_assattr_target_60;
    PyObject *tmp_assattr_target_61;
    PyObject *tmp_assattr_target_62;
    PyObject *tmp_assattr_target_63;
    PyObject *tmp_assattr_target_64;
    PyObject *tmp_assattr_target_65;
    PyObject *tmp_assattr_target_66;
    PyObject *tmp_assattr_target_67;
    PyObject *tmp_assattr_target_68;
    PyObject *tmp_assattr_target_69;
    PyObject *tmp_assattr_target_70;
    PyObject *tmp_assattr_target_71;
    PyObject *tmp_assattr_target_72;
    PyObject *tmp_assattr_target_73;
    PyObject *tmp_assattr_target_74;
    PyObject *tmp_assattr_target_75;
    PyObject *tmp_assattr_target_76;
    PyObject *tmp_assattr_target_77;
    PyObject *tmp_assattr_target_78;
    PyObject *tmp_assattr_target_79;
    PyObject *tmp_assattr_target_80;
    PyObject *tmp_assattr_target_81;
    PyObject *tmp_assattr_target_82;
    PyObject *tmp_assattr_target_83;
    PyObject *tmp_assattr_target_84;
    PyObject *tmp_assattr_target_85;
    PyObject *tmp_assattr_target_86;
    PyObject *tmp_assattr_target_87;
    PyObject *tmp_assattr_target_88;
    PyObject *tmp_assattr_target_89;
    PyObject *tmp_assattr_target_90;
    PyObject *tmp_assattr_target_91;
    PyObject *tmp_assattr_target_92;
    PyObject *tmp_assattr_target_93;
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
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_key_19;
    PyObject *tmp_dict_key_20;
    PyObject *tmp_dict_key_21;
    PyObject *tmp_dict_key_22;
    PyObject *tmp_dict_key_23;
    PyObject *tmp_dict_key_24;
    PyObject *tmp_dict_key_25;
    PyObject *tmp_dict_key_26;
    PyObject *tmp_dict_key_27;
    PyObject *tmp_dict_key_28;
    PyObject *tmp_dict_key_29;
    PyObject *tmp_dict_key_30;
    PyObject *tmp_dict_key_31;
    PyObject *tmp_dict_key_32;
    PyObject *tmp_dict_key_33;
    PyObject *tmp_dict_key_34;
    PyObject *tmp_dict_key_35;
    PyObject *tmp_dict_key_36;
    PyObject *tmp_dict_key_37;
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
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dict_value_19;
    PyObject *tmp_dict_value_20;
    PyObject *tmp_dict_value_21;
    PyObject *tmp_dict_value_22;
    PyObject *tmp_dict_value_23;
    PyObject *tmp_dict_value_24;
    PyObject *tmp_dict_value_25;
    PyObject *tmp_dict_value_26;
    PyObject *tmp_dict_value_27;
    PyObject *tmp_dict_value_28;
    PyObject *tmp_dict_value_29;
    PyObject *tmp_dict_value_30;
    PyObject *tmp_dict_value_31;
    PyObject *tmp_dict_value_32;
    PyObject *tmp_dict_value_33;
    PyObject *tmp_dict_value_34;
    PyObject *tmp_dict_value_35;
    PyObject *tmp_dict_value_36;
    PyObject *tmp_dict_value_37;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
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
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_10d8039b9eaf7b5b7a5783ff51877c3f, module_pykeyboard$windows );
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
    tmp_assattr_name_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_BACK );

    if (unlikely( tmp_assattr_name_1 == NULL ))
    {
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_BACK );
    }

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231204 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_backspace_key, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_TAB );

    if (unlikely( tmp_assattr_name_2 == NULL ))
    {
        tmp_assattr_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_TAB );
    }

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231240 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_tab_key, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_CLEAR );

    if (unlikely( tmp_assattr_name_3 == NULL ))
    {
        tmp_assattr_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_CLEAR );
    }

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231275 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self.object;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_clear_key, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_RETURN );

    if (unlikely( tmp_assattr_name_4 == NULL ))
    {
        tmp_assattr_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_RETURN );
    }

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231312 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self.object;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_return_key, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_return_key );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self.object;

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_enter_key, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_assattr_name_6 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_SHIFT );

    if (unlikely( tmp_assattr_name_6 == NULL ))
    {
        tmp_assattr_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_SHIFT );
    }

    if ( tmp_assattr_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231350 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_6 = par_self.object;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_shift_key, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_LSHIFT );

    if (unlikely( tmp_assattr_name_7 == NULL ))
    {
        tmp_assattr_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_LSHIFT );
    }

    if ( tmp_assattr_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231387 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_7 = par_self.object;

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_shift_l_key, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_8 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_RSHIFT );

    if (unlikely( tmp_assattr_name_8 == NULL ))
    {
        tmp_assattr_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_RSHIFT );
    }

    if ( tmp_assattr_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231425 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_8 = par_self.object;

    if ( tmp_assattr_target_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_shift_r_key, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_9 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_CONTROL );

    if (unlikely( tmp_assattr_name_9 == NULL ))
    {
        tmp_assattr_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_CONTROL );
    }

    if ( tmp_assattr_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231463 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_9 = par_self.object;

    if ( tmp_assattr_target_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_control_key, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_10 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_LCONTROL );

    if (unlikely( tmp_assattr_name_10 == NULL ))
    {
        tmp_assattr_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_LCONTROL );
    }

    if ( tmp_assattr_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231502 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_10 = par_self.object;

    if ( tmp_assattr_target_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_control_l_key, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_11 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_RCONTROL );

    if (unlikely( tmp_assattr_name_11 == NULL ))
    {
        tmp_assattr_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_RCONTROL );
    }

    if ( tmp_assattr_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231542 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_11 = par_self.object;

    if ( tmp_assattr_target_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_control_r_key, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_12 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_MENU );

    if (unlikely( tmp_assattr_name_12 == NULL ))
    {
        tmp_assattr_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_MENU );
    }

    if ( tmp_assattr_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231582 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_12 = par_self.object;

    if ( tmp_assattr_target_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_menu_key, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_13 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_LMENU );

    if (unlikely( tmp_assattr_name_13 == NULL ))
    {
        tmp_assattr_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_LMENU );
    }

    if ( tmp_assattr_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231618 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_13 = par_self.object;

    if ( tmp_assattr_target_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_alt_l_key, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_14 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_RMENU );

    if (unlikely( tmp_assattr_name_14 == NULL ))
    {
        tmp_assattr_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_RMENU );
    }

    if ( tmp_assattr_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231655 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_14 = par_self.object;

    if ( tmp_assattr_target_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_alt_r_key, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_alt_l_key );
    if ( tmp_assattr_name_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_15 = par_self.object;

    if ( tmp_assattr_target_15 == NULL )
    {
        Py_DECREF( tmp_assattr_name_15 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_alt_key, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_15 );

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_15 );
    tmp_assattr_name_16 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_PAUSE );

    if (unlikely( tmp_assattr_name_16 == NULL ))
    {
        tmp_assattr_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_PAUSE );
    }

    if ( tmp_assattr_name_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231692 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_16 = par_self.object;

    if ( tmp_assattr_target_16 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_pause_key, tmp_assattr_name_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_17 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_CAPITAL );

    if (unlikely( tmp_assattr_name_17 == NULL ))
    {
        tmp_assattr_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_CAPITAL );
    }

    if ( tmp_assattr_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231729 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_17 = par_self.object;

    if ( tmp_assattr_target_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_caps_lock_key, tmp_assattr_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_caps_lock_key );
    if ( tmp_assattr_name_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_18 = par_self.object;

    if ( tmp_assattr_target_18 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_capital_key, tmp_assattr_name_18 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_18 );

        frame_function->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_18 );
    tmp_assattr_name_19 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMLOCK );

    if (unlikely( tmp_assattr_name_19 == NULL ))
    {
        tmp_assattr_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMLOCK );
    }

    if ( tmp_assattr_name_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231768 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_19 = par_self.object;

    if ( tmp_assattr_target_19 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain_num_lock_key, tmp_assattr_name_19 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_20 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_SCROLL );

    if (unlikely( tmp_assattr_name_20 == NULL ))
    {
        tmp_assattr_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_SCROLL );
    }

    if ( tmp_assattr_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231807 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_20 = par_self.object;

    if ( tmp_assattr_target_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain_scroll_lock_key, tmp_assattr_name_20 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_21 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_KANA );

    if (unlikely( tmp_assattr_name_21 == NULL ))
    {
        tmp_assattr_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_KANA );
    }

    if ( tmp_assattr_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231845 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_21 = par_self.object;

    if ( tmp_assattr_target_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_21, const_str_plain_kana_key, tmp_assattr_name_21 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 98;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_22 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_HANGEUL );

    if (unlikely( tmp_assattr_name_22 == NULL ))
    {
        tmp_assattr_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_HANGEUL );
    }

    if ( tmp_assattr_name_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231881 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_22 = par_self.object;

    if ( tmp_assattr_target_22 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_22, const_str_plain_hangeul_key, tmp_assattr_name_22 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 99;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_23 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_HANGUL );

    if (unlikely( tmp_assattr_name_23 == NULL ))
    {
        tmp_assattr_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_HANGUL );
    }

    if ( tmp_assattr_name_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231920 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_23 = par_self.object;

    if ( tmp_assattr_target_23 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_23, const_str_plain_hangul_key, tmp_assattr_name_23 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_24 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_JUNJA );

    if (unlikely( tmp_assattr_name_24 == NULL ))
    {
        tmp_assattr_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_JUNJA );
    }

    if ( tmp_assattr_name_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231958 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_24 = par_self.object;

    if ( tmp_assattr_target_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_24, const_str_plain_junjua_key, tmp_assattr_name_24 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_25 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_FINAL );

    if (unlikely( tmp_assattr_name_25 == NULL ))
    {
        tmp_assattr_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_FINAL );
    }

    if ( tmp_assattr_name_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 231995 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_25 = par_self.object;

    if ( tmp_assattr_target_25 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_25, const_str_plain_final_key, tmp_assattr_name_25 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_26 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_HANJA );

    if (unlikely( tmp_assattr_name_26 == NULL ))
    {
        tmp_assattr_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_HANJA );
    }

    if ( tmp_assattr_name_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232032 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_26 = par_self.object;

    if ( tmp_assattr_target_26 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_26, const_str_plain_hanja_key, tmp_assattr_name_26 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_27 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_KANJI );

    if (unlikely( tmp_assattr_name_27 == NULL ))
    {
        tmp_assattr_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_KANJI );
    }

    if ( tmp_assattr_name_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232069 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_27 = par_self.object;

    if ( tmp_assattr_target_27 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_27, const_str_plain_kanji_key, tmp_assattr_name_27 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_28 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_CONVERT );

    if (unlikely( tmp_assattr_name_28 == NULL ))
    {
        tmp_assattr_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_CONVERT );
    }

    if ( tmp_assattr_name_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232106 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_28 = par_self.object;

    if ( tmp_assattr_target_28 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_28, const_str_plain_convert_key, tmp_assattr_name_28 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_29 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NONCONVERT );

    if (unlikely( tmp_assattr_name_29 == NULL ))
    {
        tmp_assattr_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NONCONVERT );
    }

    if ( tmp_assattr_name_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232145 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_29 = par_self.object;

    if ( tmp_assattr_target_29 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_29, const_str_plain_nonconvert_key, tmp_assattr_name_29 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_30 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_ACCEPT );

    if (unlikely( tmp_assattr_name_30 == NULL ))
    {
        tmp_assattr_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_ACCEPT );
    }

    if ( tmp_assattr_name_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232187 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_30 = par_self.object;

    if ( tmp_assattr_target_30 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_30, const_str_plain_accept_key, tmp_assattr_name_30 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 107;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_31 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_MODECHANGE );

    if (unlikely( tmp_assattr_name_31 == NULL ))
    {
        tmp_assattr_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_MODECHANGE );
    }

    if ( tmp_assattr_name_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232225 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_31 = par_self.object;

    if ( tmp_assattr_target_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_31, const_str_plain_modechange_key, tmp_assattr_name_31 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_32 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_ESCAPE );

    if (unlikely( tmp_assattr_name_32 == NULL ))
    {
        tmp_assattr_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_ESCAPE );
    }

    if ( tmp_assattr_name_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232267 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_32 = par_self.object;

    if ( tmp_assattr_target_32 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_32, const_str_plain_escape_key, tmp_assattr_name_32 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_33 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_SPACE );

    if (unlikely( tmp_assattr_name_33 == NULL ))
    {
        tmp_assattr_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_SPACE );
    }

    if ( tmp_assattr_name_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232305 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_33 = par_self.object;

    if ( tmp_assattr_target_33 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_33, const_str_plain_space_key, tmp_assattr_name_33 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_34 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_PRIOR );

    if (unlikely( tmp_assattr_name_34 == NULL ))
    {
        tmp_assattr_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_PRIOR );
    }

    if ( tmp_assattr_name_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232342 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 112;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_34 = par_self.object;

    if ( tmp_assattr_target_34 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 112;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_34, const_str_plain_prior_key, tmp_assattr_name_34 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_35 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NEXT );

    if (unlikely( tmp_assattr_name_35 == NULL ))
    {
        tmp_assattr_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NEXT );
    }

    if ( tmp_assattr_name_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232379 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_35 = par_self.object;

    if ( tmp_assattr_target_35 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_35, const_str_plain_next_key, tmp_assattr_name_35 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_prior_key );
    if ( tmp_assattr_name_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_36 = par_self.object;

    if ( tmp_assattr_target_36 == NULL )
    {
        Py_DECREF( tmp_assattr_name_36 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_36, const_str_plain_page_up_key, tmp_assattr_name_36 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_36 );

        frame_function->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_36 );
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_next_key );
    if ( tmp_assattr_name_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_37 = par_self.object;

    if ( tmp_assattr_target_37 == NULL )
    {
        Py_DECREF( tmp_assattr_name_37 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_37, const_str_plain_page_down_key, tmp_assattr_name_37 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_37 );

        frame_function->f_lineno = 115;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_37 );
    tmp_assattr_name_38 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_HOME );

    if (unlikely( tmp_assattr_name_38 == NULL ))
    {
        tmp_assattr_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_HOME );
    }

    if ( tmp_assattr_name_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232415 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_38 = par_self.object;

    if ( tmp_assattr_target_38 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_38, const_str_plain_home_key, tmp_assattr_name_38 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_39 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_UP );

    if (unlikely( tmp_assattr_name_39 == NULL ))
    {
        tmp_assattr_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_UP );
    }

    if ( tmp_assattr_name_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232451 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_39 = par_self.object;

    if ( tmp_assattr_target_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_39, const_str_plain_up_key, tmp_assattr_name_39 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_40 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_DOWN );

    if (unlikely( tmp_assattr_name_40 == NULL ))
    {
        tmp_assattr_name_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_DOWN );
    }

    if ( tmp_assattr_name_40 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232485 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_40 = par_self.object;

    if ( tmp_assattr_target_40 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_40, const_str_plain_down_key, tmp_assattr_name_40 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_41 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_LEFT );

    if (unlikely( tmp_assattr_name_41 == NULL ))
    {
        tmp_assattr_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_LEFT );
    }

    if ( tmp_assattr_name_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232521 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_41 = par_self.object;

    if ( tmp_assattr_target_41 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_41, const_str_plain_left_key, tmp_assattr_name_41 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_42 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_RIGHT );

    if (unlikely( tmp_assattr_name_42 == NULL ))
    {
        tmp_assattr_name_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_RIGHT );
    }

    if ( tmp_assattr_name_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232557 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_42 = par_self.object;

    if ( tmp_assattr_target_42 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_42, const_str_plain_right_key, tmp_assattr_name_42 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_43 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_END );

    if (unlikely( tmp_assattr_name_43 == NULL ))
    {
        tmp_assattr_name_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_END );
    }

    if ( tmp_assattr_name_43 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232594 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_43 = par_self.object;

    if ( tmp_assattr_target_43 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_43, const_str_plain_end_key, tmp_assattr_name_43 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_44 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_SELECT );

    if (unlikely( tmp_assattr_name_44 == NULL ))
    {
        tmp_assattr_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_SELECT );
    }

    if ( tmp_assattr_name_44 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232629 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 122;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_44 = par_self.object;

    if ( tmp_assattr_target_44 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 122;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_44, const_str_plain_select_key, tmp_assattr_name_44 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 122;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_45 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_PRINT );

    if (unlikely( tmp_assattr_name_45 == NULL ))
    {
        tmp_assattr_name_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_PRINT );
    }

    if ( tmp_assattr_name_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232667 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_45 = par_self.object;

    if ( tmp_assattr_target_45 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_45, const_str_plain_print_key, tmp_assattr_name_45 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_46 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_SNAPSHOT );

    if (unlikely( tmp_assattr_name_46 == NULL ))
    {
        tmp_assattr_name_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_SNAPSHOT );
    }

    if ( tmp_assattr_name_46 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232704 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_46 = par_self.object;

    if ( tmp_assattr_target_46 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_46, const_str_plain_snapshot_key, tmp_assattr_name_46 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_snapshot_key );
    if ( tmp_assattr_name_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_47 = par_self.object;

    if ( tmp_assattr_target_47 == NULL )
    {
        Py_DECREF( tmp_assattr_name_47 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_47, const_str_plain_print_screen_key, tmp_assattr_name_47 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_47 );

        frame_function->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_47 );
    tmp_assattr_name_48 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_EXECUTE );

    if (unlikely( tmp_assattr_name_48 == NULL ))
    {
        tmp_assattr_name_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_EXECUTE );
    }

    if ( tmp_assattr_name_48 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232744 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_48 = par_self.object;

    if ( tmp_assattr_target_48 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_48, const_str_plain_execute_key, tmp_assattr_name_48 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_49 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_INSERT );

    if (unlikely( tmp_assattr_name_49 == NULL ))
    {
        tmp_assattr_name_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_INSERT );
    }

    if ( tmp_assattr_name_49 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232783 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_49 = par_self.object;

    if ( tmp_assattr_target_49 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_49, const_str_plain_insert_key, tmp_assattr_name_49 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_50 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_DELETE );

    if (unlikely( tmp_assattr_name_50 == NULL ))
    {
        tmp_assattr_name_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_DELETE );
    }

    if ( tmp_assattr_name_50 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232821 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 128;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_50 = par_self.object;

    if ( tmp_assattr_target_50 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 128;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_50, const_str_plain_delete_key, tmp_assattr_name_50 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 128;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_51 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_HELP );

    if (unlikely( tmp_assattr_name_51 == NULL ))
    {
        tmp_assattr_name_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_HELP );
    }

    if ( tmp_assattr_name_51 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232859 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 129;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_51 = par_self.object;

    if ( tmp_assattr_target_51 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 129;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_51, const_str_plain_help_key, tmp_assattr_name_51 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 129;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_52 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_LWIN );

    if (unlikely( tmp_assattr_name_52 == NULL ))
    {
        tmp_assattr_name_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_LWIN );
    }

    if ( tmp_assattr_name_52 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232895 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_52 = par_self.object;

    if ( tmp_assattr_target_52 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_52, const_str_plain_windows_l_key, tmp_assattr_name_52 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 130;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_self.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_53 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_windows_l_key );
    if ( tmp_assattr_name_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_53 = par_self.object;

    if ( tmp_assattr_target_53 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_53, const_str_plain_super_l_key, tmp_assattr_name_53 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_53 );

        frame_function->f_lineno = 131;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_53 );
    tmp_assattr_name_54 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_RWIN );

    if (unlikely( tmp_assattr_name_54 == NULL ))
    {
        tmp_assattr_name_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_RWIN );
    }

    if ( tmp_assattr_name_54 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232931 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_54 = par_self.object;

    if ( tmp_assattr_target_54 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_54, const_str_plain_windows_r_key, tmp_assattr_name_54 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 132;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_55 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_windows_r_key );
    if ( tmp_assattr_name_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_55 = par_self.object;

    if ( tmp_assattr_target_55 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_55, const_str_plain_super_r_key, tmp_assattr_name_55 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_55 );

        frame_function->f_lineno = 133;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_55 );
    tmp_assattr_name_56 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_APPS );

    if (unlikely( tmp_assattr_name_56 == NULL ))
    {
        tmp_assattr_name_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_APPS );
    }

    if ( tmp_assattr_name_56 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232967 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 134;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_56 = par_self.object;

    if ( tmp_assattr_target_56 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 134;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_56, const_str_plain_apps_key, tmp_assattr_name_56 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 134;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_57 = _PyDict_NewPresized( 37 );
    tmp_dict_value_1 = Py_None;
    tmp_dict_key_1 = const_str_plain_Space;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = Py_None;
    tmp_dict_key_2 = const_str_plain_Tab;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = Py_None;
    tmp_dict_key_3 = const_str_plain_Enter;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = Py_None;
    tmp_dict_key_4 = const_str_plain_F1;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = Py_None;
    tmp_dict_key_5 = const_str_plain_F2;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = Py_None;
    tmp_dict_key_6 = const_str_plain_F3;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = Py_None;
    tmp_dict_key_7 = const_str_plain_F4;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_value_8 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD7 );

    if (unlikely( tmp_dict_value_8 == NULL ))
    {
        tmp_dict_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD7 );
    }

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233003 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_8 = const_str_plain_Home;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_8, tmp_dict_value_8 );
    tmp_dict_value_9 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD4 );

    if (unlikely( tmp_dict_value_9 == NULL ))
    {
        tmp_dict_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD4 );
    }

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233042 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_9 = const_str_plain_Left;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_9, tmp_dict_value_9 );
    tmp_dict_value_10 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD8 );

    if (unlikely( tmp_dict_value_10 == NULL ))
    {
        tmp_dict_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD8 );
    }

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233081 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_10 = const_str_plain_Up;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_10, tmp_dict_value_10 );
    tmp_dict_value_11 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD6 );

    if (unlikely( tmp_dict_value_11 == NULL ))
    {
        tmp_dict_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD6 );
    }

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233120 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_11 = const_str_plain_Right;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_11, tmp_dict_value_11 );
    tmp_dict_value_12 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD2 );

    if (unlikely( tmp_dict_value_12 == NULL ))
    {
        tmp_dict_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD2 );
    }

    if ( tmp_dict_value_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233159 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_12 = const_str_plain_Down;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_12, tmp_dict_value_12 );
    tmp_dict_value_13 = Py_None;
    tmp_dict_key_13 = const_str_plain_Prior;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_13, tmp_dict_value_13 );
    tmp_dict_value_14 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD9 );

    if (unlikely( tmp_dict_value_14 == NULL ))
    {
        tmp_dict_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD9 );
    }

    if ( tmp_dict_value_14 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233198 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 149;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_14 = const_str_plain_Page_Up;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_14, tmp_dict_value_14 );
    tmp_dict_value_15 = Py_None;
    tmp_dict_key_15 = const_str_plain_Next;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_15, tmp_dict_value_15 );
    tmp_dict_value_16 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD3 );

    if (unlikely( tmp_dict_value_16 == NULL ))
    {
        tmp_dict_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD3 );
    }

    if ( tmp_dict_value_16 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233237 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 151;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_16 = const_str_plain_Page_Down;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_16, tmp_dict_value_16 );
    tmp_dict_value_17 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD1 );

    if (unlikely( tmp_dict_value_17 == NULL ))
    {
        tmp_dict_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD1 );
    }

    if ( tmp_dict_value_17 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233276 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_17 = const_str_plain_End;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_17, tmp_dict_value_17 );
    tmp_dict_value_18 = Py_None;
    tmp_dict_key_18 = const_str_plain_Begin;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_18, tmp_dict_value_18 );
    tmp_dict_value_19 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD0 );

    if (unlikely( tmp_dict_value_19 == NULL ))
    {
        tmp_dict_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD0 );
    }

    if ( tmp_dict_value_19 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233315 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 154;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_19 = const_str_plain_Insert;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_19, tmp_dict_value_19 );
    tmp_dict_value_20 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_DECIMAL );

    if (unlikely( tmp_dict_value_20 == NULL ))
    {
        tmp_dict_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_DECIMAL );
    }

    if ( tmp_dict_value_20 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233354 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 155;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_20 = const_str_plain_Delete;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_20, tmp_dict_value_20 );
    tmp_dict_value_21 = Py_None;
    tmp_dict_key_21 = const_str_plain_Equal;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_21, tmp_dict_value_21 );
    tmp_dict_value_22 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_MULTIPLY );

    if (unlikely( tmp_dict_value_22 == NULL ))
    {
        tmp_dict_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_MULTIPLY );
    }

    if ( tmp_dict_value_22 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233393 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 157;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_22 = const_str_plain_Multiply;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_22, tmp_dict_value_22 );
    tmp_dict_value_23 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_ADD );

    if (unlikely( tmp_dict_value_23 == NULL ))
    {
        tmp_dict_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_ADD );
    }

    if ( tmp_dict_value_23 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233433 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 158;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_23 = const_str_plain_Add;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_23, tmp_dict_value_23 );
    tmp_dict_value_24 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_SEPARATOR );

    if (unlikely( tmp_dict_value_24 == NULL ))
    {
        tmp_dict_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_SEPARATOR );
    }

    if ( tmp_dict_value_24 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233468 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 159;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_24 = const_str_plain_Separator;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_24, tmp_dict_value_24 );
    tmp_dict_value_25 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_SUBTRACT );

    if (unlikely( tmp_dict_value_25 == NULL ))
    {
        tmp_dict_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_SUBTRACT );
    }

    if ( tmp_dict_value_25 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233509 ], 40, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 160;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_25 = const_str_plain_Subtract;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_25, tmp_dict_value_25 );
    tmp_dict_value_26 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_DECIMAL );

    if (unlikely( tmp_dict_value_26 == NULL ))
    {
        tmp_dict_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_DECIMAL );
    }

    if ( tmp_dict_value_26 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233354 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 161;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_26 = const_str_plain_Decimal;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_26, tmp_dict_value_26 );
    tmp_dict_value_27 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_DIVIDE );

    if (unlikely( tmp_dict_value_27 == NULL ))
    {
        tmp_dict_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_DIVIDE );
    }

    if ( tmp_dict_value_27 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233549 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_27 = const_str_plain_Divide;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_27, tmp_dict_value_27 );
    tmp_dict_value_28 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD0 );

    if (unlikely( tmp_dict_value_28 == NULL ))
    {
        tmp_dict_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD0 );
    }

    if ( tmp_dict_value_28 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233315 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 163;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_28 = const_int_0;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_28, tmp_dict_value_28 );
    tmp_dict_value_29 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD1 );

    if (unlikely( tmp_dict_value_29 == NULL ))
    {
        tmp_dict_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD1 );
    }

    if ( tmp_dict_value_29 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233276 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 164;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_29 = const_int_pos_1;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_29, tmp_dict_value_29 );
    tmp_dict_value_30 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD2 );

    if (unlikely( tmp_dict_value_30 == NULL ))
    {
        tmp_dict_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD2 );
    }

    if ( tmp_dict_value_30 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233159 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 165;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_30 = const_int_pos_2;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_30, tmp_dict_value_30 );
    tmp_dict_value_31 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD3 );

    if (unlikely( tmp_dict_value_31 == NULL ))
    {
        tmp_dict_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD3 );
    }

    if ( tmp_dict_value_31 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233237 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 166;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_31 = const_int_pos_3;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_31, tmp_dict_value_31 );
    tmp_dict_value_32 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD4 );

    if (unlikely( tmp_dict_value_32 == NULL ))
    {
        tmp_dict_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD4 );
    }

    if ( tmp_dict_value_32 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233042 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_32 = const_int_pos_4;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_32, tmp_dict_value_32 );
    tmp_dict_value_33 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD5 );

    if (unlikely( tmp_dict_value_33 == NULL ))
    {
        tmp_dict_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD5 );
    }

    if ( tmp_dict_value_33 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233587 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 168;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_33 = const_int_pos_5;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_33, tmp_dict_value_33 );
    tmp_dict_value_34 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD6 );

    if (unlikely( tmp_dict_value_34 == NULL ))
    {
        tmp_dict_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD6 );
    }

    if ( tmp_dict_value_34 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233120 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 169;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_34 = const_int_pos_6;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_34, tmp_dict_value_34 );
    tmp_dict_value_35 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD7 );

    if (unlikely( tmp_dict_value_35 == NULL ))
    {
        tmp_dict_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD7 );
    }

    if ( tmp_dict_value_35 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233003 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 170;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_35 = const_int_pos_7;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_35, tmp_dict_value_35 );
    tmp_dict_value_36 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD8 );

    if (unlikely( tmp_dict_value_36 == NULL ))
    {
        tmp_dict_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD8 );
    }

    if ( tmp_dict_value_36 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233081 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 171;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_36 = const_int_pos_8;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_36, tmp_dict_value_36 );
    tmp_dict_value_37 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD9 );

    if (unlikely( tmp_dict_value_37 == NULL ))
    {
        tmp_dict_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NUMPAD9 );
    }

    if ( tmp_dict_value_37 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233198 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_37 = const_int_pos_9;
    PyDict_SetItem( tmp_assattr_name_57, tmp_dict_key_37, tmp_dict_value_37 );
    tmp_assattr_target_57 = par_self.object;

    if ( tmp_assattr_target_57 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 136;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_57, const_str_plain_keypad_keys, tmp_assattr_name_57 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_57 );

        frame_function->f_lineno = 172;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_57 );
    tmp_source_name_9 = par_self.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_58 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_keypad_keys );
    if ( tmp_assattr_name_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_58 = par_self.object;

    if ( tmp_assattr_target_58 == NULL )
    {
        Py_DECREF( tmp_assattr_name_58 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_58, const_str_plain_numpad_keys, tmp_assattr_name_58 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_58 );

        frame_function->f_lineno = 173;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_58 );
    tmp_assattr_name_59 = PyList_New( 36 );
    tmp_list_element_1 = Py_None;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 0, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F1 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F1 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233626 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 1, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F2 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F2 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233660 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 2, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F3 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F3 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233694 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 3, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F4 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F4 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233728 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 4, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F5 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F5 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233762 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 5, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F6 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F6 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233796 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 6, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F7 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F7 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233830 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 7, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F8 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F8 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233864 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 8, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F9 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F9 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233898 ], 34, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 9, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F10 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F10 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233932 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 10, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F11 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F11 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 233967 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 11, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F12 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F12 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234002 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 176;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 12, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F13 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F13 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234037 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 13, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F14 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F14 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234072 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 14, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F15 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F15 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234107 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 15, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F16 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F16 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234142 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 16, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F17 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F17 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234177 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 17, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F18 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F18 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234212 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 177;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 18, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F19 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F19 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234247 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 19, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F20 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F20 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234282 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 20, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F21 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F21 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234317 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 21, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F22 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F22 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234352 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 22, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F23 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F23 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234387 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 23, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_F24 );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_F24 );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234422 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 178;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 24, tmp_list_element_1 );
    tmp_list_element_1 = Py_None;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 25, tmp_list_element_1 );
    tmp_list_element_1 = Py_None;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 26, tmp_list_element_1 );
    tmp_list_element_1 = Py_None;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 27, tmp_list_element_1 );
    tmp_list_element_1 = Py_None;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 28, tmp_list_element_1 );
    tmp_list_element_1 = Py_None;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 29, tmp_list_element_1 );
    tmp_list_element_1 = Py_None;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 30, tmp_list_element_1 );
    tmp_list_element_1 = Py_None;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 31, tmp_list_element_1 );
    tmp_list_element_1 = Py_None;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 32, tmp_list_element_1 );
    tmp_list_element_1 = Py_None;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 33, tmp_list_element_1 );
    tmp_list_element_1 = Py_None;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 34, tmp_list_element_1 );
    tmp_list_element_1 = Py_None;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_59, 35, tmp_list_element_1 );
    tmp_assattr_target_59 = par_self.object;

    if ( tmp_assattr_target_59 == NULL )
    {
        Py_DECREF( tmp_assattr_name_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_59, const_str_plain_function_keys, tmp_assattr_name_59 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_59 );

        frame_function->f_lineno = 180;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_59 );
    tmp_assattr_name_60 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_CANCEL );

    if (unlikely( tmp_assattr_name_60 == NULL ))
    {
        tmp_assattr_name_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_CANCEL );
    }

    if ( tmp_assattr_name_60 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234457 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 182;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_60 = par_self.object;

    if ( tmp_assattr_target_60 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 182;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_60, const_str_plain_cancel_key, tmp_assattr_name_60 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 182;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = par_self.object;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_61 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_cancel_key );
    if ( tmp_assattr_name_61 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_61 = par_self.object;

    if ( tmp_assattr_target_61 == NULL )
    {
        Py_DECREF( tmp_assattr_name_61 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_61, const_str_plain_break_key, tmp_assattr_name_61 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_61 );

        frame_function->f_lineno = 183;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_61 );
    tmp_assattr_name_62 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_MODECHANGE );

    if (unlikely( tmp_assattr_name_62 == NULL ))
    {
        tmp_assattr_name_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_MODECHANGE );
    }

    if ( tmp_assattr_name_62 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232225 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_62 = par_self.object;

    if ( tmp_assattr_target_62 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 184;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_62, const_str_plain_mode_switch_key, tmp_assattr_name_62 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 184;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_63 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_BROWSER_BACK );

    if (unlikely( tmp_assattr_name_63 == NULL ))
    {
        tmp_assattr_name_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_BROWSER_BACK );
    }

    if ( tmp_assattr_name_63 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234495 ], 44, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_63 = par_self.object;

    if ( tmp_assattr_target_63 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_63, const_str_plain_browser_back_key, tmp_assattr_name_63 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 185;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_64 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_BROWSER_FORWARD );

    if (unlikely( tmp_assattr_name_64 == NULL ))
    {
        tmp_assattr_name_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_BROWSER_FORWARD );
    }

    if ( tmp_assattr_name_64 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234539 ], 47, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_64 = par_self.object;

    if ( tmp_assattr_target_64 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_64, const_str_plain_browser_forward_key, tmp_assattr_name_64 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 186;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_65 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_PROCESSKEY );

    if (unlikely( tmp_assattr_name_65 == NULL ))
    {
        tmp_assattr_name_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_PROCESSKEY );
    }

    if ( tmp_assattr_name_65 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234586 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_65 = par_self.object;

    if ( tmp_assattr_target_65 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_65, const_str_plain_processkey_key, tmp_assattr_name_65 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 187;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_66 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_ATTN );

    if (unlikely( tmp_assattr_name_66 == NULL ))
    {
        tmp_assattr_name_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_ATTN );
    }

    if ( tmp_assattr_name_66 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234628 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_66 = par_self.object;

    if ( tmp_assattr_target_66 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_66, const_str_plain_attn_key, tmp_assattr_name_66 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 188;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_67 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_CRSEL );

    if (unlikely( tmp_assattr_name_67 == NULL ))
    {
        tmp_assattr_name_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_CRSEL );
    }

    if ( tmp_assattr_name_67 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234664 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_67 = par_self.object;

    if ( tmp_assattr_target_67 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_67, const_str_plain_crsel_key, tmp_assattr_name_67 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 189;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_68 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_EXSEL );

    if (unlikely( tmp_assattr_name_68 == NULL ))
    {
        tmp_assattr_name_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_EXSEL );
    }

    if ( tmp_assattr_name_68 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234701 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_68 = par_self.object;

    if ( tmp_assattr_target_68 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_68, const_str_plain_exsel_key, tmp_assattr_name_68 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 190;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_69 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_EREOF );

    if (unlikely( tmp_assattr_name_69 == NULL ))
    {
        tmp_assattr_name_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_EREOF );
    }

    if ( tmp_assattr_name_69 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234738 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 191;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_69 = par_self.object;

    if ( tmp_assattr_target_69 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 191;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_69, const_str_plain_ereof_key, tmp_assattr_name_69 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 191;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_70 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_PLAY );

    if (unlikely( tmp_assattr_name_70 == NULL ))
    {
        tmp_assattr_name_70 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_PLAY );
    }

    if ( tmp_assattr_name_70 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234775 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 192;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_70 = par_self.object;

    if ( tmp_assattr_target_70 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 192;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_70, const_str_plain_play_key, tmp_assattr_name_70 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 192;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_71 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_ZOOM );

    if (unlikely( tmp_assattr_name_71 == NULL ))
    {
        tmp_assattr_name_71 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_ZOOM );
    }

    if ( tmp_assattr_name_71 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234811 ], 36, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_71 = par_self.object;

    if ( tmp_assattr_target_71 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_71, const_str_plain_zoom_key, tmp_assattr_name_71 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 193;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_72 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_NONAME );

    if (unlikely( tmp_assattr_name_72 == NULL ))
    {
        tmp_assattr_name_72 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_NONAME );
    }

    if ( tmp_assattr_name_72 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234847 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_72 = par_self.object;

    if ( tmp_assattr_target_72 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_72, const_str_plain_noname_key, tmp_assattr_name_72 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 194;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_73 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_PA1 );

    if (unlikely( tmp_assattr_name_73 == NULL ))
    {
        tmp_assattr_name_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_PA1 );
    }

    if ( tmp_assattr_name_73 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234885 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_73 = par_self.object;

    if ( tmp_assattr_target_73 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_73, const_str_plain_pa1_key, tmp_assattr_name_73 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 195;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_74 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_OEM_CLEAR );

    if (unlikely( tmp_assattr_name_74 == NULL ))
    {
        tmp_assattr_name_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_OEM_CLEAR );
    }

    if ( tmp_assattr_name_74 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234920 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_74 = par_self.object;

    if ( tmp_assattr_target_74 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_74, const_str_plain_oem_clear_key, tmp_assattr_name_74 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 196;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_75 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_VOLUME_MUTE );

    if (unlikely( tmp_assattr_name_75 == NULL ))
    {
        tmp_assattr_name_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_VOLUME_MUTE );
    }

    if ( tmp_assattr_name_75 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 234961 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_75 = par_self.object;

    if ( tmp_assattr_target_75 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_75, const_str_plain_volume_mute_key, tmp_assattr_name_75 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 197;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_76 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_VOLUME_DOWN );

    if (unlikely( tmp_assattr_name_76 == NULL ))
    {
        tmp_assattr_name_76 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_VOLUME_DOWN );
    }

    if ( tmp_assattr_name_76 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235004 ], 43, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_76 = par_self.object;

    if ( tmp_assattr_target_76 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_76, const_str_plain_volume_down_key, tmp_assattr_name_76 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 198;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_77 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_VOLUME_UP );

    if (unlikely( tmp_assattr_name_77 == NULL ))
    {
        tmp_assattr_name_77 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_VOLUME_UP );
    }

    if ( tmp_assattr_name_77 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235047 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_77 = par_self.object;

    if ( tmp_assattr_target_77 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_77, const_str_plain_volume_up_key, tmp_assattr_name_77 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_78 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_MEDIA_NEXT_TRACK );

    if (unlikely( tmp_assattr_name_78 == NULL ))
    {
        tmp_assattr_name_78 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_MEDIA_NEXT_TRACK );
    }

    if ( tmp_assattr_name_78 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235088 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_78 = par_self.object;

    if ( tmp_assattr_target_78 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_78, const_str_plain_media_next_track_key, tmp_assattr_name_78 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 200;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_79 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_MEDIA_PREV_TRACK );

    if (unlikely( tmp_assattr_name_79 == NULL ))
    {
        tmp_assattr_name_79 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_MEDIA_PREV_TRACK );
    }

    if ( tmp_assattr_name_79 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235136 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_79 = par_self.object;

    if ( tmp_assattr_target_79 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_79, const_str_plain_media_prev_track_key, tmp_assattr_name_79 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 201;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_80 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_MEDIA_PLAY_PAUSE );

    if (unlikely( tmp_assattr_name_80 == NULL ))
    {
        tmp_assattr_name_80 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_MEDIA_PLAY_PAUSE );
    }

    if ( tmp_assattr_name_80 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235184 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_80 = par_self.object;

    if ( tmp_assattr_target_80 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_80, const_str_plain_media_play_pause_key, tmp_assattr_name_80 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 202;
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_self.object;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_81 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_home_key );
    if ( tmp_assattr_name_81 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_81 = par_self.object;

    if ( tmp_assattr_target_81 == NULL )
    {
        Py_DECREF( tmp_assattr_name_81 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_81, const_str_plain_begin_key, tmp_assattr_name_81 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_81 );

        frame_function->f_lineno = 203;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_81 );
    tmp_assattr_name_82 = LIST_COPY( const_list_none_none_none_none_none_none_none_none_none_none_none_list );
    tmp_assattr_target_82 = par_self.object;

    if ( tmp_assattr_target_82 == NULL )
    {
        Py_DECREF( tmp_assattr_name_82 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 205;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_82, const_str_plain_l_keys, tmp_assattr_name_82 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_82 );

        frame_function->f_lineno = 205;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_82 );
    tmp_assattr_name_83 = LIST_COPY( const_list_dc472e9501fdc5a3a8696cd87daa6c57_list );
    tmp_assattr_target_83 = par_self.object;

    if ( tmp_assattr_target_83 == NULL )
    {
        Py_DECREF( tmp_assattr_name_83 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 207;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_83, const_str_plain_r_keys, tmp_assattr_name_83 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_83 );

        frame_function->f_lineno = 207;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_83 );
    tmp_assattr_name_84 = Py_None;
    tmp_assattr_target_84 = par_self.object;

    if ( tmp_assattr_target_84 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_84, const_str_plain_linefeed_key, tmp_assattr_name_84 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_85 = Py_None;
    tmp_assattr_target_85 = par_self.object;

    if ( tmp_assattr_target_85 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 211;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_85, const_str_plain_find_key, tmp_assattr_name_85 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 211;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_86 = Py_None;
    tmp_assattr_target_86 = par_self.object;

    if ( tmp_assattr_target_86 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 212;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_86, const_str_plain_meta_l_key, tmp_assattr_name_86 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 212;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_87 = Py_None;
    tmp_assattr_target_87 = par_self.object;

    if ( tmp_assattr_target_87 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_87, const_str_plain_meta_r_key, tmp_assattr_name_87 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 213;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_88 = Py_None;
    tmp_assattr_target_88 = par_self.object;

    if ( tmp_assattr_target_88 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_88, const_str_plain_sys_req_key, tmp_assattr_name_88 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 214;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_89 = Py_None;
    tmp_assattr_target_89 = par_self.object;

    if ( tmp_assattr_target_89 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_89, const_str_plain_hyper_l_key, tmp_assattr_name_89 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_90 = Py_None;
    tmp_assattr_target_90 = par_self.object;

    if ( tmp_assattr_target_90 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 216;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_90, const_str_plain_hyper_r_key, tmp_assattr_name_90 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 216;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_91 = Py_None;
    tmp_assattr_target_91 = par_self.object;

    if ( tmp_assattr_target_91 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 217;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_91, const_str_plain_undo_key, tmp_assattr_name_91 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 217;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_92 = Py_None;
    tmp_assattr_target_92 = par_self.object;

    if ( tmp_assattr_target_92 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_92, const_str_plain_redo_key, tmp_assattr_name_92 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 218;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_93 = Py_None;
    tmp_assattr_target_93 = par_self.object;

    if ( tmp_assattr_target_93 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 219;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_93, const_str_plain_script_switch_key, tmp_assattr_name_93 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 219;
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
static PyObject *fparse_function_4_special_key_assignment_of_class_2_PyKeyboard_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "special_key_assignment() keywords must be strings" );
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
                   "special_key_assignment() got an unexpected keyword argument '%s'",
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


    return impl_function_4_special_key_assignment_of_class_2_PyKeyboard_of_module_pykeyboard$windows( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4_special_key_assignment_of_class_2_PyKeyboard_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_4_special_key_assignment_of_class_2_PyKeyboard_of_module_pykeyboard$windows( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_special_key_assignment_of_class_2_PyKeyboard_of_module_pykeyboard$windows( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var___init__;
    PyObjectLocalVariable var_run;
    PyObjectLocalVariable var_stop;
    PyObjectLocalVariable var_handler;
    PyObjectLocalVariable var__key_press;
    PyObjectLocalVariable var__key_release;
    PyObjectLocalVariable var_escape_code;
    PyObjectLocalVariable var_toggle_shift_state;
    PyObjectLocalVariable var_toggle_alt_state;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_304b294387f880a85f802114650f74f9;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_c82f3033fe58beddbe2080652c7e6f8c;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_13fbede9355df563f4a765affb988dad, module_pykeyboard$windows );
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
    tmp_assign_source_3 = MAKE_FUNCTION_function_1___init___of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 226;
        goto frame_exception_exit_1;
    }
    assert( var___init__.object == NULL );
    var___init__.object = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_2_run_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 234;
        goto frame_exception_exit_1;
    }
    assert( var_run.object == NULL );
    var_run.object = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_function_3_stop_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 243;
        goto frame_exception_exit_1;
    }
    assert( var_stop.object == NULL );
    var_stop.object = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_function_4_handler_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_function->f_lineno = 248;
        goto frame_exception_exit_1;
    }
    assert( var_handler.object == NULL );
    var_handler.object = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_function_5__key_press_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_7 );

        frame_function->f_lineno = 262;
        goto frame_exception_exit_1;
    }
    assert( var__key_press.object == NULL );
    var__key_press.object = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_function_6__key_release_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_8 );

        frame_function->f_lineno = 279;
        goto frame_exception_exit_1;
    }
    assert( var__key_release.object == NULL );
    var__key_release.object = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_function_7_escape_code_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_function->f_lineno = 295;
        goto frame_exception_exit_1;
    }
    assert( var_escape_code.object == NULL );
    var_escape_code.object = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_function_8_toggle_shift_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        frame_function->f_lineno = 300;
        goto frame_exception_exit_1;
    }
    assert( var_toggle_shift_state.object == NULL );
    var_toggle_shift_state.object = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_function_9_toggle_alt_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        frame_function->f_lineno = 305;
        goto frame_exception_exit_1;
    }
    assert( var_toggle_alt_state.object == NULL );
    var_toggle_alt_state.object = tmp_assign_source_11;


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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain___init__,
            var___init__.object
        );

    }
    if ((var_run.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_run,
            var_run.object
        );

    }
    if ((var_stop.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_stop,
            var_stop.object
        );

    }
    if ((var_handler.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_handler,
            var_handler.object
        );

    }
    if ((var__key_press.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__key_press,
            var__key_press.object
        );

    }
    if ((var__key_release.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain__key_release,
            var__key_release.object
        );

    }
    if ((var_escape_code.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_escape_code,
            var_escape_code.object
        );

    }
    if ((var_toggle_shift_state.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_toggle_shift_state,
            var_toggle_shift_state.object
        );

    }
    if ((var_toggle_alt_state.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_toggle_alt_state,
            var_toggle_alt_state.object
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
    if ((var___init__.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__.object
        );

    }
    if ((var_run.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_run,
            var_run.object
        );

    }
    if ((var_stop.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_stop,
            var_stop.object
        );

    }
    if ((var_handler.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_handler,
            var_handler.object
        );

    }
    if ((var__key_press.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__key_press,
            var__key_press.object
        );

    }
    if ((var__key_release.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain__key_release,
            var__key_release.object
        );

    }
    if ((var_escape_code.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_escape_code,
            var_escape_code.object
        );

    }
    if ((var_toggle_shift_state.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_toggle_shift_state,
            var_toggle_shift_state.object
        );

    }
    if ((var_toggle_alt_state.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_toggle_alt_state,
            var_toggle_alt_state.object
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


static PyObject *impl_function_1___init___of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_pyHook;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_11e77e342d38e87ea5d98cd040c85b11, module_pykeyboard$windows );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_pykeyboard$windows)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_pyHook.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_pyHook,
            var_pyHook.object
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
    frame_function->f_lineno = 227;
    tmp_assign_source_1 = IMPORT_MODULE( const_str_plain_pyHook, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 227;
        goto frame_exception_exit_1;
    }
    assert( var_pyHook.object == NULL );
    var_pyHook.object = tmp_assign_source_1;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_PyKeyboardEventMeta );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyKeyboardEventMeta );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235232 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_self.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 229;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 229;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = var_pyHook.object;

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_HookManager );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 230;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 230;
    tmp_assattr_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 230;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 230;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_hm, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 230;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_assattr_name_2 = const_int_0;
    tmp_assattr_target_2 = par_self.object;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_shift_state, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 231;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = const_int_0;
    tmp_assattr_target_3 = par_self.object;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 232;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_alt_state, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 232;
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
    if ((var_pyHook.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_pyHook,
            var_pyHook.object
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
static PyObject *fparse_function_1___init___of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___init___of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1___init___of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_run_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject *_python_par_self )
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
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b8f3512d26a82ef54c1a2576effdbedf, module_pykeyboard$windows );
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
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_state, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 236;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_handler );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_hm );
    if ( tmp_assattr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_KeyAll, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_target_2 );

        frame_function->f_lineno = 237;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_target_2 );
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_hm );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_HookKeyboard );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 238;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 238;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    loop_start_1:;
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_state );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 239;
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
    goto loop_end_1;
    branch_no_1:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 224588 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 240;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sleep );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 240;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_float_0_01;
    frame_function->f_lineno = 240;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 240;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_pythoncom );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pythoncom );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235280 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_PumpWaitingMessages );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 241;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 241;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 239;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

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
static PyObject *fparse_function_2_run_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "run() keywords must be strings" );
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
                   "run() got an unexpected keyword argument '%s'",
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


    return impl_function_2_run_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_run_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_run_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_run_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_stop_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_dc94b12c77634a9ba5a35d031bc569da, module_pykeyboard$windows );
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

        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_hm );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_UnhookKeyboard );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 245;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 245;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = Py_False;
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 246;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_state, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 246;
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
static PyObject *fparse_function_3_stop_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "stop() keywords must be strings" );
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
                   "stop() got an unexpected keyword argument '%s'",
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


    return impl_function_3_stop_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_stop_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_3_stop_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_stop_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_handler_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_reply )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_reply; par_reply.object = _python_par_reply;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
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
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_print_value;
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
    PyObject *tmp_str_arg_1;
    PyObject *tmp_unary_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_106f4763299e004cd8d8f598295ff36b, module_pykeyboard$windows );
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
    tmp_source_name_1 = par_reply.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235318 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Message );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_pyHook );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pyHook );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235369 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_HookConstants );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_WM_KEYDOWN );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 250;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_Eq_1 == 1)
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__key_press );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_reply.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235318 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 251;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 251;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_5 = par_reply.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235318 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 252;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Message );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 252;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_pyHook );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pyHook );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235369 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 252;
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_HookConstants );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 252;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_WM_KEYUP );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        frame_function->f_lineno = 252;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 252;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if (tmp_cmp_Eq_2 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__key_release );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_reply.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235318 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 253;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 253;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_9 = par_reply.object;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235318 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_Message );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_pyHook );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pyHook );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235369 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_HookConstants );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_WM_SYSKEYDOWN );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_3 );
        Py_DECREF( tmp_compare_right_3 );

        frame_function->f_lineno = 254;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    Py_DECREF( tmp_compare_right_3 );
    if (tmp_cmp_Eq_3 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_12 = par_self.object;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__key_press );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = par_reply.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_3 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235318 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 255;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 255;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_13 = par_reply.object;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235318 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_Message );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_pyHook );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pyHook );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235369 ], 35, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_HookConstants );
    if ( tmp_source_name_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_WM );
    Py_DECREF( tmp_source_name_15 );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_SYSKEYUP );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );

        frame_function->f_lineno = 256;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if (tmp_cmp_Eq_4 == 1)
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_17 = par_self.object;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__key_release );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = par_reply.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235318 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 257;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 257;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_18 = const_str_digest_430f294c53e5fe2cdd661c1597267a61;
    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_format );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = par_reply.object;

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 235318 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_Message );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 259;
    tmp_str_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_str_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }
    tmp_print_value = PyObject_Str( tmp_str_arg_1 );
    Py_DECREF( tmp_str_arg_1 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_print_value );

        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 259;
        goto frame_exception_exit_1;
    }
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    tmp_source_name_20 = par_self.object;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_unary_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_capture );
    if ( tmp_unary_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_unary_arg_1 );
    Py_DECREF( tmp_unary_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 260;
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_reply.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_reply,
            par_reply.object
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
static PyObject *fparse_function_4_handler_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_reply = NULL;
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
                PyErr_Format( PyExc_TypeError, "handler() keywords must be strings" );
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
            if ( found == false && const_str_plain_reply == key )
            {
                assert( _python_par_reply == NULL );
                _python_par_reply = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_reply, key ) == 1 )
            {
                assert( _python_par_reply == NULL );
                _python_par_reply = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "handler() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_reply != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_reply = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_reply == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_reply = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_reply == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_reply };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_4_handler_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, _python_par_self, _python_par_reply );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_reply );

    return NULL;
}

static PyObject *dparse_function_4_handler_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_4_handler_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_handler_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5__key_press_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_event )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_event; par_event.object = _python_par_event;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ab8907a456750c61c856f4824f8a4c10, module_pykeyboard$windows );
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

        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_escape_code );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_event.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 26302 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 263;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 263;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 263;
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

        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_stop );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 264;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 264;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_3 = par_event.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 26302 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_GetKey );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 265;
    tmp_compare_left_1 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = LIST_COPY( const_list_680e49127fd1969fec06bde96e9ded36_list );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 265;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if (tmp_cmp_In_1 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 266;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_toggle_shift_state );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 266;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 266;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_source_name_5 = par_event.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 26302 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 267;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_GetKey );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 267;
    tmp_compare_left_2 = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 267;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = LIST_COPY( const_list_str_plain_Menu_str_plain_Lmenu_str_plain_Rmenu_list );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 267;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if (tmp_cmp_In_2 == 1)
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_toggle_alt_state );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 268;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_6 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 268;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;

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
    if ((par_event.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_event,
            par_event.object
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
static PyObject *fparse_function_5__key_press_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_event = NULL;
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
                PyErr_Format( PyExc_TypeError, "_key_press() keywords must be strings" );
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
            if ( found == false && const_str_plain_event == key )
            {
                assert( _python_par_event == NULL );
                _python_par_event = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_event, key ) == 1 )
            {
                assert( _python_par_event == NULL );
                _python_par_event = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_key_press() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_event != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_event = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_event == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_event = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_event == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_event };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_5__key_press_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, _python_par_self, _python_par_event );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_event );

    return NULL;
}

static PyObject *dparse_function_5__key_press_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_5__key_press_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5__key_press_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6__key_release_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_event )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_event; par_event.object = _python_par_event;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bf6e774eb49cdfd59af2afafeb64442e, module_pykeyboard$windows );
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
    tmp_source_name_1 = par_event.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 26302 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 280;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_GetKey );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 280;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 280;
    tmp_compare_left_1 = CALL_FUNCTION_NO_ARGS( tmp_called_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 280;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = LIST_COPY( const_list_680e49127fd1969fec06bde96e9ded36_list );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        frame_function->f_lineno = 280;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
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
    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_toggle_shift_state );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 281;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 281;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_3 = par_event.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 26302 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 282;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_GetKey );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 282;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 282;
    tmp_compare_left_2 = CALL_FUNCTION_NO_ARGS( tmp_called_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 282;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = LIST_COPY( const_list_str_plain_Menu_str_plain_Lmenu_str_plain_Rmenu_list );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    if ( tmp_cmp_In_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_compare_right_2 );

        frame_function->f_lineno = 282;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if (tmp_cmp_In_2 == 1)
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = par_self.object;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_toggle_alt_state );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 283;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 283;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 284;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_key_release );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 284;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 284;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_5 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 284;
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
    if ((par_event.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_event,
            par_event.object
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
static PyObject *fparse_function_6__key_release_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_event = NULL;
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
                PyErr_Format( PyExc_TypeError, "_key_release() keywords must be strings" );
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
            if ( found == false && const_str_plain_event == key )
            {
                assert( _python_par_event == NULL );
                _python_par_event = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_event, key ) == 1 )
            {
                assert( _python_par_event == NULL );
                _python_par_event = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_key_release() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_event != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_event = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_event == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_event = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_event == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_event };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_6__key_release_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, _python_par_self, _python_par_event );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_event );

    return NULL;
}

static PyObject *dparse_function_6__key_release_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_6__key_release_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6__key_release_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_escape_code_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_event )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_event; par_event.object = _python_par_event;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f18e4665d4eaaf7cce3b48815baa3dd6, module_pykeyboard$windows );
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
    tmp_source_name_1 = par_event.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 26302 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_KeyID );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_VK_ESCAPE );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VK_ESCAPE );
    }

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 232267 ], 38, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 296;
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        frame_function->f_lineno = 296;
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
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
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
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_event.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_event,
            par_event.object
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
    tmp_return_value = Py_False;
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
static PyObject *fparse_function_7_escape_code_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_event = NULL;
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
                PyErr_Format( PyExc_TypeError, "escape_code() keywords must be strings" );
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
            if ( found == false && const_str_plain_event == key )
            {
                assert( _python_par_event == NULL );
                _python_par_event = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_event, key ) == 1 )
            {
                assert( _python_par_event == NULL );
                _python_par_event = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "escape_code() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_event != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_event = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_event == NULL )
    {
        if ( 1 + self->m_defaults_given >= 2  )
        {
            _python_par_event = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 2 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_event == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_event };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_7_escape_code_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, _python_par_self, _python_par_event );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_event );

    return NULL;
}

static PyObject *dparse_function_7_escape_code_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2 )
    {
        return impl_function_7_escape_code_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_escape_code_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_toggle_shift_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_states;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = LIST_COPY( const_list_int_pos_1_int_0_list );
    assert( var_states.object == NULL );
    var_states.object = tmp_assign_source_1;

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4690012f44f047f011ded50be21900b4, module_pykeyboard$windows );
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
    tmp_subscr_target_1 = var_states.object;

    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shift_state );
    if ( tmp_subscr_subscript_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_subscript_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_shift_state, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 303;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

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
    if ((var_states.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_states,
            var_states.object
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
static PyObject *fparse_function_8_toggle_shift_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "toggle_shift_state() keywords must be strings" );
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
                   "toggle_shift_state() got an unexpected keyword argument '%s'",
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


    return impl_function_8_toggle_shift_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_8_toggle_shift_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_8_toggle_shift_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_toggle_shift_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_toggle_alt_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_states;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = LIST_COPY( const_list_int_pos_2_none_int_0_list );
    assert( var_states.object == NULL );
    var_states.object = tmp_assign_source_1;

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_de5dcb42ca3b5a563dbf666ad8c16075, module_pykeyboard$windows );
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
    tmp_subscr_target_1 = var_states.object;

    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_alt_state );
    if ( tmp_subscr_subscript_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_1 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    Py_DECREF( tmp_subscr_subscript_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_alt_state, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 308;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

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
    if ((var_states.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_states,
            var_states.object
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
static PyObject *fparse_function_9_toggle_alt_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "toggle_alt_state() keywords must be strings" );
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
                   "toggle_alt_state() got an unexpected keyword argument '%s'",
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


    return impl_function_9_toggle_alt_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_9_toggle_alt_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_9_toggle_alt_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_toggle_alt_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_SupportError_of_module_pykeyboard$windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_SupportError_of_module_pykeyboard$windows,
        dparse_function_1___init___of_class_1_SupportError_of_module_pykeyboard$windows,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0166ce6280b5fd070ae7bf505408acb2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pykeyboard$windows,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_PyKeyboard_of_module_pykeyboard$windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_PyKeyboard_of_module_pykeyboard$windows,
        dparse_function_1___init___of_class_2_PyKeyboard_of_module_pykeyboard$windows,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b039baefabde27ba9ba012ed49313be3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pykeyboard$windows,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        dparse_function_1___init___of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_da3ef9ebca85eb6fb58f9276411d33e6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pykeyboard$windows,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___str___of_class_1_SupportError_of_module_pykeyboard$windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___str___of_class_1_SupportError_of_module_pykeyboard$windows,
        dparse_function_2___str___of_class_1_SupportError_of_module_pykeyboard$windows,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_03f3338f6b0135ca6e3a5641b1339f1c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pykeyboard$windows,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_press_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_press_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows,
        dparse_function_2_press_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows,
        const_str_plain_press_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dfbe36f9ba4be8eff921f90e4971fab2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pykeyboard$windows,
        const_str_digest_77e8f90c2593181743d95d3e93e26d38
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_run_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_run_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        dparse_function_2_run_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        const_str_plain_run,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b8f3512d26a82ef54c1a2576effdbedf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pykeyboard$windows,
        const_str_digest_f903992cc3a359806bda4e6e222f2cd9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_release_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_release_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows,
        dparse_function_3_release_key_of_class_2_PyKeyboard_of_module_pykeyboard$windows,
        const_str_plain_release_key,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d722d6cc7706a7949c25db26e163bd25,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pykeyboard$windows,
        const_str_digest_f44127ac7deee22c8e2fdeefb8c8d1f3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_stop_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_stop_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        dparse_function_3_stop_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        const_str_plain_stop,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dc94b12c77634a9ba5a35d031bc569da,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pykeyboard$windows,
        const_str_digest_81131154dd8af0cb400c481a2c6e6bc0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_handler_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_handler_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        dparse_function_4_handler_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        const_str_plain_handler,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_106f4763299e004cd8d8f598295ff36b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pykeyboard$windows,
        const_str_digest_ede8e273ef0cc55d613221af7d241c77
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_special_key_assignment_of_class_2_PyKeyboard_of_module_pykeyboard$windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_special_key_assignment_of_class_2_PyKeyboard_of_module_pykeyboard$windows,
        dparse_function_4_special_key_assignment_of_class_2_PyKeyboard_of_module_pykeyboard$windows,
        const_str_plain_special_key_assignment,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_10d8039b9eaf7b5b7a5783ff51877c3f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pykeyboard$windows,
        const_str_digest_02aedd624c8ff354e1ecf13b591869f5
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5__key_press_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5__key_press_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        dparse_function_5__key_press_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        const_str_plain__key_press,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ab8907a456750c61c856f4824f8a4c10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pykeyboard$windows,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6__key_release_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6__key_release_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        dparse_function_6__key_release_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        const_str_plain__key_release,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bf6e774eb49cdfd59af2afafeb64442e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pykeyboard$windows,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_escape_code_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_escape_code_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        dparse_function_7_escape_code_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        const_str_plain_escape_code,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f18e4665d4eaaf7cce3b48815baa3dd6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pykeyboard$windows,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_toggle_shift_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_toggle_shift_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        dparse_function_8_toggle_shift_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        const_str_plain_toggle_shift_state,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dda3850a9a885c7b3ea9e661d44f1d79,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pykeyboard$windows,
        const_str_digest_8f8a0d293c0f0029c0df8b44d84a2605
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_toggle_alt_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_toggle_alt_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        dparse_function_9_toggle_alt_state_of_class_3_PyKeyboardEvent_of_module_pykeyboard$windows,
        const_str_plain_toggle_alt_state,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d3fb1a1f4de9a34a4bbd2428e18f07cd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_pykeyboard$windows,
        const_str_digest_8d62b11565e4be9b03a0543777df1786
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pykeyboard$windows =
{
    PyModuleDef_HEAD_INIT,
    "pykeyboard.windows",   /* m_name */
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

MOD_INIT_DECL( pykeyboard$windows )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pykeyboard$windows );
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

    // puts( "in initpykeyboard$windows" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pykeyboard$windows = Py_InitModule4(
        "pykeyboard.windows",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_pykeyboard$windows = PyModule_Create( &mdef_pykeyboard$windows );
#endif

    moduledict_pykeyboard$windows = (PyDictObject *)((PyModuleObject *)module_pykeyboard$windows)->md_dict;

    assertObject( module_pykeyboard$windows );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_304b294387f880a85f802114650f74f9, module_pykeyboard$windows );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_pykeyboard$windows );

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
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    int tmp_tried_lineno_1;
    int tmp_tried_lineno_2;
    int tmp_tried_lineno_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_363635719b6bc144bc9d42955626ab7b;
    UPDATE_STRING_DICT0( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_f56ea80294b91b4cd52d24e2ddd0fdf5, module_pykeyboard$windows );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_pykeyboard$windows)->md_dict;
    frame_module->f_lineno = 16;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_ctypes, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_pykeyboard$windows, true, tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_1 );

        frame_module->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_1 );
    tmp_import_globals_2 = ((PyModuleObject *)module_pykeyboard$windows)->md_dict;
    frame_module->f_lineno = 17;
    tmp_assign_source_3 = IMPORT_MODULE( const_str_plain_win32api, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_win32api, tmp_assign_source_3 );
    tmp_import_globals_3 = ((PyModuleObject *)module_pykeyboard$windows)->md_dict;
    frame_module->f_lineno = 18;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_plain_win32con, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_pykeyboard$windows, true, tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_star_imported_2 );

        frame_module->f_lineno = 18;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_star_imported_2 );
    tmp_import_globals_4 = ((PyModuleObject *)module_pykeyboard$windows)->md_dict;
    frame_module->f_lineno = 19;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_pythoncom, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_pythoncom, tmp_assign_source_4 );
    tmp_import_globals_5 = ((PyModuleObject *)module_pykeyboard$windows)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_base, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_PyKeyboardMeta_str_plain_PyKeyboardEventMeta_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_PyKeyboardMeta );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_PyKeyboardMeta, tmp_assign_source_5 );
    tmp_import_globals_6 = ((PyModuleObject *)module_pykeyboard$windows)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_base, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_PyKeyboardMeta_str_plain_PyKeyboardEventMeta_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_PyKeyboardEventMeta );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_PyKeyboardEventMeta, tmp_assign_source_6 );
    tmp_import_globals_7 = ((PyModuleObject *)module_pykeyboard$windows)->md_dict;
    frame_module->f_lineno = 23;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_time, tmp_import_globals_7, tmp_import_globals_7, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_7 );
    // Tried code
    tmp_assign_source_8 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyExc_Exception;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_8, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_8;

    tmp_assign_source_9 = impl_class_1_SupportError_of_module_pykeyboard$windows(  );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_9;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
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
    tmp_assign_source_10 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_10 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_10;

    tmp_called_1 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_1 = const_str_plain_SupportError;
    tmp_call_arg_element_2 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_3 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 25;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 25;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_11;

    tmp_assign_source_12 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_SupportError, tmp_assign_source_12 );
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
    tmp_assign_source_13 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_PyKeyboardMeta );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyKeyboardMeta );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 229761 ], 36, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 33;
        goto try_finally_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases.object == NULL );
    tmp_class_creation_2__bases.object = tmp_assign_source_13;

    tmp_assign_source_14 = impl_class_2_PyKeyboard_of_module_pykeyboard$windows(  );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class_dict.object == NULL );
    tmp_class_creation_2__class_dict.object = tmp_assign_source_14;

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
    tmp_assign_source_15 = DICT_GET_ITEM( tmp_dget_dict_2, tmp_dget_key_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto try_finally_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_class_bases_2 = tmp_class_creation_2__bases.object;

    tmp_assign_source_15 = SELECT_METACLASS( tmp_class_bases_2, GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass.object == NULL );
    tmp_class_creation_2__metaclass.object = tmp_assign_source_15;

    tmp_called_2 = tmp_class_creation_2__metaclass.object;

    tmp_call_arg_element_4 = const_str_plain_PyKeyboard;
    tmp_call_arg_element_5 = tmp_class_creation_2__bases.object;

    tmp_call_arg_element_6 = tmp_class_creation_2__class_dict.object;

    frame_module->f_lineno = 33;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 33;
        goto try_finally_handler_2;
    }
    assert( tmp_class_creation_2__class.object == NULL );
    tmp_class_creation_2__class.object = tmp_assign_source_16;

    tmp_assign_source_17 = tmp_class_creation_2__class.object;

    UPDATE_STRING_DICT0( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_PyKeyboard, tmp_assign_source_17 );
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
    tmp_assign_source_18 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_PyKeyboardEventMeta );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyKeyboardEventMeta );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_18 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 229797 ], 41, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 221;
        goto try_finally_handler_3;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_18, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_3__bases.object == NULL );
    tmp_class_creation_3__bases.object = tmp_assign_source_18;

    tmp_assign_source_19 = impl_class_3_PyKeyboardEvent_of_module_pykeyboard$windows(  );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 221;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_3__class_dict.object == NULL );
    tmp_class_creation_3__class_dict.object = tmp_assign_source_19;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_3__class_dict.object;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    if ( tmp_cmp_In_3 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 221;
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
    tmp_assign_source_20 = DICT_GET_ITEM( tmp_dget_dict_3, tmp_dget_key_3 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 221;
        goto try_finally_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_class_bases_3 = tmp_class_creation_3__bases.object;

    tmp_assign_source_20 = SELECT_METACLASS( tmp_class_bases_3, GET_STRING_DICT_VALUE( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass.object == NULL );
    tmp_class_creation_3__metaclass.object = tmp_assign_source_20;

    tmp_called_3 = tmp_class_creation_3__metaclass.object;

    tmp_call_arg_element_7 = const_str_plain_PyKeyboardEvent;
    tmp_call_arg_element_8 = tmp_class_creation_3__bases.object;

    tmp_call_arg_element_9 = tmp_class_creation_3__class_dict.object;

    frame_module->f_lineno = 221;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3( tmp_called_3, tmp_call_arg_element_7, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 221;
        goto try_finally_handler_3;
    }
    assert( tmp_class_creation_3__class.object == NULL );
    tmp_class_creation_3__class.object = tmp_assign_source_21;

    tmp_assign_source_22 = tmp_class_creation_3__class.object;

    UPDATE_STRING_DICT0( moduledict_pykeyboard$windows, (Nuitka_StringObject *)const_str_plain_PyKeyboardEvent, tmp_assign_source_22 );
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

    return MOD_RETURN_VALUE( module_pykeyboard$windows );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
