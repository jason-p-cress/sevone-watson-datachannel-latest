/* Generated code for Python module 'confluent_kafka.serialization'
 * created by Nuitka version 0.7.7
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_confluent_kafka$serialization" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_confluent_kafka$serialization;
PyDictObject *moduledict_confluent_kafka$serialization;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[69];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[69];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("confluent_kafka.serialization"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 69; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_confluent_kafka$serialization(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 69; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6e71c3ec3bbaa2a7f5d260fa68ddf2e6;
static PyCodeObject *codeobj_39c563d9ab09ac0ef7a04c62e67d45d6;
static PyCodeObject *codeobj_04427510ba32b8f430cbfac2ae906593;
static PyCodeObject *codeobj_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f;
static PyCodeObject *codeobj_cc9e8a24a809027a3e4c840ef23ddb9e;
static PyCodeObject *codeobj_64374cf6fe51441120fe36271bc6b438;
static PyCodeObject *codeobj_b701cf836601a9d9b073ec7999534daa;
static PyCodeObject *codeobj_2212cd2a0ed79ef2b35688e5ed0efcb5;
static PyCodeObject *codeobj_cae04b86294895bfe96b5335cf4f629a;
static PyCodeObject *codeobj_77f64c7ab4e2eaa1587d84410af01f67;
static PyCodeObject *codeobj_385a25b0e1612b7713ae282c28bbf3a5;
static PyCodeObject *codeobj_489640e9fbed52202fcaf1e4cd21aa95;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[22]; CHECK_OBJECT(module_filename_obj);
    codeobj_6e71c3ec3bbaa2a7f5d260fa68ddf2e6 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[61], NULL, NULL, 0, 0, 0);
    codeobj_39c563d9ab09ac0ef7a04c62e67d45d6 = MAKE_CODEOBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[62], NULL, 3, 0, 0);
    codeobj_04427510ba32b8f430cbfac2ae906593 = MAKE_CODEOBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[63], NULL, 3, 0, 0);
    codeobj_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f = MAKE_CODEOBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[63], NULL, 3, 0, 0);
    codeobj_cc9e8a24a809027a3e4c840ef23ddb9e = MAKE_CODEOBJECT(module_filename_obj, 344, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[63], NULL, 3, 0, 0);
    codeobj_64374cf6fe51441120fe36271bc6b438 = MAKE_CODEOBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[64], NULL, 3, 0, 0);
    codeobj_b701cf836601a9d9b073ec7999534daa = MAKE_CODEOBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[65], NULL, 3, 0, 0);
    codeobj_2212cd2a0ed79ef2b35688e5ed0efcb5 = MAKE_CODEOBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[65], NULL, 3, 0, 0);
    codeobj_cae04b86294895bfe96b5335cf4f629a = MAKE_CODEOBJECT(module_filename_obj, 390, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[65], NULL, 3, 0, 0);
    codeobj_77f64c7ab4e2eaa1587d84410af01f67 = MAKE_CODEOBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[66], NULL, 2, 0, 0);
    codeobj_385a25b0e1612b7713ae282c28bbf3a5 = MAKE_CODEOBJECT(module_filename_obj, 387, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[66], NULL, 2, 0, 0);
    codeobj_489640e9fbed52202fcaf1e4cd21aa95 = MAKE_CODEOBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[67], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__10___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__11___call__();


static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__1___init__();


static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__2___call__();


static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__3___call__();


static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__4___call__();


static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__5___call__();


static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__6___call__();


static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__7___call__();


static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__8___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__9___call__();


// The module function definitions.
static PyObject *impl_confluent_kafka$serialization$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_topic = python_pars[1];
    PyObject *par_field = python_pars[2];
    struct Nuitka_FrameObject *frame_489640e9fbed52202fcaf1e4cd21aa95;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_489640e9fbed52202fcaf1e4cd21aa95 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_489640e9fbed52202fcaf1e4cd21aa95)) {
        Py_XDECREF(cache_frame_489640e9fbed52202fcaf1e4cd21aa95);

#if _DEBUG_REFCOUNTS
        if (cache_frame_489640e9fbed52202fcaf1e4cd21aa95 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_489640e9fbed52202fcaf1e4cd21aa95 = MAKE_FUNCTION_FRAME(codeobj_489640e9fbed52202fcaf1e4cd21aa95, module_confluent_kafka$serialization, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_489640e9fbed52202fcaf1e4cd21aa95->m_type_description == NULL);
    frame_489640e9fbed52202fcaf1e4cd21aa95 = cache_frame_489640e9fbed52202fcaf1e4cd21aa95;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_489640e9fbed52202fcaf1e4cd21aa95);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_489640e9fbed52202fcaf1e4cd21aa95) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_topic);
        tmp_assattr_value_1 = par_topic;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_field);
        tmp_assattr_value_2 = par_field;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_489640e9fbed52202fcaf1e4cd21aa95);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_489640e9fbed52202fcaf1e4cd21aa95);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_489640e9fbed52202fcaf1e4cd21aa95, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_489640e9fbed52202fcaf1e4cd21aa95->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_489640e9fbed52202fcaf1e4cd21aa95, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_489640e9fbed52202fcaf1e4cd21aa95,
        type_description_1,
        par_self,
        par_topic,
        par_field
    );


    // Release cached frame if used for exception.
    if (frame_489640e9fbed52202fcaf1e4cd21aa95 == cache_frame_489640e9fbed52202fcaf1e4cd21aa95) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_489640e9fbed52202fcaf1e4cd21aa95);
        cache_frame_489640e9fbed52202fcaf1e4cd21aa95 = NULL;
    }

    assertFrameObject(frame_489640e9fbed52202fcaf1e4cd21aa95);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_topic);
    Py_DECREF(par_topic);
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_topic);
    Py_DECREF(par_topic);
    CHECK_OBJECT(par_field);
    Py_DECREF(par_field);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_confluent_kafka$serialization$$$function__2___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *par_ctx = python_pars[2];
    struct Nuitka_FrameObject *frame_39c563d9ab09ac0ef7a04c62e67d45d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_39c563d9ab09ac0ef7a04c62e67d45d6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_39c563d9ab09ac0ef7a04c62e67d45d6)) {
        Py_XDECREF(cache_frame_39c563d9ab09ac0ef7a04c62e67d45d6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_39c563d9ab09ac0ef7a04c62e67d45d6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_39c563d9ab09ac0ef7a04c62e67d45d6 = MAKE_FUNCTION_FRAME(codeobj_39c563d9ab09ac0ef7a04c62e67d45d6, module_confluent_kafka$serialization, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_39c563d9ab09ac0ef7a04c62e67d45d6->m_type_description == NULL);
    frame_39c563d9ab09ac0ef7a04c62e67d45d6 = cache_frame_39c563d9ab09ac0ef7a04c62e67d45d6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_39c563d9ab09ac0ef7a04c62e67d45d6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_39c563d9ab09ac0ef7a04c62e67d45d6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 125;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_39c563d9ab09ac0ef7a04c62e67d45d6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_39c563d9ab09ac0ef7a04c62e67d45d6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_39c563d9ab09ac0ef7a04c62e67d45d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_39c563d9ab09ac0ef7a04c62e67d45d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_39c563d9ab09ac0ef7a04c62e67d45d6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_39c563d9ab09ac0ef7a04c62e67d45d6,
        type_description_1,
        par_self,
        par_obj,
        par_ctx
    );


    // Release cached frame if used for exception.
    if (frame_39c563d9ab09ac0ef7a04c62e67d45d6 == cache_frame_39c563d9ab09ac0ef7a04c62e67d45d6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_39c563d9ab09ac0ef7a04c62e67d45d6);
        cache_frame_39c563d9ab09ac0ef7a04c62e67d45d6 = NULL;
    }

    assertFrameObject(frame_39c563d9ab09ac0ef7a04c62e67d45d6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_confluent_kafka$serialization$$$function__3___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_ctx = python_pars[2];
    struct Nuitka_FrameObject *frame_64374cf6fe51441120fe36271bc6b438;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_64374cf6fe51441120fe36271bc6b438 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_64374cf6fe51441120fe36271bc6b438)) {
        Py_XDECREF(cache_frame_64374cf6fe51441120fe36271bc6b438);

#if _DEBUG_REFCOUNTS
        if (cache_frame_64374cf6fe51441120fe36271bc6b438 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_64374cf6fe51441120fe36271bc6b438 = MAKE_FUNCTION_FRAME(codeobj_64374cf6fe51441120fe36271bc6b438, module_confluent_kafka$serialization, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_64374cf6fe51441120fe36271bc6b438->m_type_description == NULL);
    frame_64374cf6fe51441120fe36271bc6b438 = cache_frame_64374cf6fe51441120fe36271bc6b438;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_64374cf6fe51441120fe36271bc6b438);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_64374cf6fe51441120fe36271bc6b438) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 182;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_64374cf6fe51441120fe36271bc6b438);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_64374cf6fe51441120fe36271bc6b438);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_64374cf6fe51441120fe36271bc6b438, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_64374cf6fe51441120fe36271bc6b438->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_64374cf6fe51441120fe36271bc6b438, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_64374cf6fe51441120fe36271bc6b438,
        type_description_1,
        par_self,
        par_value,
        par_ctx
    );


    // Release cached frame if used for exception.
    if (frame_64374cf6fe51441120fe36271bc6b438 == cache_frame_64374cf6fe51441120fe36271bc6b438) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_64374cf6fe51441120fe36271bc6b438);
        cache_frame_64374cf6fe51441120fe36271bc6b438 = NULL;
    }

    assertFrameObject(frame_64374cf6fe51441120fe36271bc6b438);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_confluent_kafka$serialization$$$function__4___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *par_ctx = python_pars[2];
    PyObject *var_e = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_04427510ba32b8f430cbfac2ae906593;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_04427510ba32b8f430cbfac2ae906593 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_obj);
        tmp_cmp_expr_left_1 = par_obj;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_04427510ba32b8f430cbfac2ae906593)) {
        Py_XDECREF(cache_frame_04427510ba32b8f430cbfac2ae906593);

#if _DEBUG_REFCOUNTS
        if (cache_frame_04427510ba32b8f430cbfac2ae906593 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_04427510ba32b8f430cbfac2ae906593 = MAKE_FUNCTION_FRAME(codeobj_04427510ba32b8f430cbfac2ae906593, module_confluent_kafka$serialization, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_04427510ba32b8f430cbfac2ae906593->m_type_description == NULL);
    frame_04427510ba32b8f430cbfac2ae906593 = cache_frame_04427510ba32b8f430cbfac2ae906593;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_04427510ba32b8f430cbfac2ae906593);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_04427510ba32b8f430cbfac2ae906593) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = mod_consts[6];
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_2 = par_obj;
        frame_04427510ba32b8f430cbfac2ae906593->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[5],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_04427510ba32b8f430cbfac2ae906593);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_04427510ba32b8f430cbfac2ae906593, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_04427510ba32b8f430cbfac2ae906593, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[4]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_str_arg_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_e);
        tmp_str_arg_1 = var_e;
        tmp_args_element_value_3 = PyObject_Str(tmp_str_arg_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_04427510ba32b8f430cbfac2ae906593->m_frame.f_lineno = 217;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 217;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 214;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_04427510ba32b8f430cbfac2ae906593->m_frame) frame_04427510ba32b8f430cbfac2ae906593->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION(frame_04427510ba32b8f430cbfac2ae906593);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_04427510ba32b8f430cbfac2ae906593);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_04427510ba32b8f430cbfac2ae906593);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_04427510ba32b8f430cbfac2ae906593, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_04427510ba32b8f430cbfac2ae906593->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_04427510ba32b8f430cbfac2ae906593, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_04427510ba32b8f430cbfac2ae906593,
        type_description_1,
        par_self,
        par_obj,
        par_ctx,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_04427510ba32b8f430cbfac2ae906593 == cache_frame_04427510ba32b8f430cbfac2ae906593) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_04427510ba32b8f430cbfac2ae906593);
        cache_frame_04427510ba32b8f430cbfac2ae906593 = NULL;
    }

    assertFrameObject(frame_04427510ba32b8f430cbfac2ae906593);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_confluent_kafka$serialization$$$function__5___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_ctx = python_pars[2];
    PyObject *var_e = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_b701cf836601a9d9b073ec7999534daa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b701cf836601a9d9b073ec7999534daa = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_b701cf836601a9d9b073ec7999534daa)) {
        Py_XDECREF(cache_frame_b701cf836601a9d9b073ec7999534daa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b701cf836601a9d9b073ec7999534daa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b701cf836601a9d9b073ec7999534daa = MAKE_FUNCTION_FRAME(codeobj_b701cf836601a9d9b073ec7999534daa, module_confluent_kafka$serialization, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b701cf836601a9d9b073ec7999534daa->m_type_description == NULL);
    frame_b701cf836601a9d9b073ec7999534daa = cache_frame_b701cf836601a9d9b073ec7999534daa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b701cf836601a9d9b073ec7999534daa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b701cf836601a9d9b073ec7999534daa) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = mod_consts[6];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_b701cf836601a9d9b073ec7999534daa->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[10],
                call_args
            );
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[11];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_b701cf836601a9d9b073ec7999534daa);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_b701cf836601a9d9b073ec7999534daa, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_b701cf836601a9d9b073ec7999534daa, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[4]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_str_arg_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_e);
        tmp_str_arg_1 = var_e;
        tmp_args_element_value_3 = PyObject_Str(tmp_str_arg_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_b701cf836601a9d9b073ec7999534daa->m_frame.f_lineno = 251;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 251;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 248;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b701cf836601a9d9b073ec7999534daa->m_frame) frame_b701cf836601a9d9b073ec7999534daa->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION(frame_b701cf836601a9d9b073ec7999534daa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_b701cf836601a9d9b073ec7999534daa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_b701cf836601a9d9b073ec7999534daa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b701cf836601a9d9b073ec7999534daa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b701cf836601a9d9b073ec7999534daa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b701cf836601a9d9b073ec7999534daa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b701cf836601a9d9b073ec7999534daa,
        type_description_1,
        par_self,
        par_value,
        par_ctx,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_b701cf836601a9d9b073ec7999534daa == cache_frame_b701cf836601a9d9b073ec7999534daa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b701cf836601a9d9b073ec7999534daa);
        cache_frame_b701cf836601a9d9b073ec7999534daa = NULL;
    }

    assertFrameObject(frame_b701cf836601a9d9b073ec7999534daa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_confluent_kafka$serialization$$$function__6___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *par_ctx = python_pars[2];
    PyObject *var_e = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_obj);
        tmp_cmp_expr_left_1 = par_obj;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f)) {
        Py_XDECREF(cache_frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f = MAKE_FUNCTION_FRAME(codeobj_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f, module_confluent_kafka$serialization, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f->m_type_description == NULL);
    frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f = cache_frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = mod_consts[13];
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_2 = par_obj;
        frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f->m_frame.f_lineno = 286;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[5],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[4]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_str_arg_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_e);
        tmp_str_arg_1 = var_e;
        tmp_args_element_value_3 = PyObject_Str(tmp_str_arg_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f->m_frame.f_lineno = 288;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 288;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 285;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f->m_frame) frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION(frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f,
        type_description_1,
        par_self,
        par_obj,
        par_ctx,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f == cache_frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f);
        cache_frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f = NULL;
    }

    assertFrameObject(frame_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_confluent_kafka$serialization$$$function__7___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_ctx = python_pars[2];
    PyObject *var_e = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_2212cd2a0ed79ef2b35688e5ed0efcb5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2212cd2a0ed79ef2b35688e5ed0efcb5 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_2212cd2a0ed79ef2b35688e5ed0efcb5)) {
        Py_XDECREF(cache_frame_2212cd2a0ed79ef2b35688e5ed0efcb5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2212cd2a0ed79ef2b35688e5ed0efcb5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2212cd2a0ed79ef2b35688e5ed0efcb5 = MAKE_FUNCTION_FRAME(codeobj_2212cd2a0ed79ef2b35688e5ed0efcb5, module_confluent_kafka$serialization, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2212cd2a0ed79ef2b35688e5ed0efcb5->m_type_description == NULL);
    frame_2212cd2a0ed79ef2b35688e5ed0efcb5 = cache_frame_2212cd2a0ed79ef2b35688e5ed0efcb5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2212cd2a0ed79ef2b35688e5ed0efcb5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2212cd2a0ed79ef2b35688e5ed0efcb5) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = mod_consts[13];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_2212cd2a0ed79ef2b35688e5ed0efcb5->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[10],
                call_args
            );
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[11];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_2212cd2a0ed79ef2b35688e5ed0efcb5);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_2212cd2a0ed79ef2b35688e5ed0efcb5, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_2212cd2a0ed79ef2b35688e5ed0efcb5, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[4]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_str_arg_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_e);
        tmp_str_arg_1 = var_e;
        tmp_args_element_value_3 = PyObject_Str(tmp_str_arg_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2212cd2a0ed79ef2b35688e5ed0efcb5->m_frame.f_lineno = 322;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 322;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 319;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_2212cd2a0ed79ef2b35688e5ed0efcb5->m_frame) frame_2212cd2a0ed79ef2b35688e5ed0efcb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION(frame_2212cd2a0ed79ef2b35688e5ed0efcb5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_2212cd2a0ed79ef2b35688e5ed0efcb5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_2212cd2a0ed79ef2b35688e5ed0efcb5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2212cd2a0ed79ef2b35688e5ed0efcb5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2212cd2a0ed79ef2b35688e5ed0efcb5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2212cd2a0ed79ef2b35688e5ed0efcb5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2212cd2a0ed79ef2b35688e5ed0efcb5,
        type_description_1,
        par_self,
        par_value,
        par_ctx,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_2212cd2a0ed79ef2b35688e5ed0efcb5 == cache_frame_2212cd2a0ed79ef2b35688e5ed0efcb5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2212cd2a0ed79ef2b35688e5ed0efcb5);
        cache_frame_2212cd2a0ed79ef2b35688e5ed0efcb5 = NULL;
    }

    assertFrameObject(frame_2212cd2a0ed79ef2b35688e5ed0efcb5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_confluent_kafka$serialization$$$function__8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_codec = python_pars[1];
    struct Nuitka_FrameObject *frame_77f64c7ab4e2eaa1587d84410af01f67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_77f64c7ab4e2eaa1587d84410af01f67 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_77f64c7ab4e2eaa1587d84410af01f67)) {
        Py_XDECREF(cache_frame_77f64c7ab4e2eaa1587d84410af01f67);

#if _DEBUG_REFCOUNTS
        if (cache_frame_77f64c7ab4e2eaa1587d84410af01f67 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_77f64c7ab4e2eaa1587d84410af01f67 = MAKE_FUNCTION_FRAME(codeobj_77f64c7ab4e2eaa1587d84410af01f67, module_confluent_kafka$serialization, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_77f64c7ab4e2eaa1587d84410af01f67->m_type_description == NULL);
    frame_77f64c7ab4e2eaa1587d84410af01f67 = cache_frame_77f64c7ab4e2eaa1587d84410af01f67;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_77f64c7ab4e2eaa1587d84410af01f67);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_77f64c7ab4e2eaa1587d84410af01f67) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_codec);
        tmp_assattr_value_1 = par_codec;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[16], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_77f64c7ab4e2eaa1587d84410af01f67);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_77f64c7ab4e2eaa1587d84410af01f67);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_77f64c7ab4e2eaa1587d84410af01f67, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_77f64c7ab4e2eaa1587d84410af01f67->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_77f64c7ab4e2eaa1587d84410af01f67, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_77f64c7ab4e2eaa1587d84410af01f67,
        type_description_1,
        par_self,
        par_codec
    );


    // Release cached frame if used for exception.
    if (frame_77f64c7ab4e2eaa1587d84410af01f67 == cache_frame_77f64c7ab4e2eaa1587d84410af01f67) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_77f64c7ab4e2eaa1587d84410af01f67);
        cache_frame_77f64c7ab4e2eaa1587d84410af01f67 = NULL;
    }

    assertFrameObject(frame_77f64c7ab4e2eaa1587d84410af01f67);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_codec);
    Py_DECREF(par_codec);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_codec);
    Py_DECREF(par_codec);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_confluent_kafka$serialization$$$function__9___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *par_ctx = python_pars[2];
    PyObject *var_e = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_cc9e8a24a809027a3e4c840ef23ddb9e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_cc9e8a24a809027a3e4c840ef23ddb9e = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_obj);
        tmp_cmp_expr_left_1 = par_obj;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_cc9e8a24a809027a3e4c840ef23ddb9e)) {
        Py_XDECREF(cache_frame_cc9e8a24a809027a3e4c840ef23ddb9e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc9e8a24a809027a3e4c840ef23ddb9e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc9e8a24a809027a3e4c840ef23ddb9e = MAKE_FUNCTION_FRAME(codeobj_cc9e8a24a809027a3e4c840ef23ddb9e, module_confluent_kafka$serialization, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cc9e8a24a809027a3e4c840ef23ddb9e->m_type_description == NULL);
    frame_cc9e8a24a809027a3e4c840ef23ddb9e = cache_frame_cc9e8a24a809027a3e4c840ef23ddb9e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cc9e8a24a809027a3e4c840ef23ddb9e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cc9e8a24a809027a3e4c840ef23ddb9e) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_1 = par_obj;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 369;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_cc9e8a24a809027a3e4c840ef23ddb9e->m_frame.f_lineno = 369;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_cc9e8a24a809027a3e4c840ef23ddb9e);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_cc9e8a24a809027a3e4c840ef23ddb9e, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_cc9e8a24a809027a3e4c840ef23ddb9e, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[4]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_str_arg_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[8]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_e);
        tmp_str_arg_1 = var_e;
        tmp_args_element_value_2 = PyObject_Str(tmp_str_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_cc9e8a24a809027a3e4c840ef23ddb9e->m_frame.f_lineno = 371;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 371;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 368;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cc9e8a24a809027a3e4c840ef23ddb9e->m_frame) frame_cc9e8a24a809027a3e4c840ef23ddb9e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION(frame_cc9e8a24a809027a3e4c840ef23ddb9e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_cc9e8a24a809027a3e4c840ef23ddb9e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_cc9e8a24a809027a3e4c840ef23ddb9e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cc9e8a24a809027a3e4c840ef23ddb9e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc9e8a24a809027a3e4c840ef23ddb9e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc9e8a24a809027a3e4c840ef23ddb9e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc9e8a24a809027a3e4c840ef23ddb9e,
        type_description_1,
        par_self,
        par_obj,
        par_ctx,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_cc9e8a24a809027a3e4c840ef23ddb9e == cache_frame_cc9e8a24a809027a3e4c840ef23ddb9e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cc9e8a24a809027a3e4c840ef23ddb9e);
        cache_frame_cc9e8a24a809027a3e4c840ef23ddb9e = NULL;
    }

    assertFrameObject(frame_cc9e8a24a809027a3e4c840ef23ddb9e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_confluent_kafka$serialization$$$function__10___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_codec = python_pars[1];
    struct Nuitka_FrameObject *frame_385a25b0e1612b7713ae282c28bbf3a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_385a25b0e1612b7713ae282c28bbf3a5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_385a25b0e1612b7713ae282c28bbf3a5)) {
        Py_XDECREF(cache_frame_385a25b0e1612b7713ae282c28bbf3a5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_385a25b0e1612b7713ae282c28bbf3a5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_385a25b0e1612b7713ae282c28bbf3a5 = MAKE_FUNCTION_FRAME(codeobj_385a25b0e1612b7713ae282c28bbf3a5, module_confluent_kafka$serialization, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_385a25b0e1612b7713ae282c28bbf3a5->m_type_description == NULL);
    frame_385a25b0e1612b7713ae282c28bbf3a5 = cache_frame_385a25b0e1612b7713ae282c28bbf3a5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_385a25b0e1612b7713ae282c28bbf3a5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_385a25b0e1612b7713ae282c28bbf3a5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_codec);
        tmp_assattr_value_1 = par_codec;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[16], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_385a25b0e1612b7713ae282c28bbf3a5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_385a25b0e1612b7713ae282c28bbf3a5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_385a25b0e1612b7713ae282c28bbf3a5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_385a25b0e1612b7713ae282c28bbf3a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_385a25b0e1612b7713ae282c28bbf3a5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_385a25b0e1612b7713ae282c28bbf3a5,
        type_description_1,
        par_self,
        par_codec
    );


    // Release cached frame if used for exception.
    if (frame_385a25b0e1612b7713ae282c28bbf3a5 == cache_frame_385a25b0e1612b7713ae282c28bbf3a5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_385a25b0e1612b7713ae282c28bbf3a5);
        cache_frame_385a25b0e1612b7713ae282c28bbf3a5 = NULL;
    }

    assertFrameObject(frame_385a25b0e1612b7713ae282c28bbf3a5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_codec);
    Py_DECREF(par_codec);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_codec);
    Py_DECREF(par_codec);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_confluent_kafka$serialization$$$function__11___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_ctx = python_pars[2];
    PyObject *var_e = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_cae04b86294895bfe96b5335cf4f629a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_cae04b86294895bfe96b5335cf4f629a = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_cae04b86294895bfe96b5335cf4f629a)) {
        Py_XDECREF(cache_frame_cae04b86294895bfe96b5335cf4f629a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cae04b86294895bfe96b5335cf4f629a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cae04b86294895bfe96b5335cf4f629a = MAKE_FUNCTION_FRAME(codeobj_cae04b86294895bfe96b5335cf4f629a, module_confluent_kafka$serialization, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cae04b86294895bfe96b5335cf4f629a->m_type_description == NULL);
    frame_cae04b86294895bfe96b5335cf4f629a = cache_frame_cae04b86294895bfe96b5335cf4f629a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cae04b86294895bfe96b5335cf4f629a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cae04b86294895bfe96b5335cf4f629a) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 417;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_cae04b86294895bfe96b5335cf4f629a->m_frame.f_lineno = 417;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_cae04b86294895bfe96b5335cf4f629a);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_cae04b86294895bfe96b5335cf4f629a, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_cae04b86294895bfe96b5335cf4f629a, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[4]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_str_arg_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[8]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_e);
        tmp_str_arg_1 = var_e;
        tmp_args_element_value_2 = PyObject_Str(tmp_str_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_cae04b86294895bfe96b5335cf4f629a->m_frame.f_lineno = 419;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 419;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 416;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cae04b86294895bfe96b5335cf4f629a->m_frame) frame_cae04b86294895bfe96b5335cf4f629a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION(frame_cae04b86294895bfe96b5335cf4f629a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_cae04b86294895bfe96b5335cf4f629a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_cae04b86294895bfe96b5335cf4f629a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cae04b86294895bfe96b5335cf4f629a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cae04b86294895bfe96b5335cf4f629a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cae04b86294895bfe96b5335cf4f629a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cae04b86294895bfe96b5335cf4f629a,
        type_description_1,
        par_self,
        par_value,
        par_ctx,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_cae04b86294895bfe96b5335cf4f629a == cache_frame_cae04b86294895bfe96b5335cf4f629a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cae04b86294895bfe96b5335cf4f629a);
        cache_frame_cae04b86294895bfe96b5335cf4f629a = NULL;
    }

    assertFrameObject(frame_cae04b86294895bfe96b5335cf4f629a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__10___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$serialization$$$function__10___init__,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_385a25b0e1612b7713ae282c28bbf3a5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$serialization,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__11___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$serialization$$$function__11___call__,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cae04b86294895bfe96b5335cf4f629a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$serialization,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$serialization$$$function__1___init__,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_489640e9fbed52202fcaf1e4cd21aa95,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$serialization,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__2___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$serialization$$$function__2___call__,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_39c563d9ab09ac0ef7a04c62e67d45d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$serialization,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__3___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$serialization$$$function__3___call__,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_64374cf6fe51441120fe36271bc6b438,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$serialization,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__4___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$serialization$$$function__4___call__,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_04427510ba32b8f430cbfac2ae906593,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$serialization,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__5___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$serialization$$$function__5___call__,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b701cf836601a9d9b073ec7999534daa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$serialization,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__6___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$serialization$$$function__6___call__,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2cb4faffa8ec08ab5b2bd1b1e0cc2f1f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$serialization,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__7___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$serialization$$$function__7___call__,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2212cd2a0ed79ef2b35688e5ed0efcb5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$serialization,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__8___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$serialization$$$function__8___init__,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_77f64c7ab4e2eaa1587d84410af01f67,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$serialization,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$serialization$$$function__9___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$serialization$$$function__9___call__,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cc9e8a24a809027a3e4c840ef23ddb9e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$serialization,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_confluent_kafka$serialization[] = {
    impl_confluent_kafka$serialization$$$function__1___init__,
    impl_confluent_kafka$serialization$$$function__2___call__,
    impl_confluent_kafka$serialization$$$function__3___call__,
    impl_confluent_kafka$serialization$$$function__4___call__,
    impl_confluent_kafka$serialization$$$function__5___call__,
    impl_confluent_kafka$serialization$$$function__6___call__,
    impl_confluent_kafka$serialization$$$function__7___call__,
    impl_confluent_kafka$serialization$$$function__8___init__,
    impl_confluent_kafka$serialization$$$function__9___call__,
    impl_confluent_kafka$serialization$$$function__10___init__,
    impl_confluent_kafka$serialization$$$function__11___call__,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_confluent_kafka$serialization;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_confluent_kafka$serialization) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_confluent_kafka$serialization[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_confluent_kafka$serialization,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_confluent_kafka$serialization(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("confluent_kafka.serialization");

    // Store the module for future use.
    module_confluent_kafka$serialization = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIternext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("confluent_kafka.serialization: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("confluent_kafka.serialization: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("confluent_kafka.serialization: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initconfluent_kafka$serialization\n");

    moduledict_confluent_kafka$serialization = MODULE_DICT(module_confluent_kafka$serialization);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_confluent_kafka$serialization,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_confluent_kafka$serialization,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[68]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_confluent_kafka$serialization,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_confluent_kafka$serialization,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_confluent_kafka$serialization,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_confluent_kafka$serialization);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_confluent_kafka$serialization);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__class = NULL;
    PyObject *tmp_class_creation_10__class_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__class = NULL;
    PyObject *tmp_class_creation_11__class_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_5__class = NULL;
    PyObject *tmp_class_creation_5__class_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class = NULL;
    PyObject *tmp_class_creation_6__class_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class = NULL;
    PyObject *tmp_class_creation_7__class_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__class = NULL;
    PyObject *tmp_class_creation_8__class_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__class = NULL;
    PyObject *tmp_class_creation_9__class_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_locals_confluent_kafka$serialization$$$class__2_SerializationContext_48_key___init__ = NULL;
    PyObject *tmp_locals_confluent_kafka$serialization$$$class__4_Serializer_70_key___call__ = NULL;
    PyObject *tmp_locals_confluent_kafka$serialization$$$class__4_Serializer_70_key___slots__ = NULL;
    PyObject *tmp_locals_confluent_kafka$serialization$$$class__5_Deserializer_128_key___call__ = NULL;
    PyObject *tmp_locals_confluent_kafka$serialization$$$class__5_Deserializer_128_key___slots__ = NULL;
    PyObject *tmp_select_metaclass_10__base = NULL;
    PyObject *tmp_select_metaclass_11__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_6__base = NULL;
    PyObject *tmp_select_metaclass_7__base = NULL;
    PyObject *tmp_select_metaclass_8__base = NULL;
    PyObject *tmp_select_metaclass_9__base = NULL;
    struct Nuitka_FrameObject *frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *locals_confluent_kafka$serialization$$$class__3_SerializationError_65 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_confluent_kafka$serialization$$$class__6_DoubleSerializer_185 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_confluent_kafka$serialization$$$class__7_DoubleDeserializer_220 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_confluent_kafka$serialization$$$class__8_IntegerSerializer_254 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_confluent_kafka$serialization$$$class__9_IntegerDeserializer_291 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_confluent_kafka$serialization$$$class__10_StringSerializer_325 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_confluent_kafka$serialization$$$class__11_StringDeserializer_374 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY(mod_consts[24]);
        UPDATE_STRING_DICT1(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_3);
    }
    // Frame without reuse.
    frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6 = MAKE_MODULE_FRAME(codeobj_6e71c3ec3bbaa2a7f5d260fa68ddf2e6, module_confluent_kafka$serialization);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6);
    assert(Py_REFCNT(frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_dictset_value = Nuitka_Loader_New(loader_entry);
        tmp_dictset_dict = Nuitka_SysGetObject("path_importer_cache");
        if (tmp_dictset_dict == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_subscript_value_1 = mod_consts[11];
        tmp_dictset_key = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        tmp_name_value_1 = mod_consts[26];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_confluent_kafka$serialization;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6->m_frame.f_lineno = 18;
        tmp_assign_source_4 = IMPORT_MODULE4(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        tmp_name_value_2 = mod_consts[27];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_confluent_kafka$serialization;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[28];
        frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6->m_frame.f_lineno = 19;
        tmp_import_name_from_1 = IMPORT_MODULE4(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[29]);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = LIST_COPY(mod_consts[30]);
        UPDATE_STRING_DICT1(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = PyDict_Copy(mod_consts[32]);
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        tmp_key_value_1 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_dict;
        tmp_key_value_2 = mod_consts[33];
        tmp_assign_source_8 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_assign_source_8 == NULL) {
            tmp_assign_source_8 = Py_None;
        }
        assert(!(tmp_assign_source_8 == NULL));
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_8 = (PyObject *)&PyType_Type;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        Py_INCREF(tmp_assign_source_8);
        tmp_class_creation_1__metaclass = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_value_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_value_1 = mod_consts[34];
        tmp_args_element_value_2 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_value_3 = tmp_class_creation_1__class_dict;
        frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_9;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_dict);
    Py_DECREF(tmp_class_creation_1__class_dict);
    tmp_class_creation_1__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_10 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_10);
    }
    CHECK_OBJECT(tmp_class_creation_1__class);
    Py_DECREF(tmp_class_creation_1__class);
    tmp_class_creation_1__class = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_dict);
    Py_DECREF(tmp_class_creation_1__class_dict);
    tmp_class_creation_1__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    {
        PyObject *tmp_assign_source_11;
        {
            PyObject *tmp_assign_source_12;


            tmp_assign_source_12 = MAKE_FUNCTION_confluent_kafka$serialization$$$function__1___init__();

            assert(tmp_locals_confluent_kafka$serialization$$$class__2_SerializationContext_48_key___init__ == NULL);
            tmp_locals_confluent_kafka$serialization$$$class__2_SerializationContext_48_key___init__ = tmp_assign_source_12;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_dict_value_1 = mod_consts[37];
            tmp_dict_key_1 = mod_consts[38];
            tmp_assign_source_11 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_value_1 = mod_consts[39];
            tmp_dict_key_1 = mod_consts[21];
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_confluent_kafka$serialization$$$class__2_SerializationContext_48_key___init__);
            tmp_dict_value_1 = tmp_locals_confluent_kafka$serialization$$$class__2_SerializationContext_48_key___init__;
            tmp_dict_key_1 = mod_consts[36];
            tmp_res = PyDict_SetItem(tmp_assign_source_11, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_locals_confluent_kafka$serialization$$$class__2_SerializationContext_48_key___init__);
        Py_DECREF(tmp_locals_confluent_kafka$serialization$$$class__2_SerializationContext_48_key___init__);
        tmp_locals_confluent_kafka$serialization$$$class__2_SerializationContext_48_key___init__ = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        assert(tmp_class_creation_2__class_dict == NULL);
        tmp_class_creation_2__class_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_13;
        bool tmp_condition_result_2;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_key_value_4;
        tmp_key_value_3 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_2__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_dict_arg_value_4 = tmp_class_creation_2__class_dict;
        tmp_key_value_4 = mod_consts[33];
        tmp_assign_source_13 = DICT_GET_ITEM0(tmp_dict_arg_value_4, tmp_key_value_4);
        if (tmp_assign_source_13 == NULL) {
            tmp_assign_source_13 = Py_None;
        }
        assert(!(tmp_assign_source_13 == NULL));
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_13 = (PyObject *)&PyType_Type;
        condexpr_end_2:;
        assert(tmp_class_creation_2__metaclass == NULL);
        Py_INCREF(tmp_assign_source_13);
        tmp_class_creation_2__metaclass = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_called_value_2 = tmp_class_creation_2__metaclass;
        tmp_args_element_value_4 = mod_consts[40];
        tmp_args_element_value_5 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_args_element_value_6 = tmp_class_creation_2__class_dict;
        frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_2__class == NULL);
        tmp_class_creation_2__class = tmp_assign_source_14;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__class_dict);
    Py_DECREF(tmp_class_creation_2__class_dict);
    tmp_class_creation_2__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_assign_source_15 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_15);
    }
    CHECK_OBJECT(tmp_class_creation_2__class);
    Py_DECREF(tmp_class_creation_2__class);
    tmp_class_creation_2__class = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_dict);
    Py_DECREF(tmp_class_creation_2__class_dict);
    tmp_class_creation_2__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_4;
        }
        tmp_assign_source_16 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_16, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_confluent_kafka$serialization$$$class__3_SerializationError_65 = tmp_set_locals_1;
        }
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__3_SerializationError_65, mod_consts[38], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__3_SerializationError_65, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_17 = locals_confluent_kafka$serialization$$$class__3_SerializationError_65;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_confluent_kafka$serialization$$$class__3_SerializationError_65);
        locals_confluent_kafka$serialization$$$class__3_SerializationError_65 = NULL;
        goto outline_result_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        assert(tmp_class_creation_3__class_dict == NULL);
        tmp_class_creation_3__class_dict = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_5;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_dict_arg_value_6;
        PyObject *tmp_key_value_6;
        tmp_key_value_5 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_3__class_dict);
        tmp_dict_arg_value_5 = tmp_class_creation_3__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_5, tmp_key_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__class_dict);
        tmp_dict_arg_value_6 = tmp_class_creation_3__class_dict;
        tmp_key_value_6 = mod_consts[33];
        tmp_assign_source_18 = DICT_GET_ITEM0(tmp_dict_arg_value_6, tmp_key_value_6);
        if (tmp_assign_source_18 == NULL) {
            tmp_assign_source_18 = Py_None;
        }
        assert(!(tmp_assign_source_18 == NULL));
        Py_INCREF(tmp_assign_source_18);
        goto condexpr_end_3;
        condexpr_false_3:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_expression_value_2 = tmp_class_creation_3__bases;
            tmp_subscript_value_2 = mod_consts[11];
            tmp_assign_source_19 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto try_except_handler_4;
            }
            assert(tmp_select_metaclass_3__base == NULL);
            tmp_select_metaclass_3__base = tmp_assign_source_19;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(tmp_select_metaclass_3__base);
            tmp_expression_value_3 = tmp_select_metaclass_3__base;
            tmp_assign_source_18 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_3);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto try_except_handler_7;
            }
            goto try_return_handler_6;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);
            CHECK_OBJECT(tmp_select_metaclass_3__base);
            tmp_type_arg_1 = tmp_select_metaclass_3__base;
            tmp_assign_source_18 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_18 == NULL));
            goto try_return_handler_6;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_select_metaclass_3__base);
        Py_DECREF(tmp_select_metaclass_3__base);
        tmp_select_metaclass_3__base = NULL;
        goto outline_result_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_3:;
        condexpr_end_3:;
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_called_value_3 = tmp_class_creation_3__metaclass;
        tmp_args_element_value_7 = mod_consts[8];
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_args_element_value_8 = tmp_class_creation_3__bases;
        CHECK_OBJECT(tmp_class_creation_3__class_dict);
        tmp_args_element_value_9 = tmp_class_creation_3__class_dict;
        frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_3__class == NULL);
        tmp_class_creation_3__class = tmp_assign_source_20;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_dict);
    tmp_class_creation_3__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_class_creation_3__class);
        tmp_assign_source_21 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_21);
    }
    CHECK_OBJECT(tmp_class_creation_3__class);
    Py_DECREF(tmp_class_creation_3__class);
    tmp_class_creation_3__class = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_dict);
    Py_DECREF(tmp_class_creation_3__class_dict);
    tmp_class_creation_3__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = PyList_New(0);
            assert(tmp_locals_confluent_kafka$serialization$$$class__4_Serializer_70_key___slots__ == NULL);
            tmp_locals_confluent_kafka$serialization$$$class__4_Serializer_70_key___slots__ = tmp_assign_source_23;
        }
        {
            PyObject *tmp_assign_source_24;


            tmp_assign_source_24 = MAKE_FUNCTION_confluent_kafka$serialization$$$function__2___call__();

            assert(tmp_locals_confluent_kafka$serialization$$$class__4_Serializer_70_key___call__ == NULL);
            tmp_locals_confluent_kafka$serialization$$$class__4_Serializer_70_key___call__ = tmp_assign_source_24;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_dict_value_2 = mod_consts[37];
            tmp_dict_key_2 = mod_consts[38];
            tmp_assign_source_22 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_value_2 = mod_consts[43];
            tmp_dict_key_2 = mod_consts[21];
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_confluent_kafka$serialization$$$class__4_Serializer_70_key___slots__);
            tmp_dict_value_2 = tmp_locals_confluent_kafka$serialization$$$class__4_Serializer_70_key___slots__;
            tmp_dict_key_2 = mod_consts[44];
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_confluent_kafka$serialization$$$class__4_Serializer_70_key___call__);
            tmp_dict_value_2 = tmp_locals_confluent_kafka$serialization$$$class__4_Serializer_70_key___call__;
            tmp_dict_key_2 = mod_consts[42];
            tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            goto try_return_handler_8;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_locals_confluent_kafka$serialization$$$class__4_Serializer_70_key___slots__);
        Py_DECREF(tmp_locals_confluent_kafka$serialization$$$class__4_Serializer_70_key___slots__);
        tmp_locals_confluent_kafka$serialization$$$class__4_Serializer_70_key___slots__ = NULL;
        CHECK_OBJECT(tmp_locals_confluent_kafka$serialization$$$class__4_Serializer_70_key___call__);
        Py_DECREF(tmp_locals_confluent_kafka$serialization$$$class__4_Serializer_70_key___call__);
        tmp_locals_confluent_kafka$serialization$$$class__4_Serializer_70_key___call__ = NULL;
        goto outline_result_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_4:;
        assert(tmp_class_creation_4__class_dict == NULL);
        tmp_class_creation_4__class_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_25;
        bool tmp_condition_result_4;
        PyObject *tmp_key_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        tmp_key_value_7 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_4__class_dict);
        tmp_dict_arg_value_7 = tmp_class_creation_4__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_7, tmp_key_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__class_dict);
        tmp_dict_arg_value_8 = tmp_class_creation_4__class_dict;
        tmp_key_value_8 = mod_consts[33];
        tmp_assign_source_25 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_assign_source_25 == NULL) {
            tmp_assign_source_25 = Py_None;
        }
        assert(!(tmp_assign_source_25 == NULL));
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_assign_source_25 = (PyObject *)&PyType_Type;
        condexpr_end_4:;
        assert(tmp_class_creation_4__metaclass == NULL);
        Py_INCREF(tmp_assign_source_25);
        tmp_class_creation_4__metaclass = tmp_assign_source_25;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_called_value_4 = tmp_class_creation_4__metaclass;
        tmp_args_element_value_10 = mod_consts[45];
        tmp_args_element_value_11 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_4__class_dict);
        tmp_args_element_value_12 = tmp_class_creation_4__class_dict;
        frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_4__class == NULL);
        tmp_class_creation_4__class = tmp_assign_source_26;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_4__class_dict);
    Py_DECREF(tmp_class_creation_4__class_dict);
    tmp_class_creation_4__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_class_creation_4__class);
        tmp_assign_source_27 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_27);
    }
    CHECK_OBJECT(tmp_class_creation_4__class);
    Py_DECREF(tmp_class_creation_4__class);
    tmp_class_creation_4__class = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_dict);
    Py_DECREF(tmp_class_creation_4__class_dict);
    tmp_class_creation_4__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = PyList_New(0);
            assert(tmp_locals_confluent_kafka$serialization$$$class__5_Deserializer_128_key___slots__ == NULL);
            tmp_locals_confluent_kafka$serialization$$$class__5_Deserializer_128_key___slots__ = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;


            tmp_assign_source_30 = MAKE_FUNCTION_confluent_kafka$serialization$$$function__3___call__();

            assert(tmp_locals_confluent_kafka$serialization$$$class__5_Deserializer_128_key___call__ == NULL);
            tmp_locals_confluent_kafka$serialization$$$class__5_Deserializer_128_key___call__ = tmp_assign_source_30;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_value_3 = mod_consts[37];
            tmp_dict_key_3 = mod_consts[38];
            tmp_assign_source_28 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_assign_source_28, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_value_3 = mod_consts[46];
            tmp_dict_key_3 = mod_consts[21];
            tmp_res = PyDict_SetItem(tmp_assign_source_28, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_confluent_kafka$serialization$$$class__5_Deserializer_128_key___slots__);
            tmp_dict_value_3 = tmp_locals_confluent_kafka$serialization$$$class__5_Deserializer_128_key___slots__;
            tmp_dict_key_3 = mod_consts[44];
            tmp_res = PyDict_SetItem(tmp_assign_source_28, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_confluent_kafka$serialization$$$class__5_Deserializer_128_key___call__);
            tmp_dict_value_3 = tmp_locals_confluent_kafka$serialization$$$class__5_Deserializer_128_key___call__;
            tmp_dict_key_3 = mod_consts[42];
            tmp_res = PyDict_SetItem(tmp_assign_source_28, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            goto try_return_handler_10;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(tmp_locals_confluent_kafka$serialization$$$class__5_Deserializer_128_key___slots__);
        Py_DECREF(tmp_locals_confluent_kafka$serialization$$$class__5_Deserializer_128_key___slots__);
        tmp_locals_confluent_kafka$serialization$$$class__5_Deserializer_128_key___slots__ = NULL;
        CHECK_OBJECT(tmp_locals_confluent_kafka$serialization$$$class__5_Deserializer_128_key___call__);
        Py_DECREF(tmp_locals_confluent_kafka$serialization$$$class__5_Deserializer_128_key___call__);
        tmp_locals_confluent_kafka$serialization$$$class__5_Deserializer_128_key___call__ = NULL;
        goto outline_result_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_5:;
        assert(tmp_class_creation_5__class_dict == NULL);
        tmp_class_creation_5__class_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_31;
        bool tmp_condition_result_5;
        PyObject *tmp_key_value_9;
        PyObject *tmp_dict_arg_value_9;
        PyObject *tmp_dict_arg_value_10;
        PyObject *tmp_key_value_10;
        tmp_key_value_9 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_5__class_dict);
        tmp_dict_arg_value_9 = tmp_class_creation_5__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_9, tmp_key_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__class_dict);
        tmp_dict_arg_value_10 = tmp_class_creation_5__class_dict;
        tmp_key_value_10 = mod_consts[33];
        tmp_assign_source_31 = DICT_GET_ITEM0(tmp_dict_arg_value_10, tmp_key_value_10);
        if (tmp_assign_source_31 == NULL) {
            tmp_assign_source_31 = Py_None;
        }
        assert(!(tmp_assign_source_31 == NULL));
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_assign_source_31 = (PyObject *)&PyType_Type;
        condexpr_end_5:;
        assert(tmp_class_creation_5__metaclass == NULL);
        Py_INCREF(tmp_assign_source_31);
        tmp_class_creation_5__metaclass = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_called_value_5 = tmp_class_creation_5__metaclass;
        tmp_args_element_value_13 = mod_consts[47];
        tmp_args_element_value_14 = mod_consts[35];
        CHECK_OBJECT(tmp_class_creation_5__class_dict);
        tmp_args_element_value_15 = tmp_class_creation_5__class_dict;
        frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_5__class == NULL);
        tmp_class_creation_5__class = tmp_assign_source_32;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_5__class_dict);
    Py_DECREF(tmp_class_creation_5__class_dict);
    tmp_class_creation_5__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_class_creation_5__class);
        tmp_assign_source_33 = tmp_class_creation_5__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_33);
    }
    CHECK_OBJECT(tmp_class_creation_5__class);
    Py_DECREF(tmp_class_creation_5__class);
    tmp_class_creation_5__class = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_dict);
    Py_DECREF(tmp_class_creation_5__class_dict);
    tmp_class_creation_5__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_12;
        }
        tmp_assign_source_34 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_34, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_confluent_kafka$serialization$$$class__6_DoubleSerializer_185 = tmp_set_locals_2;
        }
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__6_DoubleSerializer_185, mod_consts[38], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[48];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__6_DoubleSerializer_185, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_confluent_kafka$serialization$$$function__4___call__();

        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__6_DoubleSerializer_185, mod_consts[42], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_35 = locals_confluent_kafka$serialization$$$class__6_DoubleSerializer_185;
        Py_INCREF(tmp_assign_source_35);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_confluent_kafka$serialization$$$class__6_DoubleSerializer_185);
        locals_confluent_kafka$serialization$$$class__6_DoubleSerializer_185 = NULL;
        goto outline_result_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_6:;
        assert(tmp_class_creation_6__class_dict == NULL);
        tmp_class_creation_6__class_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        bool tmp_condition_result_6;
        PyObject *tmp_key_value_11;
        PyObject *tmp_dict_arg_value_11;
        PyObject *tmp_dict_arg_value_12;
        PyObject *tmp_key_value_12;
        tmp_key_value_11 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_6__class_dict);
        tmp_dict_arg_value_11 = tmp_class_creation_6__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_11, tmp_key_value_11);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__class_dict);
        tmp_dict_arg_value_12 = tmp_class_creation_6__class_dict;
        tmp_key_value_12 = mod_consts[33];
        tmp_assign_source_36 = DICT_GET_ITEM0(tmp_dict_arg_value_12, tmp_key_value_12);
        if (tmp_assign_source_36 == NULL) {
            tmp_assign_source_36 = Py_None;
        }
        assert(!(tmp_assign_source_36 == NULL));
        Py_INCREF(tmp_assign_source_36);
        goto condexpr_end_6;
        condexpr_false_6:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_3;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_expression_value_4 = tmp_class_creation_6__bases;
            tmp_subscript_value_3 = mod_consts[11];
            tmp_assign_source_37 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_3, 0);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto try_except_handler_12;
            }
            assert(tmp_select_metaclass_6__base == NULL);
            tmp_select_metaclass_6__base = tmp_assign_source_37;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_5;
            CHECK_OBJECT(tmp_select_metaclass_6__base);
            tmp_expression_value_5 = tmp_select_metaclass_6__base;
            tmp_assign_source_36 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_5);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;

                goto try_except_handler_15;
            }
            goto try_return_handler_14;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_2;
            Py_DECREF(exception_keeper_type_7);
            Py_XDECREF(exception_keeper_value_7);
            Py_XDECREF(exception_keeper_tb_7);
            CHECK_OBJECT(tmp_select_metaclass_6__base);
            tmp_type_arg_2 = tmp_select_metaclass_6__base;
            tmp_assign_source_36 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_assign_source_36 == NULL));
            goto try_return_handler_14;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(tmp_select_metaclass_6__base);
        Py_DECREF(tmp_select_metaclass_6__base);
        tmp_select_metaclass_6__base = NULL;
        goto outline_result_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_7:;
        condexpr_end_6:;
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_called_value_6 = tmp_class_creation_6__metaclass;
        tmp_args_element_value_16 = mod_consts[49];
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_args_element_value_17 = tmp_class_creation_6__bases;
        CHECK_OBJECT(tmp_class_creation_6__class_dict);
        tmp_args_element_value_18 = tmp_class_creation_6__class_dict;
        frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_6__class == NULL);
        tmp_class_creation_6__class = tmp_assign_source_38;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_dict);
    tmp_class_creation_6__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT(tmp_class_creation_6__class);
        tmp_assign_source_39 = tmp_class_creation_6__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_39);
    }
    CHECK_OBJECT(tmp_class_creation_6__class);
    Py_DECREF(tmp_class_creation_6__class);
    tmp_class_creation_6__class = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_dict);
    Py_DECREF(tmp_class_creation_6__class_dict);
    tmp_class_creation_6__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto try_except_handler_16;
        }
        tmp_assign_source_40 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_40, 0, tmp_tuple_element_3);
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_confluent_kafka$serialization$$$class__7_DoubleDeserializer_220 = tmp_set_locals_3;
        }
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__7_DoubleDeserializer_220, mod_consts[38], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__7_DoubleDeserializer_220, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_confluent_kafka$serialization$$$function__5___call__();

        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__7_DoubleDeserializer_220, mod_consts[42], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_41 = locals_confluent_kafka$serialization$$$class__7_DoubleDeserializer_220;
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_confluent_kafka$serialization$$$class__7_DoubleDeserializer_220);
        locals_confluent_kafka$serialization$$$class__7_DoubleDeserializer_220 = NULL;
        goto outline_result_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_8:;
        assert(tmp_class_creation_7__class_dict == NULL);
        tmp_class_creation_7__class_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        bool tmp_condition_result_7;
        PyObject *tmp_key_value_13;
        PyObject *tmp_dict_arg_value_13;
        PyObject *tmp_dict_arg_value_14;
        PyObject *tmp_key_value_14;
        tmp_key_value_13 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_7__class_dict);
        tmp_dict_arg_value_13 = tmp_class_creation_7__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_13, tmp_key_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__class_dict);
        tmp_dict_arg_value_14 = tmp_class_creation_7__class_dict;
        tmp_key_value_14 = mod_consts[33];
        tmp_assign_source_42 = DICT_GET_ITEM0(tmp_dict_arg_value_14, tmp_key_value_14);
        if (tmp_assign_source_42 == NULL) {
            tmp_assign_source_42 = Py_None;
        }
        assert(!(tmp_assign_source_42 == NULL));
        Py_INCREF(tmp_assign_source_42);
        goto condexpr_end_7;
        condexpr_false_7:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_4;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_expression_value_6 = tmp_class_creation_7__bases;
            tmp_subscript_value_4 = mod_consts[11];
            tmp_assign_source_43 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_4, 0);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto try_except_handler_16;
            }
            assert(tmp_select_metaclass_7__base == NULL);
            tmp_select_metaclass_7__base = tmp_assign_source_43;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_7;
            CHECK_OBJECT(tmp_select_metaclass_7__base);
            tmp_expression_value_7 = tmp_select_metaclass_7__base;
            tmp_assign_source_42 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_7);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto try_except_handler_19;
            }
            goto try_return_handler_18;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_3;
            Py_DECREF(exception_keeper_type_9);
            Py_XDECREF(exception_keeper_value_9);
            Py_XDECREF(exception_keeper_tb_9);
            CHECK_OBJECT(tmp_select_metaclass_7__base);
            tmp_type_arg_3 = tmp_select_metaclass_7__base;
            tmp_assign_source_42 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_assign_source_42 == NULL));
            goto try_return_handler_18;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(tmp_select_metaclass_7__base);
        Py_DECREF(tmp_select_metaclass_7__base);
        tmp_select_metaclass_7__base = NULL;
        goto outline_result_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_9:;
        condexpr_end_7:;
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_called_value_7 = tmp_class_creation_7__metaclass;
        tmp_args_element_value_19 = mod_consts[51];
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_args_element_value_20 = tmp_class_creation_7__bases;
        CHECK_OBJECT(tmp_class_creation_7__class_dict);
        tmp_args_element_value_21 = tmp_class_creation_7__class_dict;
        frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_7__class == NULL);
        tmp_class_creation_7__class = tmp_assign_source_44;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_dict);
    tmp_class_creation_7__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(tmp_class_creation_7__class);
        tmp_assign_source_45 = tmp_class_creation_7__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_45);
    }
    CHECK_OBJECT(tmp_class_creation_7__class);
    Py_DECREF(tmp_class_creation_7__class);
    tmp_class_creation_7__class = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_dict);
    Py_DECREF(tmp_class_creation_7__class_dict);
    tmp_class_creation_7__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto try_except_handler_20;
        }
        tmp_assign_source_46 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_46, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        {
            PyObject *tmp_set_locals_4;
            tmp_set_locals_4 = PyDict_New();
            locals_confluent_kafka$serialization$$$class__8_IntegerSerializer_254 = tmp_set_locals_4;
        }
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__8_IntegerSerializer_254, mod_consts[38], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__8_IntegerSerializer_254, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_confluent_kafka$serialization$$$function__6___call__();

        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__8_IntegerSerializer_254, mod_consts[42], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_47 = locals_confluent_kafka$serialization$$$class__8_IntegerSerializer_254;
        Py_INCREF(tmp_assign_source_47);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_confluent_kafka$serialization$$$class__8_IntegerSerializer_254);
        locals_confluent_kafka$serialization$$$class__8_IntegerSerializer_254 = NULL;
        goto outline_result_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_10:;
        assert(tmp_class_creation_8__class_dict == NULL);
        tmp_class_creation_8__class_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        bool tmp_condition_result_8;
        PyObject *tmp_key_value_15;
        PyObject *tmp_dict_arg_value_15;
        PyObject *tmp_dict_arg_value_16;
        PyObject *tmp_key_value_16;
        tmp_key_value_15 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_8__class_dict);
        tmp_dict_arg_value_15 = tmp_class_creation_8__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_15, tmp_key_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_8__class_dict);
        tmp_dict_arg_value_16 = tmp_class_creation_8__class_dict;
        tmp_key_value_16 = mod_consts[33];
        tmp_assign_source_48 = DICT_GET_ITEM0(tmp_dict_arg_value_16, tmp_key_value_16);
        if (tmp_assign_source_48 == NULL) {
            tmp_assign_source_48 = Py_None;
        }
        assert(!(tmp_assign_source_48 == NULL));
        Py_INCREF(tmp_assign_source_48);
        goto condexpr_end_8;
        condexpr_false_8:;
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_5;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_expression_value_8 = tmp_class_creation_8__bases;
            tmp_subscript_value_5 = mod_consts[11];
            tmp_assign_source_49 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_5, 0);
            if (tmp_assign_source_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto try_except_handler_20;
            }
            assert(tmp_select_metaclass_8__base == NULL);
            tmp_select_metaclass_8__base = tmp_assign_source_49;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_9;
            CHECK_OBJECT(tmp_select_metaclass_8__base);
            tmp_expression_value_9 = tmp_select_metaclass_8__base;
            tmp_assign_source_48 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_9);
            if (tmp_assign_source_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto try_except_handler_23;
            }
            goto try_return_handler_22;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_4;
            Py_DECREF(exception_keeper_type_11);
            Py_XDECREF(exception_keeper_value_11);
            Py_XDECREF(exception_keeper_tb_11);
            CHECK_OBJECT(tmp_select_metaclass_8__base);
            tmp_type_arg_4 = tmp_select_metaclass_8__base;
            tmp_assign_source_48 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_assign_source_48 == NULL));
            goto try_return_handler_22;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        CHECK_OBJECT(tmp_select_metaclass_8__base);
        Py_DECREF(tmp_select_metaclass_8__base);
        tmp_select_metaclass_8__base = NULL;
        goto outline_result_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_11:;
        condexpr_end_8:;
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_called_value_8 = tmp_class_creation_8__metaclass;
        tmp_args_element_value_22 = mod_consts[53];
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_args_element_value_23 = tmp_class_creation_8__bases;
        CHECK_OBJECT(tmp_class_creation_8__class_dict);
        tmp_args_element_value_24 = tmp_class_creation_8__class_dict;
        frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_assign_source_50 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_8__class == NULL);
        tmp_class_creation_8__class = tmp_assign_source_50;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_dict);
    tmp_class_creation_8__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    {
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_class_creation_8__class);
        tmp_assign_source_51 = tmp_class_creation_8__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_51);
    }
    CHECK_OBJECT(tmp_class_creation_8__class);
    Py_DECREF(tmp_class_creation_8__class);
    tmp_class_creation_8__class = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_dict);
    Py_DECREF(tmp_class_creation_8__class_dict);
    tmp_class_creation_8__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto try_except_handler_24;
        }
        tmp_assign_source_52 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_52, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        {
            PyObject *tmp_set_locals_5;
            tmp_set_locals_5 = PyDict_New();
            locals_confluent_kafka$serialization$$$class__9_IntegerDeserializer_291 = tmp_set_locals_5;
        }
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__9_IntegerDeserializer_291, mod_consts[38], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__9_IntegerDeserializer_291, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_confluent_kafka$serialization$$$function__7___call__();

        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__9_IntegerDeserializer_291, mod_consts[42], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_53 = locals_confluent_kafka$serialization$$$class__9_IntegerDeserializer_291;
        Py_INCREF(tmp_assign_source_53);
        goto try_return_handler_25;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF(locals_confluent_kafka$serialization$$$class__9_IntegerDeserializer_291);
        locals_confluent_kafka$serialization$$$class__9_IntegerDeserializer_291 = NULL;
        goto outline_result_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_12:;
        assert(tmp_class_creation_9__class_dict == NULL);
        tmp_class_creation_9__class_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        bool tmp_condition_result_9;
        PyObject *tmp_key_value_17;
        PyObject *tmp_dict_arg_value_17;
        PyObject *tmp_dict_arg_value_18;
        PyObject *tmp_key_value_18;
        tmp_key_value_17 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_9__class_dict);
        tmp_dict_arg_value_17 = tmp_class_creation_9__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_17, tmp_key_value_17);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_9__class_dict);
        tmp_dict_arg_value_18 = tmp_class_creation_9__class_dict;
        tmp_key_value_18 = mod_consts[33];
        tmp_assign_source_54 = DICT_GET_ITEM0(tmp_dict_arg_value_18, tmp_key_value_18);
        if (tmp_assign_source_54 == NULL) {
            tmp_assign_source_54 = Py_None;
        }
        assert(!(tmp_assign_source_54 == NULL));
        Py_INCREF(tmp_assign_source_54);
        goto condexpr_end_9;
        condexpr_false_9:;
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_6;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_expression_value_10 = tmp_class_creation_9__bases;
            tmp_subscript_value_6 = mod_consts[11];
            tmp_assign_source_55 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_6, 0);
            if (tmp_assign_source_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto try_except_handler_24;
            }
            assert(tmp_select_metaclass_9__base == NULL);
            tmp_select_metaclass_9__base = tmp_assign_source_55;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_11;
            CHECK_OBJECT(tmp_select_metaclass_9__base);
            tmp_expression_value_11 = tmp_select_metaclass_9__base;
            tmp_assign_source_54 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_11);
            if (tmp_assign_source_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto try_except_handler_27;
            }
            goto try_return_handler_26;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_5;
            Py_DECREF(exception_keeper_type_13);
            Py_XDECREF(exception_keeper_value_13);
            Py_XDECREF(exception_keeper_tb_13);
            CHECK_OBJECT(tmp_select_metaclass_9__base);
            tmp_type_arg_5 = tmp_select_metaclass_9__base;
            tmp_assign_source_54 = BUILTIN_TYPE1(tmp_type_arg_5);
            assert(!(tmp_assign_source_54 == NULL));
            goto try_return_handler_26;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT(tmp_select_metaclass_9__base);
        Py_DECREF(tmp_select_metaclass_9__base);
        tmp_select_metaclass_9__base = NULL;
        goto outline_result_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_13:;
        condexpr_end_9:;
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_called_value_9 = tmp_class_creation_9__metaclass;
        tmp_args_element_value_25 = mod_consts[55];
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_args_element_value_26 = tmp_class_creation_9__bases;
        CHECK_OBJECT(tmp_class_creation_9__class_dict);
        tmp_args_element_value_27 = tmp_class_creation_9__class_dict;
        frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto try_except_handler_24;
        }
        assert(tmp_class_creation_9__class == NULL);
        tmp_class_creation_9__class = tmp_assign_source_56;
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_dict);
    tmp_class_creation_9__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(tmp_class_creation_9__class);
        tmp_assign_source_57 = tmp_class_creation_9__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_57);
    }
    CHECK_OBJECT(tmp_class_creation_9__class);
    Py_DECREF(tmp_class_creation_9__class);
    tmp_class_creation_9__class = NULL;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_dict);
    Py_DECREF(tmp_class_creation_9__class_dict);
    tmp_class_creation_9__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_28;
        }
        tmp_assign_source_58 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_58, 0, tmp_tuple_element_6);
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        {
            PyObject *tmp_set_locals_6;
            tmp_set_locals_6 = PyDict_New();
            locals_confluent_kafka$serialization$$$class__10_StringSerializer_325 = tmp_set_locals_6;
        }
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__10_StringSerializer_325, mod_consts[38], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[56];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__10_StringSerializer_325, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[57];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_confluent_kafka$serialization$$$function__8___init__(tmp_defaults_1);

            tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__10_StringSerializer_325, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_confluent_kafka$serialization$$$function__9___call__();

        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__10_StringSerializer_325, mod_consts[42], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_59 = locals_confluent_kafka$serialization$$$class__10_StringSerializer_325;
        Py_INCREF(tmp_assign_source_59);
        goto try_return_handler_29;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        Py_DECREF(locals_confluent_kafka$serialization$$$class__10_StringSerializer_325);
        locals_confluent_kafka$serialization$$$class__10_StringSerializer_325 = NULL;
        goto outline_result_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_14:;
        assert(tmp_class_creation_10__class_dict == NULL);
        tmp_class_creation_10__class_dict = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        bool tmp_condition_result_10;
        PyObject *tmp_key_value_19;
        PyObject *tmp_dict_arg_value_19;
        PyObject *tmp_dict_arg_value_20;
        PyObject *tmp_key_value_20;
        tmp_key_value_19 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_10__class_dict);
        tmp_dict_arg_value_19 = tmp_class_creation_10__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_19, tmp_key_value_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_10__class_dict);
        tmp_dict_arg_value_20 = tmp_class_creation_10__class_dict;
        tmp_key_value_20 = mod_consts[33];
        tmp_assign_source_60 = DICT_GET_ITEM0(tmp_dict_arg_value_20, tmp_key_value_20);
        if (tmp_assign_source_60 == NULL) {
            tmp_assign_source_60 = Py_None;
        }
        assert(!(tmp_assign_source_60 == NULL));
        Py_INCREF(tmp_assign_source_60);
        goto condexpr_end_10;
        condexpr_false_10:;
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_7;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_expression_value_12 = tmp_class_creation_10__bases;
            tmp_subscript_value_7 = mod_consts[11];
            tmp_assign_source_61 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_12, tmp_subscript_value_7, 0);
            if (tmp_assign_source_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;

                goto try_except_handler_28;
            }
            assert(tmp_select_metaclass_10__base == NULL);
            tmp_select_metaclass_10__base = tmp_assign_source_61;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_13;
            CHECK_OBJECT(tmp_select_metaclass_10__base);
            tmp_expression_value_13 = tmp_select_metaclass_10__base;
            tmp_assign_source_60 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_13);
            if (tmp_assign_source_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;

                goto try_except_handler_31;
            }
            goto try_return_handler_30;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_6;
            Py_DECREF(exception_keeper_type_15);
            Py_XDECREF(exception_keeper_value_15);
            Py_XDECREF(exception_keeper_tb_15);
            CHECK_OBJECT(tmp_select_metaclass_10__base);
            tmp_type_arg_6 = tmp_select_metaclass_10__base;
            tmp_assign_source_60 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_assign_source_60 == NULL));
            goto try_return_handler_30;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        CHECK_OBJECT(tmp_select_metaclass_10__base);
        Py_DECREF(tmp_select_metaclass_10__base);
        tmp_select_metaclass_10__base = NULL;
        goto outline_result_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_15:;
        condexpr_end_10:;
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_called_value_10 = tmp_class_creation_10__metaclass;
        tmp_args_element_value_28 = mod_consts[58];
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_args_element_value_29 = tmp_class_creation_10__bases;
        CHECK_OBJECT(tmp_class_creation_10__class_dict);
        tmp_args_element_value_30 = tmp_class_creation_10__class_dict;
        frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6->m_frame.f_lineno = 325;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_assign_source_62 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_10, call_args);
        }

        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_28;
        }
        assert(tmp_class_creation_10__class == NULL);
        tmp_class_creation_10__class = tmp_assign_source_62;
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_dict);
    tmp_class_creation_10__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    {
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(tmp_class_creation_10__class);
        tmp_assign_source_63 = tmp_class_creation_10__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_63);
    }
    CHECK_OBJECT(tmp_class_creation_10__class);
    Py_DECREF(tmp_class_creation_10__class);
    tmp_class_creation_10__class = NULL;
    CHECK_OBJECT(tmp_class_creation_10__bases);
    Py_DECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_dict);
    Py_DECREF(tmp_class_creation_10__class_dict);
    tmp_class_creation_10__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_32;
        }
        tmp_assign_source_64 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_64, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        {
            PyObject *tmp_set_locals_7;
            tmp_set_locals_7 = PyDict_New();
            locals_confluent_kafka$serialization$$$class__11_StringDeserializer_374 = tmp_set_locals_7;
        }
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__11_StringDeserializer_374, mod_consts[38], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[59];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__11_StringDeserializer_374, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[57];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_confluent_kafka$serialization$$$function__10___init__(tmp_defaults_2);

            tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__11_StringDeserializer_374, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_confluent_kafka$serialization$$$function__11___call__();

        tmp_res = PyDict_SetItem(locals_confluent_kafka$serialization$$$class__11_StringDeserializer_374, mod_consts[42], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_65 = locals_confluent_kafka$serialization$$$class__11_StringDeserializer_374;
        Py_INCREF(tmp_assign_source_65);
        goto try_return_handler_33;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        Py_DECREF(locals_confluent_kafka$serialization$$$class__11_StringDeserializer_374);
        locals_confluent_kafka$serialization$$$class__11_StringDeserializer_374 = NULL;
        goto outline_result_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_16:;
        assert(tmp_class_creation_11__class_dict == NULL);
        tmp_class_creation_11__class_dict = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        bool tmp_condition_result_11;
        PyObject *tmp_key_value_21;
        PyObject *tmp_dict_arg_value_21;
        PyObject *tmp_dict_arg_value_22;
        PyObject *tmp_key_value_22;
        tmp_key_value_21 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_11__class_dict);
        tmp_dict_arg_value_21 = tmp_class_creation_11__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_21, tmp_key_value_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_11__class_dict);
        tmp_dict_arg_value_22 = tmp_class_creation_11__class_dict;
        tmp_key_value_22 = mod_consts[33];
        tmp_assign_source_66 = DICT_GET_ITEM0(tmp_dict_arg_value_22, tmp_key_value_22);
        if (tmp_assign_source_66 == NULL) {
            tmp_assign_source_66 = Py_None;
        }
        assert(!(tmp_assign_source_66 == NULL));
        Py_INCREF(tmp_assign_source_66);
        goto condexpr_end_11;
        condexpr_false_11:;
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_8;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_expression_value_14 = tmp_class_creation_11__bases;
            tmp_subscript_value_8 = mod_consts[11];
            tmp_assign_source_67 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_8, 0);
            if (tmp_assign_source_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto try_except_handler_32;
            }
            assert(tmp_select_metaclass_11__base == NULL);
            tmp_select_metaclass_11__base = tmp_assign_source_67;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_15;
            CHECK_OBJECT(tmp_select_metaclass_11__base);
            tmp_expression_value_15 = tmp_select_metaclass_11__base;
            tmp_assign_source_66 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_15);
            if (tmp_assign_source_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;

                goto try_except_handler_35;
            }
            goto try_return_handler_34;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_7;
            Py_DECREF(exception_keeper_type_17);
            Py_XDECREF(exception_keeper_value_17);
            Py_XDECREF(exception_keeper_tb_17);
            CHECK_OBJECT(tmp_select_metaclass_11__base);
            tmp_type_arg_7 = tmp_select_metaclass_11__base;
            tmp_assign_source_66 = BUILTIN_TYPE1(tmp_type_arg_7);
            assert(!(tmp_assign_source_66 == NULL));
            goto try_return_handler_34;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        CHECK_OBJECT(tmp_select_metaclass_11__base);
        Py_DECREF(tmp_select_metaclass_11__base);
        tmp_select_metaclass_11__base = NULL;
        goto outline_result_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_17:;
        condexpr_end_11:;
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_called_value_11 = tmp_class_creation_11__metaclass;
        tmp_args_element_value_31 = mod_consts[60];
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_args_element_value_32 = tmp_class_creation_11__bases;
        CHECK_OBJECT(tmp_class_creation_11__class_dict);
        tmp_args_element_value_33 = tmp_class_creation_11__class_dict;
        frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6->m_frame.f_lineno = 374;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_assign_source_68 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_11, call_args);
        }

        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_11__class == NULL);
        tmp_class_creation_11__class = tmp_assign_source_68;
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_dict);
    tmp_class_creation_11__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6);
#endif
    popFrameStack();

    assertFrameObject(frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e71c3ec3bbaa2a7f5d260fa68ddf2e6, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_69;
        CHECK_OBJECT(tmp_class_creation_11__class);
        tmp_assign_source_69 = tmp_class_creation_11__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_69);
    }
    CHECK_OBJECT(tmp_class_creation_11__class);
    Py_DECREF(tmp_class_creation_11__class);
    tmp_class_creation_11__class = NULL;
    CHECK_OBJECT(tmp_class_creation_11__bases);
    Py_DECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_dict);
    Py_DECREF(tmp_class_creation_11__class_dict);
    tmp_class_creation_11__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("confluent_kafka.serialization", false);

    return module_confluent_kafka$serialization;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$serialization, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("confluent_kafka$serialization", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
