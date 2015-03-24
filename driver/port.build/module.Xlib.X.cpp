// Generated code for Python source for module 'Xlib.X'
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

// The _module_Xlib$X is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_Xlib$X;
PyDictObject *moduledict_Xlib$X;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_6;
extern PyObject *const_int_pos_7;
extern PyObject *const_int_pos_8;
extern PyObject *const_int_pos_9;
extern PyObject *const_int_pos_10;
extern PyObject *const_int_pos_11;
extern PyObject *const_int_pos_12;
extern PyObject *const_int_pos_13;
extern PyObject *const_int_pos_14;
extern PyObject *const_int_pos_15;
extern PyObject *const_int_pos_16;
extern PyObject *const_int_pos_17;
extern PyObject *const_int_pos_18;
extern PyObject *const_int_pos_19;
extern PyObject *const_int_pos_20;
extern PyObject *const_int_pos_21;
extern PyObject *const_int_pos_22;
extern PyObject *const_int_pos_23;
extern PyObject *const_int_pos_24;
extern PyObject *const_int_pos_25;
extern PyObject *const_int_pos_26;
extern PyObject *const_int_pos_27;
extern PyObject *const_int_pos_28;
extern PyObject *const_int_pos_29;
extern PyObject *const_int_pos_30;
extern PyObject *const_int_pos_31;
extern PyObject *const_int_pos_32;
extern PyObject *const_int_pos_33;
extern PyObject *const_int_pos_34;
extern PyObject *const_int_pos_35;
extern PyObject *const_int_pos_64;
extern PyObject *const_int_pos_128;
extern PyObject *const_int_pos_255;
extern PyObject *const_int_pos_256;
extern PyObject *const_int_pos_512;
extern PyObject *const_str_plain_X;
extern PyObject *const_tuple_empty;
extern PyObject *const_int_pos_1024;
extern PyObject *const_int_pos_2048;
extern PyObject *const_int_pos_4096;
extern PyObject *const_int_pos_8192;
extern PyObject *const_int_pos_16384;
static PyObject *const_int_pos_32768;
extern PyObject *const_int_pos_65536;
static PyObject *const_str_plain_CWX;
static PyObject *const_str_plain_CWY;
static PyObject *const_int_pos_131072;
extern PyObject *const_int_pos_262144;
static PyObject *const_int_pos_524288;
extern PyObject *const_str_plain_GXor;
extern PyObject *const_str_plain_NONE;
extern PyObject *const_int_pos_1048576;
static PyObject *const_int_pos_2097152;
static PyObject *const_int_pos_4194304;
static PyObject *const_int_pos_8388608;
extern PyObject *const_str_plain_Above;
extern PyObject *const_str_plain_BadGC;
extern PyObject *const_str_plain_Below;
static PyObject *const_str_plain_DoRed;
extern PyObject *const_str_plain_GXand;
extern PyObject *const_str_plain_GXnor;
extern PyObject *const_str_plain_GXset;
extern PyObject *const_str_plain_GXxor;
static PyObject *const_str_plain_KBKey;
static PyObject *const_str_plain_KBLed;
extern PyObject *const_str_plain_TopIf;
static PyObject *const_int_pos_16777216;
extern PyObject *const_str_plain_Always;
static PyObject *const_str_plain_AnyKey;
extern PyObject *const_str_plain_Convex;
static PyObject *const_str_plain_DoBlue;
extern PyObject *const_str_plain_Expose;
static PyObject *const_str_plain_GCFont;
static PyObject *const_str_plain_GCTile;
extern PyObject *const_str_plain_GXcopy;
extern PyObject *const_str_plain_GXnand;
extern PyObject *const_str_plain_GXnoop;
extern PyObject *const_str_plain_BadAtom;
extern PyObject *const_str_plain_BadFont;
extern PyObject *const_str_plain_BadName;
static PyObject *const_str_plain_Button1;
static PyObject *const_str_plain_Button2;
static PyObject *const_str_plain_Button3;
static PyObject *const_str_plain_Button4;
static PyObject *const_str_plain_Button5;
static PyObject *const_str_plain_CWWidth;
extern PyObject *const_str_plain_CapButt;
extern PyObject *const_str_plain_Complex;
static PyObject *const_str_plain_DoGreen;
extern PyObject *const_str_plain_FocusIn;
extern PyObject *const_str_plain_GXclear;
extern PyObject *const_str_plain_GXequiv;
static PyObject *const_str_plain_Success;
extern PyObject *const_str_plain_YSorted;
extern PyObject *const_str_plain_ZPixmap;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_AllocAll;
extern PyObject *const_str_plain_ArcChord;
extern PyObject *const_str_plain_BadAlloc;
extern PyObject *const_str_plain_BadColor;
extern PyObject *const_str_plain_BadMatch;
extern PyObject *const_str_plain_BadValue;
extern PyObject *const_str_plain_BottomIf;
static PyObject *const_str_plain_CWCursor;
static PyObject *const_str_plain_CWHeight;
extern PyObject *const_str_plain_CapRound;
extern PyObject *const_str_plain_FocusOut;
extern PyObject *const_str_plain_GXinvert;
extern PyObject *const_str_plain_KeyPress;
static PyObject *const_str_plain_LSBFirst;
static PyObject *const_str_plain_LockMask;
static PyObject *const_str_plain_MSBFirst;
static PyObject *const_str_plain_Mod1Mask;
static PyObject *const_str_plain_Mod2Mask;
static PyObject *const_str_plain_Mod3Mask;
static PyObject *const_str_plain_Mod4Mask;
static PyObject *const_str_plain_Mod5Mask;
extern PyObject *const_str_plain_NoExpose;
extern PyObject *const_str_plain_NoSymbol;
extern PyObject *const_str_plain_Opposite;
extern PyObject *const_str_plain_SyncBoth;
extern PyObject *const_str_plain_Unsorted;
extern PyObject *const_str_plain_XYBitmap;
extern PyObject *const_str_plain_XYPixmap;
extern PyObject *const_str_plain_YXBanded;
extern PyObject *const_str_plain_YXSorted;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_AllocNone;
static PyObject *const_str_plain_AnyButton;
extern PyObject *const_str_plain_AsyncBoth;
extern PyObject *const_str_plain_BadAccess;
extern PyObject *const_str_plain_BadCursor;
extern PyObject *const_str_plain_BadLength;
extern PyObject *const_str_plain_BadPixmap;
extern PyObject *const_str_plain_BadWindow;
static PyObject *const_str_plain_CWSibling;
extern PyObject *const_str_plain_FillSolid;
extern PyObject *const_str_plain_FillTiled;
static PyObject *const_str_plain_GCArcMode;
static PyObject *const_str_plain_GCLastBit;
static PyObject *const_str_plain_GCStipple;
static PyObject *const_str_plain_GrayScale;
extern PyObject *const_str_plain_InputOnly;
extern PyObject *const_str_plain_JoinBevel;
extern PyObject *const_str_plain_JoinMiter;
extern PyObject *const_str_plain_JoinRound;
static PyObject *const_str_plain_KBLedMode;
static PyObject *const_str_plain_LASTEvent;
extern PyObject *const_str_plain_LedModeOn;
extern PyObject *const_str_plain_LineSolid;
extern PyObject *const_str_plain_MapNotify;
extern PyObject *const_str_plain_Nonconvex;
extern PyObject *const_str_plain_NotUseful;
static PyObject *const_str_plain_ShiftMask;
extern PyObject *const_str_plain_TileShape;
static PyObject *const_str_plain_TrueColor;
extern PyObject *const_str_plain_BadRequest;
static PyObject *const_str_plain_CWColormap;
extern PyObject *const_str_plain_CapNotLast;
extern PyObject *const_str_plain_DestroyAll;
static PyObject *const_str_plain_FontChange;
static PyObject *const_str_plain_GCCapStyle;
static PyObject *const_str_plain_GCClipMask;
static PyObject *const_str_plain_GCDashList;
static PyObject *const_str_plain_GCFillRule;
static PyObject *const_str_plain_GCFunction;
static PyObject *const_str_plain_GrabFrozen;
extern PyObject *const_str_plain_HostDelete;
extern PyObject *const_str_plain_HostInsert;
static PyObject *const_str_plain_InputFocus;
static PyObject *const_str_plain_IsUnmapped;
static PyObject *const_str_plain_IsViewable;
extern PyObject *const_str_plain_KeyRelease;
extern PyObject *const_str_plain_LedModeOff;
extern PyObject *const_str_plain_MapRequest;
static PyObject *const_str_plain_NotifyGrab;
static PyObject *const_str_plain_NotifyHint;
static PyObject *const_str_plain_PlaceOnTop;
static PyObject *const_str_plain_StaticGray;
extern PyObject *const_str_plain_WhenMapped;
static PyObject *const_str_plain_AnyModifier;
extern PyObject *const_str_plain_ArcPieSlice;
extern PyObject *const_str_plain_BadDrawable;
extern PyObject *const_str_plain_BadIDChoice;
static PyObject *const_str_plain_Button1Mask;
static PyObject *const_str_plain_Button2Mask;
static PyObject *const_str_plain_Button3Mask;
static PyObject *const_str_plain_Button4Mask;
static PyObject *const_str_plain_Button5Mask;
extern PyObject *const_str_plain_ButtonPress;
static PyObject *const_str_plain_CWBackPixel;
static PyObject *const_str_plain_CWEventMask;
static PyObject *const_str_plain_CWSaveUnder;
static PyObject *const_str_plain_CWStackMode;
static PyObject *const_str_plain_ControlMask;
extern PyObject *const_str_plain_CurrentTime;
extern PyObject *const_str_plain_CursorShape;
static PyObject *const_str_plain_DirectColor;
extern PyObject *const_str_plain_EastGravity;
extern PyObject *const_str_plain_EnterNotify;
extern PyObject *const_str_plain_EvenOddRule;
extern PyObject *const_str_plain_FamilyChaos;
static PyObject *const_str_plain_GCFillStyle;
static PyObject *const_str_plain_GCJoinStyle;
static PyObject *const_str_plain_GCLineStyle;
static PyObject *const_str_plain_GCLineWidth;
static PyObject *const_str_plain_GCPlaneMask;
extern PyObject *const_str_plain_GXorReverse;
static PyObject *const_str_plain_GrabSuccess;
extern PyObject *const_str_plain_InputOutput;
static PyObject *const_str_plain_KBBellPitch;
extern PyObject *const_str_plain_LeaveNotify;
static PyObject *const_str_plain_MappingBusy;
static PyObject *const_str_plain_NoEventMask;
extern PyObject *const_str_plain_PointerRoot;
static PyObject *const_str_plain_PseudoColor;
extern PyObject *const_str_plain_RaiseLowest;
static PyObject *const_str_plain_StaticColor;
extern PyObject *const_str_plain_SyncPointer;
extern PyObject *const_str_plain_UnmapNotify;
extern PyObject *const_str_plain_WestGravity;
extern PyObject *const_str_plain_WindingRule;
static PyObject *const_str_plain_AllTemporary;
extern PyObject *const_str_plain_AsyncPointer;
static PyObject *const_str_plain_CWBackPixmap;
static PyObject *const_str_plain_CWBitGravity;
static PyObject *const_str_plain_CWWinGravity;
extern PyObject *const_str_plain_CreateNotify;
extern PyObject *const_str_plain_EnableAccess;
static PyObject *const_str_plain_ExposureMask;
extern PyObject *const_str_plain_FamilyDECnet;
extern PyObject *const_str_plain_FillStippled;
static PyObject *const_str_plain_GCBackground;
static PyObject *const_str_plain_GCDashOffset;
static PyObject *const_str_plain_GCForeground;
extern PyObject *const_str_plain_GXandReverse;
extern PyObject *const_str_plain_GXorInverted;
extern PyObject *const_str_plain_GrabModeSync;
static PyObject *const_str_plain_IsUnviewable;
extern PyObject *const_str_plain_KeyPressMask;
extern PyObject *const_str_plain_KeymapNotify;
extern PyObject *const_str_plain_LockMapIndex;
extern PyObject *const_str_plain_LowerHighest;
extern PyObject *const_str_plain_Mod1MapIndex;
extern PyObject *const_str_plain_Mod2MapIndex;
extern PyObject *const_str_plain_Mod3MapIndex;
extern PyObject *const_str_plain_Mod4MapIndex;
extern PyObject *const_str_plain_Mod5MapIndex;
extern PyObject *const_str_plain_MotionNotify;
extern PyObject *const_str_plain_NorthGravity;
static PyObject *const_str_plain_NotifyNormal;
static PyObject *const_str_plain_NotifyUngrab;
extern PyObject *const_str_plain_RevertToNone;
extern PyObject *const_str_plain_SouthGravity;
extern PyObject *const_str_plain_StippleShape;
extern PyObject *const_str_plain_SyncKeyboard;
static PyObject *const_str_plain_UnmapGravity;
extern PyObject *const_str_plain_AsyncKeyboard;
extern PyObject *const_str_plain_ButtonRelease;
static PyObject *const_str_plain_CWBorderPixel;
static PyObject *const_str_plain_CWBorderWidth;
extern PyObject *const_str_plain_CapProjecting;
extern PyObject *const_str_plain_CenterGravity;
extern PyObject *const_str_plain_ClientMessage;
extern PyObject *const_str_plain_DestroyNotify;
extern PyObject *const_str_plain_DisableAccess;
extern PyObject *const_str_plain_ForgetGravity;
static PyObject *const_str_plain_GCClipXOrigin;
static PyObject *const_str_plain_GCClipYOrigin;
extern PyObject *const_str_plain_GXandInverted;
extern PyObject *const_str_plain_GrabModeAsync;
extern PyObject *const_str_plain_GravityNotify;
static PyObject *const_str_plain_KBBellPercent;
extern PyObject *const_str_plain_LineOnOffDash;
static PyObject *const_str_plain_MappingFailed;
extern PyObject *const_str_plain_MappingNotify;
static PyObject *const_str_plain_NotifyPointer;
static PyObject *const_str_plain_NotifyVirtual;
static PyObject *const_str_plain_PlaceOnBottom;
static PyObject *const_str_plain_PointerWindow;
extern PyObject *const_str_plain_ReplayPointer;
extern PyObject *const_str_plain_ResizeRequest;
extern PyObject *const_str_plain_SetModeDelete;
extern PyObject *const_str_plain_SetModeInsert;
extern PyObject *const_str_plain_ShiftMapIndex;
extern PyObject *const_str_plain_StaticGravity;
extern PyObject *const_str_plain_AllowExposures;
static PyObject *const_str_plain_AlreadyGrabbed;
static PyObject *const_str_plain_CWBackingPixel;
static PyObject *const_str_plain_CWBackingStore;
static PyObject *const_str_plain_CWBorderPixmap;
extern PyObject *const_str_plain_ClipByChildren;
extern PyObject *const_str_plain_ColormapNotify;
extern PyObject *const_str_plain_CopyFromParent;
extern PyObject *const_str_plain_FamilyInternet;
extern PyObject *const_str_plain_GXcopyInverted;
extern PyObject *const_str_plain_GraphicsExpose;
static PyObject *const_str_plain_KBBellDuration;
extern PyObject *const_str_plain_KeyReleaseMask;
extern PyObject *const_str_plain_LineDoubleDash;
static PyObject *const_str_plain_MappingPointer;
static PyObject *const_str_plain_MappingSuccess;
static PyObject *const_str_plain_NotifyAncestor;
static PyObject *const_str_plain_NotifyInferior;
static PyObject *const_str_plain_ParentRelative;
extern PyObject *const_str_plain_PreferBlanking;
extern PyObject *const_str_plain_PropModeAppend;
static PyObject *const_str_plain_PropertyDelete;
extern PyObject *const_str_plain_PropertyNotify;
extern PyObject *const_str_plain_ReparentNotify;
extern PyObject *const_str_plain_ReplayKeyboard;
extern PyObject *const_str_plain_RevertToParent;
extern PyObject *const_str_plain_SelectionClear;
static PyObject *const_str_plain_AnyPropertyType;
static PyObject *const_str_plain_ButtonPressMask;
static PyObject *const_str_plain_CWBackingPlanes;
static PyObject *const_str_plain_CWDontPropagate;
extern PyObject *const_str_plain_CirculateNotify;
extern PyObject *const_str_plain_ConfigureNotify;
extern PyObject *const_str_plain_ControlMapIndex;
extern PyObject *const_str_plain_CoordModeOrigin;
extern PyObject *const_str_plain_DefaultBlanking;
static PyObject *const_str_plain_EnterWindowMask;
static PyObject *const_str_plain_FocusChangeMask;
static PyObject *const_str_plain_FontLeftToRight;
static PyObject *const_str_plain_FontRightToLeft;
static PyObject *const_str_plain_GCSubwindowMode;
static PyObject *const_str_plain_GrabInvalidTime;
static PyObject *const_str_plain_GrabNotViewable;
static PyObject *const_str_plain_KeymapStateMask;
static PyObject *const_str_plain_LeaveWindowMask;
extern PyObject *const_str_plain_MappingKeyboard;
static PyObject *const_str_plain_MappingModifier;
static PyObject *const_str_plain_NotifyNonlinear;
extern PyObject *const_str_plain_PropModePrepend;
extern PyObject *const_str_plain_PropModeReplace;
extern PyObject *const_str_plain_RetainPermanent;
extern PyObject *const_str_plain_RetainTemporary;
extern PyObject *const_str_plain_SelectionNotify;
extern PyObject *const_str_plain_AutoRepeatModeOn;
static PyObject *const_str_plain_ButtonMotionMask;
extern PyObject *const_str_plain_CirculateRequest;
extern PyObject *const_str_plain_ConfigureRequest;
extern PyObject *const_str_plain_DefaultExposures;
extern PyObject *const_str_plain_IncludeInferiors;
static PyObject *const_str_plain_KBAutoRepeatMode;
extern PyObject *const_str_plain_NorthEastGravity;
extern PyObject *const_str_plain_NorthWestGravity;
static PyObject *const_str_plain_NotifyDetailNone;
static PyObject *const_str_plain_PropertyNewValue;
extern PyObject *const_str_plain_ScreenSaverReset;
extern PyObject *const_str_plain_SelectionRequest;
extern PyObject *const_str_plain_SouthEastGravity;
extern PyObject *const_str_plain_SouthWestGravity;
extern PyObject *const_str_plain_VisibilityNotify;
extern PyObject *const_str_plain_AutoRepeatModeOff;
extern PyObject *const_str_plain_BadImplementation;
static PyObject *const_str_plain_Button1MotionMask;
static PyObject *const_str_plain_Button2MotionMask;
static PyObject *const_str_plain_Button3MotionMask;
static PyObject *const_str_plain_Button4MotionMask;
static PyObject *const_str_plain_Button5MotionMask;
static PyObject *const_str_plain_ButtonReleaseMask;
static PyObject *const_str_plain_ColormapInstalled;
extern PyObject *const_str_plain_CoordModePrevious;
static PyObject *const_str_plain_GCTileStipXOrigin;
static PyObject *const_str_plain_GCTileStipYOrigin;
static PyObject *const_str_plain_KBKeyClickPercent;
static PyObject *const_str_plain_NotifyPointerRoot;
static PyObject *const_str_plain_PointerMotionMask;
extern PyObject *const_str_plain_ScreenSaverActive;
static PyObject *const_str_plain_CWOverrideRedirect;
static PyObject *const_str_plain_ColormapChangeMask;
static PyObject *const_str_plain_DisableScreenSaver;
extern PyObject *const_str_plain_DontAllowExposures;
extern PyObject *const_str_plain_DontPreferBlanking;
extern PyObject *const_str_plain_FillOpaqueStippled;
static PyObject *const_str_plain_LastExtensionError;
static PyObject *const_str_plain_NotifyWhileGrabbed;
static PyObject *const_str_plain_PropertyChangeMask;
static PyObject *const_str_plain_ResizeRedirectMask;
static PyObject *const_str_plain_ColormapUninstalled;
static PyObject *const_str_plain_FirstExtensionError;
static PyObject *const_str_plain_GCGraphicsExposures;
static PyObject *const_str_plain_OwnerGrabButtonMask;
extern PyObject *const_str_plain_RevertToPointerRoot;
static PyObject *const_str_plain_StructureNotifyMask;
static PyObject *const_str_plain_VisibilityChangeMask;
static PyObject *const_str_plain_VisibilityUnobscured;
extern PyObject *const_str_plain_AutoRepeatModeDefault;
static PyObject *const_str_plain_DisableScreenInterval;
static PyObject *const_str_plain_PointerMotionHintMask;
static PyObject *const_str_plain_NotifyNonlinearVirtual;
static PyObject *const_str_plain_SubstructureNotifyMask;
static PyObject *const_str_plain_VisibilityFullyObscured;
static PyObject *const_str_plain_SubstructureRedirectMask;
static PyObject *const_str_plain_VisibilityPartiallyObscured;
static PyObject *const_str_digest_3a9181a15d55dbd3a7c3e1c652238186;
extern PyObject *const_str_digest_7f85abe92a2a0a683804a46c8412615e;

static void _initModuleConstants(void)
{
    const_int_pos_32768 = PyInt_FromLong( 32768l );
    const_str_plain_CWX = UNSTREAM_STRING( &constant_bin[ 408005 ], 3, 1 );
    const_str_plain_CWY = UNSTREAM_STRING( &constant_bin[ 408008 ], 3, 1 );
    const_int_pos_131072 = PyInt_FromLong( 131072l );
    const_int_pos_524288 = PyInt_FromLong( 524288l );
    const_int_pos_2097152 = PyInt_FromLong( 2097152l );
    const_int_pos_4194304 = PyInt_FromLong( 4194304l );
    const_int_pos_8388608 = PyInt_FromLong( 8388608l );
    const_str_plain_DoRed = UNSTREAM_STRING( &constant_bin[ 408011 ], 5, 1 );
    const_str_plain_KBKey = UNSTREAM_STRING( &constant_bin[ 408016 ], 5, 1 );
    const_str_plain_KBLed = UNSTREAM_STRING( &constant_bin[ 408021 ], 5, 1 );
    const_int_pos_16777216 = PyInt_FromLong( 16777216l );
    const_str_plain_AnyKey = UNSTREAM_STRING( &constant_bin[ 408026 ], 6, 1 );
    const_str_plain_DoBlue = UNSTREAM_STRING( &constant_bin[ 408032 ], 6, 1 );
    const_str_plain_GCFont = UNSTREAM_STRING( &constant_bin[ 408038 ], 6, 1 );
    const_str_plain_GCTile = UNSTREAM_STRING( &constant_bin[ 408044 ], 6, 1 );
    const_str_plain_Button1 = UNSTREAM_STRING( &constant_bin[ 408050 ], 7, 1 );
    const_str_plain_Button2 = UNSTREAM_STRING( &constant_bin[ 408057 ], 7, 1 );
    const_str_plain_Button3 = UNSTREAM_STRING( &constant_bin[ 408064 ], 7, 1 );
    const_str_plain_Button4 = UNSTREAM_STRING( &constant_bin[ 408071 ], 7, 1 );
    const_str_plain_Button5 = UNSTREAM_STRING( &constant_bin[ 408078 ], 7, 1 );
    const_str_plain_CWWidth = UNSTREAM_STRING( &constant_bin[ 408085 ], 7, 1 );
    const_str_plain_DoGreen = UNSTREAM_STRING( &constant_bin[ 408092 ], 7, 1 );
    const_str_plain_Success = UNSTREAM_STRING( &constant_bin[ 408099 ], 7, 1 );
    const_str_plain_CWCursor = UNSTREAM_STRING( &constant_bin[ 408106 ], 8, 1 );
    const_str_plain_CWHeight = UNSTREAM_STRING( &constant_bin[ 408114 ], 8, 1 );
    const_str_plain_LSBFirst = UNSTREAM_STRING( &constant_bin[ 408122 ], 8, 1 );
    const_str_plain_LockMask = UNSTREAM_STRING( &constant_bin[ 408130 ], 8, 1 );
    const_str_plain_MSBFirst = UNSTREAM_STRING( &constant_bin[ 408138 ], 8, 1 );
    const_str_plain_Mod1Mask = UNSTREAM_STRING( &constant_bin[ 408146 ], 8, 1 );
    const_str_plain_Mod2Mask = UNSTREAM_STRING( &constant_bin[ 408154 ], 8, 1 );
    const_str_plain_Mod3Mask = UNSTREAM_STRING( &constant_bin[ 408162 ], 8, 1 );
    const_str_plain_Mod4Mask = UNSTREAM_STRING( &constant_bin[ 408170 ], 8, 1 );
    const_str_plain_Mod5Mask = UNSTREAM_STRING( &constant_bin[ 408178 ], 8, 1 );
    const_str_plain_AnyButton = UNSTREAM_STRING( &constant_bin[ 408186 ], 9, 1 );
    const_str_plain_CWSibling = UNSTREAM_STRING( &constant_bin[ 408195 ], 9, 1 );
    const_str_plain_GCArcMode = UNSTREAM_STRING( &constant_bin[ 408204 ], 9, 1 );
    const_str_plain_GCLastBit = UNSTREAM_STRING( &constant_bin[ 408213 ], 9, 1 );
    const_str_plain_GCStipple = UNSTREAM_STRING( &constant_bin[ 408222 ], 9, 1 );
    const_str_plain_GrayScale = UNSTREAM_STRING( &constant_bin[ 408231 ], 9, 1 );
    const_str_plain_KBLedMode = UNSTREAM_STRING( &constant_bin[ 408240 ], 9, 1 );
    const_str_plain_LASTEvent = UNSTREAM_STRING( &constant_bin[ 408249 ], 9, 1 );
    const_str_plain_ShiftMask = UNSTREAM_STRING( &constant_bin[ 408258 ], 9, 1 );
    const_str_plain_TrueColor = UNSTREAM_STRING( &constant_bin[ 408267 ], 9, 1 );
    const_str_plain_CWColormap = UNSTREAM_STRING( &constant_bin[ 408276 ], 10, 1 );
    const_str_plain_FontChange = UNSTREAM_STRING( &constant_bin[ 408286 ], 10, 1 );
    const_str_plain_GCCapStyle = UNSTREAM_STRING( &constant_bin[ 408296 ], 10, 1 );
    const_str_plain_GCClipMask = UNSTREAM_STRING( &constant_bin[ 408306 ], 10, 1 );
    const_str_plain_GCDashList = UNSTREAM_STRING( &constant_bin[ 408316 ], 10, 1 );
    const_str_plain_GCFillRule = UNSTREAM_STRING( &constant_bin[ 408326 ], 10, 1 );
    const_str_plain_GCFunction = UNSTREAM_STRING( &constant_bin[ 408336 ], 10, 1 );
    const_str_plain_GrabFrozen = UNSTREAM_STRING( &constant_bin[ 408346 ], 10, 1 );
    const_str_plain_InputFocus = UNSTREAM_STRING( &constant_bin[ 34912 ], 10, 1 );
    const_str_plain_IsUnmapped = UNSTREAM_STRING( &constant_bin[ 408356 ], 10, 1 );
    const_str_plain_IsViewable = UNSTREAM_STRING( &constant_bin[ 408366 ], 10, 1 );
    const_str_plain_NotifyGrab = UNSTREAM_STRING( &constant_bin[ 408376 ], 10, 1 );
    const_str_plain_NotifyHint = UNSTREAM_STRING( &constant_bin[ 408386 ], 10, 1 );
    const_str_plain_PlaceOnTop = UNSTREAM_STRING( &constant_bin[ 408396 ], 10, 1 );
    const_str_plain_StaticGray = UNSTREAM_STRING( &constant_bin[ 408406 ], 10, 1 );
    const_str_plain_AnyModifier = UNSTREAM_STRING( &constant_bin[ 408416 ], 11, 1 );
    const_str_plain_Button1Mask = UNSTREAM_STRING( &constant_bin[ 408427 ], 11, 1 );
    const_str_plain_Button2Mask = UNSTREAM_STRING( &constant_bin[ 408438 ], 11, 1 );
    const_str_plain_Button3Mask = UNSTREAM_STRING( &constant_bin[ 408449 ], 11, 1 );
    const_str_plain_Button4Mask = UNSTREAM_STRING( &constant_bin[ 408460 ], 11, 1 );
    const_str_plain_Button5Mask = UNSTREAM_STRING( &constant_bin[ 408471 ], 11, 1 );
    const_str_plain_CWBackPixel = UNSTREAM_STRING( &constant_bin[ 408482 ], 11, 1 );
    const_str_plain_CWEventMask = UNSTREAM_STRING( &constant_bin[ 408493 ], 11, 1 );
    const_str_plain_CWSaveUnder = UNSTREAM_STRING( &constant_bin[ 408504 ], 11, 1 );
    const_str_plain_CWStackMode = UNSTREAM_STRING( &constant_bin[ 408515 ], 11, 1 );
    const_str_plain_ControlMask = UNSTREAM_STRING( &constant_bin[ 408526 ], 11, 1 );
    const_str_plain_DirectColor = UNSTREAM_STRING( &constant_bin[ 408537 ], 11, 1 );
    const_str_plain_GCFillStyle = UNSTREAM_STRING( &constant_bin[ 408548 ], 11, 1 );
    const_str_plain_GCJoinStyle = UNSTREAM_STRING( &constant_bin[ 408559 ], 11, 1 );
    const_str_plain_GCLineStyle = UNSTREAM_STRING( &constant_bin[ 408570 ], 11, 1 );
    const_str_plain_GCLineWidth = UNSTREAM_STRING( &constant_bin[ 408581 ], 11, 1 );
    const_str_plain_GCPlaneMask = UNSTREAM_STRING( &constant_bin[ 408592 ], 11, 1 );
    const_str_plain_GrabSuccess = UNSTREAM_STRING( &constant_bin[ 408603 ], 11, 1 );
    const_str_plain_KBBellPitch = UNSTREAM_STRING( &constant_bin[ 408614 ], 11, 1 );
    const_str_plain_MappingBusy = UNSTREAM_STRING( &constant_bin[ 408625 ], 11, 1 );
    const_str_plain_NoEventMask = UNSTREAM_STRING( &constant_bin[ 408636 ], 11, 1 );
    const_str_plain_PseudoColor = UNSTREAM_STRING( &constant_bin[ 408647 ], 11, 1 );
    const_str_plain_StaticColor = UNSTREAM_STRING( &constant_bin[ 408658 ], 11, 1 );
    const_str_plain_AllTemporary = UNSTREAM_STRING( &constant_bin[ 408669 ], 12, 1 );
    const_str_plain_CWBackPixmap = UNSTREAM_STRING( &constant_bin[ 408681 ], 12, 1 );
    const_str_plain_CWBitGravity = UNSTREAM_STRING( &constant_bin[ 408693 ], 12, 1 );
    const_str_plain_CWWinGravity = UNSTREAM_STRING( &constant_bin[ 408705 ], 12, 1 );
    const_str_plain_ExposureMask = UNSTREAM_STRING( &constant_bin[ 408717 ], 12, 1 );
    const_str_plain_GCBackground = UNSTREAM_STRING( &constant_bin[ 408729 ], 12, 1 );
    const_str_plain_GCDashOffset = UNSTREAM_STRING( &constant_bin[ 408741 ], 12, 1 );
    const_str_plain_GCForeground = UNSTREAM_STRING( &constant_bin[ 408753 ], 12, 1 );
    const_str_plain_IsUnviewable = UNSTREAM_STRING( &constant_bin[ 408765 ], 12, 1 );
    const_str_plain_NotifyNormal = UNSTREAM_STRING( &constant_bin[ 408777 ], 12, 1 );
    const_str_plain_NotifyUngrab = UNSTREAM_STRING( &constant_bin[ 408789 ], 12, 1 );
    const_str_plain_UnmapGravity = UNSTREAM_STRING( &constant_bin[ 408801 ], 12, 1 );
    const_str_plain_CWBorderPixel = UNSTREAM_STRING( &constant_bin[ 408813 ], 13, 1 );
    const_str_plain_CWBorderWidth = UNSTREAM_STRING( &constant_bin[ 408826 ], 13, 1 );
    const_str_plain_GCClipXOrigin = UNSTREAM_STRING( &constant_bin[ 408839 ], 13, 1 );
    const_str_plain_GCClipYOrigin = UNSTREAM_STRING( &constant_bin[ 408852 ], 13, 1 );
    const_str_plain_KBBellPercent = UNSTREAM_STRING( &constant_bin[ 408865 ], 13, 1 );
    const_str_plain_MappingFailed = UNSTREAM_STRING( &constant_bin[ 408878 ], 13, 1 );
    const_str_plain_NotifyPointer = UNSTREAM_STRING( &constant_bin[ 408891 ], 13, 1 );
    const_str_plain_NotifyVirtual = UNSTREAM_STRING( &constant_bin[ 408904 ], 13, 1 );
    const_str_plain_PlaceOnBottom = UNSTREAM_STRING( &constant_bin[ 408917 ], 13, 1 );
    const_str_plain_PointerWindow = UNSTREAM_STRING( &constant_bin[ 408930 ], 13, 1 );
    const_str_plain_AlreadyGrabbed = UNSTREAM_STRING( &constant_bin[ 408943 ], 14, 1 );
    const_str_plain_CWBackingPixel = UNSTREAM_STRING( &constant_bin[ 408957 ], 14, 1 );
    const_str_plain_CWBackingStore = UNSTREAM_STRING( &constant_bin[ 408971 ], 14, 1 );
    const_str_plain_CWBorderPixmap = UNSTREAM_STRING( &constant_bin[ 408985 ], 14, 1 );
    const_str_plain_KBBellDuration = UNSTREAM_STRING( &constant_bin[ 408999 ], 14, 1 );
    const_str_plain_MappingPointer = UNSTREAM_STRING( &constant_bin[ 409013 ], 14, 1 );
    const_str_plain_MappingSuccess = UNSTREAM_STRING( &constant_bin[ 409027 ], 14, 1 );
    const_str_plain_NotifyAncestor = UNSTREAM_STRING( &constant_bin[ 409041 ], 14, 1 );
    const_str_plain_NotifyInferior = UNSTREAM_STRING( &constant_bin[ 409055 ], 14, 1 );
    const_str_plain_ParentRelative = UNSTREAM_STRING( &constant_bin[ 409069 ], 14, 1 );
    const_str_plain_PropertyDelete = UNSTREAM_STRING( &constant_bin[ 409083 ], 14, 1 );
    const_str_plain_AnyPropertyType = UNSTREAM_STRING( &constant_bin[ 409097 ], 15, 1 );
    const_str_plain_ButtonPressMask = UNSTREAM_STRING( &constant_bin[ 409112 ], 15, 1 );
    const_str_plain_CWBackingPlanes = UNSTREAM_STRING( &constant_bin[ 409127 ], 15, 1 );
    const_str_plain_CWDontPropagate = UNSTREAM_STRING( &constant_bin[ 409142 ], 15, 1 );
    const_str_plain_EnterWindowMask = UNSTREAM_STRING( &constant_bin[ 409157 ], 15, 1 );
    const_str_plain_FocusChangeMask = UNSTREAM_STRING( &constant_bin[ 409172 ], 15, 1 );
    const_str_plain_FontLeftToRight = UNSTREAM_STRING( &constant_bin[ 409187 ], 15, 1 );
    const_str_plain_FontRightToLeft = UNSTREAM_STRING( &constant_bin[ 409202 ], 15, 1 );
    const_str_plain_GCSubwindowMode = UNSTREAM_STRING( &constant_bin[ 409217 ], 15, 1 );
    const_str_plain_GrabInvalidTime = UNSTREAM_STRING( &constant_bin[ 409232 ], 15, 1 );
    const_str_plain_GrabNotViewable = UNSTREAM_STRING( &constant_bin[ 409247 ], 15, 1 );
    const_str_plain_KeymapStateMask = UNSTREAM_STRING( &constant_bin[ 409262 ], 15, 1 );
    const_str_plain_LeaveWindowMask = UNSTREAM_STRING( &constant_bin[ 409277 ], 15, 1 );
    const_str_plain_MappingModifier = UNSTREAM_STRING( &constant_bin[ 409292 ], 15, 1 );
    const_str_plain_NotifyNonlinear = UNSTREAM_STRING( &constant_bin[ 409307 ], 15, 1 );
    const_str_plain_ButtonMotionMask = UNSTREAM_STRING( &constant_bin[ 409322 ], 16, 1 );
    const_str_plain_KBAutoRepeatMode = UNSTREAM_STRING( &constant_bin[ 409338 ], 16, 1 );
    const_str_plain_NotifyDetailNone = UNSTREAM_STRING( &constant_bin[ 409354 ], 16, 1 );
    const_str_plain_PropertyNewValue = UNSTREAM_STRING( &constant_bin[ 409370 ], 16, 1 );
    const_str_plain_Button1MotionMask = UNSTREAM_STRING( &constant_bin[ 409386 ], 17, 1 );
    const_str_plain_Button2MotionMask = UNSTREAM_STRING( &constant_bin[ 409403 ], 17, 1 );
    const_str_plain_Button3MotionMask = UNSTREAM_STRING( &constant_bin[ 409420 ], 17, 1 );
    const_str_plain_Button4MotionMask = UNSTREAM_STRING( &constant_bin[ 409437 ], 17, 1 );
    const_str_plain_Button5MotionMask = UNSTREAM_STRING( &constant_bin[ 409454 ], 17, 1 );
    const_str_plain_ButtonReleaseMask = UNSTREAM_STRING( &constant_bin[ 409471 ], 17, 1 );
    const_str_plain_ColormapInstalled = UNSTREAM_STRING( &constant_bin[ 409488 ], 17, 1 );
    const_str_plain_GCTileStipXOrigin = UNSTREAM_STRING( &constant_bin[ 409505 ], 17, 1 );
    const_str_plain_GCTileStipYOrigin = UNSTREAM_STRING( &constant_bin[ 409522 ], 17, 1 );
    const_str_plain_KBKeyClickPercent = UNSTREAM_STRING( &constant_bin[ 409539 ], 17, 1 );
    const_str_plain_NotifyPointerRoot = UNSTREAM_STRING( &constant_bin[ 409556 ], 17, 1 );
    const_str_plain_PointerMotionMask = UNSTREAM_STRING( &constant_bin[ 409573 ], 17, 1 );
    const_str_plain_CWOverrideRedirect = UNSTREAM_STRING( &constant_bin[ 409590 ], 18, 1 );
    const_str_plain_ColormapChangeMask = UNSTREAM_STRING( &constant_bin[ 409608 ], 18, 1 );
    const_str_plain_DisableScreenSaver = UNSTREAM_STRING( &constant_bin[ 409626 ], 18, 1 );
    const_str_plain_LastExtensionError = UNSTREAM_STRING( &constant_bin[ 409644 ], 18, 1 );
    const_str_plain_NotifyWhileGrabbed = UNSTREAM_STRING( &constant_bin[ 409662 ], 18, 1 );
    const_str_plain_PropertyChangeMask = UNSTREAM_STRING( &constant_bin[ 409680 ], 18, 1 );
    const_str_plain_ResizeRedirectMask = UNSTREAM_STRING( &constant_bin[ 409698 ], 18, 1 );
    const_str_plain_ColormapUninstalled = UNSTREAM_STRING( &constant_bin[ 409716 ], 19, 1 );
    const_str_plain_FirstExtensionError = UNSTREAM_STRING( &constant_bin[ 409735 ], 19, 1 );
    const_str_plain_GCGraphicsExposures = UNSTREAM_STRING( &constant_bin[ 409754 ], 19, 1 );
    const_str_plain_OwnerGrabButtonMask = UNSTREAM_STRING( &constant_bin[ 409773 ], 19, 1 );
    const_str_plain_StructureNotifyMask = UNSTREAM_STRING( &constant_bin[ 409792 ], 19, 1 );
    const_str_plain_VisibilityChangeMask = UNSTREAM_STRING( &constant_bin[ 409811 ], 20, 1 );
    const_str_plain_VisibilityUnobscured = UNSTREAM_STRING( &constant_bin[ 409831 ], 20, 1 );
    const_str_plain_DisableScreenInterval = UNSTREAM_STRING( &constant_bin[ 409851 ], 21, 1 );
    const_str_plain_PointerMotionHintMask = UNSTREAM_STRING( &constant_bin[ 409872 ], 21, 1 );
    const_str_plain_NotifyNonlinearVirtual = UNSTREAM_STRING( &constant_bin[ 409893 ], 22, 1 );
    const_str_plain_SubstructureNotifyMask = UNSTREAM_STRING( &constant_bin[ 409915 ], 22, 1 );
    const_str_plain_VisibilityFullyObscured = UNSTREAM_STRING( &constant_bin[ 409937 ], 23, 1 );
    const_str_plain_SubstructureRedirectMask = UNSTREAM_STRING( &constant_bin[ 409960 ], 24, 1 );
    const_str_plain_VisibilityPartiallyObscured = UNSTREAM_STRING( &constant_bin[ 409984 ], 27, 1 );
    const_str_digest_3a9181a15d55dbd3a7c3e1c652238186 = UNSTREAM_STRING( &constant_bin[ 410011 ], 42, 0 );
}

// The module code objects.
static PyCodeObject *codeobj_940be6f6efb7d46497519add0c1de5eb;

static void _initModuleCodeObjects(void)
{
    codeobj_940be6f6efb7d46497519add0c1de5eb = MAKE_CODEOBJ( const_str_digest_3a9181a15d55dbd3a7c3e1c652238186, const_str_plain_X, 0, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Xlib$X =
{
    PyModuleDef_HEAD_INIT,
    "Xlib.X",   /* m_name */
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

MOD_INIT_DECL( Xlib$X )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Xlib$X );
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

    // puts( "in initXlib$X" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Xlib$X = Py_InitModule4(
        "Xlib.X",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Xlib$X = PyModule_Create( &mdef_Xlib$X );
#endif

    moduledict_Xlib$X = (PyDictObject *)((PyModuleObject *)module_Xlib$X)->md_dict;

    assertObject( module_Xlib$X );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_7f85abe92a2a0a683804a46c8412615e, module_Xlib$X );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_Xlib$X );

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
    PyObject *tmp_assign_source_143;
    PyObject *tmp_assign_source_144;
    PyObject *tmp_assign_source_145;
    PyObject *tmp_assign_source_146;
    PyObject *tmp_assign_source_147;
    PyObject *tmp_assign_source_148;
    PyObject *tmp_assign_source_149;
    PyObject *tmp_assign_source_150;
    PyObject *tmp_assign_source_151;
    PyObject *tmp_assign_source_152;
    PyObject *tmp_assign_source_153;
    PyObject *tmp_assign_source_154;
    PyObject *tmp_assign_source_155;
    PyObject *tmp_assign_source_156;
    PyObject *tmp_assign_source_157;
    PyObject *tmp_assign_source_158;
    PyObject *tmp_assign_source_159;
    PyObject *tmp_assign_source_160;
    PyObject *tmp_assign_source_161;
    PyObject *tmp_assign_source_162;
    PyObject *tmp_assign_source_163;
    PyObject *tmp_assign_source_164;
    PyObject *tmp_assign_source_165;
    PyObject *tmp_assign_source_166;
    PyObject *tmp_assign_source_167;
    PyObject *tmp_assign_source_168;
    PyObject *tmp_assign_source_169;
    PyObject *tmp_assign_source_170;
    PyObject *tmp_assign_source_171;
    PyObject *tmp_assign_source_172;
    PyObject *tmp_assign_source_173;
    PyObject *tmp_assign_source_174;
    PyObject *tmp_assign_source_175;
    PyObject *tmp_assign_source_176;
    PyObject *tmp_assign_source_177;
    PyObject *tmp_assign_source_178;
    PyObject *tmp_assign_source_179;
    PyObject *tmp_assign_source_180;
    PyObject *tmp_assign_source_181;
    PyObject *tmp_assign_source_182;
    PyObject *tmp_assign_source_183;
    PyObject *tmp_assign_source_184;
    PyObject *tmp_assign_source_185;
    PyObject *tmp_assign_source_186;
    PyObject *tmp_assign_source_187;
    PyObject *tmp_assign_source_188;
    PyObject *tmp_assign_source_189;
    PyObject *tmp_assign_source_190;
    PyObject *tmp_assign_source_191;
    PyObject *tmp_assign_source_192;
    PyObject *tmp_assign_source_193;
    PyObject *tmp_assign_source_194;
    PyObject *tmp_assign_source_195;
    PyObject *tmp_assign_source_196;
    PyObject *tmp_assign_source_197;
    PyObject *tmp_assign_source_198;
    PyObject *tmp_assign_source_199;
    PyObject *tmp_assign_source_200;
    PyObject *tmp_assign_source_201;
    PyObject *tmp_assign_source_202;
    PyObject *tmp_assign_source_203;
    PyObject *tmp_assign_source_204;
    PyObject *tmp_assign_source_205;
    PyObject *tmp_assign_source_206;
    PyObject *tmp_assign_source_207;
    PyObject *tmp_assign_source_208;
    PyObject *tmp_assign_source_209;
    PyObject *tmp_assign_source_210;
    PyObject *tmp_assign_source_211;
    PyObject *tmp_assign_source_212;
    PyObject *tmp_assign_source_213;
    PyObject *tmp_assign_source_214;
    PyObject *tmp_assign_source_215;
    PyObject *tmp_assign_source_216;
    PyObject *tmp_assign_source_217;
    PyObject *tmp_assign_source_218;
    PyObject *tmp_assign_source_219;
    PyObject *tmp_assign_source_220;
    PyObject *tmp_assign_source_221;
    PyObject *tmp_assign_source_222;
    PyObject *tmp_assign_source_223;
    PyObject *tmp_assign_source_224;
    PyObject *tmp_assign_source_225;
    PyObject *tmp_assign_source_226;
    PyObject *tmp_assign_source_227;
    PyObject *tmp_assign_source_228;
    PyObject *tmp_assign_source_229;
    PyObject *tmp_assign_source_230;
    PyObject *tmp_assign_source_231;
    PyObject *tmp_assign_source_232;
    PyObject *tmp_assign_source_233;
    PyObject *tmp_assign_source_234;
    PyObject *tmp_assign_source_235;
    PyObject *tmp_assign_source_236;
    PyObject *tmp_assign_source_237;
    PyObject *tmp_assign_source_238;
    PyObject *tmp_assign_source_239;
    PyObject *tmp_assign_source_240;
    PyObject *tmp_assign_source_241;
    PyObject *tmp_assign_source_242;
    PyObject *tmp_assign_source_243;
    PyObject *tmp_assign_source_244;
    PyObject *tmp_assign_source_245;
    PyObject *tmp_assign_source_246;
    PyObject *tmp_assign_source_247;
    PyObject *tmp_assign_source_248;
    PyObject *tmp_assign_source_249;
    PyObject *tmp_assign_source_250;
    PyObject *tmp_assign_source_251;
    PyObject *tmp_assign_source_252;
    PyObject *tmp_assign_source_253;
    PyObject *tmp_assign_source_254;
    PyObject *tmp_assign_source_255;
    PyObject *tmp_assign_source_256;
    PyObject *tmp_assign_source_257;
    PyObject *tmp_assign_source_258;
    PyObject *tmp_assign_source_259;
    PyObject *tmp_assign_source_260;
    PyObject *tmp_assign_source_261;
    PyObject *tmp_assign_source_262;
    PyObject *tmp_assign_source_263;
    PyObject *tmp_assign_source_264;
    PyObject *tmp_assign_source_265;
    PyObject *tmp_assign_source_266;
    PyObject *tmp_assign_source_267;
    PyObject *tmp_assign_source_268;
    PyObject *tmp_assign_source_269;
    PyObject *tmp_assign_source_270;
    PyObject *tmp_assign_source_271;
    PyObject *tmp_assign_source_272;
    PyObject *tmp_assign_source_273;
    PyObject *tmp_assign_source_274;
    PyObject *tmp_assign_source_275;
    PyObject *tmp_assign_source_276;
    PyObject *tmp_assign_source_277;
    PyObject *tmp_assign_source_278;
    PyObject *tmp_assign_source_279;
    PyObject *tmp_assign_source_280;
    PyObject *tmp_assign_source_281;
    PyObject *tmp_assign_source_282;
    PyObject *tmp_assign_source_283;
    PyObject *tmp_assign_source_284;
    PyObject *tmp_assign_source_285;
    PyObject *tmp_assign_source_286;
    PyObject *tmp_assign_source_287;
    PyObject *tmp_assign_source_288;
    PyObject *tmp_assign_source_289;
    PyObject *tmp_assign_source_290;
    PyObject *tmp_assign_source_291;
    PyObject *tmp_assign_source_292;
    PyObject *tmp_assign_source_293;
    PyObject *tmp_assign_source_294;
    PyObject *tmp_assign_source_295;
    PyObject *tmp_assign_source_296;
    PyObject *tmp_assign_source_297;
    PyObject *tmp_assign_source_298;
    PyObject *tmp_assign_source_299;
    PyObject *tmp_assign_source_300;
    PyObject *tmp_assign_source_301;
    PyObject *tmp_assign_source_302;
    PyObject *tmp_assign_source_303;
    PyObject *tmp_assign_source_304;
    PyObject *tmp_assign_source_305;
    PyObject *tmp_assign_source_306;
    PyObject *tmp_assign_source_307;
    PyObject *tmp_assign_source_308;
    PyObject *tmp_assign_source_309;
    PyObject *tmp_assign_source_310;
    PyObject *tmp_assign_source_311;
    PyObject *tmp_assign_source_312;
    PyObject *tmp_assign_source_313;
    PyObject *tmp_assign_source_314;
    PyObject *tmp_assign_source_315;
    PyObject *tmp_assign_source_316;
    PyObject *tmp_assign_source_317;
    PyObject *tmp_assign_source_318;
    PyObject *tmp_assign_source_319;
    PyObject *tmp_assign_source_320;
    PyObject *tmp_assign_source_321;
    PyObject *tmp_assign_source_322;
    PyObject *tmp_assign_source_323;
    PyObject *tmp_assign_source_324;
    PyObject *tmp_assign_source_325;
    PyObject *tmp_assign_source_326;
    PyObject *tmp_assign_source_327;
    PyObject *tmp_assign_source_328;
    PyObject *tmp_assign_source_329;
    PyObject *tmp_assign_source_330;
    PyObject *tmp_assign_source_331;
    PyObject *tmp_assign_source_332;
    PyObject *tmp_assign_source_333;
    PyObject *tmp_assign_source_334;
    PyObject *tmp_assign_source_335;
    PyObject *tmp_assign_source_336;
    PyObject *tmp_assign_source_337;
    PyObject *tmp_assign_source_338;
    PyObject *tmp_assign_source_339;
    PyObject *tmp_assign_source_340;
    PyObject *tmp_assign_source_341;
    PyObject *tmp_assign_source_342;
    PyObject *tmp_assign_source_343;
    PyObject *tmp_assign_source_344;
    PyObject *tmp_assign_source_345;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_3a9181a15d55dbd3a7c3e1c652238186;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NONE, tmp_assign_source_3 );
    tmp_assign_source_4 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ParentRelative, tmp_assign_source_4 );
    tmp_assign_source_5 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CopyFromParent, tmp_assign_source_5 );
    tmp_assign_source_6 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_PointerWindow, tmp_assign_source_6 );
    tmp_assign_source_7 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_InputFocus, tmp_assign_source_7 );
    tmp_assign_source_8 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_PointerRoot, tmp_assign_source_8 );
    tmp_assign_source_9 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_AnyPropertyType, tmp_assign_source_9 );
    tmp_assign_source_10 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_AnyKey, tmp_assign_source_10 );
    tmp_assign_source_11 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_AnyButton, tmp_assign_source_11 );
    tmp_assign_source_12 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_AllTemporary, tmp_assign_source_12 );
    tmp_assign_source_13 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CurrentTime, tmp_assign_source_13 );
    tmp_assign_source_14 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NoSymbol, tmp_assign_source_14 );
    tmp_assign_source_15 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NoEventMask, tmp_assign_source_15 );
    tmp_assign_source_16 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_KeyPressMask, tmp_assign_source_16 );
    tmp_assign_source_17 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_KeyReleaseMask, tmp_assign_source_17 );
    tmp_assign_source_18 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ButtonPressMask, tmp_assign_source_18 );
    tmp_assign_source_19 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ButtonReleaseMask, tmp_assign_source_19 );
    tmp_assign_source_20 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_EnterWindowMask, tmp_assign_source_20 );
    tmp_assign_source_21 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_LeaveWindowMask, tmp_assign_source_21 );
    tmp_assign_source_22 = const_int_pos_64;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_PointerMotionMask, tmp_assign_source_22 );
    tmp_assign_source_23 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_PointerMotionHintMask, tmp_assign_source_23 );
    tmp_assign_source_24 = const_int_pos_256;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Button1MotionMask, tmp_assign_source_24 );
    tmp_assign_source_25 = const_int_pos_512;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Button2MotionMask, tmp_assign_source_25 );
    tmp_assign_source_26 = const_int_pos_1024;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Button3MotionMask, tmp_assign_source_26 );
    tmp_assign_source_27 = const_int_pos_2048;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Button4MotionMask, tmp_assign_source_27 );
    tmp_assign_source_28 = const_int_pos_4096;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Button5MotionMask, tmp_assign_source_28 );
    tmp_assign_source_29 = const_int_pos_8192;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ButtonMotionMask, tmp_assign_source_29 );
    tmp_assign_source_30 = const_int_pos_16384;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_KeymapStateMask, tmp_assign_source_30 );
    tmp_assign_source_31 = const_int_pos_32768;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ExposureMask, tmp_assign_source_31 );
    tmp_assign_source_32 = const_int_pos_65536;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_VisibilityChangeMask, tmp_assign_source_32 );
    tmp_assign_source_33 = const_int_pos_131072;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_StructureNotifyMask, tmp_assign_source_33 );
    tmp_assign_source_34 = const_int_pos_262144;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ResizeRedirectMask, tmp_assign_source_34 );
    tmp_assign_source_35 = const_int_pos_524288;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_SubstructureNotifyMask, tmp_assign_source_35 );
    tmp_assign_source_36 = const_int_pos_1048576;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_SubstructureRedirectMask, tmp_assign_source_36 );
    tmp_assign_source_37 = const_int_pos_2097152;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_FocusChangeMask, tmp_assign_source_37 );
    tmp_assign_source_38 = const_int_pos_4194304;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_PropertyChangeMask, tmp_assign_source_38 );
    tmp_assign_source_39 = const_int_pos_8388608;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ColormapChangeMask, tmp_assign_source_39 );
    tmp_assign_source_40 = const_int_pos_16777216;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_OwnerGrabButtonMask, tmp_assign_source_40 );
    tmp_assign_source_41 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_KeyPress, tmp_assign_source_41 );
    tmp_assign_source_42 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_KeyRelease, tmp_assign_source_42 );
    tmp_assign_source_43 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ButtonPress, tmp_assign_source_43 );
    tmp_assign_source_44 = const_int_pos_5;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ButtonRelease, tmp_assign_source_44 );
    tmp_assign_source_45 = const_int_pos_6;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_MotionNotify, tmp_assign_source_45 );
    tmp_assign_source_46 = const_int_pos_7;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_EnterNotify, tmp_assign_source_46 );
    tmp_assign_source_47 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_LeaveNotify, tmp_assign_source_47 );
    tmp_assign_source_48 = const_int_pos_9;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_FocusIn, tmp_assign_source_48 );
    tmp_assign_source_49 = const_int_pos_10;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_FocusOut, tmp_assign_source_49 );
    tmp_assign_source_50 = const_int_pos_11;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_KeymapNotify, tmp_assign_source_50 );
    tmp_assign_source_51 = const_int_pos_12;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Expose, tmp_assign_source_51 );
    tmp_assign_source_52 = const_int_pos_13;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GraphicsExpose, tmp_assign_source_52 );
    tmp_assign_source_53 = const_int_pos_14;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NoExpose, tmp_assign_source_53 );
    tmp_assign_source_54 = const_int_pos_15;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_VisibilityNotify, tmp_assign_source_54 );
    tmp_assign_source_55 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CreateNotify, tmp_assign_source_55 );
    tmp_assign_source_56 = const_int_pos_17;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_DestroyNotify, tmp_assign_source_56 );
    tmp_assign_source_57 = const_int_pos_18;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_UnmapNotify, tmp_assign_source_57 );
    tmp_assign_source_58 = const_int_pos_19;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_MapNotify, tmp_assign_source_58 );
    tmp_assign_source_59 = const_int_pos_20;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_MapRequest, tmp_assign_source_59 );
    tmp_assign_source_60 = const_int_pos_21;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ReparentNotify, tmp_assign_source_60 );
    tmp_assign_source_61 = const_int_pos_22;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ConfigureNotify, tmp_assign_source_61 );
    tmp_assign_source_62 = const_int_pos_23;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ConfigureRequest, tmp_assign_source_62 );
    tmp_assign_source_63 = const_int_pos_24;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GravityNotify, tmp_assign_source_63 );
    tmp_assign_source_64 = const_int_pos_25;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ResizeRequest, tmp_assign_source_64 );
    tmp_assign_source_65 = const_int_pos_26;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CirculateNotify, tmp_assign_source_65 );
    tmp_assign_source_66 = const_int_pos_27;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CirculateRequest, tmp_assign_source_66 );
    tmp_assign_source_67 = const_int_pos_28;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_PropertyNotify, tmp_assign_source_67 );
    tmp_assign_source_68 = const_int_pos_29;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_SelectionClear, tmp_assign_source_68 );
    tmp_assign_source_69 = const_int_pos_30;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_SelectionRequest, tmp_assign_source_69 );
    tmp_assign_source_70 = const_int_pos_31;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_SelectionNotify, tmp_assign_source_70 );
    tmp_assign_source_71 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ColormapNotify, tmp_assign_source_71 );
    tmp_assign_source_72 = const_int_pos_33;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ClientMessage, tmp_assign_source_72 );
    tmp_assign_source_73 = const_int_pos_34;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_MappingNotify, tmp_assign_source_73 );
    tmp_assign_source_74 = const_int_pos_35;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_LASTEvent, tmp_assign_source_74 );
    tmp_assign_source_75 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ShiftMask, tmp_assign_source_75 );
    tmp_assign_source_76 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_LockMask, tmp_assign_source_76 );
    tmp_assign_source_77 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ControlMask, tmp_assign_source_77 );
    tmp_assign_source_78 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Mod1Mask, tmp_assign_source_78 );
    tmp_assign_source_79 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Mod2Mask, tmp_assign_source_79 );
    tmp_assign_source_80 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Mod3Mask, tmp_assign_source_80 );
    tmp_assign_source_81 = const_int_pos_64;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Mod4Mask, tmp_assign_source_81 );
    tmp_assign_source_82 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Mod5Mask, tmp_assign_source_82 );
    tmp_assign_source_83 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ShiftMapIndex, tmp_assign_source_83 );
    tmp_assign_source_84 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_LockMapIndex, tmp_assign_source_84 );
    tmp_assign_source_85 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ControlMapIndex, tmp_assign_source_85 );
    tmp_assign_source_86 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Mod1MapIndex, tmp_assign_source_86 );
    tmp_assign_source_87 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Mod2MapIndex, tmp_assign_source_87 );
    tmp_assign_source_88 = const_int_pos_5;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Mod3MapIndex, tmp_assign_source_88 );
    tmp_assign_source_89 = const_int_pos_6;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Mod4MapIndex, tmp_assign_source_89 );
    tmp_assign_source_90 = const_int_pos_7;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Mod5MapIndex, tmp_assign_source_90 );
    tmp_assign_source_91 = const_int_pos_256;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Button1Mask, tmp_assign_source_91 );
    tmp_assign_source_92 = const_int_pos_512;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Button2Mask, tmp_assign_source_92 );
    tmp_assign_source_93 = const_int_pos_1024;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Button3Mask, tmp_assign_source_93 );
    tmp_assign_source_94 = const_int_pos_2048;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Button4Mask, tmp_assign_source_94 );
    tmp_assign_source_95 = const_int_pos_4096;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Button5Mask, tmp_assign_source_95 );
    tmp_assign_source_96 = const_int_pos_32768;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_AnyModifier, tmp_assign_source_96 );
    tmp_assign_source_97 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Button1, tmp_assign_source_97 );
    tmp_assign_source_98 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Button2, tmp_assign_source_98 );
    tmp_assign_source_99 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Button3, tmp_assign_source_99 );
    tmp_assign_source_100 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Button4, tmp_assign_source_100 );
    tmp_assign_source_101 = const_int_pos_5;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Button5, tmp_assign_source_101 );
    tmp_assign_source_102 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NotifyNormal, tmp_assign_source_102 );
    tmp_assign_source_103 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NotifyGrab, tmp_assign_source_103 );
    tmp_assign_source_104 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NotifyUngrab, tmp_assign_source_104 );
    tmp_assign_source_105 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NotifyWhileGrabbed, tmp_assign_source_105 );
    tmp_assign_source_106 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NotifyHint, tmp_assign_source_106 );
    tmp_assign_source_107 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NotifyAncestor, tmp_assign_source_107 );
    tmp_assign_source_108 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NotifyVirtual, tmp_assign_source_108 );
    tmp_assign_source_109 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NotifyInferior, tmp_assign_source_109 );
    tmp_assign_source_110 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NotifyNonlinear, tmp_assign_source_110 );
    tmp_assign_source_111 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NotifyNonlinearVirtual, tmp_assign_source_111 );
    tmp_assign_source_112 = const_int_pos_5;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NotifyPointer, tmp_assign_source_112 );
    tmp_assign_source_113 = const_int_pos_6;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NotifyPointerRoot, tmp_assign_source_113 );
    tmp_assign_source_114 = const_int_pos_7;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NotifyDetailNone, tmp_assign_source_114 );
    tmp_assign_source_115 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_VisibilityUnobscured, tmp_assign_source_115 );
    tmp_assign_source_116 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_VisibilityPartiallyObscured, tmp_assign_source_116 );
    tmp_assign_source_117 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_VisibilityFullyObscured, tmp_assign_source_117 );
    tmp_assign_source_118 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_PlaceOnTop, tmp_assign_source_118 );
    tmp_assign_source_119 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_PlaceOnBottom, tmp_assign_source_119 );
    tmp_assign_source_120 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_FamilyInternet, tmp_assign_source_120 );
    tmp_assign_source_121 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_FamilyDECnet, tmp_assign_source_121 );
    tmp_assign_source_122 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_FamilyChaos, tmp_assign_source_122 );
    tmp_assign_source_123 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_PropertyNewValue, tmp_assign_source_123 );
    tmp_assign_source_124 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_PropertyDelete, tmp_assign_source_124 );
    tmp_assign_source_125 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ColormapUninstalled, tmp_assign_source_125 );
    tmp_assign_source_126 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ColormapInstalled, tmp_assign_source_126 );
    tmp_assign_source_127 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GrabModeSync, tmp_assign_source_127 );
    tmp_assign_source_128 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GrabModeAsync, tmp_assign_source_128 );
    tmp_assign_source_129 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GrabSuccess, tmp_assign_source_129 );
    tmp_assign_source_130 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_AlreadyGrabbed, tmp_assign_source_130 );
    tmp_assign_source_131 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GrabInvalidTime, tmp_assign_source_131 );
    tmp_assign_source_132 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GrabNotViewable, tmp_assign_source_132 );
    tmp_assign_source_133 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GrabFrozen, tmp_assign_source_133 );
    tmp_assign_source_134 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_AsyncPointer, tmp_assign_source_134 );
    tmp_assign_source_135 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_SyncPointer, tmp_assign_source_135 );
    tmp_assign_source_136 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ReplayPointer, tmp_assign_source_136 );
    tmp_assign_source_137 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_AsyncKeyboard, tmp_assign_source_137 );
    tmp_assign_source_138 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_SyncKeyboard, tmp_assign_source_138 );
    tmp_assign_source_139 = const_int_pos_5;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ReplayKeyboard, tmp_assign_source_139 );
    tmp_assign_source_140 = const_int_pos_6;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_AsyncBoth, tmp_assign_source_140 );
    tmp_assign_source_141 = const_int_pos_7;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_SyncBoth, tmp_assign_source_141 );
    tmp_assign_source_142 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_RevertToNone, tmp_assign_source_142 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_940be6f6efb7d46497519add0c1de5eb, module_Xlib$X );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_assign_source_143 = GET_STRING_DICT_VALUE( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_PointerRoot );

    if (unlikely( tmp_assign_source_143 == NULL ))
    {
        tmp_assign_source_143 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PointerRoot );
    }

    if ( tmp_assign_source_143 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 23258 ], 33, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 217;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_RevertToPointerRoot, tmp_assign_source_143 );

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
    tmp_assign_source_144 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_RevertToParent, tmp_assign_source_144 );
    tmp_assign_source_145 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Success, tmp_assign_source_145 );
    tmp_assign_source_146 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadRequest, tmp_assign_source_146 );
    tmp_assign_source_147 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadValue, tmp_assign_source_147 );
    tmp_assign_source_148 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadWindow, tmp_assign_source_148 );
    tmp_assign_source_149 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadPixmap, tmp_assign_source_149 );
    tmp_assign_source_150 = const_int_pos_5;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadAtom, tmp_assign_source_150 );
    tmp_assign_source_151 = const_int_pos_6;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadCursor, tmp_assign_source_151 );
    tmp_assign_source_152 = const_int_pos_7;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadFont, tmp_assign_source_152 );
    tmp_assign_source_153 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadMatch, tmp_assign_source_153 );
    tmp_assign_source_154 = const_int_pos_9;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadDrawable, tmp_assign_source_154 );
    tmp_assign_source_155 = const_int_pos_10;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadAccess, tmp_assign_source_155 );
    tmp_assign_source_156 = const_int_pos_11;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadAlloc, tmp_assign_source_156 );
    tmp_assign_source_157 = const_int_pos_12;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadColor, tmp_assign_source_157 );
    tmp_assign_source_158 = const_int_pos_13;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadGC, tmp_assign_source_158 );
    tmp_assign_source_159 = const_int_pos_14;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadIDChoice, tmp_assign_source_159 );
    tmp_assign_source_160 = const_int_pos_15;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadName, tmp_assign_source_160 );
    tmp_assign_source_161 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadLength, tmp_assign_source_161 );
    tmp_assign_source_162 = const_int_pos_17;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BadImplementation, tmp_assign_source_162 );
    tmp_assign_source_163 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_FirstExtensionError, tmp_assign_source_163 );
    tmp_assign_source_164 = const_int_pos_255;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_LastExtensionError, tmp_assign_source_164 );
    tmp_assign_source_165 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_InputOutput, tmp_assign_source_165 );
    tmp_assign_source_166 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_InputOnly, tmp_assign_source_166 );
    tmp_assign_source_167 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWBackPixmap, tmp_assign_source_167 );
    tmp_assign_source_168 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWBackPixel, tmp_assign_source_168 );
    tmp_assign_source_169 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWBorderPixmap, tmp_assign_source_169 );
    tmp_assign_source_170 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWBorderPixel, tmp_assign_source_170 );
    tmp_assign_source_171 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWBitGravity, tmp_assign_source_171 );
    tmp_assign_source_172 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWWinGravity, tmp_assign_source_172 );
    tmp_assign_source_173 = const_int_pos_64;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWBackingStore, tmp_assign_source_173 );
    tmp_assign_source_174 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWBackingPlanes, tmp_assign_source_174 );
    tmp_assign_source_175 = const_int_pos_256;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWBackingPixel, tmp_assign_source_175 );
    tmp_assign_source_176 = const_int_pos_512;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWOverrideRedirect, tmp_assign_source_176 );
    tmp_assign_source_177 = const_int_pos_1024;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWSaveUnder, tmp_assign_source_177 );
    tmp_assign_source_178 = const_int_pos_2048;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWEventMask, tmp_assign_source_178 );
    tmp_assign_source_179 = const_int_pos_4096;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWDontPropagate, tmp_assign_source_179 );
    tmp_assign_source_180 = const_int_pos_8192;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWColormap, tmp_assign_source_180 );
    tmp_assign_source_181 = const_int_pos_16384;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWCursor, tmp_assign_source_181 );
    tmp_assign_source_182 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWX, tmp_assign_source_182 );
    tmp_assign_source_183 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWY, tmp_assign_source_183 );
    tmp_assign_source_184 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWWidth, tmp_assign_source_184 );
    tmp_assign_source_185 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWHeight, tmp_assign_source_185 );
    tmp_assign_source_186 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWBorderWidth, tmp_assign_source_186 );
    tmp_assign_source_187 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWSibling, tmp_assign_source_187 );
    tmp_assign_source_188 = const_int_pos_64;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CWStackMode, tmp_assign_source_188 );
    tmp_assign_source_189 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ForgetGravity, tmp_assign_source_189 );
    tmp_assign_source_190 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NorthWestGravity, tmp_assign_source_190 );
    tmp_assign_source_191 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NorthGravity, tmp_assign_source_191 );
    tmp_assign_source_192 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NorthEastGravity, tmp_assign_source_192 );
    tmp_assign_source_193 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_WestGravity, tmp_assign_source_193 );
    tmp_assign_source_194 = const_int_pos_5;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CenterGravity, tmp_assign_source_194 );
    tmp_assign_source_195 = const_int_pos_6;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_EastGravity, tmp_assign_source_195 );
    tmp_assign_source_196 = const_int_pos_7;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_SouthWestGravity, tmp_assign_source_196 );
    tmp_assign_source_197 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_SouthGravity, tmp_assign_source_197 );
    tmp_assign_source_198 = const_int_pos_9;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_SouthEastGravity, tmp_assign_source_198 );
    tmp_assign_source_199 = const_int_pos_10;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_StaticGravity, tmp_assign_source_199 );
    tmp_assign_source_200 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_UnmapGravity, tmp_assign_source_200 );
    tmp_assign_source_201 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_NotUseful, tmp_assign_source_201 );
    tmp_assign_source_202 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_WhenMapped, tmp_assign_source_202 );
    tmp_assign_source_203 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Always, tmp_assign_source_203 );
    tmp_assign_source_204 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_IsUnmapped, tmp_assign_source_204 );
    tmp_assign_source_205 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_IsUnviewable, tmp_assign_source_205 );
    tmp_assign_source_206 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_IsViewable, tmp_assign_source_206 );
    tmp_assign_source_207 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_SetModeInsert, tmp_assign_source_207 );
    tmp_assign_source_208 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_SetModeDelete, tmp_assign_source_208 );
    tmp_assign_source_209 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_DestroyAll, tmp_assign_source_209 );
    tmp_assign_source_210 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_RetainPermanent, tmp_assign_source_210 );
    tmp_assign_source_211 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_RetainTemporary, tmp_assign_source_211 );
    tmp_assign_source_212 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Above, tmp_assign_source_212 );
    tmp_assign_source_213 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Below, tmp_assign_source_213 );
    tmp_assign_source_214 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_TopIf, tmp_assign_source_214 );
    tmp_assign_source_215 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_BottomIf, tmp_assign_source_215 );
    tmp_assign_source_216 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Opposite, tmp_assign_source_216 );
    tmp_assign_source_217 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_RaiseLowest, tmp_assign_source_217 );
    tmp_assign_source_218 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_LowerHighest, tmp_assign_source_218 );
    tmp_assign_source_219 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_PropModeReplace, tmp_assign_source_219 );
    tmp_assign_source_220 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_PropModePrepend, tmp_assign_source_220 );
    tmp_assign_source_221 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_PropModeAppend, tmp_assign_source_221 );
    tmp_assign_source_222 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GXclear, tmp_assign_source_222 );
    tmp_assign_source_223 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GXand, tmp_assign_source_223 );
    tmp_assign_source_224 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GXandReverse, tmp_assign_source_224 );
    tmp_assign_source_225 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GXcopy, tmp_assign_source_225 );
    tmp_assign_source_226 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GXandInverted, tmp_assign_source_226 );
    tmp_assign_source_227 = const_int_pos_5;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GXnoop, tmp_assign_source_227 );
    tmp_assign_source_228 = const_int_pos_6;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GXxor, tmp_assign_source_228 );
    tmp_assign_source_229 = const_int_pos_7;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GXor, tmp_assign_source_229 );
    tmp_assign_source_230 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GXnor, tmp_assign_source_230 );
    tmp_assign_source_231 = const_int_pos_9;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GXequiv, tmp_assign_source_231 );
    tmp_assign_source_232 = const_int_pos_10;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GXinvert, tmp_assign_source_232 );
    tmp_assign_source_233 = const_int_pos_11;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GXorReverse, tmp_assign_source_233 );
    tmp_assign_source_234 = const_int_pos_12;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GXcopyInverted, tmp_assign_source_234 );
    tmp_assign_source_235 = const_int_pos_13;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GXorInverted, tmp_assign_source_235 );
    tmp_assign_source_236 = const_int_pos_14;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GXnand, tmp_assign_source_236 );
    tmp_assign_source_237 = const_int_pos_15;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GXset, tmp_assign_source_237 );
    tmp_assign_source_238 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_LineSolid, tmp_assign_source_238 );
    tmp_assign_source_239 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_LineOnOffDash, tmp_assign_source_239 );
    tmp_assign_source_240 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_LineDoubleDash, tmp_assign_source_240 );
    tmp_assign_source_241 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CapNotLast, tmp_assign_source_241 );
    tmp_assign_source_242 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CapButt, tmp_assign_source_242 );
    tmp_assign_source_243 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CapRound, tmp_assign_source_243 );
    tmp_assign_source_244 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CapProjecting, tmp_assign_source_244 );
    tmp_assign_source_245 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_JoinMiter, tmp_assign_source_245 );
    tmp_assign_source_246 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_JoinRound, tmp_assign_source_246 );
    tmp_assign_source_247 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_JoinBevel, tmp_assign_source_247 );
    tmp_assign_source_248 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_FillSolid, tmp_assign_source_248 );
    tmp_assign_source_249 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_FillTiled, tmp_assign_source_249 );
    tmp_assign_source_250 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_FillStippled, tmp_assign_source_250 );
    tmp_assign_source_251 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_FillOpaqueStippled, tmp_assign_source_251 );
    tmp_assign_source_252 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_EvenOddRule, tmp_assign_source_252 );
    tmp_assign_source_253 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_WindingRule, tmp_assign_source_253 );
    tmp_assign_source_254 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ClipByChildren, tmp_assign_source_254 );
    tmp_assign_source_255 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_IncludeInferiors, tmp_assign_source_255 );
    tmp_assign_source_256 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Unsorted, tmp_assign_source_256 );
    tmp_assign_source_257 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_YSorted, tmp_assign_source_257 );
    tmp_assign_source_258 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_YXSorted, tmp_assign_source_258 );
    tmp_assign_source_259 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_YXBanded, tmp_assign_source_259 );
    tmp_assign_source_260 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CoordModeOrigin, tmp_assign_source_260 );
    tmp_assign_source_261 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CoordModePrevious, tmp_assign_source_261 );
    tmp_assign_source_262 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Complex, tmp_assign_source_262 );
    tmp_assign_source_263 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Nonconvex, tmp_assign_source_263 );
    tmp_assign_source_264 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_Convex, tmp_assign_source_264 );
    tmp_assign_source_265 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ArcChord, tmp_assign_source_265 );
    tmp_assign_source_266 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ArcPieSlice, tmp_assign_source_266 );
    tmp_assign_source_267 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCFunction, tmp_assign_source_267 );
    tmp_assign_source_268 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCPlaneMask, tmp_assign_source_268 );
    tmp_assign_source_269 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCForeground, tmp_assign_source_269 );
    tmp_assign_source_270 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCBackground, tmp_assign_source_270 );
    tmp_assign_source_271 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCLineWidth, tmp_assign_source_271 );
    tmp_assign_source_272 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCLineStyle, tmp_assign_source_272 );
    tmp_assign_source_273 = const_int_pos_64;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCCapStyle, tmp_assign_source_273 );
    tmp_assign_source_274 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCJoinStyle, tmp_assign_source_274 );
    tmp_assign_source_275 = const_int_pos_256;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCFillStyle, tmp_assign_source_275 );
    tmp_assign_source_276 = const_int_pos_512;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCFillRule, tmp_assign_source_276 );
    tmp_assign_source_277 = const_int_pos_1024;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCTile, tmp_assign_source_277 );
    tmp_assign_source_278 = const_int_pos_2048;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCStipple, tmp_assign_source_278 );
    tmp_assign_source_279 = const_int_pos_4096;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCTileStipXOrigin, tmp_assign_source_279 );
    tmp_assign_source_280 = const_int_pos_8192;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCTileStipYOrigin, tmp_assign_source_280 );
    tmp_assign_source_281 = const_int_pos_16384;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCFont, tmp_assign_source_281 );
    tmp_assign_source_282 = const_int_pos_32768;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCSubwindowMode, tmp_assign_source_282 );
    tmp_assign_source_283 = const_int_pos_65536;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCGraphicsExposures, tmp_assign_source_283 );
    tmp_assign_source_284 = const_int_pos_131072;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCClipXOrigin, tmp_assign_source_284 );
    tmp_assign_source_285 = const_int_pos_262144;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCClipYOrigin, tmp_assign_source_285 );
    tmp_assign_source_286 = const_int_pos_524288;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCClipMask, tmp_assign_source_286 );
    tmp_assign_source_287 = const_int_pos_1048576;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCDashOffset, tmp_assign_source_287 );
    tmp_assign_source_288 = const_int_pos_2097152;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCDashList, tmp_assign_source_288 );
    tmp_assign_source_289 = const_int_pos_4194304;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCArcMode, tmp_assign_source_289 );
    tmp_assign_source_290 = const_int_pos_22;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GCLastBit, tmp_assign_source_290 );
    tmp_assign_source_291 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_FontLeftToRight, tmp_assign_source_291 );
    tmp_assign_source_292 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_FontRightToLeft, tmp_assign_source_292 );
    tmp_assign_source_293 = const_int_pos_255;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_FontChange, tmp_assign_source_293 );
    tmp_assign_source_294 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_XYBitmap, tmp_assign_source_294 );
    tmp_assign_source_295 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_XYPixmap, tmp_assign_source_295 );
    tmp_assign_source_296 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ZPixmap, tmp_assign_source_296 );
    tmp_assign_source_297 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_AllocNone, tmp_assign_source_297 );
    tmp_assign_source_298 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_AllocAll, tmp_assign_source_298 );
    tmp_assign_source_299 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_DoRed, tmp_assign_source_299 );
    tmp_assign_source_300 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_DoGreen, tmp_assign_source_300 );
    tmp_assign_source_301 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_DoBlue, tmp_assign_source_301 );
    tmp_assign_source_302 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_CursorShape, tmp_assign_source_302 );
    tmp_assign_source_303 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_TileShape, tmp_assign_source_303 );
    tmp_assign_source_304 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_StippleShape, tmp_assign_source_304 );
    tmp_assign_source_305 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_AutoRepeatModeOff, tmp_assign_source_305 );
    tmp_assign_source_306 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_AutoRepeatModeOn, tmp_assign_source_306 );
    tmp_assign_source_307 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_AutoRepeatModeDefault, tmp_assign_source_307 );
    tmp_assign_source_308 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_LedModeOff, tmp_assign_source_308 );
    tmp_assign_source_309 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_LedModeOn, tmp_assign_source_309 );
    tmp_assign_source_310 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_KBKeyClickPercent, tmp_assign_source_310 );
    tmp_assign_source_311 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_KBBellPercent, tmp_assign_source_311 );
    tmp_assign_source_312 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_KBBellPitch, tmp_assign_source_312 );
    tmp_assign_source_313 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_KBBellDuration, tmp_assign_source_313 );
    tmp_assign_source_314 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_KBLed, tmp_assign_source_314 );
    tmp_assign_source_315 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_KBLedMode, tmp_assign_source_315 );
    tmp_assign_source_316 = const_int_pos_64;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_KBKey, tmp_assign_source_316 );
    tmp_assign_source_317 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_KBAutoRepeatMode, tmp_assign_source_317 );
    tmp_assign_source_318 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_MappingSuccess, tmp_assign_source_318 );
    tmp_assign_source_319 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_MappingBusy, tmp_assign_source_319 );
    tmp_assign_source_320 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_MappingFailed, tmp_assign_source_320 );
    tmp_assign_source_321 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_MappingModifier, tmp_assign_source_321 );
    tmp_assign_source_322 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_MappingKeyboard, tmp_assign_source_322 );
    tmp_assign_source_323 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_MappingPointer, tmp_assign_source_323 );
    tmp_assign_source_324 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_DontPreferBlanking, tmp_assign_source_324 );
    tmp_assign_source_325 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_PreferBlanking, tmp_assign_source_325 );
    tmp_assign_source_326 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_DefaultBlanking, tmp_assign_source_326 );
    tmp_assign_source_327 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_DisableScreenSaver, tmp_assign_source_327 );
    tmp_assign_source_328 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_DisableScreenInterval, tmp_assign_source_328 );
    tmp_assign_source_329 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_DontAllowExposures, tmp_assign_source_329 );
    tmp_assign_source_330 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_AllowExposures, tmp_assign_source_330 );
    tmp_assign_source_331 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_DefaultExposures, tmp_assign_source_331 );
    tmp_assign_source_332 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ScreenSaverReset, tmp_assign_source_332 );
    tmp_assign_source_333 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_ScreenSaverActive, tmp_assign_source_333 );
    tmp_assign_source_334 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_HostInsert, tmp_assign_source_334 );
    tmp_assign_source_335 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_HostDelete, tmp_assign_source_335 );
    tmp_assign_source_336 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_EnableAccess, tmp_assign_source_336 );
    tmp_assign_source_337 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_DisableAccess, tmp_assign_source_337 );
    tmp_assign_source_338 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_StaticGray, tmp_assign_source_338 );
    tmp_assign_source_339 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_GrayScale, tmp_assign_source_339 );
    tmp_assign_source_340 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_StaticColor, tmp_assign_source_340 );
    tmp_assign_source_341 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_PseudoColor, tmp_assign_source_341 );
    tmp_assign_source_342 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_TrueColor, tmp_assign_source_342 );
    tmp_assign_source_343 = const_int_pos_5;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_DirectColor, tmp_assign_source_343 );
    tmp_assign_source_344 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_LSBFirst, tmp_assign_source_344 );
    tmp_assign_source_345 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_Xlib$X, (Nuitka_StringObject *)const_str_plain_MSBFirst, tmp_assign_source_345 );

    return MOD_RETURN_VALUE( module_Xlib$X );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
