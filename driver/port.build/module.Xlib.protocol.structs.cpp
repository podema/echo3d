// Generated code for Python source for module 'Xlib.protocol.structs'
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

// The _module_Xlib$protocol$structs is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_Xlib$protocol$structs;
PyDictObject *moduledict_Xlib$protocol$structs;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_4;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_X;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_rq;
extern PyObject *const_str_plain_x1;
extern PyObject *const_str_plain_x2;
extern PyObject *const_str_plain_y1;
extern PyObject *const_str_plain_y2;
extern PyObject *const_str_plain_Arc;
extern PyObject *const_str_plain_Pad;
extern PyObject *const_str_plain_RGB;
extern PyObject *const_str_plain_Set;
extern PyObject *const_str_plain_arg;
extern PyObject *const_str_plain_red;
extern PyObject *const_str_plain_Bool;
extern PyObject *const_str_plain_Font;
extern PyObject *const_str_plain_GXor;
extern PyObject *const_str_plain_Host;
extern PyObject *const_str_plain_List;
extern PyObject *const_str_plain_Xlib;
extern PyObject *const_str_plain_blue;
extern PyObject *const_str_plain_font;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_tile;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_Card8;
extern PyObject *const_str_plain_GXand;
extern PyObject *const_str_plain_GXnor;
extern PyObject *const_str_plain_GXset;
extern PyObject *const_str_plain_GXxor;
extern PyObject *const_str_plain_Int16;
extern PyObject *const_str_plain_Point;
extern PyObject *const_str_plain_flags;
extern PyObject *const_str_plain_green;
extern PyObject *const_str_plain_pixel;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_width;
extern PyObject *const_str_plain_Always;
extern PyObject *const_str_plain_Card16;
extern PyObject *const_str_plain_Card32;
extern PyObject *const_str_plain_Cursor;
extern PyObject *const_str_plain_GXcopy;
extern PyObject *const_str_plain_GXnand;
extern PyObject *const_str_plain_GXnoop;
extern PyObject *const_str_plain_Pixmap;
extern PyObject *const_str_plain_Struct;
extern PyObject *const_str_plain_angle1;
extern PyObject *const_str_plain_angle2;
extern PyObject *const_str_plain_ascent;
extern PyObject *const_str_plain_cursor;
extern PyObject *const_str_plain_dashes;
extern PyObject *const_str_plain_family;
extern PyObject *const_str_plain_height;
extern PyObject *const_str_plain_CapButt;
extern PyObject *const_str_plain_GXclear;
extern PyObject *const_str_plain_GXequiv;
extern PyObject *const_str_plain_Gravity;
extern PyObject *const_str_plain_Segment;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_descent;
static PyObject *const_str_plain_stipple;
extern PyObject *const_str_plain_structs;
extern PyObject *const_str_plain_ArcChord;
extern PyObject *const_str_plain_CapRound;
extern PyObject *const_str_plain_Card8Obj;
extern PyObject *const_str_plain_CharInfo;
extern PyObject *const_str_plain_Colormap;
extern PyObject *const_str_plain_FontProp;
extern PyObject *const_str_plain_GCValues;
extern PyObject *const_str_plain_GXinvert;
extern PyObject *const_str_plain_LengthOf;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_arc_mode;
extern PyObject *const_str_plain_colormap;
extern PyObject *const_str_plain_function;
extern PyObject *const_str_plain_ColorItem;
extern PyObject *const_str_plain_FillSolid;
extern PyObject *const_str_plain_FillTiled;
extern PyObject *const_str_plain_JoinBevel;
extern PyObject *const_str_plain_JoinMiter;
extern PyObject *const_str_plain_JoinRound;
extern PyObject *const_str_plain_LineSolid;
extern PyObject *const_str_plain_NotUseful;
extern PyObject *const_str_plain_Rectangle;
extern PyObject *const_str_plain_TimeCoord;
extern PyObject *const_str_plain_ValueList;
static PyObject *const_str_plain_cap_style;
static PyObject *const_str_plain_clip_mask;
static PyObject *const_str_plain_fill_rule;
extern PyObject *const_str_plain_CapNotLast;
extern PyObject *const_str_plain_WhenMapped;
static PyObject *const_str_plain_attributes;
extern PyObject *const_str_plain_background;
extern PyObject *const_str_plain_event_mask;
static PyObject *const_str_plain_fill_style;
static PyObject *const_str_plain_foreground;
static PyObject *const_str_plain_join_style;
static PyObject *const_str_plain_line_style;
static PyObject *const_str_plain_line_width;
extern PyObject *const_str_plain_plane_mask;
extern PyObject *const_str_plain_save_under;
extern PyObject *const_str_plain_ArcPieSlice;
extern PyObject *const_str_plain_EvenOddRule;
extern PyObject *const_str_plain_FamilyChaos;
extern PyObject *const_str_plain_GXorReverse;
extern PyObject *const_str_plain_WindingRule;
extern PyObject *const_str_plain_bit_gravity;
extern PyObject *const_str_plain_dash_offset;
extern PyObject *const_str_plain_win_gravity;
extern PyObject *const_str_plain_FamilyDECnet;
extern PyObject *const_str_plain_FillStippled;
extern PyObject *const_str_plain_GXandReverse;
extern PyObject *const_str_plain_GXorInverted;
extern PyObject *const_str_plain_WindowValues;
static PyObject *const_str_plain_border_pixel;
extern PyObject *const_str_plain_CapProjecting;
extern PyObject *const_str_plain_GXandInverted;
extern PyObject *const_str_plain_LineOnOffDash;
extern PyObject *const_str_plain_backing_pixel;
extern PyObject *const_str_plain_backing_store;
static PyObject *const_str_plain_border_pixmap;
static PyObject *const_str_plain_clip_x_origin;
static PyObject *const_str_plain_clip_y_origin;
extern PyObject *const_tuple_str_plain_X_tuple;
extern PyObject *const_str_plain_ClipByChildren;
extern PyObject *const_str_plain_FamilyInternet;
extern PyObject *const_str_plain_GXcopyInverted;
extern PyObject *const_str_plain_LineDoubleDash;
static PyObject *const_str_plain_backing_planes;
static PyObject *const_str_plain_subwindow_mode;
extern PyObject *const_tuple_str_plain_rq_tuple;
static PyObject *const_str_plain_character_width;
extern PyObject *const_tuple_str_plain_arg_tuple;
extern PyObject *const_str_plain_IncludeInferiors;
static PyObject *const_str_plain_background_pixel;
static PyObject *const_str_plain_background_pixmap;
static PyObject *const_str_plain_left_side_bearing;
extern PyObject *const_str_plain_override_redirect;
extern PyObject *const_str_plain_FillOpaqueStippled;
static PyObject *const_str_plain_graphics_exposures;
static PyObject *const_str_plain_right_side_bearing;
extern PyObject *const_str_plain_do_not_propagate_mask;
static PyObject *const_str_plain_tile_stipple_x_origin;
static PyObject *const_str_plain_tile_stipple_y_origin;
extern PyObject *const_str_digest_0df97c6d560821a4763cc4527efabdd8;
static PyObject *const_str_digest_85628b2a28bda1d9e3edab262f4ae9de;
static PyObject *const_str_digest_f9ca80d8b845bf876d173d7c8fd12804;

static void _initModuleConstants(void)
{
    const_str_plain_descent = UNSTREAM_STRING( &constant_bin[ 415557 ], 7, 1 );
    const_str_plain_stipple = UNSTREAM_STRING( &constant_bin[ 439058 ], 7, 1 );
    const_str_plain_arc_mode = UNSTREAM_STRING( &constant_bin[ 439065 ], 8, 1 );
    const_str_plain_cap_style = UNSTREAM_STRING( &constant_bin[ 439073 ], 9, 1 );
    const_str_plain_clip_mask = UNSTREAM_STRING( &constant_bin[ 439082 ], 9, 1 );
    const_str_plain_fill_rule = UNSTREAM_STRING( &constant_bin[ 439091 ], 9, 1 );
    const_str_plain_attributes = UNSTREAM_STRING( &constant_bin[ 326973 ], 10, 1 );
    const_str_plain_fill_style = UNSTREAM_STRING( &constant_bin[ 439100 ], 10, 1 );
    const_str_plain_foreground = UNSTREAM_STRING( &constant_bin[ 439110 ], 10, 1 );
    const_str_plain_join_style = UNSTREAM_STRING( &constant_bin[ 439120 ], 10, 1 );
    const_str_plain_line_style = UNSTREAM_STRING( &constant_bin[ 439130 ], 10, 1 );
    const_str_plain_line_width = UNSTREAM_STRING( &constant_bin[ 56846 ], 10, 1 );
    const_str_plain_border_pixel = UNSTREAM_STRING( &constant_bin[ 439140 ], 12, 1 );
    const_str_plain_border_pixmap = UNSTREAM_STRING( &constant_bin[ 439152 ], 13, 1 );
    const_str_plain_clip_x_origin = UNSTREAM_STRING( &constant_bin[ 439165 ], 13, 1 );
    const_str_plain_clip_y_origin = UNSTREAM_STRING( &constant_bin[ 439178 ], 13, 1 );
    const_str_plain_backing_planes = UNSTREAM_STRING( &constant_bin[ 439191 ], 14, 1 );
    const_str_plain_subwindow_mode = UNSTREAM_STRING( &constant_bin[ 439205 ], 14, 1 );
    const_str_plain_character_width = UNSTREAM_STRING( &constant_bin[ 439219 ], 15, 1 );
    const_str_plain_background_pixel = UNSTREAM_STRING( &constant_bin[ 439234 ], 16, 1 );
    const_str_plain_background_pixmap = UNSTREAM_STRING( &constant_bin[ 439250 ], 17, 1 );
    const_str_plain_left_side_bearing = UNSTREAM_STRING( &constant_bin[ 439267 ], 17, 1 );
    const_str_plain_graphics_exposures = UNSTREAM_STRING( &constant_bin[ 439284 ], 18, 1 );
    const_str_plain_right_side_bearing = UNSTREAM_STRING( &constant_bin[ 439302 ], 18, 1 );
    const_str_plain_tile_stipple_x_origin = UNSTREAM_STRING( &constant_bin[ 439320 ], 21, 1 );
    const_str_plain_tile_stipple_y_origin = UNSTREAM_STRING( &constant_bin[ 439341 ], 21, 1 );
    const_str_digest_85628b2a28bda1d9e3edab262f4ae9de = UNSTREAM_STRING( &constant_bin[ 439362 ], 57, 0 );
    const_str_digest_f9ca80d8b845bf876d173d7c8fd12804 = UNSTREAM_STRING( &constant_bin[ 439419 ], 21, 0 );
}

// The module code objects.
static PyCodeObject *codeobj_40ca005a331f9c39e014051637693d7c;
static PyCodeObject *codeobj_9cdd15f4f4b673ffc865cd00938a3de2;
static PyCodeObject *codeobj_5918fc321a4f370dfe82ba00cab77bf1;

static void _initModuleCodeObjects(void)
{
    codeobj_40ca005a331f9c39e014051637693d7c = MAKE_CODEOBJ( const_str_digest_85628b2a28bda1d9e3edab262f4ae9de, const_str_plain_GCValues, 45, const_tuple_str_plain_arg_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_9cdd15f4f4b673ffc865cd00938a3de2 = MAKE_CODEOBJ( const_str_digest_85628b2a28bda1d9e3edab262f4ae9de, const_str_plain_WindowValues, 25, const_tuple_str_plain_arg_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_5918fc321a4f370dfe82ba00cab77bf1 = MAKE_CODEOBJ( const_str_digest_85628b2a28bda1d9e3edab262f4ae9de, const_str_plain_structs, 0, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_WindowValues_of_module_Xlib$protocol$structs(  );


static PyObject *MAKE_FUNCTION_function_2_GCValues_of_module_Xlib$protocol$structs(  );


// The module function definitions.
static PyObject *impl_function_1_WindowValues_of_module_Xlib$protocol$structs( Nuitka_FunctionObject *self, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_arg; par_arg.object = _python_par_arg;
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
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9cdd15f4f4b673ffc865cd00938a3de2, module_Xlib$protocol$structs );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ValueList );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_arg.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 39334 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = const_int_pos_4;
    tmp_call_arg_element_3 = const_int_0;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Pixmap );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_str_plain_background_pixmap;
    frame_function->f_lineno = 27;
    tmp_call_arg_element_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Card32 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_7 = const_str_plain_background_pixel;
    frame_function->f_lineno = 28;
    tmp_call_arg_element_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Pixmap );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );

        frame_function->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = const_str_plain_border_pixmap;
    frame_function->f_lineno = 29;
    tmp_call_arg_element_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );

        frame_function->f_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 30;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Card32 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = const_str_plain_border_pixel;
    frame_function->f_lineno = 30;
    tmp_call_arg_element_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_Gravity );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = const_str_plain_bit_gravity;
    frame_function->f_lineno = 31;
    tmp_call_arg_element_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Gravity );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_15 = const_str_plain_win_gravity;
    frame_function->f_lineno = 32;
    tmp_call_arg_element_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_function->f_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 33;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Set );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );

        frame_function->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_17 = const_str_plain_backing_store;
    tmp_call_arg_element_18 = const_int_pos_1;
    tmp_call_arg_element_19 = PyTuple_New( 3 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_NotUseful );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_19 );

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_19, 0, tmp_tuple_element_1 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_WhenMapped );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_19 );

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_19, 1, tmp_tuple_element_1 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_Always );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_19 );

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_19, 2, tmp_tuple_element_1 );
    frame_function->f_lineno = 34;
    tmp_call_arg_element_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_8, tmp_call_arg_element_17, tmp_call_arg_element_18, tmp_call_arg_element_19 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_19 );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );

        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_Card32 );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );

        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_21 = const_str_plain_backing_planes;
    frame_function->f_lineno = 35;
    tmp_call_arg_element_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_9, tmp_call_arg_element_21 );
    Py_DECREF( tmp_called_9 );
    if ( tmp_call_arg_element_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );

        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_Card32 );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );

        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_23 = const_str_plain_backing_pixel;
    frame_function->f_lineno = 36;
    tmp_call_arg_element_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_10, tmp_call_arg_element_23 );
    Py_DECREF( tmp_called_10 );
    if ( tmp_call_arg_element_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );

        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 37;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_Bool );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );

        frame_function->f_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_25 = const_str_plain_override_redirect;
    frame_function->f_lineno = 37;
    tmp_call_arg_element_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_25 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_call_arg_element_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );

        frame_function->f_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_Bool );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_24 );

        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_27 = const_str_plain_save_under;
    frame_function->f_lineno = 38;
    tmp_call_arg_element_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_27 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_call_arg_element_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_24 );

        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_26 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_Card32 );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_26 );

        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_29 = const_str_plain_event_mask;
    frame_function->f_lineno = 39;
    tmp_call_arg_element_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_29 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_call_arg_element_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_26 );

        frame_function->f_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_26 );
        Py_DECREF( tmp_call_arg_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 40;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_Card32 );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_26 );
        Py_DECREF( tmp_call_arg_element_28 );

        frame_function->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_31 = const_str_plain_do_not_propagate_mask;
    frame_function->f_lineno = 40;
    tmp_call_arg_element_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_31 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_call_arg_element_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_26 );
        Py_DECREF( tmp_call_arg_element_28 );

        frame_function->f_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_26 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_30 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_Colormap );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_26 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_30 );

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_33 = const_str_plain_colormap;
    frame_function->f_lineno = 41;
    tmp_call_arg_element_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_33 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_call_arg_element_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_26 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_30 );

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_26 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_call_arg_element_32 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_Cursor );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_26 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_call_arg_element_32 );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_35 = const_str_plain_cursor;
    frame_function->f_lineno = 42;
    tmp_call_arg_element_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_35 );
    Py_DECREF( tmp_called_16 );
    if ( tmp_call_arg_element_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_22 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_26 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_30 );
        Py_DECREF( tmp_call_arg_element_32 );

        frame_function->f_lineno = 42;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 42;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS18( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_6, tmp_call_arg_element_8, tmp_call_arg_element_10, tmp_call_arg_element_12, tmp_call_arg_element_14, tmp_call_arg_element_16, tmp_call_arg_element_20, tmp_call_arg_element_22, tmp_call_arg_element_24, tmp_call_arg_element_26, tmp_call_arg_element_28, tmp_call_arg_element_30, tmp_call_arg_element_32, tmp_call_arg_element_34 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_12 );
    Py_DECREF( tmp_call_arg_element_14 );
    Py_DECREF( tmp_call_arg_element_16 );
    Py_DECREF( tmp_call_arg_element_20 );
    Py_DECREF( tmp_call_arg_element_22 );
    Py_DECREF( tmp_call_arg_element_24 );
    Py_DECREF( tmp_call_arg_element_26 );
    Py_DECREF( tmp_call_arg_element_28 );
    Py_DECREF( tmp_call_arg_element_30 );
    Py_DECREF( tmp_call_arg_element_32 );
    Py_DECREF( tmp_call_arg_element_34 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 42;
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
    if ((par_arg.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arg,
            par_arg.object
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
static PyObject *fparse_function_1_WindowValues_of_module_Xlib$protocol$structs( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "WindowValues() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_arg == key )
            {
                assert( _python_par_arg == NULL );
                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arg, key ) == 1 )
            {
                assert( _python_par_arg == NULL );
                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "WindowValues() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_arg != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_arg == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_arg = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_arg == NULL ))
    {
        PyObject *values[] = { _python_par_arg };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_WindowValues_of_module_Xlib$protocol$structs( self, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_1_WindowValues_of_module_Xlib$protocol$structs( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_WindowValues_of_module_Xlib$protocol$structs( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_WindowValues_of_module_Xlib$protocol$structs( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_GCValues_of_module_Xlib$protocol$structs( Nuitka_FunctionObject *self, PyObject *_python_par_arg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_arg; par_arg.object = _python_par_arg;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_40ca005a331f9c39e014051637693d7c, module_Xlib$protocol$structs );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ValueList );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_arg.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 39334 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = const_int_pos_4;
    tmp_call_arg_element_3 = const_int_0;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Set );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = const_str_plain_function;
    tmp_call_arg_element_6 = const_int_pos_1;
    tmp_call_arg_element_7 = PyTuple_New( 16 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_GXclear );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_7, 0, tmp_tuple_element_1 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_GXand );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_7, 1, tmp_tuple_element_1 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_GXandReverse );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 48;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_7, 2, tmp_tuple_element_1 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_GXcopy );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_7, 3, tmp_tuple_element_1 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_GXandInverted );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_7, 4, tmp_tuple_element_1 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_GXnoop );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_7, 5, tmp_tuple_element_1 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_GXxor );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_7, 6, tmp_tuple_element_1 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_GXor );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_7, 7, tmp_tuple_element_1 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_GXnor );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_7, 8, tmp_tuple_element_1 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_GXequiv );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_7, 9, tmp_tuple_element_1 );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_GXinvert );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_7, 10, tmp_tuple_element_1 );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_GXorReverse );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_7, 11, tmp_tuple_element_1 );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_GXcopyInverted );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_7, 12, tmp_tuple_element_1 );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_GXorInverted );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_7, 13, tmp_tuple_element_1 );
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_GXnand );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_7, 14, tmp_tuple_element_1 );
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_GXset );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_7, 15, tmp_tuple_element_1 );
    frame_function->f_lineno = 52;
    tmp_call_arg_element_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_5, tmp_call_arg_element_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_Card32 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_9 = const_str_plain_plane_mask;
    frame_function->f_lineno = 53;
    tmp_call_arg_element_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_9 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_Card32 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = const_str_plain_foreground;
    frame_function->f_lineno = 54;
    tmp_call_arg_element_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_Card32 );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_13 = const_str_plain_background;
    frame_function->f_lineno = 55;
    tmp_call_arg_element_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_13 );
    Py_DECREF( tmp_called_5 );
    if ( tmp_call_arg_element_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_Card16 );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_15 = const_str_plain_line_width;
    frame_function->f_lineno = 56;
    tmp_call_arg_element_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_call_arg_element_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );

        frame_function->f_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_Set );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );

        frame_function->f_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_17 = const_str_plain_line_style;
    tmp_call_arg_element_18 = const_int_pos_1;
    tmp_call_arg_element_19 = PyTuple_New( 3 );
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_LineSolid );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_19 );

        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_19, 0, tmp_tuple_element_2 );
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_25 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_LineOnOffDash );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_19 );

        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_19, 1, tmp_tuple_element_2 );
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_LineDoubleDash );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_called_7 );
        Py_DECREF( tmp_call_arg_element_19 );

        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_19, 2, tmp_tuple_element_2 );
    frame_function->f_lineno = 58;
    tmp_call_arg_element_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_7, tmp_call_arg_element_17, tmp_call_arg_element_18, tmp_call_arg_element_19 );
    Py_DECREF( tmp_called_7 );
    Py_DECREF( tmp_call_arg_element_19 );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );

        frame_function->f_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_Set );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );

        frame_function->f_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_21 = const_str_plain_cap_style;
    tmp_call_arg_element_22 = const_int_pos_1;
    tmp_call_arg_element_23 = PyTuple_New( 4 );
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_CapNotLast );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_23 );

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_23, 0, tmp_tuple_element_3 );
    tmp_source_name_29 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_29 == NULL ))
    {
        tmp_source_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_29 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_CapButt );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_23 );

        frame_function->f_lineno = 60;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_23, 1, tmp_tuple_element_3 );
    tmp_source_name_30 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_30 == NULL ))
    {
        tmp_source_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_CapRound );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_23 );

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_23, 2, tmp_tuple_element_3 );
    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_31 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_CapProjecting );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_called_8 );
        Py_DECREF( tmp_call_arg_element_23 );

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_23, 3, tmp_tuple_element_3 );
    frame_function->f_lineno = 61;
    tmp_call_arg_element_20 = CALL_FUNCTION_WITH_ARGS3( tmp_called_8, tmp_call_arg_element_21, tmp_call_arg_element_22, tmp_call_arg_element_23 );
    Py_DECREF( tmp_called_8 );
    Py_DECREF( tmp_call_arg_element_23 );
    if ( tmp_call_arg_element_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );

        frame_function->f_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_32 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_Set );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_25 = const_str_plain_join_style;
    tmp_call_arg_element_26 = const_int_pos_1;
    tmp_call_arg_element_27 = PyTuple_New( 3 );
    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_33 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_JoinMiter );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_27 );

        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_27, 0, tmp_tuple_element_4 );
    tmp_source_name_34 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_34 == NULL ))
    {
        tmp_source_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_34 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_JoinRound );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_27 );

        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_27, 1, tmp_tuple_element_4 );
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_35 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_JoinBevel );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_called_9 );
        Py_DECREF( tmp_call_arg_element_27 );

        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_27, 2, tmp_tuple_element_4 );
    frame_function->f_lineno = 63;
    tmp_call_arg_element_24 = CALL_FUNCTION_WITH_ARGS3( tmp_called_9, tmp_call_arg_element_25, tmp_call_arg_element_26, tmp_call_arg_element_27 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_27 );
    if ( tmp_call_arg_element_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );

        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_source_name_36 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_36 == NULL ))
    {
        tmp_source_name_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_36 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_Set );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );

        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_29 = const_str_plain_fill_style;
    tmp_call_arg_element_30 = const_int_pos_1;
    tmp_call_arg_element_31 = PyTuple_New( 4 );
    tmp_source_name_37 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_37 == NULL ))
    {
        tmp_source_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_37 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_FillSolid );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_31 );

        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_31, 0, tmp_tuple_element_5 );
    tmp_source_name_38 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_38 == NULL ))
    {
        tmp_source_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_38 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_FillTiled );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_31 );

        frame_function->f_lineno = 65;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_31, 1, tmp_tuple_element_5 );
    tmp_source_name_39 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_39 == NULL ))
    {
        tmp_source_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_39 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_FillStippled );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_31 );

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_31, 2, tmp_tuple_element_5 );
    tmp_source_name_40 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_40 == NULL ))
    {
        tmp_source_name_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_40 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_FillOpaqueStippled );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_31 );

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_31, 3, tmp_tuple_element_5 );
    frame_function->f_lineno = 66;
    tmp_call_arg_element_28 = CALL_FUNCTION_WITH_ARGS3( tmp_called_10, tmp_call_arg_element_29, tmp_call_arg_element_30, tmp_call_arg_element_31 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_arg_element_31 );
    if ( tmp_call_arg_element_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );

        frame_function->f_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_source_name_41 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_41 == NULL ))
    {
        tmp_source_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_41 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_Set );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );

        frame_function->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_33 = const_str_plain_fill_rule;
    tmp_call_arg_element_34 = const_int_pos_1;
    tmp_call_arg_element_35 = PyTuple_New( 2 );
    tmp_source_name_42 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_42 == NULL ))
    {
        tmp_source_name_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_42 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_35 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_EvenOddRule );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_35 );

        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_35, 0, tmp_tuple_element_6 );
    tmp_source_name_43 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_43 == NULL ))
    {
        tmp_source_name_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_43 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_35 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_WindingRule );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_called_11 );
        Py_DECREF( tmp_call_arg_element_35 );

        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_35, 1, tmp_tuple_element_6 );
    frame_function->f_lineno = 68;
    tmp_call_arg_element_32 = CALL_FUNCTION_WITH_ARGS3( tmp_called_11, tmp_call_arg_element_33, tmp_call_arg_element_34, tmp_call_arg_element_35 );
    Py_DECREF( tmp_called_11 );
    Py_DECREF( tmp_call_arg_element_35 );
    if ( tmp_call_arg_element_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );

        frame_function->f_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_source_name_44 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_44 == NULL ))
    {
        tmp_source_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_44 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_Pixmap );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );

        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_37 = const_str_plain_tile;
    frame_function->f_lineno = 69;
    tmp_call_arg_element_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_37 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_call_arg_element_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );

        frame_function->f_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_source_name_45 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_45 == NULL ))
    {
        tmp_source_name_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_45 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 70;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_Pixmap );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );

        frame_function->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_39 = const_str_plain_stipple;
    frame_function->f_lineno = 70;
    tmp_call_arg_element_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_39 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_call_arg_element_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );

        frame_function->f_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_source_name_46 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_46 == NULL ))
    {
        tmp_source_name_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_46 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_Int16 );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );

        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_41 = const_str_plain_tile_stipple_x_origin;
    frame_function->f_lineno = 71;
    tmp_call_arg_element_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_41 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_call_arg_element_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );

        frame_function->f_lineno = 71;
        goto frame_exception_exit_1;
    }
    tmp_source_name_47 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_47 == NULL ))
    {
        tmp_source_name_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_47 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_Int16 );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );

        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_43 = const_str_plain_tile_stipple_y_origin;
    frame_function->f_lineno = 72;
    tmp_call_arg_element_42 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_43 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_call_arg_element_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );

        frame_function->f_lineno = 72;
        goto frame_exception_exit_1;
    }
    tmp_source_name_48 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_48 == NULL ))
    {
        tmp_source_name_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_48 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_Font );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );

        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_45 = const_str_plain_font;
    frame_function->f_lineno = 73;
    tmp_call_arg_element_44 = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_45 );
    Py_DECREF( tmp_called_16 );
    if ( tmp_call_arg_element_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );

        frame_function->f_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_source_name_49 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_49 == NULL ))
    {
        tmp_source_name_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_49 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_Set );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );

        frame_function->f_lineno = 74;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_47 = const_str_plain_subwindow_mode;
    tmp_call_arg_element_48 = const_int_pos_1;
    tmp_call_arg_element_49 = PyTuple_New( 2 );
    tmp_source_name_50 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_50 == NULL ))
    {
        tmp_source_name_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_50 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_called_17 );
        Py_DECREF( tmp_call_arg_element_49 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_ClipByChildren );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_called_17 );
        Py_DECREF( tmp_call_arg_element_49 );

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_49, 0, tmp_tuple_element_7 );
    tmp_source_name_51 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_51 == NULL ))
    {
        tmp_source_name_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_51 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_called_17 );
        Py_DECREF( tmp_call_arg_element_49 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_IncludeInferiors );
    if ( tmp_tuple_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_called_17 );
        Py_DECREF( tmp_call_arg_element_49 );

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_49, 1, tmp_tuple_element_7 );
    frame_function->f_lineno = 75;
    tmp_call_arg_element_46 = CALL_FUNCTION_WITH_ARGS3( tmp_called_17, tmp_call_arg_element_47, tmp_call_arg_element_48, tmp_call_arg_element_49 );
    Py_DECREF( tmp_called_17 );
    Py_DECREF( tmp_call_arg_element_49 );
    if ( tmp_call_arg_element_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );

        frame_function->f_lineno = 75;
        goto frame_exception_exit_1;
    }
    tmp_source_name_52 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_52 == NULL ))
    {
        tmp_source_name_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_52 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_called_18 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_Bool );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_51 = const_str_plain_graphics_exposures;
    frame_function->f_lineno = 76;
    tmp_call_arg_element_50 = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_51 );
    Py_DECREF( tmp_called_18 );
    if ( tmp_call_arg_element_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_source_name_53 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_53 == NULL ))
    {
        tmp_source_name_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_53 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }

    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_Int16 );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_53 = const_str_plain_clip_x_origin;
    frame_function->f_lineno = 77;
    tmp_call_arg_element_52 = CALL_FUNCTION_WITH_ARGS1( tmp_called_19, tmp_call_arg_element_53 );
    Py_DECREF( tmp_called_19 );
    if ( tmp_call_arg_element_52 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );

        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    tmp_source_name_54 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_54 == NULL ))
    {
        tmp_source_name_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_54 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_Int16 );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_55 = const_str_plain_clip_y_origin;
    frame_function->f_lineno = 78;
    tmp_call_arg_element_54 = CALL_FUNCTION_WITH_ARGS1( tmp_called_20, tmp_call_arg_element_55 );
    Py_DECREF( tmp_called_20 );
    if ( tmp_call_arg_element_54 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_source_name_55 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_55 == NULL ))
    {
        tmp_source_name_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_55 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        Py_DECREF( tmp_call_arg_element_54 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_called_21 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_Pixmap );
    if ( tmp_called_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        Py_DECREF( tmp_call_arg_element_54 );

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_57 = const_str_plain_clip_mask;
    frame_function->f_lineno = 79;
    tmp_call_arg_element_56 = CALL_FUNCTION_WITH_ARGS1( tmp_called_21, tmp_call_arg_element_57 );
    Py_DECREF( tmp_called_21 );
    if ( tmp_call_arg_element_56 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        Py_DECREF( tmp_call_arg_element_54 );

        frame_function->f_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_source_name_56 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_56 == NULL ))
    {
        tmp_source_name_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_56 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        Py_DECREF( tmp_call_arg_element_54 );
        Py_DECREF( tmp_call_arg_element_56 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_called_22 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_Card16 );
    if ( tmp_called_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        Py_DECREF( tmp_call_arg_element_54 );
        Py_DECREF( tmp_call_arg_element_56 );

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_59 = const_str_plain_dash_offset;
    frame_function->f_lineno = 80;
    tmp_call_arg_element_58 = CALL_FUNCTION_WITH_ARGS1( tmp_called_22, tmp_call_arg_element_59 );
    Py_DECREF( tmp_called_22 );
    if ( tmp_call_arg_element_58 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        Py_DECREF( tmp_call_arg_element_54 );
        Py_DECREF( tmp_call_arg_element_56 );

        frame_function->f_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_source_name_57 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_57 == NULL ))
    {
        tmp_source_name_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_57 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        Py_DECREF( tmp_call_arg_element_54 );
        Py_DECREF( tmp_call_arg_element_56 );
        Py_DECREF( tmp_call_arg_element_58 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_Card8 );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        Py_DECREF( tmp_call_arg_element_54 );
        Py_DECREF( tmp_call_arg_element_56 );
        Py_DECREF( tmp_call_arg_element_58 );

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_61 = const_str_plain_dashes;
    frame_function->f_lineno = 81;
    tmp_call_arg_element_60 = CALL_FUNCTION_WITH_ARGS1( tmp_called_23, tmp_call_arg_element_61 );
    Py_DECREF( tmp_called_23 );
    if ( tmp_call_arg_element_60 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        Py_DECREF( tmp_call_arg_element_54 );
        Py_DECREF( tmp_call_arg_element_56 );
        Py_DECREF( tmp_call_arg_element_58 );

        frame_function->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_source_name_58 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_58 == NULL ))
    {
        tmp_source_name_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_58 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        Py_DECREF( tmp_call_arg_element_54 );
        Py_DECREF( tmp_call_arg_element_56 );
        Py_DECREF( tmp_call_arg_element_58 );
        Py_DECREF( tmp_call_arg_element_60 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24829 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_called_24 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_Set );
    if ( tmp_called_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        Py_DECREF( tmp_call_arg_element_54 );
        Py_DECREF( tmp_call_arg_element_56 );
        Py_DECREF( tmp_call_arg_element_58 );
        Py_DECREF( tmp_call_arg_element_60 );

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_63 = const_str_plain_arc_mode;
    tmp_call_arg_element_64 = const_int_pos_1;
    tmp_call_arg_element_65 = PyTuple_New( 2 );
    tmp_source_name_59 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_59 == NULL ))
    {
        tmp_source_name_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_59 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        Py_DECREF( tmp_call_arg_element_54 );
        Py_DECREF( tmp_call_arg_element_56 );
        Py_DECREF( tmp_call_arg_element_58 );
        Py_DECREF( tmp_call_arg_element_60 );
        Py_DECREF( tmp_called_24 );
        Py_DECREF( tmp_call_arg_element_65 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_ArcChord );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        Py_DECREF( tmp_call_arg_element_54 );
        Py_DECREF( tmp_call_arg_element_56 );
        Py_DECREF( tmp_call_arg_element_58 );
        Py_DECREF( tmp_call_arg_element_60 );
        Py_DECREF( tmp_called_24 );
        Py_DECREF( tmp_call_arg_element_65 );

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_65, 0, tmp_tuple_element_8 );
    tmp_source_name_60 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_60 == NULL ))
    {
        tmp_source_name_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_60 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        Py_DECREF( tmp_call_arg_element_54 );
        Py_DECREF( tmp_call_arg_element_56 );
        Py_DECREF( tmp_call_arg_element_58 );
        Py_DECREF( tmp_call_arg_element_60 );
        Py_DECREF( tmp_called_24 );
        Py_DECREF( tmp_call_arg_element_65 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24705 ], 30, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_ArcPieSlice );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        Py_DECREF( tmp_call_arg_element_54 );
        Py_DECREF( tmp_call_arg_element_56 );
        Py_DECREF( tmp_call_arg_element_58 );
        Py_DECREF( tmp_call_arg_element_60 );
        Py_DECREF( tmp_called_24 );
        Py_DECREF( tmp_call_arg_element_65 );

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_65, 1, tmp_tuple_element_8 );
    frame_function->f_lineno = 82;
    tmp_call_arg_element_62 = CALL_FUNCTION_WITH_ARGS3( tmp_called_24, tmp_call_arg_element_63, tmp_call_arg_element_64, tmp_call_arg_element_65 );
    Py_DECREF( tmp_called_24 );
    Py_DECREF( tmp_call_arg_element_65 );
    if ( tmp_call_arg_element_62 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_8 );
        Py_DECREF( tmp_call_arg_element_10 );
        Py_DECREF( tmp_call_arg_element_12 );
        Py_DECREF( tmp_call_arg_element_14 );
        Py_DECREF( tmp_call_arg_element_16 );
        Py_DECREF( tmp_call_arg_element_20 );
        Py_DECREF( tmp_call_arg_element_24 );
        Py_DECREF( tmp_call_arg_element_28 );
        Py_DECREF( tmp_call_arg_element_32 );
        Py_DECREF( tmp_call_arg_element_36 );
        Py_DECREF( tmp_call_arg_element_38 );
        Py_DECREF( tmp_call_arg_element_40 );
        Py_DECREF( tmp_call_arg_element_42 );
        Py_DECREF( tmp_call_arg_element_44 );
        Py_DECREF( tmp_call_arg_element_46 );
        Py_DECREF( tmp_call_arg_element_50 );
        Py_DECREF( tmp_call_arg_element_52 );
        Py_DECREF( tmp_call_arg_element_54 );
        Py_DECREF( tmp_call_arg_element_56 );
        Py_DECREF( tmp_call_arg_element_58 );
        Py_DECREF( tmp_call_arg_element_60 );

        frame_function->f_lineno = 82;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 82;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS26( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_8, tmp_call_arg_element_10, tmp_call_arg_element_12, tmp_call_arg_element_14, tmp_call_arg_element_16, tmp_call_arg_element_20, tmp_call_arg_element_24, tmp_call_arg_element_28, tmp_call_arg_element_32, tmp_call_arg_element_36, tmp_call_arg_element_38, tmp_call_arg_element_40, tmp_call_arg_element_42, tmp_call_arg_element_44, tmp_call_arg_element_46, tmp_call_arg_element_50, tmp_call_arg_element_52, tmp_call_arg_element_54, tmp_call_arg_element_56, tmp_call_arg_element_58, tmp_call_arg_element_60, tmp_call_arg_element_62 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_12 );
    Py_DECREF( tmp_call_arg_element_14 );
    Py_DECREF( tmp_call_arg_element_16 );
    Py_DECREF( tmp_call_arg_element_20 );
    Py_DECREF( tmp_call_arg_element_24 );
    Py_DECREF( tmp_call_arg_element_28 );
    Py_DECREF( tmp_call_arg_element_32 );
    Py_DECREF( tmp_call_arg_element_36 );
    Py_DECREF( tmp_call_arg_element_38 );
    Py_DECREF( tmp_call_arg_element_40 );
    Py_DECREF( tmp_call_arg_element_42 );
    Py_DECREF( tmp_call_arg_element_44 );
    Py_DECREF( tmp_call_arg_element_46 );
    Py_DECREF( tmp_call_arg_element_50 );
    Py_DECREF( tmp_call_arg_element_52 );
    Py_DECREF( tmp_call_arg_element_54 );
    Py_DECREF( tmp_call_arg_element_56 );
    Py_DECREF( tmp_call_arg_element_58 );
    Py_DECREF( tmp_call_arg_element_60 );
    Py_DECREF( tmp_call_arg_element_62 );
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
    if ((par_arg.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_arg,
            par_arg.object
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
static PyObject *fparse_function_2_GCValues_of_module_Xlib$protocol$structs( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_arg = NULL;
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
                PyErr_Format( PyExc_TypeError, "GCValues() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_arg == key )
            {
                assert( _python_par_arg == NULL );
                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_arg, key ) == 1 )
            {
                assert( _python_par_arg == NULL );
                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "GCValues() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_arg != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_arg == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_arg = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_arg == NULL ))
    {
        PyObject *values[] = { _python_par_arg };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_GCValues_of_module_Xlib$protocol$structs( self, _python_par_arg );

error_exit:;

    Py_XDECREF( _python_par_arg );

    return NULL;
}

static PyObject *dparse_function_2_GCValues_of_module_Xlib$protocol$structs( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_GCValues_of_module_Xlib$protocol$structs( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_GCValues_of_module_Xlib$protocol$structs( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_WindowValues_of_module_Xlib$protocol$structs(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_WindowValues_of_module_Xlib$protocol$structs,
        dparse_function_1_WindowValues_of_module_Xlib$protocol$structs,
        const_str_plain_WindowValues,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9cdd15f4f4b673ffc865cd00938a3de2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$protocol$structs,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_GCValues_of_module_Xlib$protocol$structs(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_GCValues_of_module_Xlib$protocol$structs,
        dparse_function_2_GCValues_of_module_Xlib$protocol$structs,
        const_str_plain_GCValues,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_40ca005a331f9c39e014051637693d7c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$protocol$structs,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Xlib$protocol$structs =
{
    PyModuleDef_HEAD_INIT,
    "Xlib.protocol.structs",   /* m_name */
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

MOD_INIT_DECL( Xlib$protocol$structs )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Xlib$protocol$structs );
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

    // puts( "in initXlib$protocol$structs" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Xlib$protocol$structs = Py_InitModule4(
        "Xlib.protocol.structs",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Xlib$protocol$structs = PyModule_Create( &mdef_Xlib$protocol$structs );
#endif

    moduledict_Xlib$protocol$structs = (PyDictObject *)((PyModuleObject *)module_Xlib$protocol$structs)->md_dict;

    assertObject( module_Xlib$protocol$structs );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_f9ca80d8b845bf876d173d7c8fd12804, module_Xlib$protocol$structs );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_Xlib$protocol$structs );

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
    PyObject *tmp_call_arg_element_82;
    PyObject *tmp_call_arg_element_83;
    PyObject *tmp_call_arg_element_84;
    PyObject *tmp_call_arg_element_85;
    PyObject *tmp_call_arg_element_86;
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
    PyObject *tmp_tuple_element_1;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_85628b2a28bda1d9e3edab262f4ae9de;
    UPDATE_STRING_DICT0( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_5918fc321a4f370dfe82ba00cab77bf1, module_Xlib$protocol$structs );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_Xlib$protocol$structs)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_Xlib$protocol$structs)->md_dict;
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
    UPDATE_STRING_DICT1( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq, tmp_assign_source_4 );
    tmp_assign_source_5 = MAKE_FUNCTION_function_1_WindowValues_of_module_Xlib$protocol$structs(  );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_module->f_lineno = 25;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_WindowValues, tmp_assign_source_5 );
    tmp_assign_source_6 = MAKE_FUNCTION_function_2_GCValues_of_module_Xlib$protocol$structs(  );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_6 );

        frame_module->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_GCValues, tmp_assign_source_6 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Struct );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_module->f_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Card32 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_module->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = const_str_plain_time;
    frame_module->f_lineno = 88;
    tmp_call_arg_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_call_arg_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_module->f_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

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

        frame_module->f_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Int16 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_module->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = const_str_plain_x;
    frame_module->f_lineno = 89;
    tmp_call_arg_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_4 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );

        frame_module->f_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

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
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_called_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Int16 );
    if ( tmp_called_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_module->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = const_str_plain_y;
    frame_module->f_lineno = 90;
    tmp_call_arg_element_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_4, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_4 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );
        Py_DECREF( tmp_call_arg_element_1 );
        Py_DECREF( tmp_call_arg_element_3 );

        frame_module->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 90;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_3, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    Py_DECREF( tmp_call_arg_element_3 );
    Py_DECREF( tmp_call_arg_element_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 90;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_TimeCoord, tmp_assign_source_7 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_called_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_Struct );
    if ( tmp_called_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 94;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_Set );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_module->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = const_str_plain_family;
    tmp_call_arg_element_9 = const_int_pos_1;
    tmp_call_arg_element_10 = PyTuple_New( 3 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 94;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_FamilyInternet );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_module->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_10, 0, tmp_tuple_element_1 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 94;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_FamilyDECnet );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_module->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_10, 1, tmp_tuple_element_1 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_X );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_X );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24712 ], 23, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 94;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_FamilyChaos );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_called_6 );
        Py_DECREF( tmp_call_arg_element_10 );

        frame_module->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_call_arg_element_10, 2, tmp_tuple_element_1 );
    frame_module->f_lineno = 94;
    tmp_call_arg_element_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_6, tmp_call_arg_element_8, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_6 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );

        frame_module->f_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_Pad );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_module->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_12 = const_int_pos_1;
    frame_module->f_lineno = 95;
    tmp_call_arg_element_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_12 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_call_arg_element_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_7 );

        frame_module->f_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_11 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_called_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_LengthOf );
    if ( tmp_called_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_11 );

        frame_module->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_14 = const_str_plain_name;
    tmp_call_arg_element_15 = const_int_pos_2;
    frame_module->f_lineno = 96;
    tmp_call_arg_element_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_14, tmp_call_arg_element_15 );
    Py_DECREF( tmp_called_8 );
    if ( tmp_call_arg_element_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_11 );

        frame_module->f_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_13 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_called_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_List );
    if ( tmp_called_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_13 );

        frame_module->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_17 = const_str_plain_name;
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_called_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_18 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_Card8Obj );
    if ( tmp_call_arg_element_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_13 );
        Py_DECREF( tmp_called_9 );

        frame_module->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 97;
    tmp_call_arg_element_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_9, tmp_call_arg_element_17, tmp_call_arg_element_18 );
    Py_DECREF( tmp_called_9 );
    Py_DECREF( tmp_call_arg_element_18 );
    if ( tmp_call_arg_element_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_5 );
        Py_DECREF( tmp_call_arg_element_7 );
        Py_DECREF( tmp_call_arg_element_11 );
        Py_DECREF( tmp_call_arg_element_13 );

        frame_module->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 97;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS4( tmp_called_5, tmp_call_arg_element_7, tmp_call_arg_element_11, tmp_call_arg_element_13, tmp_call_arg_element_16 );
    Py_DECREF( tmp_called_5 );
    Py_DECREF( tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_11 );
    Py_DECREF( tmp_call_arg_element_13 );
    Py_DECREF( tmp_call_arg_element_16 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 97;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_Host, tmp_assign_source_8 );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_called_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_Struct );
    if ( tmp_called_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_called_11 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_Int16 );
    if ( tmp_called_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );

        frame_module->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_20 = const_str_plain_left_side_bearing;
    frame_module->f_lineno = 101;
    tmp_call_arg_element_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_11, tmp_call_arg_element_20 );
    Py_DECREF( tmp_called_11 );
    if ( tmp_call_arg_element_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );

        frame_module->f_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_19 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_called_12 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_Int16 );
    if ( tmp_called_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_19 );

        frame_module->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_22 = const_str_plain_right_side_bearing;
    frame_module->f_lineno = 102;
    tmp_call_arg_element_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_12, tmp_call_arg_element_22 );
    Py_DECREF( tmp_called_12 );
    if ( tmp_call_arg_element_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_19 );

        frame_module->f_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_called_13 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_Int16 );
    if ( tmp_called_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );

        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_24 = const_str_plain_character_width;
    frame_module->f_lineno = 103;
    tmp_call_arg_element_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_13, tmp_call_arg_element_24 );
    Py_DECREF( tmp_called_13 );
    if ( tmp_call_arg_element_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );

        frame_module->f_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_called_14 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_Int16 );
    if ( tmp_called_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );

        frame_module->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_26 = const_str_plain_ascent;
    frame_module->f_lineno = 104;
    tmp_call_arg_element_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_14, tmp_call_arg_element_26 );
    Py_DECREF( tmp_called_14 );
    if ( tmp_call_arg_element_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );

        frame_module->f_lineno = 104;
        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_25 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_called_15 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_Int16 );
    if ( tmp_called_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_25 );

        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_28 = const_str_plain_descent;
    frame_module->f_lineno = 105;
    tmp_call_arg_element_27 = CALL_FUNCTION_WITH_ARGS1( tmp_called_15, tmp_call_arg_element_28 );
    Py_DECREF( tmp_called_15 );
    if ( tmp_call_arg_element_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_25 );

        frame_module->f_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_25 );
        Py_DECREF( tmp_call_arg_element_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_called_16 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_Card16 );
    if ( tmp_called_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_25 );
        Py_DECREF( tmp_call_arg_element_27 );

        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_30 = const_str_plain_attributes;
    frame_module->f_lineno = 106;
    tmp_call_arg_element_29 = CALL_FUNCTION_WITH_ARGS1( tmp_called_16, tmp_call_arg_element_30 );
    Py_DECREF( tmp_called_16 );
    if ( tmp_call_arg_element_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_10 );
        Py_DECREF( tmp_call_arg_element_19 );
        Py_DECREF( tmp_call_arg_element_21 );
        Py_DECREF( tmp_call_arg_element_23 );
        Py_DECREF( tmp_call_arg_element_25 );
        Py_DECREF( tmp_call_arg_element_27 );

        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 106;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS6( tmp_called_10, tmp_call_arg_element_19, tmp_call_arg_element_21, tmp_call_arg_element_23, tmp_call_arg_element_25, tmp_call_arg_element_27, tmp_call_arg_element_29 );
    Py_DECREF( tmp_called_10 );
    Py_DECREF( tmp_call_arg_element_19 );
    Py_DECREF( tmp_call_arg_element_21 );
    Py_DECREF( tmp_call_arg_element_23 );
    Py_DECREF( tmp_call_arg_element_25 );
    Py_DECREF( tmp_call_arg_element_27 );
    Py_DECREF( tmp_call_arg_element_29 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 106;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_CharInfo, tmp_assign_source_9 );
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 109;
        goto frame_exception_exit_1;
    }

    tmp_called_17 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_Struct );
    if ( tmp_called_17 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 109;
        goto frame_exception_exit_1;
    }
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_22 == NULL )
    {
        Py_DECREF( tmp_called_17 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_called_18 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_Card32 );
    if ( tmp_called_18 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_17 );

        frame_module->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_32 = const_str_plain_name;
    frame_module->f_lineno = 110;
    tmp_call_arg_element_31 = CALL_FUNCTION_WITH_ARGS1( tmp_called_18, tmp_call_arg_element_32 );
    Py_DECREF( tmp_called_18 );
    if ( tmp_call_arg_element_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_17 );

        frame_module->f_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_called_17 );
        Py_DECREF( tmp_call_arg_element_31 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_called_19 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_Card32 );
    if ( tmp_called_19 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_17 );
        Py_DECREF( tmp_call_arg_element_31 );

        frame_module->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_34 = const_str_plain_value;
    frame_module->f_lineno = 111;
    tmp_call_arg_element_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_19, tmp_call_arg_element_34 );
    Py_DECREF( tmp_called_19 );
    if ( tmp_call_arg_element_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_17 );
        Py_DECREF( tmp_call_arg_element_31 );

        frame_module->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 111;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_17, tmp_call_arg_element_31, tmp_call_arg_element_33 );
    Py_DECREF( tmp_called_17 );
    Py_DECREF( tmp_call_arg_element_31 );
    Py_DECREF( tmp_call_arg_element_33 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 111;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_FontProp, tmp_assign_source_10 );
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 114;
        goto frame_exception_exit_1;
    }

    tmp_called_20 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_Struct );
    if ( tmp_called_20 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 114;
        goto frame_exception_exit_1;
    }
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_25 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_called_21 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_Card32 );
    if ( tmp_called_21 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );

        frame_module->f_lineno = 115;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_36 = const_str_plain_pixel;
    frame_module->f_lineno = 115;
    tmp_call_arg_element_35 = CALL_FUNCTION_WITH_ARGS1( tmp_called_21, tmp_call_arg_element_36 );
    Py_DECREF( tmp_called_21 );
    if ( tmp_call_arg_element_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );

        frame_module->f_lineno = 115;
        goto frame_exception_exit_1;
    }
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_35 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_called_22 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_Card16 );
    if ( tmp_called_22 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_35 );

        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_38 = const_str_plain_red;
    frame_module->f_lineno = 116;
    tmp_call_arg_element_37 = CALL_FUNCTION_WITH_ARGS1( tmp_called_22, tmp_call_arg_element_38 );
    Py_DECREF( tmp_called_22 );
    if ( tmp_call_arg_element_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_35 );

        frame_module->f_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_35 );
        Py_DECREF( tmp_call_arg_element_37 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_called_23 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_Card16 );
    if ( tmp_called_23 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_35 );
        Py_DECREF( tmp_call_arg_element_37 );

        frame_module->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_40 = const_str_plain_green;
    frame_module->f_lineno = 117;
    tmp_call_arg_element_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_23, tmp_call_arg_element_40 );
    Py_DECREF( tmp_called_23 );
    if ( tmp_call_arg_element_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_35 );
        Py_DECREF( tmp_call_arg_element_37 );

        frame_module->f_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_35 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_called_24 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_Card16 );
    if ( tmp_called_24 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_35 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );

        frame_module->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_42 = const_str_plain_blue;
    frame_module->f_lineno = 118;
    tmp_call_arg_element_41 = CALL_FUNCTION_WITH_ARGS1( tmp_called_24, tmp_call_arg_element_42 );
    Py_DECREF( tmp_called_24 );
    if ( tmp_call_arg_element_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_35 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );

        frame_module->f_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_source_name_29 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_29 == NULL ))
    {
        tmp_source_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_29 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_35 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        Py_DECREF( tmp_call_arg_element_41 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_called_25 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_Card8 );
    if ( tmp_called_25 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_35 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        Py_DECREF( tmp_call_arg_element_41 );

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_44 = const_str_plain_flags;
    frame_module->f_lineno = 119;
    tmp_call_arg_element_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_25, tmp_call_arg_element_44 );
    Py_DECREF( tmp_called_25 );
    if ( tmp_call_arg_element_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_35 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        Py_DECREF( tmp_call_arg_element_41 );

        frame_module->f_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_source_name_30 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_30 == NULL ))
    {
        tmp_source_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_35 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        Py_DECREF( tmp_call_arg_element_41 );
        Py_DECREF( tmp_call_arg_element_43 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_called_26 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_Pad );
    if ( tmp_called_26 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_35 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        Py_DECREF( tmp_call_arg_element_41 );
        Py_DECREF( tmp_call_arg_element_43 );

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_46 = const_int_pos_1;
    frame_module->f_lineno = 120;
    tmp_call_arg_element_45 = CALL_FUNCTION_WITH_ARGS1( tmp_called_26, tmp_call_arg_element_46 );
    Py_DECREF( tmp_called_26 );
    if ( tmp_call_arg_element_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_20 );
        Py_DECREF( tmp_call_arg_element_35 );
        Py_DECREF( tmp_call_arg_element_37 );
        Py_DECREF( tmp_call_arg_element_39 );
        Py_DECREF( tmp_call_arg_element_41 );
        Py_DECREF( tmp_call_arg_element_43 );

        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 120;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS6( tmp_called_20, tmp_call_arg_element_35, tmp_call_arg_element_37, tmp_call_arg_element_39, tmp_call_arg_element_41, tmp_call_arg_element_43, tmp_call_arg_element_45 );
    Py_DECREF( tmp_called_20 );
    Py_DECREF( tmp_call_arg_element_35 );
    Py_DECREF( tmp_call_arg_element_37 );
    Py_DECREF( tmp_call_arg_element_39 );
    Py_DECREF( tmp_call_arg_element_41 );
    Py_DECREF( tmp_call_arg_element_43 );
    Py_DECREF( tmp_call_arg_element_45 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 120;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_ColorItem, tmp_assign_source_11 );
    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_called_27 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_Struct );
    if ( tmp_called_27 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_32 == NULL )
    {
        Py_DECREF( tmp_called_27 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_called_28 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_Card16 );
    if ( tmp_called_28 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );

        frame_module->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_48 = const_str_plain_red;
    frame_module->f_lineno = 125;
    tmp_call_arg_element_47 = CALL_FUNCTION_WITH_ARGS1( tmp_called_28, tmp_call_arg_element_48 );
    Py_DECREF( tmp_called_28 );
    if ( tmp_call_arg_element_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );

        frame_module->f_lineno = 125;
        goto frame_exception_exit_1;
    }
    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_33 == NULL )
    {
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_47 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_called_29 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_Card16 );
    if ( tmp_called_29 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_47 );

        frame_module->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_50 = const_str_plain_green;
    frame_module->f_lineno = 126;
    tmp_call_arg_element_49 = CALL_FUNCTION_WITH_ARGS1( tmp_called_29, tmp_call_arg_element_50 );
    Py_DECREF( tmp_called_29 );
    if ( tmp_call_arg_element_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_47 );

        frame_module->f_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_source_name_34 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_34 == NULL ))
    {
        tmp_source_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_34 == NULL )
    {
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_47 );
        Py_DECREF( tmp_call_arg_element_49 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_called_30 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_Card16 );
    if ( tmp_called_30 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_47 );
        Py_DECREF( tmp_call_arg_element_49 );

        frame_module->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_52 = const_str_plain_blue;
    frame_module->f_lineno = 127;
    tmp_call_arg_element_51 = CALL_FUNCTION_WITH_ARGS1( tmp_called_30, tmp_call_arg_element_52 );
    Py_DECREF( tmp_called_30 );
    if ( tmp_call_arg_element_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_47 );
        Py_DECREF( tmp_call_arg_element_49 );

        frame_module->f_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_35 == NULL )
    {
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_47 );
        Py_DECREF( tmp_call_arg_element_49 );
        Py_DECREF( tmp_call_arg_element_51 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 128;
        goto frame_exception_exit_1;
    }

    tmp_called_31 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_Pad );
    if ( tmp_called_31 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_47 );
        Py_DECREF( tmp_call_arg_element_49 );
        Py_DECREF( tmp_call_arg_element_51 );

        frame_module->f_lineno = 128;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_54 = const_int_pos_2;
    frame_module->f_lineno = 128;
    tmp_call_arg_element_53 = CALL_FUNCTION_WITH_ARGS1( tmp_called_31, tmp_call_arg_element_54 );
    Py_DECREF( tmp_called_31 );
    if ( tmp_call_arg_element_53 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_27 );
        Py_DECREF( tmp_call_arg_element_47 );
        Py_DECREF( tmp_call_arg_element_49 );
        Py_DECREF( tmp_call_arg_element_51 );

        frame_module->f_lineno = 128;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 128;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS4( tmp_called_27, tmp_call_arg_element_47, tmp_call_arg_element_49, tmp_call_arg_element_51, tmp_call_arg_element_53 );
    Py_DECREF( tmp_called_27 );
    Py_DECREF( tmp_call_arg_element_47 );
    Py_DECREF( tmp_call_arg_element_49 );
    Py_DECREF( tmp_call_arg_element_51 );
    Py_DECREF( tmp_call_arg_element_53 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 128;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_RGB, tmp_assign_source_12 );
    tmp_source_name_36 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_36 == NULL ))
    {
        tmp_source_name_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_36 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_called_32 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_Struct );
    if ( tmp_called_32 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 132;
        goto frame_exception_exit_1;
    }
    tmp_source_name_37 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_37 == NULL ))
    {
        tmp_source_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_37 == NULL )
    {
        Py_DECREF( tmp_called_32 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 133;
        goto frame_exception_exit_1;
    }

    tmp_called_33 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_Int16 );
    if ( tmp_called_33 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_32 );

        frame_module->f_lineno = 133;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_56 = const_str_plain_x;
    frame_module->f_lineno = 133;
    tmp_call_arg_element_55 = CALL_FUNCTION_WITH_ARGS1( tmp_called_33, tmp_call_arg_element_56 );
    Py_DECREF( tmp_called_33 );
    if ( tmp_call_arg_element_55 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_32 );

        frame_module->f_lineno = 133;
        goto frame_exception_exit_1;
    }
    tmp_source_name_38 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_38 == NULL ))
    {
        tmp_source_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_38 == NULL )
    {
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_arg_element_55 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 134;
        goto frame_exception_exit_1;
    }

    tmp_called_34 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_Int16 );
    if ( tmp_called_34 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_arg_element_55 );

        frame_module->f_lineno = 134;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_58 = const_str_plain_y;
    frame_module->f_lineno = 134;
    tmp_call_arg_element_57 = CALL_FUNCTION_WITH_ARGS1( tmp_called_34, tmp_call_arg_element_58 );
    Py_DECREF( tmp_called_34 );
    if ( tmp_call_arg_element_57 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_32 );
        Py_DECREF( tmp_call_arg_element_55 );

        frame_module->f_lineno = 134;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 134;
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_32, tmp_call_arg_element_55, tmp_call_arg_element_57 );
    Py_DECREF( tmp_called_32 );
    Py_DECREF( tmp_call_arg_element_55 );
    Py_DECREF( tmp_call_arg_element_57 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 134;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_Point, tmp_assign_source_13 );
    tmp_source_name_39 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_39 == NULL ))
    {
        tmp_source_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_39 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 137;
        goto frame_exception_exit_1;
    }

    tmp_called_35 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_Struct );
    if ( tmp_called_35 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 137;
        goto frame_exception_exit_1;
    }
    tmp_source_name_40 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_40 == NULL ))
    {
        tmp_source_name_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_40 == NULL )
    {
        Py_DECREF( tmp_called_35 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 138;
        goto frame_exception_exit_1;
    }

    tmp_called_36 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_Int16 );
    if ( tmp_called_36 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_35 );

        frame_module->f_lineno = 138;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_60 = const_str_plain_x1;
    frame_module->f_lineno = 138;
    tmp_call_arg_element_59 = CALL_FUNCTION_WITH_ARGS1( tmp_called_36, tmp_call_arg_element_60 );
    Py_DECREF( tmp_called_36 );
    if ( tmp_call_arg_element_59 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_35 );

        frame_module->f_lineno = 138;
        goto frame_exception_exit_1;
    }
    tmp_source_name_41 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_41 == NULL ))
    {
        tmp_source_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_41 == NULL )
    {
        Py_DECREF( tmp_called_35 );
        Py_DECREF( tmp_call_arg_element_59 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_called_37 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_Int16 );
    if ( tmp_called_37 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_35 );
        Py_DECREF( tmp_call_arg_element_59 );

        frame_module->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_62 = const_str_plain_y1;
    frame_module->f_lineno = 139;
    tmp_call_arg_element_61 = CALL_FUNCTION_WITH_ARGS1( tmp_called_37, tmp_call_arg_element_62 );
    Py_DECREF( tmp_called_37 );
    if ( tmp_call_arg_element_61 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_35 );
        Py_DECREF( tmp_call_arg_element_59 );

        frame_module->f_lineno = 139;
        goto frame_exception_exit_1;
    }
    tmp_source_name_42 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_42 == NULL ))
    {
        tmp_source_name_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_42 == NULL )
    {
        Py_DECREF( tmp_called_35 );
        Py_DECREF( tmp_call_arg_element_59 );
        Py_DECREF( tmp_call_arg_element_61 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 140;
        goto frame_exception_exit_1;
    }

    tmp_called_38 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_Int16 );
    if ( tmp_called_38 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_35 );
        Py_DECREF( tmp_call_arg_element_59 );
        Py_DECREF( tmp_call_arg_element_61 );

        frame_module->f_lineno = 140;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_64 = const_str_plain_x2;
    frame_module->f_lineno = 140;
    tmp_call_arg_element_63 = CALL_FUNCTION_WITH_ARGS1( tmp_called_38, tmp_call_arg_element_64 );
    Py_DECREF( tmp_called_38 );
    if ( tmp_call_arg_element_63 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_35 );
        Py_DECREF( tmp_call_arg_element_59 );
        Py_DECREF( tmp_call_arg_element_61 );

        frame_module->f_lineno = 140;
        goto frame_exception_exit_1;
    }
    tmp_source_name_43 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_43 == NULL ))
    {
        tmp_source_name_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_43 == NULL )
    {
        Py_DECREF( tmp_called_35 );
        Py_DECREF( tmp_call_arg_element_59 );
        Py_DECREF( tmp_call_arg_element_61 );
        Py_DECREF( tmp_call_arg_element_63 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 141;
        goto frame_exception_exit_1;
    }

    tmp_called_39 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_Int16 );
    if ( tmp_called_39 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_35 );
        Py_DECREF( tmp_call_arg_element_59 );
        Py_DECREF( tmp_call_arg_element_61 );
        Py_DECREF( tmp_call_arg_element_63 );

        frame_module->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_66 = const_str_plain_y2;
    frame_module->f_lineno = 141;
    tmp_call_arg_element_65 = CALL_FUNCTION_WITH_ARGS1( tmp_called_39, tmp_call_arg_element_66 );
    Py_DECREF( tmp_called_39 );
    if ( tmp_call_arg_element_65 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_35 );
        Py_DECREF( tmp_call_arg_element_59 );
        Py_DECREF( tmp_call_arg_element_61 );
        Py_DECREF( tmp_call_arg_element_63 );

        frame_module->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 141;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS4( tmp_called_35, tmp_call_arg_element_59, tmp_call_arg_element_61, tmp_call_arg_element_63, tmp_call_arg_element_65 );
    Py_DECREF( tmp_called_35 );
    Py_DECREF( tmp_call_arg_element_59 );
    Py_DECREF( tmp_call_arg_element_61 );
    Py_DECREF( tmp_call_arg_element_63 );
    Py_DECREF( tmp_call_arg_element_65 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 141;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_Segment, tmp_assign_source_14 );
    tmp_source_name_44 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_44 == NULL ))
    {
        tmp_source_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_44 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_called_40 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_Struct );
    if ( tmp_called_40 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 144;
        goto frame_exception_exit_1;
    }
    tmp_source_name_45 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_45 == NULL ))
    {
        tmp_source_name_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_45 == NULL )
    {
        Py_DECREF( tmp_called_40 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_called_41 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_Int16 );
    if ( tmp_called_41 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_40 );

        frame_module->f_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_68 = const_str_plain_x;
    frame_module->f_lineno = 145;
    tmp_call_arg_element_67 = CALL_FUNCTION_WITH_ARGS1( tmp_called_41, tmp_call_arg_element_68 );
    Py_DECREF( tmp_called_41 );
    if ( tmp_call_arg_element_67 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_40 );

        frame_module->f_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_source_name_46 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_46 == NULL ))
    {
        tmp_source_name_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_46 == NULL )
    {
        Py_DECREF( tmp_called_40 );
        Py_DECREF( tmp_call_arg_element_67 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_called_42 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_Int16 );
    if ( tmp_called_42 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_40 );
        Py_DECREF( tmp_call_arg_element_67 );

        frame_module->f_lineno = 146;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_70 = const_str_plain_y;
    frame_module->f_lineno = 146;
    tmp_call_arg_element_69 = CALL_FUNCTION_WITH_ARGS1( tmp_called_42, tmp_call_arg_element_70 );
    Py_DECREF( tmp_called_42 );
    if ( tmp_call_arg_element_69 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_40 );
        Py_DECREF( tmp_call_arg_element_67 );

        frame_module->f_lineno = 146;
        goto frame_exception_exit_1;
    }
    tmp_source_name_47 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_47 == NULL ))
    {
        tmp_source_name_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_47 == NULL )
    {
        Py_DECREF( tmp_called_40 );
        Py_DECREF( tmp_call_arg_element_67 );
        Py_DECREF( tmp_call_arg_element_69 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_called_43 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_Card16 );
    if ( tmp_called_43 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_40 );
        Py_DECREF( tmp_call_arg_element_67 );
        Py_DECREF( tmp_call_arg_element_69 );

        frame_module->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_72 = const_str_plain_width;
    frame_module->f_lineno = 147;
    tmp_call_arg_element_71 = CALL_FUNCTION_WITH_ARGS1( tmp_called_43, tmp_call_arg_element_72 );
    Py_DECREF( tmp_called_43 );
    if ( tmp_call_arg_element_71 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_40 );
        Py_DECREF( tmp_call_arg_element_67 );
        Py_DECREF( tmp_call_arg_element_69 );

        frame_module->f_lineno = 147;
        goto frame_exception_exit_1;
    }
    tmp_source_name_48 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_48 == NULL ))
    {
        tmp_source_name_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_48 == NULL )
    {
        Py_DECREF( tmp_called_40 );
        Py_DECREF( tmp_call_arg_element_67 );
        Py_DECREF( tmp_call_arg_element_69 );
        Py_DECREF( tmp_call_arg_element_71 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }

    tmp_called_44 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_Card16 );
    if ( tmp_called_44 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_40 );
        Py_DECREF( tmp_call_arg_element_67 );
        Py_DECREF( tmp_call_arg_element_69 );
        Py_DECREF( tmp_call_arg_element_71 );

        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_74 = const_str_plain_height;
    frame_module->f_lineno = 148;
    tmp_call_arg_element_73 = CALL_FUNCTION_WITH_ARGS1( tmp_called_44, tmp_call_arg_element_74 );
    Py_DECREF( tmp_called_44 );
    if ( tmp_call_arg_element_73 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_40 );
        Py_DECREF( tmp_call_arg_element_67 );
        Py_DECREF( tmp_call_arg_element_69 );
        Py_DECREF( tmp_call_arg_element_71 );

        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 148;
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS4( tmp_called_40, tmp_call_arg_element_67, tmp_call_arg_element_69, tmp_call_arg_element_71, tmp_call_arg_element_73 );
    Py_DECREF( tmp_called_40 );
    Py_DECREF( tmp_call_arg_element_67 );
    Py_DECREF( tmp_call_arg_element_69 );
    Py_DECREF( tmp_call_arg_element_71 );
    Py_DECREF( tmp_call_arg_element_73 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 148;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_Rectangle, tmp_assign_source_15 );
    tmp_source_name_49 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_49 == NULL ))
    {
        tmp_source_name_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_49 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 151;
        goto frame_exception_exit_1;
    }

    tmp_called_45 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_Struct );
    if ( tmp_called_45 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_source_name_50 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_50 == NULL ))
    {
        tmp_source_name_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_50 == NULL )
    {
        Py_DECREF( tmp_called_45 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_called_46 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_Int16 );
    if ( tmp_called_46 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_45 );

        frame_module->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_76 = const_str_plain_x;
    frame_module->f_lineno = 152;
    tmp_call_arg_element_75 = CALL_FUNCTION_WITH_ARGS1( tmp_called_46, tmp_call_arg_element_76 );
    Py_DECREF( tmp_called_46 );
    if ( tmp_call_arg_element_75 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_45 );

        frame_module->f_lineno = 152;
        goto frame_exception_exit_1;
    }
    tmp_source_name_51 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_51 == NULL ))
    {
        tmp_source_name_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_51 == NULL )
    {
        Py_DECREF( tmp_called_45 );
        Py_DECREF( tmp_call_arg_element_75 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_called_47 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_Int16 );
    if ( tmp_called_47 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_45 );
        Py_DECREF( tmp_call_arg_element_75 );

        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_78 = const_str_plain_y;
    frame_module->f_lineno = 153;
    tmp_call_arg_element_77 = CALL_FUNCTION_WITH_ARGS1( tmp_called_47, tmp_call_arg_element_78 );
    Py_DECREF( tmp_called_47 );
    if ( tmp_call_arg_element_77 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_45 );
        Py_DECREF( tmp_call_arg_element_75 );

        frame_module->f_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_source_name_52 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_52 == NULL ))
    {
        tmp_source_name_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_52 == NULL )
    {
        Py_DECREF( tmp_called_45 );
        Py_DECREF( tmp_call_arg_element_75 );
        Py_DECREF( tmp_call_arg_element_77 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 154;
        goto frame_exception_exit_1;
    }

    tmp_called_48 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_Card16 );
    if ( tmp_called_48 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_45 );
        Py_DECREF( tmp_call_arg_element_75 );
        Py_DECREF( tmp_call_arg_element_77 );

        frame_module->f_lineno = 154;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_80 = const_str_plain_width;
    frame_module->f_lineno = 154;
    tmp_call_arg_element_79 = CALL_FUNCTION_WITH_ARGS1( tmp_called_48, tmp_call_arg_element_80 );
    Py_DECREF( tmp_called_48 );
    if ( tmp_call_arg_element_79 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_45 );
        Py_DECREF( tmp_call_arg_element_75 );
        Py_DECREF( tmp_call_arg_element_77 );

        frame_module->f_lineno = 154;
        goto frame_exception_exit_1;
    }
    tmp_source_name_53 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_53 == NULL ))
    {
        tmp_source_name_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_53 == NULL )
    {
        Py_DECREF( tmp_called_45 );
        Py_DECREF( tmp_call_arg_element_75 );
        Py_DECREF( tmp_call_arg_element_77 );
        Py_DECREF( tmp_call_arg_element_79 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 155;
        goto frame_exception_exit_1;
    }

    tmp_called_49 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_Card16 );
    if ( tmp_called_49 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_45 );
        Py_DECREF( tmp_call_arg_element_75 );
        Py_DECREF( tmp_call_arg_element_77 );
        Py_DECREF( tmp_call_arg_element_79 );

        frame_module->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_82 = const_str_plain_height;
    frame_module->f_lineno = 155;
    tmp_call_arg_element_81 = CALL_FUNCTION_WITH_ARGS1( tmp_called_49, tmp_call_arg_element_82 );
    Py_DECREF( tmp_called_49 );
    if ( tmp_call_arg_element_81 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_45 );
        Py_DECREF( tmp_call_arg_element_75 );
        Py_DECREF( tmp_call_arg_element_77 );
        Py_DECREF( tmp_call_arg_element_79 );

        frame_module->f_lineno = 155;
        goto frame_exception_exit_1;
    }
    tmp_source_name_54 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_54 == NULL ))
    {
        tmp_source_name_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_54 == NULL )
    {
        Py_DECREF( tmp_called_45 );
        Py_DECREF( tmp_call_arg_element_75 );
        Py_DECREF( tmp_call_arg_element_77 );
        Py_DECREF( tmp_call_arg_element_79 );
        Py_DECREF( tmp_call_arg_element_81 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 156;
        goto frame_exception_exit_1;
    }

    tmp_called_50 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_Int16 );
    if ( tmp_called_50 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_45 );
        Py_DECREF( tmp_call_arg_element_75 );
        Py_DECREF( tmp_call_arg_element_77 );
        Py_DECREF( tmp_call_arg_element_79 );
        Py_DECREF( tmp_call_arg_element_81 );

        frame_module->f_lineno = 156;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_84 = const_str_plain_angle1;
    frame_module->f_lineno = 156;
    tmp_call_arg_element_83 = CALL_FUNCTION_WITH_ARGS1( tmp_called_50, tmp_call_arg_element_84 );
    Py_DECREF( tmp_called_50 );
    if ( tmp_call_arg_element_83 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_45 );
        Py_DECREF( tmp_call_arg_element_75 );
        Py_DECREF( tmp_call_arg_element_77 );
        Py_DECREF( tmp_call_arg_element_79 );
        Py_DECREF( tmp_call_arg_element_81 );

        frame_module->f_lineno = 156;
        goto frame_exception_exit_1;
    }
    tmp_source_name_55 = GET_STRING_DICT_VALUE( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_rq );

    if (unlikely( tmp_source_name_55 == NULL ))
    {
        tmp_source_name_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rq );
    }

    if ( tmp_source_name_55 == NULL )
    {
        Py_DECREF( tmp_called_45 );
        Py_DECREF( tmp_call_arg_element_75 );
        Py_DECREF( tmp_call_arg_element_77 );
        Py_DECREF( tmp_call_arg_element_79 );
        Py_DECREF( tmp_call_arg_element_81 );
        Py_DECREF( tmp_call_arg_element_83 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24836 ], 24, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 157;
        goto frame_exception_exit_1;
    }

    tmp_called_51 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_Int16 );
    if ( tmp_called_51 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_45 );
        Py_DECREF( tmp_call_arg_element_75 );
        Py_DECREF( tmp_call_arg_element_77 );
        Py_DECREF( tmp_call_arg_element_79 );
        Py_DECREF( tmp_call_arg_element_81 );
        Py_DECREF( tmp_call_arg_element_83 );

        frame_module->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_86 = const_str_plain_angle2;
    frame_module->f_lineno = 157;
    tmp_call_arg_element_85 = CALL_FUNCTION_WITH_ARGS1( tmp_called_51, tmp_call_arg_element_86 );
    Py_DECREF( tmp_called_51 );
    if ( tmp_call_arg_element_85 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_45 );
        Py_DECREF( tmp_call_arg_element_75 );
        Py_DECREF( tmp_call_arg_element_77 );
        Py_DECREF( tmp_call_arg_element_79 );
        Py_DECREF( tmp_call_arg_element_81 );
        Py_DECREF( tmp_call_arg_element_83 );

        frame_module->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 157;
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS6( tmp_called_45, tmp_call_arg_element_75, tmp_call_arg_element_77, tmp_call_arg_element_79, tmp_call_arg_element_81, tmp_call_arg_element_83, tmp_call_arg_element_85 );
    Py_DECREF( tmp_called_45 );
    Py_DECREF( tmp_call_arg_element_75 );
    Py_DECREF( tmp_call_arg_element_77 );
    Py_DECREF( tmp_call_arg_element_79 );
    Py_DECREF( tmp_call_arg_element_81 );
    Py_DECREF( tmp_call_arg_element_83 );
    Py_DECREF( tmp_call_arg_element_85 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 157;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$protocol$structs, (Nuitka_StringObject *)const_str_plain_Arc, tmp_assign_source_16 );

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

    return MOD_RETURN_VALUE( module_Xlib$protocol$structs );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
