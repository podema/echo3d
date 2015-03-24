// Generated code for Python source for module 'setuptools.command.install_scripts'
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

// The _module_setuptools$command$install_scripts is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_setuptools$command$install_scripts;
PyDictObject *moduledict_setuptools$command$install_scripts;

// The module constants used
extern PyObject *const_int_neg_1;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_511;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_w;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_run;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_dist;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_mask;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_orig;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_chmod;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_no_ep;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_bs_cmd;
extern PyObject *const_str_plain_ei_cmd;
extern PyObject *const_str_plain_target;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_command;
extern PyObject *const_str_plain_dry_run;
extern PyObject *const_str_plain_ignored;
extern PyObject *const_str_plain_scripts;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_contents;
extern PyObject *const_str_plain_egg_base;
extern PyObject *const_str_plain_egg_info;
extern PyObject *const_str_plain_egg_name;
extern PyObject *const_str_plain_outfiles;
extern PyObject *const_str_plain_distutils;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_executable;
static PyObject *const_str_plain_is_wininst;
static PyObject *const_str_plain__is_running;
extern PyObject *const_str_plain_egg_version;
extern PyObject *const_str_plain_install_dir;
extern PyObject *const_str_plain_run_command;
extern PyObject *const_str_plain_script_name;
extern PyObject *const_str_plain_Distribution;
extern PyObject *const_str_plain_PathMetadata;
extern PyObject *const_str_plain_distribution;
extern PyObject *const_str_plain_write_script;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_bdist_wininst;
extern PyObject *const_str_plain_build_scripts;
extern PyObject *const_str_plain_current_umask;
extern PyObject *const_str_plain_pkg_resources;
extern PyObject *const_tuple_str_plain_t_tuple;
extern PyObject *const_str_plain_sys_executable;
extern PyObject *const_str_plain_get_script_args;
extern PyObject *const_str_plain_install_scripts;
extern PyObject *const_tuple_str_plain_log_tuple;
extern PyObject *const_str_plain_ensure_directory;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_initialize_options;
extern PyObject *const_str_plain_get_finalized_command;
static PyObject *const_tuple_str_plain_sys_executable_tuple;
static PyObject *const_tuple_str_plain_get_script_args_tuple;
static PyObject *const_str_digest_07159599f262d9fc0b7ee095eccaf7d5;
extern PyObject *const_str_digest_103022eda13ccee1e2398d2e272d0b01;
static PyObject *const_str_digest_517b220f89c8dbe7873e8df2d7ab4b55;
extern PyObject *const_str_digest_7b5b7df082b1cf5d6af5ec29c129f664;
extern PyObject *const_str_digest_acde839b3a74e71657e6df97360768ff;
static PyObject *const_str_digest_b38dba291325e482285250b5801624a9;
static PyObject *const_str_digest_d87506db3aa0dccf93f34f597865c2bb;
static PyObject *const_tuple_0cc16c0761b7e519c8bb75fff6ca21c9_tuple;
static PyObject *const_tuple_764c78c50f57de96fe09d76330d8f980_tuple;
static PyObject *const_tuple_9163de551425720126055782b36632f2_tuple;
static PyObject *const_tuple_9d4f90b9046e92e0dd018cff358b2c05_tuple;
static PyObject *const_tuple_str_plain_chmod_str_plain_current_umask_tuple;

static void _initModuleConstants(void)
{
    const_str_plain_bs_cmd = UNSTREAM_STRING( &constant_bin[ 2572143 ], 6, 1 );
    const_str_plain_is_wininst = UNSTREAM_STRING( &constant_bin[ 2572149 ], 10, 1 );
    const_str_plain__is_running = UNSTREAM_STRING( &constant_bin[ 2572159 ], 11, 1 );
    const_tuple_str_plain_sys_executable_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sys_executable_tuple, 0, const_str_plain_sys_executable ); Py_INCREF( const_str_plain_sys_executable );
    const_tuple_str_plain_get_script_args_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_script_args_tuple, 0, const_str_plain_get_script_args ); Py_INCREF( const_str_plain_get_script_args );
    const_str_digest_07159599f262d9fc0b7ee095eccaf7d5 = UNSTREAM_STRING( &constant_bin[ 2572170 ], 59, 0 );
    const_str_digest_517b220f89c8dbe7873e8df2d7ab4b55 = UNSTREAM_STRING( &constant_bin[ 2572229 ], 70, 0 );
    const_str_digest_b38dba291325e482285250b5801624a9 = UNSTREAM_STRING( &constant_bin[ 2572299 ], 34, 0 );
    const_str_digest_d87506db3aa0dccf93f34f597865c2bb = UNSTREAM_STRING( &constant_bin[ 2572333 ], 33, 0 );
    const_tuple_0cc16c0761b7e519c8bb75fff6ca21c9_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_0cc16c0761b7e519c8bb75fff6ca21c9_tuple, 0, const_str_plain_Distribution ); Py_INCREF( const_str_plain_Distribution );
    PyTuple_SET_ITEM( const_tuple_0cc16c0761b7e519c8bb75fff6ca21c9_tuple, 1, const_str_plain_PathMetadata ); Py_INCREF( const_str_plain_PathMetadata );
    PyTuple_SET_ITEM( const_tuple_0cc16c0761b7e519c8bb75fff6ca21c9_tuple, 2, const_str_plain_ensure_directory ); Py_INCREF( const_str_plain_ensure_directory );
    const_tuple_764c78c50f57de96fe09d76330d8f980_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_764c78c50f57de96fe09d76330d8f980_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_764c78c50f57de96fe09d76330d8f980_tuple, 1, const_str_plain_script_name ); Py_INCREF( const_str_plain_script_name );
    PyTuple_SET_ITEM( const_tuple_764c78c50f57de96fe09d76330d8f980_tuple, 2, const_str_plain_contents ); Py_INCREF( const_str_plain_contents );
    PyTuple_SET_ITEM( const_tuple_764c78c50f57de96fe09d76330d8f980_tuple, 3, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_764c78c50f57de96fe09d76330d8f980_tuple, 4, const_str_plain_ignored ); Py_INCREF( const_str_plain_ignored );
    const_tuple_9163de551425720126055782b36632f2_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_9163de551425720126055782b36632f2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9163de551425720126055782b36632f2_tuple, 1, const_str_plain_get_script_args ); Py_INCREF( const_str_plain_get_script_args );
    PyTuple_SET_ITEM( const_tuple_9163de551425720126055782b36632f2_tuple, 2, const_str_plain_sys_executable ); Py_INCREF( const_str_plain_sys_executable );
    PyTuple_SET_ITEM( const_tuple_9163de551425720126055782b36632f2_tuple, 3, const_str_plain_ei_cmd ); Py_INCREF( const_str_plain_ei_cmd );
    PyTuple_SET_ITEM( const_tuple_9163de551425720126055782b36632f2_tuple, 4, const_str_plain_dist ); Py_INCREF( const_str_plain_dist );
    PyTuple_SET_ITEM( const_tuple_9163de551425720126055782b36632f2_tuple, 5, const_str_plain_bs_cmd ); Py_INCREF( const_str_plain_bs_cmd );
    PyTuple_SET_ITEM( const_tuple_9163de551425720126055782b36632f2_tuple, 6, const_str_plain_executable ); Py_INCREF( const_str_plain_executable );
    PyTuple_SET_ITEM( const_tuple_9163de551425720126055782b36632f2_tuple, 7, const_str_plain_is_wininst ); Py_INCREF( const_str_plain_is_wininst );
    PyTuple_SET_ITEM( const_tuple_9163de551425720126055782b36632f2_tuple, 8, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    const_tuple_9d4f90b9046e92e0dd018cff358b2c05_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_9d4f90b9046e92e0dd018cff358b2c05_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9d4f90b9046e92e0dd018cff358b2c05_tuple, 1, const_str_plain_script_name ); Py_INCREF( const_str_plain_script_name );
    PyTuple_SET_ITEM( const_tuple_9d4f90b9046e92e0dd018cff358b2c05_tuple, 2, const_str_plain_contents ); Py_INCREF( const_str_plain_contents );
    PyTuple_SET_ITEM( const_tuple_9d4f90b9046e92e0dd018cff358b2c05_tuple, 3, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_9d4f90b9046e92e0dd018cff358b2c05_tuple, 4, const_str_plain_ignored ); Py_INCREF( const_str_plain_ignored );
    PyTuple_SET_ITEM( const_tuple_9d4f90b9046e92e0dd018cff358b2c05_tuple, 5, const_str_plain_chmod ); Py_INCREF( const_str_plain_chmod );
    PyTuple_SET_ITEM( const_tuple_9d4f90b9046e92e0dd018cff358b2c05_tuple, 6, const_str_plain_current_umask ); Py_INCREF( const_str_plain_current_umask );
    PyTuple_SET_ITEM( const_tuple_9d4f90b9046e92e0dd018cff358b2c05_tuple, 7, const_str_plain_target ); Py_INCREF( const_str_plain_target );
    PyTuple_SET_ITEM( const_tuple_9d4f90b9046e92e0dd018cff358b2c05_tuple, 8, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_9d4f90b9046e92e0dd018cff358b2c05_tuple, 9, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_tuple_str_plain_chmod_str_plain_current_umask_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_chmod_str_plain_current_umask_tuple, 0, const_str_plain_chmod ); Py_INCREF( const_str_plain_chmod );
    PyTuple_SET_ITEM( const_tuple_str_plain_chmod_str_plain_current_umask_tuple, 1, const_str_plain_current_umask ); Py_INCREF( const_str_plain_current_umask );
}

// The module code objects.
static PyCodeObject *codeobj_194910196c7658e735d5da4469c16dbe;
static PyCodeObject *codeobj_4cf9f28e48ef37d2940cd59e1123bffe;
static PyCodeObject *codeobj_60430b5b4d5eeba70146c93989be6dea;
static PyCodeObject *codeobj_b0b594dc5ab14ad2967274dc15a510b6;
static PyCodeObject *codeobj_a6c11d5da39074784acc004434aa53e4;
static PyCodeObject *codeobj_fe69a422066e69b3463776d2e0dc90fb;
static PyCodeObject *codeobj_e9bb25c33452227d41c89df16af7ad74;

static void _initModuleCodeObjects(void)
{
    codeobj_194910196c7658e735d5da4469c16dbe = MAKE_CODEOBJ( const_str_digest_517b220f89c8dbe7873e8df2d7ab4b55, const_str_plain_initialize_options, 11, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_4cf9f28e48ef37d2940cd59e1123bffe = MAKE_CODEOBJ( const_str_digest_517b220f89c8dbe7873e8df2d7ab4b55, const_str_plain_install_scripts, 0, const_tuple_empty, 0, CO_NOFREE );
    codeobj_60430b5b4d5eeba70146c93989be6dea = MAKE_CODEOBJ( const_str_digest_517b220f89c8dbe7873e8df2d7ab4b55, const_str_plain_install_scripts, 8, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_b0b594dc5ab14ad2967274dc15a510b6 = MAKE_CODEOBJ( const_str_digest_517b220f89c8dbe7873e8df2d7ab4b55, const_str_plain_run, 15, const_tuple_str_plain_self_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_a6c11d5da39074784acc004434aa53e4 = MAKE_CODEOBJ( const_str_digest_517b220f89c8dbe7873e8df2d7ab4b55, const_str_plain_run, 15, const_tuple_9163de551425720126055782b36632f2_tuple, 1, CO_NEWLOCALS | CO_OPTIMIZED | CO_NOFREE );
    codeobj_fe69a422066e69b3463776d2e0dc90fb = MAKE_CODEOBJ( const_str_digest_517b220f89c8dbe7873e8df2d7ab4b55, const_str_plain_write_script, 41, const_tuple_764c78c50f57de96fe09d76330d8f980_tuple, 5, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE );
    codeobj_e9bb25c33452227d41c89df16af7ad74 = MAKE_CODEOBJ( const_str_digest_517b220f89c8dbe7873e8df2d7ab4b55, const_str_plain_write_script, 41, const_tuple_9d4f90b9046e92e0dd018cff358b2c05_tuple, 4, CO_NEWLOCALS | CO_OPTIMIZED | CO_VARARGS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_install_scripts_of_module_setuptools$command$install_scripts(  );


NUITKA_CROSS_MODULE PyObject *impl_function_3_complex_call_helper_star_list_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_star_arg_list );


static PyObject *MAKE_FUNCTION_function_1_initialize_options_of_class_1_install_scripts_of_module_setuptools$command$install_scripts(  );


static PyObject *MAKE_FUNCTION_function_2_run_of_class_1_install_scripts_of_module_setuptools$command$install_scripts(  );


static PyObject *MAKE_FUNCTION_function_3_write_script_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( PyObject *defaults );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_install_scripts_of_module_setuptools$command$install_scripts(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var___module__;
    PyObjectLocalVariable var___doc__;
    PyObjectLocalVariable var_initialize_options;
    PyObjectLocalVariable var_run;
    PyObjectLocalVariable var_write_script;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_defaults_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_b38dba291325e482285250b5801624a9;
    assert( var___module__.object == NULL );
    var___module__.object = INCREASE_REFCOUNT( tmp_assign_source_1 );

    tmp_assign_source_2 = const_str_digest_07159599f262d9fc0b7ee095eccaf7d5;
    assert( var___doc__.object == NULL );
    var___doc__.object = INCREASE_REFCOUNT( tmp_assign_source_2 );

    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_60430b5b4d5eeba70146c93989be6dea, module_setuptools$command$install_scripts );
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
    tmp_assign_source_3 = MAKE_FUNCTION_function_1_initialize_options_of_class_1_install_scripts_of_module_setuptools$command$install_scripts(  );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        frame_function->f_lineno = 11;
        goto frame_exception_exit_1;
    }
    assert( var_initialize_options.object == NULL );
    var_initialize_options.object = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_function_2_run_of_class_1_install_scripts_of_module_setuptools$command$install_scripts(  );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        frame_function->f_lineno = 15;
        goto frame_exception_exit_1;
    }
    assert( var_run.object == NULL );
    var_run.object = tmp_assign_source_4;

    tmp_defaults_1 = const_tuple_str_plain_t_tuple;
    tmp_assign_source_5 = MAKE_FUNCTION_function_3_write_script_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        frame_function->f_lineno = 41;
        goto frame_exception_exit_1;
    }
    assert( var_write_script.object == NULL );
    var_write_script.object = tmp_assign_source_5;


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
    if ((var_initialize_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_initialize_options,
            var_initialize_options.object
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
    if ((var_write_script.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_write_script,
            var_write_script.object
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
    if ((var_initialize_options.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_initialize_options,
            var_initialize_options.object
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
    if ((var_write_script.object != NULL))
    {
        PyDict_SetItem(
            tmp_return_value,
            const_str_plain_write_script,
            var_write_script.object
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


static PyObject *impl_function_1_initialize_options_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_call_arg_element_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_194910196c7658e735d5da4469c16dbe, module_setuptools$command$install_scripts );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain_orig );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 306211 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 12;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_install_scripts );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_initialize_options );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = par_self.object;

    if ( tmp_call_arg_element_1 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 12;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 12;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 12;
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

        frame_function->f_lineno = 13;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_no_ep, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 13;
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
static PyObject *fparse_function_1_initialize_options_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "initialize_options() keywords must be strings" );
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
                   "initialize_options() got an unexpected keyword argument '%s'",
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


    return impl_function_1_initialize_options_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1_initialize_options_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_1_initialize_options_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_initialize_options_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_run_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable var_get_script_args;
    PyObjectLocalVariable var_sys_executable;
    PyObjectLocalVariable var_ei_cmd;
    PyObjectLocalVariable var_dist;
    PyObjectLocalVariable var_bs_cmd;
    PyObjectLocalVariable var_executable;
    PyObjectLocalVariable var_is_wininst;
    PyObjectLocalVariable var_args;
    PyObjectTempVariable tmp_for_loop_1__for_iterator;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
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
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
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
    int tmp_tried_lineno_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b0b594dc5ab14ad2967274dc15a510b6, module_setuptools$command$install_scripts );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_setuptools$command$install_scripts)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_get_script_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_get_script_args,
            var_get_script_args.object
        );

    }
    if ((var_sys_executable.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_sys_executable,
            var_sys_executable.object
        );

    }
    if ((var_ei_cmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ei_cmd,
            var_ei_cmd.object
        );

    }
    if ((var_dist.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_dist,
            var_dist.object
        );

    }
    if ((var_bs_cmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_bs_cmd,
            var_bs_cmd.object
        );

    }
    if ((var_executable.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_executable,
            var_executable.object
        );

    }
    if ((var_is_wininst.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_is_wininst,
            var_is_wininst.object
        );

    }
    if ((var_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_args,
            var_args.object
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
    frame_function->f_lineno = 16;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_103022eda13ccee1e2398d2e272d0b01, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_get_script_args_tuple, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_get_script_args );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 16;
        goto frame_exception_exit_1;
    }
    assert( var_get_script_args.object == NULL );
    var_get_script_args.object = tmp_assign_source_1;

    tmp_import_globals_2 = ((PyModuleObject *)module_setuptools$command$install_scripts)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ((var_get_script_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_get_script_args,
            var_get_script_args.object
        );

    }
    if ((var_sys_executable.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_sys_executable,
            var_sys_executable.object
        );

    }
    if ((var_ei_cmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ei_cmd,
            var_ei_cmd.object
        );

    }
    if ((var_dist.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_dist,
            var_dist.object
        );

    }
    if ((var_bs_cmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_bs_cmd,
            var_bs_cmd.object
        );

    }
    if ((var_executable.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_executable,
            var_executable.object
        );

    }
    if ((var_is_wininst.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_is_wininst,
            var_is_wininst.object
        );

    }
    if ((var_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_args,
            var_args.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_self,
            par_self.object
        );

    }
    frame_function->f_lineno = 17;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_103022eda13ccee1e2398d2e272d0b01, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain_sys_executable_tuple, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_sys_executable );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 17;
        goto frame_exception_exit_1;
    }
    assert( var_sys_executable.object == NULL );
    var_sys_executable.object = tmp_assign_source_2;

    tmp_source_name_1 = par_self.object;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_run_command );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_plain_egg_info;
    frame_function->f_lineno = 19;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_1, tmp_call_arg_element_1 );
    Py_DECREF( tmp_called_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 19;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_self.object;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_distribution );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_scripts );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 20;
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
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain_orig );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 306211 ], 33, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_install_scripts );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_run );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = par_self.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 21;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_2, tmp_call_arg_element_2 );
    Py_DECREF( tmp_called_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 21;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    tmp_assattr_name_1 = PyList_New( 0 );
    tmp_assattr_target_1 = par_self.object;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 23;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_outfiles, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        frame_function->f_lineno = 23;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    branch_end_1:;
    tmp_source_name_6 = par_self.object;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_no_ep );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        frame_function->f_lineno = 24;
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_7 = par_self.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_get_finalized_command );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = const_str_plain_egg_info;
    frame_function->f_lineno = 28;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 28;
        goto frame_exception_exit_1;
    }
    assert( var_ei_cmd.object == NULL );
    var_ei_cmd.object = tmp_assign_source_3;

    tmp_called_4 = GET_STRING_DICT_VALUE( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain_Distribution );

    if (unlikely( tmp_called_4 == NULL ))
    {
        tmp_called_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Distribution );
    }

    if ( tmp_called_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 96454 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = var_ei_cmd.object;

    tmp_call_arg_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_egg_base );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain_PathMetadata );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PathMetadata );
    }

    if ( tmp_called_5 == NULL )
    {
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 225849 ], 41, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 30;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = var_ei_cmd.object;

    tmp_call_arg_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_egg_base );
    if ( tmp_call_arg_element_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = var_ei_cmd.object;

    tmp_call_arg_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_egg_info );
    if ( tmp_call_arg_element_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_6 );

        frame_function->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 30;
    tmp_call_arg_element_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_5, tmp_call_arg_element_6, tmp_call_arg_element_7 );
    Py_DECREF( tmp_call_arg_element_6 );
    Py_DECREF( tmp_call_arg_element_7 );
    if ( tmp_call_arg_element_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_4 );

        frame_function->f_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = var_ei_cmd.object;

    tmp_call_arg_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_egg_name );
    if ( tmp_call_arg_element_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_5 );

        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = var_ei_cmd.object;

    tmp_call_arg_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_egg_version );
    if ( tmp_call_arg_element_9 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_call_arg_element_4 );
        Py_DECREF( tmp_call_arg_element_5 );
        Py_DECREF( tmp_call_arg_element_8 );

        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 31;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS4( tmp_called_4, tmp_call_arg_element_4, tmp_call_arg_element_5, tmp_call_arg_element_8, tmp_call_arg_element_9 );
    Py_DECREF( tmp_call_arg_element_4 );
    Py_DECREF( tmp_call_arg_element_5 );
    Py_DECREF( tmp_call_arg_element_8 );
    Py_DECREF( tmp_call_arg_element_9 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 31;
        goto frame_exception_exit_1;
    }
    assert( var_dist.object == NULL );
    var_dist.object = tmp_assign_source_4;

    tmp_source_name_13 = par_self.object;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 33;
        goto frame_exception_exit_1;
    }

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_get_finalized_command );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_10 = const_str_plain_build_scripts;
    frame_function->f_lineno = 33;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_10 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 33;
        goto frame_exception_exit_1;
    }
    assert( var_bs_cmd.object == NULL );
    var_bs_cmd.object = tmp_assign_source_5;

    tmp_getattr_target_1 = var_bs_cmd.object;

    tmp_getattr_attr_1 = const_str_plain_executable;
    tmp_getattr_default_1 = var_sys_executable.object;

    tmp_assign_source_6 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 34;
        goto frame_exception_exit_1;
    }
    assert( var_executable.object == NULL );
    var_executable.object = tmp_assign_source_6;

    tmp_source_name_14 = par_self.object;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_get_finalized_command );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_11 = const_str_plain_bdist_wininst;
    frame_function->f_lineno = 36;
    tmp_getattr_target_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_7, tmp_call_arg_element_11 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_getattr_target_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_getattr_attr_2 = const_str_plain__is_running;
    tmp_getattr_default_2 = Py_False;
    tmp_assign_source_7 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    Py_DECREF( tmp_getattr_target_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 35;
        goto frame_exception_exit_1;
    }
    assert( var_is_wininst.object == NULL );
    var_is_wininst.object = tmp_assign_source_7;

    tmp_called_8 = var_get_script_args.object;

    tmp_call_arg_element_12 = var_dist.object;

    tmp_call_arg_element_13 = var_executable.object;

    tmp_call_arg_element_14 = var_is_wininst.object;

    frame_function->f_lineno = 38;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_8, tmp_call_arg_element_12, tmp_call_arg_element_13, tmp_call_arg_element_14 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 38;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator.object == NULL );
    tmp_for_loop_1__for_iterator.object = tmp_assign_source_8;

    // Tried code
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator.object;

    tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
    if (tmp_assign_source_9 == NULL)
    {
        if ( !ERROR_OCCURED() || HAS_STOP_ITERATION_OCCURED() )
        {

    goto loop_end_1;

        }
        else
        {

            PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        frame_function->f_lineno = 38;
            goto try_finally_handler_1;
        }
    }

    if (tmp_for_loop_1__iter_value.object == NULL)
    {
        tmp_for_loop_1__iter_value.object = tmp_assign_source_9;
    }
    else
    {
        PyObject *old = tmp_for_loop_1__iter_value.object;
        tmp_for_loop_1__iter_value.object = tmp_assign_source_9;
        Py_DECREF( old );
    }
    tmp_assign_source_10 = tmp_for_loop_1__iter_value.object;

    if (var_args.object == NULL)
    {
        var_args.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
    }
    else
    {
        PyObject *old = var_args.object;
        var_args.object = INCREASE_REFCOUNT( tmp_assign_source_10 );
        Py_DECREF( old );
    }
    tmp_source_name_15 = par_self.object;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 39;
        goto try_finally_handler_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_write_script );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
        goto try_finally_handler_1;
    }
    tmp_dircall_arg2_1 = var_args.object;

    tmp_unused = impl_function_3_complex_call_helper_star_list_of_module___internal__( tmp_dircall_arg1_1, INCREASE_REFCOUNT( tmp_dircall_arg2_1 ) );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 39;
        goto try_finally_handler_1;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 38;
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
    if ((var_get_script_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_get_script_args,
            var_get_script_args.object
        );

    }
    if ((var_sys_executable.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_sys_executable,
            var_sys_executable.object
        );

    }
    if ((var_ei_cmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ei_cmd,
            var_ei_cmd.object
        );

    }
    if ((var_dist.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_dist,
            var_dist.object
        );

    }
    if ((var_bs_cmd.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_bs_cmd,
            var_bs_cmd.object
        );

    }
    if ((var_executable.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_executable,
            var_executable.object
        );

    }
    if ((var_is_wininst.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_is_wininst,
            var_is_wininst.object
        );

    }
    if ((var_args.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_args,
            var_args.object
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
static PyObject *fparse_function_2_run_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_2_run_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_run_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1 )
    {
        return impl_function_2_run_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_run_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_write_script_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_script_name, PyObject *_python_par_contents, PyObject *_python_par_mode, PyObject *_python_par_ignored )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable par_self; par_self.object = _python_par_self;
    PyObjectLocalVariable par_script_name; par_script_name.object = _python_par_script_name;
    PyObjectLocalVariable par_contents; par_contents.object = _python_par_contents;
    PyObjectLocalVariable par_mode; par_mode.object = _python_par_mode;
    PyObjectLocalVariable par_ignored; par_ignored.object = _python_par_ignored;
    PyObjectLocalVariable var_chmod;
    PyObjectLocalVariable var_current_umask;
    PyObjectLocalVariable var_target;
    PyObjectLocalVariable var_mask;
    PyObjectLocalVariable var_f;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
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
    PyObject *tmp_call_arg_element_6;
    PyObject *tmp_call_arg_element_7;
    PyObject *tmp_call_arg_element_8;
    PyObject *tmp_call_arg_element_9;
    PyObject *tmp_call_arg_element_10;
    PyObject *tmp_called_1;
    PyObject *tmp_called_2;
    PyObject *tmp_called_3;
    PyObject *tmp_called_4;
    PyObject *tmp_called_5;
    PyObject *tmp_called_6;
    PyObject *tmp_called_7;
    PyObject *tmp_called_8;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    tmp_return_value = NULL;

    // Actual function code.
    static PyFrameObject *cache_frame_function = NULL;
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fe69a422066e69b3463776d2e0dc90fb, module_setuptools$command$install_scripts );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_setuptools$command$install_scripts)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ((var_chmod.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_chmod,
            var_chmod.object
        );

    }
    if ((var_current_umask.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_current_umask,
            var_current_umask.object
        );

    }
    if ((var_target.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_target,
            var_target.object
        );

    }
    if ((var_mask.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_mask,
            var_mask.object
        );

    }
    if ((var_f.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_f,
            var_f.object
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
    if ((par_script_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_script_name,
            par_script_name.object
        );

    }
    if ((par_contents.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_contents,
            par_contents.object
        );

    }
    if ((par_mode.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_mode,
            par_mode.object
        );

    }
    if ((par_ignored.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_ignored,
            par_ignored.object
        );

    }
    frame_function->f_lineno = 43;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_103022eda13ccee1e2398d2e272d0b01, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_chmod_str_plain_current_umask_tuple, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_chmod );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    assert( var_chmod.object == NULL );
    var_chmod.object = tmp_assign_source_1;

    tmp_import_globals_2 = ((PyModuleObject *)module_setuptools$command$install_scripts)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ((var_chmod.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_chmod,
            var_chmod.object
        );

    }
    if ((var_current_umask.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_current_umask,
            var_current_umask.object
        );

    }
    if ((var_target.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_target,
            var_target.object
        );

    }
    if ((var_mask.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_mask,
            var_mask.object
        );

    }
    if ((var_f.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_f,
            var_f.object
        );

    }
    if ((par_self.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_self,
            par_self.object
        );

    }
    if ((par_script_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_script_name,
            par_script_name.object
        );

    }
    if ((par_contents.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_contents,
            par_contents.object
        );

    }
    if ((par_mode.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_mode,
            par_mode.object
        );

    }
    if ((par_ignored.object != NULL))
    {
        PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_ignored,
            par_ignored.object
        );

    }
    frame_function->f_lineno = 43;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_103022eda13ccee1e2398d2e272d0b01, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain_chmod_str_plain_current_umask_tuple, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_current_umask );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 43;
        goto frame_exception_exit_1;
    }
    assert( var_current_umask.object == NULL );
    var_current_umask.object = tmp_assign_source_2;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain_log );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 3847 ], 32, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }

    tmp_called_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_info );
    if ( tmp_called_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = const_str_digest_7b5b7df082b1cf5d6af5ec29c129f664;
    tmp_call_arg_element_2 = par_script_name.object;

    if ( tmp_call_arg_element_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 220820 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_self.object;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_1 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_install_dir );
    if ( tmp_call_arg_element_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_1 );

        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 45;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    Py_DECREF( tmp_called_1 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 45;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 6460 ], 31, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    tmp_called_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self.object;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_install_dir );
    if ( tmp_call_arg_element_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_called_2 );

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_5 = par_script_name.object;

    if ( tmp_call_arg_element_5 == NULL )
    {
        Py_DECREF( tmp_called_2 );
        Py_DECREF( tmp_call_arg_element_4 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 220820 ], 57, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 46;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_2, tmp_call_arg_element_4, tmp_call_arg_element_5 );
    Py_DECREF( tmp_called_2 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 46;
        goto frame_exception_exit_1;
    }
    assert( var_target.object == NULL );
    var_target.object = tmp_assign_source_3;

    tmp_source_name_7 = par_self.object;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_outfiles );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_called_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_6 = var_target.object;

    frame_function->f_lineno = 47;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_3, tmp_call_arg_element_6 );
    Py_DECREF( tmp_called_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 47;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_4 = var_current_umask.object;

    frame_function->f_lineno = 49;
    tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 49;
        goto frame_exception_exit_1;
    }
    assert( var_mask.object == NULL );
    var_mask.object = tmp_assign_source_4;

    tmp_source_name_8 = par_self.object;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 50 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dry_run );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        frame_function->f_lineno = 50;
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
    tmp_called_5 = GET_STRING_DICT_VALUE( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain_ensure_directory );

    if (unlikely( tmp_called_5 == NULL ))
    {
        tmp_called_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ensure_directory );
    }

    if ( tmp_called_5 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 304131 ], 45, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_call_arg_element_7 = var_target.object;

    frame_function->f_lineno = 51;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_5, tmp_call_arg_element_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 51;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_open_filename_1 = var_target.object;

    tmp_binop_left_1 = const_str_plain_w;
    tmp_binop_right_1 = par_mode.object;

    if ( tmp_binop_right_1 == NULL )
    {

        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 5156 ], 50, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_open_mode_1 = BINARY_OPERATION_ADD( tmp_binop_left_1, tmp_binop_right_1 );
    if ( tmp_open_mode_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL );
    Py_DECREF( tmp_open_mode_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 52;
        goto frame_exception_exit_1;
    }
    assert( var_f.object == NULL );
    var_f.object = tmp_assign_source_5;

    tmp_source_name_9 = var_f.object;

    tmp_called_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_write );
    if ( tmp_called_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_8 = par_contents.object;

    if ( tmp_call_arg_element_8 == NULL )
    {
        Py_DECREF( tmp_called_6 );
        exception_type = INCREASE_REFCOUNT( PyExc_UnboundLocalError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 306568 ], 54, 0 );
        exception_tb = NULL;

        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 53;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_6, tmp_call_arg_element_8 );
    Py_DECREF( tmp_called_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 53;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_10 = var_f.object;

    tmp_called_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_close );
    if ( tmp_called_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 54;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_7 );
    Py_DECREF( tmp_called_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 54;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_8 = var_chmod.object;

    tmp_call_arg_element_9 = var_target.object;

    tmp_binop_left_2 = const_int_pos_511;
    tmp_binop_right_2 = var_mask.object;

    tmp_call_arg_element_10 = BINARY_OPERATION_SUB( tmp_binop_left_2, tmp_binop_right_2 );
    if ( tmp_call_arg_element_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 55;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 55;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_8, tmp_call_arg_element_9, tmp_call_arg_element_10 );
    Py_DECREF( tmp_call_arg_element_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_function->f_lineno = 55;
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
    if ((var_chmod.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_chmod,
            var_chmod.object
        );

    }
    if ((var_current_umask.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_current_umask,
            var_current_umask.object
        );

    }
    if ((var_target.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_target,
            var_target.object
        );

    }
    if ((var_mask.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mask,
            var_mask.object
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
    if ((par_script_name.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_script_name,
            par_script_name.object
        );

    }
    if ((par_contents.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_contents,
            par_contents.object
        );

    }
    if ((par_mode.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_mode,
            par_mode.object
        );

    }
    if ((par_ignored.object != NULL))
    {
        PyDict_SetItem(
            tmp_frame_locals,
            const_str_plain_ignored,
            par_ignored.object
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
static PyObject *fparse_function_3_write_script_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_script_name = NULL;
    PyObject *_python_par_contents = NULL;
    PyObject *_python_par_mode = NULL;
    PyObject *_python_par_ignored = NULL;
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
                PyErr_Format( PyExc_TypeError, "write_script() keywords must be strings" );
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
            if ( found == false && const_str_plain_script_name == key )
            {
                assert( _python_par_script_name == NULL );
                _python_par_script_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_contents == key )
            {
                assert( _python_par_contents == NULL );
                _python_par_contents = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && const_str_plain_mode == key )
            {
                assert( _python_par_mode == NULL );
                _python_par_mode = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_script_name, key ) == 1 )
            {
                assert( _python_par_script_name == NULL );
                _python_par_script_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_contents, key ) == 1 )
            {
                assert( _python_par_contents == NULL );
                _python_par_contents = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ( const_str_plain_mode, key ) == 1 )
            {
                assert( _python_par_mode == NULL );
                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "write_script() got an unexpected keyword argument '%s'",
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
         if (unlikely( _python_par_script_name != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 1 );
             goto error_exit;
         }

        _python_par_script_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    else if ( _python_par_script_name == NULL )
    {
        if ( 1 + self->m_defaults_given >= 4  )
        {
            _python_par_script_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 1 - 4 ) );
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
         if (unlikely( _python_par_contents != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 2 );
             goto error_exit;
         }

        _python_par_contents = INCREASE_REFCOUNT( args[ 2 ] );
    }
    else if ( _python_par_contents == NULL )
    {
        if ( 2 + self->m_defaults_given >= 4  )
        {
            _python_par_contents = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 2 - 4 ) );
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
         if (unlikely( _python_par_mode != NULL ))
         {
             ERROR_MULTIPLE_VALUES( self, 3 );
             goto error_exit;
         }

        _python_par_mode = INCREASE_REFCOUNT( args[ 3 ] );
    }
    else if ( _python_par_mode == NULL )
    {
        if ( 3 + self->m_defaults_given >= 4  )
        {
            _python_par_mode = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, self->m_defaults_given + 3 - 4 ) );
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
    if (unlikely( _python_par_self == NULL || _python_par_script_name == NULL || _python_par_contents == NULL || _python_par_mode == NULL ))
    {
        PyObject *values[] = { _python_par_self, _python_par_script_name, _python_par_contents, _python_par_mode };
        ERROR_TOO_FEW_ARGUMENTS( self, values );

        goto error_exit;
    }
#endif

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 4 )
    {
        _python_par_ignored = PyTuple_New( args_size - 4 );

        for( Py_ssize_t i = 0; i < args_size - 4; i++ )
        {
           PyTuple_SET_ITEM( _python_par_ignored, i, INCREASE_REFCOUNT( args[4+i] ) );
        }
    }
    else
    {
        _python_par_ignored = INCREASE_REFCOUNT( const_tuple_empty );
    }


    return impl_function_3_write_script_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( self, _python_par_self, _python_par_script_name, _python_par_contents, _python_par_mode, _python_par_ignored );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_script_name );
    Py_XDECREF( _python_par_contents );
    Py_XDECREF( _python_par_mode );
    Py_XDECREF( _python_par_ignored );

    return NULL;
}

static PyObject *dparse_function_3_write_script_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5 )
    {
        return impl_function_3_write_script_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), MAKE_TUPLE( &args[ 4 ], size > 4 ? size-4 : 0 ) );
    }
    else
    {
        PyObject *result = fparse_function_3_write_script_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_initialize_options_of_class_1_install_scripts_of_module_setuptools$command$install_scripts(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_initialize_options_of_class_1_install_scripts_of_module_setuptools$command$install_scripts,
        dparse_function_1_initialize_options_of_class_1_install_scripts_of_module_setuptools$command$install_scripts,
        const_str_plain_initialize_options,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_194910196c7658e735d5da4469c16dbe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_setuptools$command$install_scripts,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_run_of_class_1_install_scripts_of_module_setuptools$command$install_scripts(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_run_of_class_1_install_scripts_of_module_setuptools$command$install_scripts,
        dparse_function_2_run_of_class_1_install_scripts_of_module_setuptools$command$install_scripts,
        const_str_plain_run,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a6c11d5da39074784acc004434aa53e4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_setuptools$command$install_scripts,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_write_script_of_class_1_install_scripts_of_module_setuptools$command$install_scripts( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_write_script_of_class_1_install_scripts_of_module_setuptools$command$install_scripts,
        dparse_function_3_write_script_of_class_1_install_scripts_of_module_setuptools$command$install_scripts,
        const_str_plain_write_script,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e9bb25c33452227d41c89df16af7ad74,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_setuptools$command$install_scripts,
        const_str_digest_acde839b3a74e71657e6df97360768ff
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_setuptools$command$install_scripts =
{
    PyModuleDef_HEAD_INIT,
    "setuptools.command.install_scripts",   /* m_name */
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

MOD_INIT_DECL( setuptools$command$install_scripts )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_setuptools$command$install_scripts );
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

    // puts( "in initsetuptools$command$install_scripts" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_setuptools$command$install_scripts = Py_InitModule4(
        "setuptools.command.install_scripts",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_setuptools$command$install_scripts = PyModule_Create( &mdef_setuptools$command$install_scripts );
#endif

    moduledict_setuptools$command$install_scripts = (PyDictObject *)((PyModuleObject *)module_setuptools$command$install_scripts)->md_dict;

    assertObject( module_setuptools$command$install_scripts );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b38dba291325e482285250b5801624a9, module_setuptools$command$install_scripts );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_setuptools$command$install_scripts );

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
    PyObject *exception_type, *exception_value;
    PyTracebackObject *exception_tb;
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
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_called_1;
    PyObject *tmp_class_bases_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dget_dict_1;
    PyObject *tmp_dget_key_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_source_name_1;
    int tmp_tried_lineno_1;
    PyObject *tmp_tuple_element_1;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_517b220f89c8dbe7873e8df2d7ab4b55;
    UPDATE_STRING_DICT0( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    PyFrameObject *frame_module = MAKE_FRAME( codeobj_4cf9f28e48ef37d2940cd59e1123bffe, module_setuptools$command$install_scripts );

    // Push the new frame as the currently active one, and we should be exlusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_setuptools$command$install_scripts)->md_dict;
    frame_module->f_lineno = 1;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_distutils, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_log_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_log );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_setuptools$command$install_scripts)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_d87506db3aa0dccf93f34f597865c2bb, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_neg_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_import_name_from_2 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_command );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_install_scripts );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain_orig, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_setuptools$command$install_scripts)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_setuptools$command$install_scripts)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_pkg_resources, tmp_import_globals_4, tmp_import_globals_4, const_tuple_0cc16c0761b7e519c8bb75fff6ca21c9_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Distribution );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain_Distribution, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_setuptools$command$install_scripts)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_pkg_resources, tmp_import_globals_5, tmp_import_globals_5, const_tuple_0cc16c0761b7e519c8bb75fff6ca21c9_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_PathMetadata );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain_PathMetadata, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_setuptools$command$install_scripts)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_pkg_resources, tmp_import_globals_6, tmp_import_globals_6, const_tuple_0cc16c0761b7e519c8bb75fff6ca21c9_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_ensure_directory );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain_ensure_directory, tmp_assign_source_8 );
    // Tried code
    tmp_assign_source_9 = PyTuple_New( 1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain_orig );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_9 );
        exception_type = INCREASE_REFCOUNT( PyExc_NameError );
        exception_value = UNSTREAM_STRING( &constant_bin[ 306185 ], 26, 0 );
        exception_tb = NULL;

        frame_module->f_lineno = 8;
        goto try_finally_handler_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_install_scripts );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );
        Py_DECREF( tmp_assign_source_9 );

        frame_module->f_lineno = 8;
        goto try_finally_handler_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_9, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases.object == NULL );
    tmp_class_creation_1__bases.object = tmp_assign_source_9;

    tmp_assign_source_10 = impl_class_1_install_scripts_of_module_setuptools$command$install_scripts(  );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class_dict.object == NULL );
    tmp_class_creation_1__class_dict.object = tmp_assign_source_10;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict.object;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == -1 )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
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
    tmp_assign_source_11 = DICT_GET_ITEM( tmp_dget_dict_1, tmp_dget_key_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto try_finally_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_class_bases_1 = tmp_class_creation_1__bases.object;

    tmp_assign_source_11 = SELECT_METACLASS( tmp_class_bases_1, GET_STRING_DICT_VALUE( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass.object == NULL );
    tmp_class_creation_1__metaclass.object = tmp_assign_source_11;

    tmp_called_1 = tmp_class_creation_1__metaclass.object;

    tmp_call_arg_element_1 = const_str_plain_install_scripts;
    tmp_call_arg_element_2 = tmp_class_creation_1__bases.object;

    tmp_call_arg_element_3 = tmp_class_creation_1__class_dict.object;

    frame_module->f_lineno = 8;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_1, tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURED() );

        PyErr_Fetch( &exception_type, &exception_value, (PyObject **)&exception_tb );


        frame_module->f_lineno = 8;
        goto try_finally_handler_1;
    }
    assert( tmp_class_creation_1__class.object == NULL );
    tmp_class_creation_1__class.object = tmp_assign_source_12;

    tmp_assign_source_13 = tmp_class_creation_1__class.object;

    UPDATE_STRING_DICT0( moduledict_setuptools$command$install_scripts, (Nuitka_StringObject *)const_str_plain_install_scripts, tmp_assign_source_13 );
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

    return MOD_RETURN_VALUE( module_setuptools$command$install_scripts );
module_exception_exit:
    PyErr_Restore( exception_type, exception_value, (PyObject *)exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
