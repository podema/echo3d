// Generated code for Python source for module 'Xlib.support.connect'
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

// The _module_Xlib$support$connect is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_Xlib$support$connect;
PyDictObject *moduledict_Xlib$support$connect;

// The module constants used
extern PyObject *const_int_0;
extern PyObject *const_int_neg_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_chr_45;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_dno;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_mod;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_host;
extern PyObject *const_str_plain_sock;
static PyObject *const_str_plain_dname;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain__parts;
static PyObject *const_str_plain_OpenVMS;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain_display;
extern PyObject *const_str_plain_modname;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_get_auth;
extern PyObject *const_str_plain_platform;
static PyObject *const_str_plain__auth_mods;
extern PyObject *const_str_plain_get_socket;
extern PyObject *const_str_plain_get_display;
static PyObject *const_str_plain_vms_connect;
static PyObject *const_str_plain__socket_mods;
static PyObject *const_str_plain_unix_connect;
static PyObject *const_str_plain__display_mods;
static PyObject *const_str_plain__default_auth_mod;
static PyObject *const_str_plain__default_socket_mod;
static PyObject *const_tuple_str_plain_display_tuple;
static PyObject *const_str_plain__default_display_mod;
static PyObject *const_dict_4dc4ddcf56d5c522dc7c0d69dc1440e1;
static PyObject *const_str_digest_068b7f31f78ec66b98e9168cb8509c86;
static PyObject *const_str_digest_0c71ccf0fbf2fb7a4661dd72e675233a;
static PyObject *const_str_digest_24e745ecf590699320de4d595f694149;
static PyObject *const_str_digest_65777d533b0c0c79e23f4a3d66d072fe;
extern PyObject *const_str_digest_8119032365e6f76ab54e4f34ff61b23b;
static PyObject *const_str_digest_dcd210dff2ea5929c79c8f09a364ff6b;
static PyObject *const_tuple_a5ce2ecb10af88fc0b376b3a8b977e74_tuple;
static PyObject *const_tuple_a68c0c6b082230587f918ff0c4aa0e10_tuple;
static PyObject *const_tuple_str_plain_dname_str_plain_host_str_plain_dno_tuple;
static PyObject *const_tuple_str_plain_display_str_plain_modname_str_plain_mod_tuple;
static PyObject *const_tuple_str_plain_sock_str_plain_dname_str_plain_host_str_plain_dno_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_dno = UNSTREAM_STRING( &constant_bin[ 40793 ], 3, 1 );
    const_str_plain_dname = UNSTREAM_STRING( &constant_bin[ 444 ], 5, 1 );
    const_str_plain_OpenVMS = UNSTREAM_STRING( &constant_bin[ 439497 ], 7, 1 );
    const_str_plain__auth_mods = UNSTREAM_STRING( &constant_bin[ 40839 ], 10, 1 );
    const_str_plain_vms_connect = UNSTREAM_STRING( &constant_bin[ 439504 ], 11, 1 );
    const_str_plain__socket_mods = UNSTREAM_STRING( &constant_bin[ 40650 ], 12, 1 );
    const_str_plain_unix_connect = UNSTREAM_STRING( &constant_bin[ 439515 ], 12, 1 );
    const_str_plain__display_mods = UNSTREAM_STRING( &constant_bin[ 40522 ], 13, 1 );
    const_str_plain__default_auth_mod = UNSTREAM_STRING( &constant_bin[ 40878 ], 17, 1 );
    const_str_plain__default_socket_mod = UNSTREAM_STRING( &constant_bin[ 40691 ], 19, 1 );
    const_tuple_str_plain_display_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_display_tuple, 0, const_str_plain_display ); Py_INCREF( const_str_plain_display );
    const_str_plain__default_display_mod = UNSTREAM_STRING( &constant_bin[ 40601 ], 20, 1 );
    const_dict_4dc4ddcf56d5c522dc7c0d69dc1440e1 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_4dc4ddcf56d5c522dc7c0d69dc1440e1, const_str_plain_OpenVMS, const_str_plain_vms_connect );
    const_str_digest_068b7f31f78ec66b98e9168cb8509c86 = UNSTREAM_STRING( &constant_bin[ 439527 ], 20, 0 );
    const_str_digest_0c71ccf0fbf2fb7a4661dd72e675233a = UNSTREAM_STRING( &constant_bin[ 439547 ], 249, 0 );
    const_str_digest_24e745ecf590699320de4d595f694149 = UNSTREAM_STRING( &constant_bin[ 439796 ], 279, 0 );
    const_str_digest_65777d533b0c0c79e23f4a3d66d072fe = UNSTREAM_STRING( &constant_bin[ 440075 ], 358, 0 );
    const_str_digest_dcd210dff2ea5929c79c8f09a364ff6b = UNSTREAM_STRING( &constant_bin[ 440433 ], 56, 0 );
    const_tuple_a5ce2ecb10af88fc0b376b3a8b977e74_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_a5ce2ecb10af88fc0b376b3a8b977e74_tuple, 0, const_str_plain_dname ); Py_INCREF( const_str_plain_dname );
    PyTuple_SET_ITEM( const_tuple_a5ce2ecb10af88fc0b376b3a8b977e74_tuple, 1, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_a5ce2ecb10af88fc0b376b3a8b977e74_tuple, 2, const_str_plain_dno ); Py_INCREF( const_str_plain_dno );
    PyTuple_SET_ITEM( const_tuple_a5ce2ecb10af88fc0b376b3a8b977e74_tuple, 3, const_str_plain_modname ); Py_INCREF( const_str_plain_modname );
    PyTuple_SET_ITEM( const_tuple_a5ce2ecb10af88fc0b376b3a8b977e74_tuple, 4, const_str_plain_mod ); Py_INCREF( const_str_plain_mod );
    const_tuple_a68c0c6b082230587f918ff0c4aa0e10_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_a68c0c6b082230587f918ff0c4aa0e10_tuple, 0, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_a68c0c6b082230587f918ff0c4aa0e10_tuple, 1, const_str_plain_dname ); Py_INCREF( const_str_plain_dname );
    PyTuple_SET_ITEM( const_tuple_a68c0c6b082230587f918ff0c4aa0e10_tuple, 2, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_a68c0c6b082230587f918ff0c4aa0e10_tuple, 3, const_str_plain_dno ); Py_INCREF( const_str_plain_dno );
    PyTuple_SET_ITEM( const_tuple_a68c0c6b082230587f918ff0c4aa0e10_tuple, 4, const_str_plain_modname ); Py_INCREF( const_str_plain_modname );
    PyTuple_SET_ITEM( const_tuple_a68c0c6b082230587f918ff0c4aa0e10_tuple, 5, const_str_plain_mod ); Py_INCREF( const_str_plain_mod );
    const_tuple_str_plain_dname_str_plain_host_str_plain_dno_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_dname_str_plain_host_str_plain_dno_tuple, 0, const_str_plain_dname ); Py_INCREF( const_str_plain_dname );
    PyTuple_SET_ITEM( const_tuple_str_plain_dname_str_plain_host_str_plain_dno_tuple, 1, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_str_plain_dname_str_plain_host_str_plain_dno_tuple, 2, const_str_plain_dno ); Py_INCREF( const_str_plain_dno );
    const_tuple_str_plain_display_str_plain_modname_str_plain_mod_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_display_str_plain_modname_str_plain_mod_tuple, 0, const_str_plain_display ); Py_INCREF( const_str_plain_display );
    PyTuple_SET_ITEM( const_tuple_str_plain_display_str_plain_modname_str_plain_mod_tuple, 1, const_str_plain_modname ); Py_INCREF( const_str_plain_modname );
    PyTuple_SET_ITEM( const_tuple_str_plain_display_str_plain_modname_str_plain_mod_tuple, 2, const_str_plain_mod ); Py_INCREF( const_str_plain_mod );
    const_tuple_str_plain_sock_str_plain_dname_str_plain_host_str_plain_dno_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sock_str_plain_dname_str_plain_host_str_plain_dno_tuple, 0, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_str_plain_sock_str_plain_dname_str_plain_host_str_plain_dno_tuple, 1, const_str_plain_dname ); Py_INCREF( const_str_plain_dname );
    PyTuple_SET_ITEM( const_tuple_str_plain_sock_str_plain_dname_str_plain_host_str_plain_dno_tuple, 2, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_str_plain_sock_str_plain_dname_str_plain_host_str_plain_dno_tuple, 3, const_str_plain_dno ); Py_INCREF( const_str_plain_dno );
}

// The module code objects.
static PyCodeObject *codeobj_b98e7b8ed175b97b8bf4c98fe06510ef;
static PyCodeObject *codeobj_7a2cda3661931981661cdde2052de84d;
static PyCodeObject *codeobj_6d659bab5164c1257218e9472930b368;
static PyCodeObject *codeobj_308dd2c715fdf946cef100eb1fe8b464;
static PyCodeObject *codeobj_32a94c09a991f2e81e3535ed16cf2e7d;
static PyCodeObject *codeobj_7be00aaf47708e3bd28233d114600800;
static PyCodeObject *codeobj_4688703767073e05d1f51cb544d6949f;

static void _initModuleCodeObjects(void)
{
    codeobj_b98e7b8ed175b97b8bf4c98fe06510ef = MAKE_CODEOBJ( const_str_digest_dcd210dff2ea5929c79c8f09a364ff6b, const_str_plain_connect, 0, const_tuple_empty, 0, CO_NOFREE );
    codeobj_7a2cda3661931981661cdde2052de84d = MAKE_CODEOBJ( const_str_digest_dcd210dff2ea5929c79c8f09a364ff6b, const_str_plain_get_auth, 81, const_tuple_str_plain_sock_str_plain_dname_str_plain_host_str_plain_dno_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_6d659bab5164c1257218e9472930b368 = MAKE_CODEOBJ( const_str_digest_dcd210dff2ea5929c79c8f09a364ff6b, const_str_plain_get_auth, 81, const_tuple_a68c0c6b082230587f918ff0c4aa0e10_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_308dd2c715fdf946cef100eb1fe8b464 = MAKE_CODEOBJ( const_str_digest_dcd210dff2ea5929c79c8f09a364ff6b, const_str_plain_get_display, 50, const_tuple_str_plain_display_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_32a94c09a991f2e81e3535ed16cf2e7d = MAKE_CODEOBJ( const_str_digest_dcd210dff2ea5929c79c8f09a364ff6b, const_str_plain_get_display, 50, const_tuple_str_plain_display_str_plain_modname_str_plain_mod_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_7be00aaf47708e3bd28233d114600800 = MAKE_CODEOBJ( const_str_digest_dcd210dff2ea5929c79c8f09a364ff6b, const_str_plain_get_socket, 67, const_tuple_str_plain_dname_str_plain_host_str_plain_dno_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_4688703767073e05d1f51cb544d6949f = MAKE_CODEOBJ( const_str_digest_dcd210dff2ea5929c79c8f09a364ff6b, const_str_plain_get_socket, 67, const_tuple_a5ce2ecb10af88fc0b376b3a8b977e74_tuple, 3, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_get_display_of_module_Xlib$support$connect(  );


static PyObject *MAKE_FUNCTION_function_2_get_socket_of_module_Xlib$support$connect(  );


static PyObject *MAKE_FUNCTION_function_3_get_auth_of_module_Xlib$support$connect(  );


// The module function definitions.
static PyObject *impl_function_1_get_display_of_module_Xlib$support$connect( Nuitka_FunctionObject *self, PyObject *_python_par_display )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_display; par_display.object = _python_par_display;
    PyObjectLocalVariable var_modname;
    PyObjectLocalVariable var_mod;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_import_fromlist_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_level_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_modulename_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_308dd2c715fdf946cef100eb1fe8b464, module_Xlib$support$connect );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain__display_mods );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__display_mods );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40509 ], 42, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain_platform );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_platform );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40551 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain__default_display_mod );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__default_display_mod );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40588 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 62;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 62;
        goto frame_exception_exit_1;
    }
    assert( var_modname.object == NULL );
    var_modname.object = tmp_assign_source_1;

    tmp_import_modulename_1 = const_str_digest_8119032365e6f76ab54e4f34ff61b23b;
    tmp_import_globals_1 = ((PyModuleObject *)module_Xlib$support$connect)->md_dict;
    tmp_import_fromlist_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_modname.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_import_fromlist_1, 0, tmp_tuple_element_1 );
    tmp_import_level_1 = const_int_neg_1;
    tmp_import_locals_1 = PyDict_New();
    if ((var_modname.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_modname,
            var_modname.object
        );

    }
    if ((var_mod.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_mod,
            var_mod.object
        );

    }
    if ((par_display.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_display,
            par_display.object
        );

    }
    frame_function->f_lineno = 63;
    tmp_assign_source_2 = IMPORT_MODULE( tmp_import_modulename_1, tmp_import_globals_1, tmp_import_locals_1, tmp_import_fromlist_1, tmp_import_level_1 );
    Py_DECREF( tmp_import_locals_1 );
    Py_DECREF( tmp_import_fromlist_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 63;
        goto frame_exception_exit_1;
    }
    assert( var_mod.object == NULL );
    var_mod.object = tmp_assign_source_2;

    tmp_getattr_target_1 = var_mod.object;

    tmp_getattr_attr_1 = var_modname.object;

    tmp_source_name_2 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_display );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = par_display.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 24776 ], 53, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 64;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 64;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 64;
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
    if ((var_modname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_modname,
            var_modname.object
        );

    }
    if ((var_mod.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mod,
            var_mod.object
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


    // Return statement must be present.
    assert(false);
function_exception_exit:
    assert( exception_type );
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return NULL;
function_return_exit:
    return tmp_return_value;

}
static PyObject *fparse_function_1_get_display_of_module_Xlib$support$connect( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "get_display() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_display == key )
            {
                assert( _python_par_display == NULL );
                _python_par_display = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
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
                   "get_display() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_display != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_display = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_display == NULL )
    {
        if ( 0 + self->m_defaults_given >= 1  )
        {
            _python_par_display = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 1 ) );
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
    if (unlikely( _python_par_display == NULL ))
    {
        PyObject *values[] = { _python_par_display };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_1_get_display_of_module_Xlib$support$connect( self, _python_par_display );

error_exit:;

    Py_XDECREF( _python_par_display );

    return NULL;
}

static PyObject *dparse_function_1_get_display_of_module_Xlib$support$connect( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_get_display_of_module_Xlib$support$connect( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_get_display_of_module_Xlib$support$connect( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_get_socket_of_module_Xlib$support$connect( Nuitka_FunctionObject *self, PyObject *_python_par_dname, PyObject *_python_par_host, PyObject *_python_par_dno )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_dname; par_dname.object = _python_par_dname;
    PyObjectLocalVariable par_host; par_host.object = _python_par_host;
    PyObjectLocalVariable par_dno; par_dno.object = _python_par_dno;
    PyObjectLocalVariable var_modname;
    PyObjectLocalVariable var_mod;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_call_arg_element_5;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_import_fromlist_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_level_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_modulename_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7be00aaf47708e3bd28233d114600800, module_Xlib$support$connect );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain__socket_mods );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__socket_mods );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40637 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain_platform );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_platform );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40551 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain__default_socket_mod );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__default_socket_mod );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40678 ], 48, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 76;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 76;
        goto frame_exception_exit_1;
    }
    assert( var_modname.object == NULL );
    var_modname.object = tmp_assign_source_1;

    tmp_import_modulename_1 = const_str_digest_8119032365e6f76ab54e4f34ff61b23b;
    tmp_import_globals_1 = ((PyModuleObject *)module_Xlib$support$connect)->md_dict;
    tmp_import_fromlist_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_modname.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_import_fromlist_1, 0, tmp_tuple_element_1 );
    tmp_import_level_1 = const_int_neg_1;
    tmp_import_locals_1 = PyDict_New();
    if ((var_modname.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_modname,
            var_modname.object
        );

    }
    if ((var_mod.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_mod,
            var_mod.object
        );

    }
    if ((par_dname.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_dname,
            par_dname.object
        );

    }
    if ((par_host.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_host,
            par_host.object
        );

    }
    if ((par_dno.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_dno,
            par_dno.object
        );

    }
    frame_function->f_lineno = 77;
    tmp_assign_source_2 = IMPORT_MODULE( tmp_import_modulename_1, tmp_import_globals_1, tmp_import_locals_1, tmp_import_fromlist_1, tmp_import_level_1 );
    Py_DECREF( tmp_import_locals_1 );
    Py_DECREF( tmp_import_fromlist_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 77;
        goto frame_exception_exit_1;
    }
    assert( var_mod.object == NULL );
    var_mod.object = tmp_assign_source_2;

    tmp_getattr_target_1 = var_mod.object;

    tmp_getattr_attr_1 = var_modname.object;

    tmp_source_name_2 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_socket );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = par_dname.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40726 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_host.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 182 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = par_dno.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40777 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 78;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 78;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_2 );
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
    if ((var_modname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_modname,
            var_modname.object
        );

    }
    if ((var_mod.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mod,
            var_mod.object
        );

    }
    if ((par_dname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dname,
            par_dname.object
        );

    }
    if ((par_host.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_host,
            par_host.object
        );

    }
    if ((par_dno.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dno,
            par_dno.object
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
static PyObject *fparse_function_2_get_socket_of_module_Xlib$support$connect( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_dname = NULL;
    PyObject *_python_par_host = NULL;
    PyObject *_python_par_dno = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_socket() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_dname == key )
            {
                assert( _python_par_dname == NULL );
                _python_par_dname = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_host == key )
            {
                assert( _python_par_host == NULL );
                _python_par_host = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_dno == key )
            {
                assert( _python_par_dno == NULL );
                _python_par_dno = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dname, key ) == 1 )
            {
                assert( _python_par_dname == NULL );
                _python_par_dname = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_host, key ) == 1 )
            {
                assert( _python_par_host == NULL );
                _python_par_host = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dno, key ) == 1 )
            {
                assert( _python_par_dno == NULL );
                _python_par_dno = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_socket() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_dname != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_dname = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_dname == NULL )
    {
        if ( 0 + self->m_defaults_given >= 3  )
        {
            _python_par_dname = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 3 ) );
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
         if (unlikely( _python_par_host != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_host = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_host == NULL )
    {
        if ( 1 + self->m_defaults_given >= 3  )
        {
            _python_par_host = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 3 ) );
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
         if (unlikely( _python_par_dno != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_dno = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_dno == NULL )
    {
        if ( 2 + self->m_defaults_given >= 3  )
        {
            _python_par_dno = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 3 ) );
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
    if (unlikely( _python_par_dname == NULL || _python_par_host == NULL || _python_par_dno == NULL ))
    {
        PyObject *values[] = { _python_par_dname, _python_par_host, _python_par_dno };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_2_get_socket_of_module_Xlib$support$connect( self, _python_par_dname, _python_par_host, _python_par_dno );

error_exit:;

    Py_XDECREF( _python_par_dname );
    Py_XDECREF( _python_par_host );
    Py_XDECREF( _python_par_dno );

    return NULL;
}

static PyObject *dparse_function_2_get_socket_of_module_Xlib$support$connect( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3 )
    {
        return impl_function_2_get_socket_of_module_Xlib$support$connect( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_get_socket_of_module_Xlib$support$connect( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_get_auth_of_module_Xlib$support$connect( Nuitka_FunctionObject *self, PyObject *_python_par_sock, PyObject *_python_par_dname, PyObject *_python_par_host, PyObject *_python_par_dno )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_sock; par_sock.object = _python_par_sock;
    PyObjectLocalVariable par_dname; par_dname.object = _python_par_dname;
    PyObjectLocalVariable par_host; par_host.object = _python_par_host;
    PyObjectLocalVariable par_dno; par_dno.object = _python_par_dno;
    PyObjectLocalVariable var_modname;
    PyObjectLocalVariable var_mod;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_import_fromlist_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_level_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_modulename_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7a2cda3661931981661cdde2052de84d, module_Xlib$support$connect );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain__auth_mods );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__auth_mods );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40826 ], 39, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain_platform );

    if (unlikely( tmp_call_arg_element_1 == NULL ))
    {
        tmp_call_arg_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_platform );
    }

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40551 ], 37, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain__default_auth_mod );

    if (unlikely( tmp_call_arg_element_2 == NULL ))
    {
        tmp_call_arg_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__default_auth_mod );
    }

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40865 ], 46, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 91;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 91;
        goto frame_exception_exit_1;
    }
    assert( var_modname.object == NULL );
    var_modname.object = tmp_assign_source_1;

    tmp_import_modulename_1 = const_str_digest_8119032365e6f76ab54e4f34ff61b23b;
    tmp_import_globals_1 = ((PyModuleObject *)module_Xlib$support$connect)->md_dict;
    tmp_import_fromlist_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_modname.object;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_import_fromlist_1, 0, tmp_tuple_element_1 );
    tmp_import_level_1 = const_int_neg_1;
    tmp_import_locals_1 = PyDict_New();
    if ((var_modname.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_modname,
            var_modname.object
        );

    }
    if ((var_mod.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_mod,
            var_mod.object
        );

    }
    if ((par_sock.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_sock,
            par_sock.object
        );

    }
    if ((par_dname.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_dname,
            par_dname.object
        );

    }
    if ((par_host.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_host,
            par_host.object
        );

    }
    if ((par_dno.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_dno,
            par_dno.object
        );

    }
    frame_function->f_lineno = 92;
    tmp_assign_source_2 = IMPORT_MODULE( tmp_import_modulename_1, tmp_import_globals_1, tmp_import_locals_1, tmp_import_fromlist_1, tmp_import_level_1 );
    Py_DECREF( tmp_import_locals_1 );
    Py_DECREF( tmp_import_fromlist_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 92;
        goto frame_exception_exit_1;
    }
    assert( var_mod.object == NULL );
    var_mod.object = tmp_assign_source_2;

    tmp_getattr_target_1 = var_mod.object;

    tmp_getattr_attr_1 = var_modname.object;

    tmp_source_name_2 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_auth );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = par_sock.object;

    if ( tmp_call_arg_element_3 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40911 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = par_dname.object;

    if ( tmp_call_arg_element_4 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40726 ], 51, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_5 = par_host.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 182 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_6 = par_dno.object;

    if ( tmp_call_arg_element_6 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40777 ], 49, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 93;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 93;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_2, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 93;
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
    if ((var_modname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_modname,
            var_modname.object
        );

    }
    if ((var_mod.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mod,
            var_mod.object
        );

    }
    if ((par_sock.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sock,
            par_sock.object
        );

    }
    if ((par_dname.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dname,
            par_dname.object
        );

    }
    if ((par_host.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_host,
            par_host.object
        );

    }
    if ((par_dno.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dno,
            par_dno.object
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
static PyObject *fparse_function_3_get_auth_of_module_Xlib$support$connect( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_sock = NULL;
    PyObject *_python_par_dname = NULL;
    PyObject *_python_par_host = NULL;
    PyObject *_python_par_dno = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_auth() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && const_str_plain_sock == key )
            {
                assert( _python_par_sock == NULL );
                _python_par_sock = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_dname == key )
            {
                assert( _python_par_dname == NULL );
                _python_par_dname = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_host == key )
            {
                assert( _python_par_host == NULL );
                _python_par_host = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_dno == key )
            {
                assert( _python_par_dno == NULL );
                _python_par_dno = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_sock, key ) == 1 )
            {
                assert( _python_par_sock == NULL );
                _python_par_sock = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dname, key ) == 1 )
            {
                assert( _python_par_dname == NULL );
                _python_par_dname = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_host, key ) == 1 )
            {
                assert( _python_par_host == NULL );
                _python_par_host = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_dno, key ) == 1 )
            {
                assert( _python_par_dno == NULL );
                _python_par_dno = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_auth() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_sock != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 0 );
             goto error_exit;
         }

        _python_par_sock = INCREASE_REFCOUNT( args[ 0 ] );
    }
    else if ( _python_par_sock == NULL )
    {
        if ( 0 + self->m_defaults_given >= 4  )
        {
            _python_par_sock = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 0 - 4 ) );
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
         if (unlikely( _python_par_dname != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_dname = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_dname == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_dname = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_host != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_host = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_host == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_host = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_dno != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_dno = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_dno == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_dno = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_sock == NULL || _python_par_dname == NULL || _python_par_host == NULL || _python_par_dno == NULL ))
    {
        PyObject *values[] = { _python_par_sock, _python_par_dname, _python_par_host, _python_par_dno };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif


    return impl_function_3_get_auth_of_module_Xlib$support$connect( self, _python_par_sock, _python_par_dname, _python_par_host, _python_par_dno );

error_exit:;

    Py_XDECREF( _python_par_sock );
    Py_XDECREF( _python_par_dname );
    Py_XDECREF( _python_par_host );
    Py_XDECREF( _python_par_dno );

    return NULL;
}

static PyObject *dparse_function_3_get_auth_of_module_Xlib$support$connect( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4 )
    {
        return impl_function_3_get_auth_of_module_Xlib$support$connect( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_get_auth_of_module_Xlib$support$connect( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_get_display_of_module_Xlib$support$connect(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_get_display_of_module_Xlib$support$connect,
        dparse_function_1_get_display_of_module_Xlib$support$connect,
        const_str_plain_get_display,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_32a94c09a991f2e81e3535ed16cf2e7d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$support$connect,
        const_str_digest_65777d533b0c0c79e23f4a3d66d072fe
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_get_socket_of_module_Xlib$support$connect(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_get_socket_of_module_Xlib$support$connect,
        dparse_function_2_get_socket_of_module_Xlib$support$connect,
        const_str_plain_get_socket,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4688703767073e05d1f51cb544d6949f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$support$connect,
        const_str_digest_0c71ccf0fbf2fb7a4661dd72e675233a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_auth_of_module_Xlib$support$connect(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_get_auth_of_module_Xlib$support$connect,
        dparse_function_3_get_auth_of_module_Xlib$support$connect,
        const_str_plain_get_auth,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6d659bab5164c1257218e9472930b368,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Xlib$support$connect,
        const_str_digest_24e745ecf590699320de4d595f694149
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Xlib$support$connect =
{
    PyModuleDef_HEAD_INIT,
    "Xlib.support.connect",   /* m_name */
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

MOD_INIT_DECL( Xlib$support$connect )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Xlib$support$connect );
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

    // puts( "in initXlib$support$connect" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Xlib$support$connect = Py_InitModule4(
        "Xlib.support.connect",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_Xlib$support$connect = PyModule_Create( &mdef_Xlib$support$connect );
#endif

    moduledict_Xlib$support$connect = (PyDictObject *)((PyModuleObject *)module_Xlib$support$connect)->md_dict;

    assertObject( module_Xlib$support$connect );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_068b7f31f78ec66b98e9168cb8509c86, module_Xlib$support$connect );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_Xlib$support$connect );

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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_1;
    PyObject *tmp_import_globals_1;
    int tmp_res;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscr_subscript_1;
    PyObject *tmp_subscr_target_1;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_dcd210dff2ea5929c79c8f09a364ff6b;
    UPDATE_STRING_DICT0( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_b98e7b8ed175b97b8bf4c98fe06510ef, module_Xlib$support$connect );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_Xlib$support$connect)->md_dict;
    frame_module->f_lineno = 19;
    tmp_assign_source_3 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_3 );
    tmp_assign_source_4 = PyDict_Copy( const_dict_4dc4ddcf56d5c522dc7c0d69dc1440e1 );
    UPDATE_STRING_DICT1( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain__display_mods, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_plain_unix_connect;
    UPDATE_STRING_DICT0( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain__default_display_mod, tmp_assign_source_5 );
    tmp_assign_source_6 = PyDict_Copy( const_dict_4dc4ddcf56d5c522dc7c0d69dc1440e1 );
    UPDATE_STRING_DICT1( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain__socket_mods, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_plain_unix_connect;
    UPDATE_STRING_DICT0( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain__default_socket_mod, tmp_assign_source_7 );
    tmp_assign_source_8 = PyDict_Copy( const_dict_4dc4ddcf56d5c522dc7c0d69dc1440e1 );
    UPDATE_STRING_DICT1( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain__auth_mods, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_plain_unix_connect;
    UPDATE_STRING_DICT0( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain__default_auth_mod, tmp_assign_source_9 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 4756 ], 25, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 45;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_platform );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_split );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_chr_45;
    frame_module->f_lineno = 45;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain__parts, tmp_assign_source_10 );
    tmp_subscr_target_1 = GET_STRING_DICT_VALUE( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain__parts );

    if (unlikely( tmp_subscr_target_1 == NULL ))
    {
        tmp_subscr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__parts );
    }

    if ( tmp_subscr_target_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40481 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_subscr_subscript_1 = const_int_0;
    tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscr_target_1, tmp_subscr_subscript_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain_platform, tmp_assign_source_11 );
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_Xlib$support$connect, const_str_plain__parts );
    if ( tmp_res == -1 ) PyErr_Clear();

    if ( tmp_res == -1 )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 40481 ], 28, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_12 = MAKE_FUNCTION_function_1_get_display_of_module_Xlib$support$connect(  );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_12 );

        frame_module->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain_get_display, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_function_2_get_socket_of_module_Xlib$support$connect(  );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_13 );

        frame_module->f_lineno = 67;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain_get_socket, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_function_3_get_auth_of_module_Xlib$support$connect(  );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_14 );

        frame_module->f_lineno = 81;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Xlib$support$connect, (Nuitka_StringObject *)const_str_plain_get_auth, tmp_assign_source_14 );

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

    return MOD_RETURN_VALUE( module_Xlib$support$connect );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
