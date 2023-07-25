/* Generated code for Python module 'confluent_kafka.error'
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

/* The "module_confluent_kafka$error" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_confluent_kafka$error;
PyDictObject *moduledict_confluent_kafka$error;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[49];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[49];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("confluent_kafka.error"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 49; i++) {
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
void checkModuleConstants_confluent_kafka$error(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 49; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_01086d7c020062bb83618966df5492d4;
static PyCodeObject *codeobj_2a3434473eb6ddd79c5c413a44fefcc5;
static PyCodeObject *codeobj_d46dc8d4ccc5ccb38d931d95a6f77a6a;
static PyCodeObject *codeobj_a4073bf23fe7d2f3f5a54fd780ba712a;
static PyCodeObject *codeobj_4288d305bd3b305f7674228388018618;
static PyCodeObject *codeobj_ae711923d300029243888f7bff8cde4e;
static PyCodeObject *codeobj_8de896cc5038a0778c7e643ca1c2e163;
static PyCodeObject *codeobj_5357be998b8dc5b5aae671d19e12a62b;
static PyCodeObject *codeobj_9fad4c61f75f2f2fa511d296bf311a34;
static PyCodeObject *codeobj_e76854af528f3a3faff624894de6edfb;
static PyCodeObject *codeobj_7731d6470c3a7ed36d98eadbd705e128;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[22]; CHECK_OBJECT(module_filename_obj);
    codeobj_01086d7c020062bb83618966df5492d4 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[42], NULL, NULL, 0, 0, 0);
    codeobj_2a3434473eb6ddd79c5c413a44fefcc5 = MAKE_CODEOBJECT(module_filename_obj, 22, CO_NEWLOCALS | CO_NOFREE, mod_consts[0], NULL, NULL, 0, 0, 0);
    codeobj_d46dc8d4ccc5ccb38d931d95a6f77a6a = MAKE_CODEOBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[43], NULL, 2, 0, 0);
    codeobj_a4073bf23fe7d2f3f5a54fd780ba712a = MAKE_CODEOBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[43], NULL, 2, 0, 0);
    codeobj_4288d305bd3b305f7674228388018618 = MAKE_CODEOBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[44], NULL, 3, 0, 0);
    codeobj_ae711923d300029243888f7bff8cde4e = MAKE_CODEOBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[44], NULL, 3, 0, 0);
    codeobj_8de896cc5038a0778c7e643ca1c2e163 = MAKE_CODEOBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[45], NULL, 3, 0, 0);
    codeobj_5357be998b8dc5b5aae671d19e12a62b = MAKE_CODEOBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[46], NULL, 4, 0, 0);
    codeobj_9fad4c61f75f2f2fa511d296bf311a34 = MAKE_CODEOBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[46], NULL, 4, 0, 0);
    codeobj_e76854af528f3a3faff624894de6edfb = MAKE_CODEOBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[47], NULL, 1, 0, 0);
    codeobj_7731d6470c3a7ed36d98eadbd705e128 = MAKE_CODEOBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[47], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__2_code();


static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__3_name();


static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__4___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__5___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__6___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__7___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__8___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__9___init__(PyObject *defaults);


// The module function definitions.
static PyObject *impl_confluent_kafka$error$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kafka_error = python_pars[1];
    PyObject *par_exception = python_pars[2];
    PyObject *par_kafka_message = python_pars[3];
    struct Nuitka_FrameObject *frame_5357be998b8dc5b5aae671d19e12a62b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5357be998b8dc5b5aae671d19e12a62b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5357be998b8dc5b5aae671d19e12a62b)) {
        Py_XDECREF(cache_frame_5357be998b8dc5b5aae671d19e12a62b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5357be998b8dc5b5aae671d19e12a62b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5357be998b8dc5b5aae671d19e12a62b = MAKE_FUNCTION_FRAME(codeobj_5357be998b8dc5b5aae671d19e12a62b, module_confluent_kafka$error, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5357be998b8dc5b5aae671d19e12a62b->m_type_description == NULL);
    frame_5357be998b8dc5b5aae671d19e12a62b = cache_frame_5357be998b8dc5b5aae671d19e12a62b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5357be998b8dc5b5aae671d19e12a62b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5357be998b8dc5b5aae671d19e12a62b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[0]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kafka_error);
        tmp_args_element_value_1 = par_kafka_error;
        frame_5357be998b8dc5b5aae671d19e12a62b->m_frame.f_lineno = 36;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_exception);
        tmp_assattr_value_1 = par_exception;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_kafka_message);
        tmp_assattr_value_2 = par_kafka_message;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[3], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5357be998b8dc5b5aae671d19e12a62b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5357be998b8dc5b5aae671d19e12a62b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5357be998b8dc5b5aae671d19e12a62b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5357be998b8dc5b5aae671d19e12a62b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5357be998b8dc5b5aae671d19e12a62b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5357be998b8dc5b5aae671d19e12a62b,
        type_description_1,
        par_self,
        par_kafka_error,
        par_exception,
        par_kafka_message
    );


    // Release cached frame if used for exception.
    if (frame_5357be998b8dc5b5aae671d19e12a62b == cache_frame_5357be998b8dc5b5aae671d19e12a62b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5357be998b8dc5b5aae671d19e12a62b);
        cache_frame_5357be998b8dc5b5aae671d19e12a62b = NULL;
    }

    assertFrameObject(frame_5357be998b8dc5b5aae671d19e12a62b);

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
    CHECK_OBJECT(par_kafka_error);
    Py_DECREF(par_kafka_error);
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);
    CHECK_OBJECT(par_kafka_message);
    Py_DECREF(par_kafka_message);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kafka_error);
    Py_DECREF(par_kafka_error);
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);
    CHECK_OBJECT(par_kafka_message);
    Py_DECREF(par_kafka_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_confluent_kafka$error$$$function__2_code(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e76854af528f3a3faff624894de6edfb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e76854af528f3a3faff624894de6edfb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e76854af528f3a3faff624894de6edfb)) {
        Py_XDECREF(cache_frame_e76854af528f3a3faff624894de6edfb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e76854af528f3a3faff624894de6edfb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e76854af528f3a3faff624894de6edfb = MAKE_FUNCTION_FRAME(codeobj_e76854af528f3a3faff624894de6edfb, module_confluent_kafka$error, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e76854af528f3a3faff624894de6edfb->m_type_description == NULL);
    frame_e76854af528f3a3faff624894de6edfb = cache_frame_e76854af528f3a3faff624894de6edfb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e76854af528f3a3faff624894de6edfb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e76854af528f3a3faff624894de6edfb) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[5];
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e76854af528f3a3faff624894de6edfb->m_frame.f_lineno = 42;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[6]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e76854af528f3a3faff624894de6edfb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e76854af528f3a3faff624894de6edfb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e76854af528f3a3faff624894de6edfb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e76854af528f3a3faff624894de6edfb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e76854af528f3a3faff624894de6edfb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e76854af528f3a3faff624894de6edfb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e76854af528f3a3faff624894de6edfb,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e76854af528f3a3faff624894de6edfb == cache_frame_e76854af528f3a3faff624894de6edfb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e76854af528f3a3faff624894de6edfb);
        cache_frame_e76854af528f3a3faff624894de6edfb = NULL;
    }

    assertFrameObject(frame_e76854af528f3a3faff624894de6edfb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_confluent_kafka$error$$$function__3_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7731d6470c3a7ed36d98eadbd705e128;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7731d6470c3a7ed36d98eadbd705e128 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7731d6470c3a7ed36d98eadbd705e128)) {
        Py_XDECREF(cache_frame_7731d6470c3a7ed36d98eadbd705e128);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7731d6470c3a7ed36d98eadbd705e128 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7731d6470c3a7ed36d98eadbd705e128 = MAKE_FUNCTION_FRAME(codeobj_7731d6470c3a7ed36d98eadbd705e128, module_confluent_kafka$error, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7731d6470c3a7ed36d98eadbd705e128->m_type_description == NULL);
    frame_7731d6470c3a7ed36d98eadbd705e128 = cache_frame_7731d6470c3a7ed36d98eadbd705e128;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7731d6470c3a7ed36d98eadbd705e128);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7731d6470c3a7ed36d98eadbd705e128) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[5];
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7731d6470c3a7ed36d98eadbd705e128->m_frame.f_lineno = 46;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7731d6470c3a7ed36d98eadbd705e128);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7731d6470c3a7ed36d98eadbd705e128);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7731d6470c3a7ed36d98eadbd705e128);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7731d6470c3a7ed36d98eadbd705e128, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7731d6470c3a7ed36d98eadbd705e128->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7731d6470c3a7ed36d98eadbd705e128, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7731d6470c3a7ed36d98eadbd705e128,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7731d6470c3a7ed36d98eadbd705e128 == cache_frame_7731d6470c3a7ed36d98eadbd705e128) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7731d6470c3a7ed36d98eadbd705e128);
        cache_frame_7731d6470c3a7ed36d98eadbd705e128 = NULL;
    }

    assertFrameObject(frame_7731d6470c3a7ed36d98eadbd705e128);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_confluent_kafka$error$$$function__4___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kafka_error = python_pars[1];
    PyObject *par_exception = python_pars[2];
    PyObject *par_kafka_message = python_pars[3];
    struct Nuitka_FrameObject *frame_9fad4c61f75f2f2fa511d296bf311a34;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9fad4c61f75f2f2fa511d296bf311a34 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9fad4c61f75f2f2fa511d296bf311a34)) {
        Py_XDECREF(cache_frame_9fad4c61f75f2f2fa511d296bf311a34);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9fad4c61f75f2f2fa511d296bf311a34 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9fad4c61f75f2f2fa511d296bf311a34 = MAKE_FUNCTION_FRAME(codeobj_9fad4c61f75f2f2fa511d296bf311a34, module_confluent_kafka$error, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9fad4c61f75f2f2fa511d296bf311a34->m_type_description == NULL);
    frame_9fad4c61f75f2f2fa511d296bf311a34 = cache_frame_9fad4c61f75f2f2fa511d296bf311a34;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9fad4c61f75f2f2fa511d296bf311a34);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9fad4c61f75f2f2fa511d296bf311a34) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[8]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kafka_error);
        tmp_args_element_value_1 = par_kafka_error;
        CHECK_OBJECT(par_exception);
        tmp_args_element_value_2 = par_exception;
        CHECK_OBJECT(par_kafka_message);
        tmp_args_element_value_3 = par_kafka_message;
        frame_9fad4c61f75f2f2fa511d296bf311a34->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[1],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9fad4c61f75f2f2fa511d296bf311a34);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9fad4c61f75f2f2fa511d296bf311a34);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9fad4c61f75f2f2fa511d296bf311a34, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9fad4c61f75f2f2fa511d296bf311a34->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9fad4c61f75f2f2fa511d296bf311a34, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9fad4c61f75f2f2fa511d296bf311a34,
        type_description_1,
        par_self,
        par_kafka_error,
        par_exception,
        par_kafka_message
    );


    // Release cached frame if used for exception.
    if (frame_9fad4c61f75f2f2fa511d296bf311a34 == cache_frame_9fad4c61f75f2f2fa511d296bf311a34) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9fad4c61f75f2f2fa511d296bf311a34);
        cache_frame_9fad4c61f75f2f2fa511d296bf311a34 = NULL;
    }

    assertFrameObject(frame_9fad4c61f75f2f2fa511d296bf311a34);

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
    CHECK_OBJECT(par_kafka_error);
    Py_DECREF(par_kafka_error);
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);
    CHECK_OBJECT(par_kafka_message);
    Py_DECREF(par_kafka_message);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kafka_error);
    Py_DECREF(par_kafka_error);
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);
    CHECK_OBJECT(par_kafka_message);
    Py_DECREF(par_kafka_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_confluent_kafka$error$$$function__5___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exception = python_pars[1];
    PyObject *par_kafka_message = python_pars[2];
    struct Nuitka_FrameObject *frame_4288d305bd3b305f7674228388018618;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4288d305bd3b305f7674228388018618 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4288d305bd3b305f7674228388018618)) {
        Py_XDECREF(cache_frame_4288d305bd3b305f7674228388018618);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4288d305bd3b305f7674228388018618 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4288d305bd3b305f7674228388018618 = MAKE_FUNCTION_FRAME(codeobj_4288d305bd3b305f7674228388018618, module_confluent_kafka$error, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4288d305bd3b305f7674228388018618->m_type_description == NULL);
    frame_4288d305bd3b305f7674228388018618 = cache_frame_4288d305bd3b305f7674228388018618;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4288d305bd3b305f7674228388018618);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4288d305bd3b305f7674228388018618) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_str_arg_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[9]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER2(tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[10]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exception);
        tmp_str_arg_1 = par_exception;
        tmp_args_element_value_2 = PyObject_Str(tmp_str_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_4288d305bd3b305f7674228388018618->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 86;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exception);
        tmp_kw_call_dict_value_0_1 = par_exception;
        CHECK_OBJECT(par_kafka_message);
        tmp_kw_call_dict_value_1_1 = par_kafka_message;
        frame_4288d305bd3b305f7674228388018618->m_frame.f_lineno = 85;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4288d305bd3b305f7674228388018618);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4288d305bd3b305f7674228388018618);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4288d305bd3b305f7674228388018618, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4288d305bd3b305f7674228388018618->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4288d305bd3b305f7674228388018618, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4288d305bd3b305f7674228388018618,
        type_description_1,
        par_self,
        par_exception,
        par_kafka_message
    );


    // Release cached frame if used for exception.
    if (frame_4288d305bd3b305f7674228388018618 == cache_frame_4288d305bd3b305f7674228388018618) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4288d305bd3b305f7674228388018618);
        cache_frame_4288d305bd3b305f7674228388018618 = NULL;
    }

    assertFrameObject(frame_4288d305bd3b305f7674228388018618);

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
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);
    CHECK_OBJECT(par_kafka_message);
    Py_DECREF(par_kafka_message);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);
    CHECK_OBJECT(par_kafka_message);
    Py_DECREF(par_kafka_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_confluent_kafka$error$$$function__6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exception = python_pars[1];
    PyObject *par_kafka_message = python_pars[2];
    struct Nuitka_FrameObject *frame_ae711923d300029243888f7bff8cde4e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae711923d300029243888f7bff8cde4e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ae711923d300029243888f7bff8cde4e)) {
        Py_XDECREF(cache_frame_ae711923d300029243888f7bff8cde4e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae711923d300029243888f7bff8cde4e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae711923d300029243888f7bff8cde4e = MAKE_FUNCTION_FRAME(codeobj_ae711923d300029243888f7bff8cde4e, module_confluent_kafka$error, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ae711923d300029243888f7bff8cde4e->m_type_description == NULL);
    frame_ae711923d300029243888f7bff8cde4e = cache_frame_ae711923d300029243888f7bff8cde4e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ae711923d300029243888f7bff8cde4e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ae711923d300029243888f7bff8cde4e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_str_arg_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[13]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER2(tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[10]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 105;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 105;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 105;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exception);
        tmp_str_arg_1 = par_exception;
        tmp_args_element_value_2 = PyObject_Str(tmp_str_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 105;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ae711923d300029243888f7bff8cde4e->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 105;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exception);
        tmp_kw_call_dict_value_0_1 = par_exception;
        CHECK_OBJECT(par_kafka_message);
        tmp_kw_call_dict_value_1_1 = par_kafka_message;
        frame_ae711923d300029243888f7bff8cde4e->m_frame.f_lineno = 104;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae711923d300029243888f7bff8cde4e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ae711923d300029243888f7bff8cde4e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ae711923d300029243888f7bff8cde4e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae711923d300029243888f7bff8cde4e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae711923d300029243888f7bff8cde4e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae711923d300029243888f7bff8cde4e,
        type_description_1,
        par_self,
        par_exception,
        par_kafka_message
    );


    // Release cached frame if used for exception.
    if (frame_ae711923d300029243888f7bff8cde4e == cache_frame_ae711923d300029243888f7bff8cde4e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ae711923d300029243888f7bff8cde4e);
        cache_frame_ae711923d300029243888f7bff8cde4e = NULL;
    }

    assertFrameObject(frame_ae711923d300029243888f7bff8cde4e);

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
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);
    CHECK_OBJECT(par_kafka_message);
    Py_DECREF(par_kafka_message);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);
    CHECK_OBJECT(par_kafka_message);
    Py_DECREF(par_kafka_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_confluent_kafka$error$$$function__7___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kafka_error = python_pars[1];
    PyObject *par_exception = python_pars[2];
    struct Nuitka_FrameObject *frame_8de896cc5038a0778c7e643ca1c2e163;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8de896cc5038a0778c7e643ca1c2e163 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8de896cc5038a0778c7e643ca1c2e163)) {
        Py_XDECREF(cache_frame_8de896cc5038a0778c7e643ca1c2e163);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8de896cc5038a0778c7e643ca1c2e163 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8de896cc5038a0778c7e643ca1c2e163 = MAKE_FUNCTION_FRAME(codeobj_8de896cc5038a0778c7e643ca1c2e163, module_confluent_kafka$error, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8de896cc5038a0778c7e643ca1c2e163->m_type_description == NULL);
    frame_8de896cc5038a0778c7e643ca1c2e163 = cache_frame_8de896cc5038a0778c7e643ca1c2e163;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8de896cc5038a0778c7e643ca1c2e163);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8de896cc5038a0778c7e643ca1c2e163) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[15]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kafka_error);
        tmp_args_element_value_1 = par_kafka_error;
        CHECK_OBJECT(par_exception);
        tmp_args_element_value_2 = par_exception;
        tmp_args_element_value_3 = Py_None;
        frame_8de896cc5038a0778c7e643ca1c2e163->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[1],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8de896cc5038a0778c7e643ca1c2e163);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8de896cc5038a0778c7e643ca1c2e163);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8de896cc5038a0778c7e643ca1c2e163, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8de896cc5038a0778c7e643ca1c2e163->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8de896cc5038a0778c7e643ca1c2e163, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8de896cc5038a0778c7e643ca1c2e163,
        type_description_1,
        par_self,
        par_kafka_error,
        par_exception
    );


    // Release cached frame if used for exception.
    if (frame_8de896cc5038a0778c7e643ca1c2e163 == cache_frame_8de896cc5038a0778c7e643ca1c2e163) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8de896cc5038a0778c7e643ca1c2e163);
        cache_frame_8de896cc5038a0778c7e643ca1c2e163 = NULL;
    }

    assertFrameObject(frame_8de896cc5038a0778c7e643ca1c2e163);

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
    CHECK_OBJECT(par_kafka_error);
    Py_DECREF(par_kafka_error);
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kafka_error);
    Py_DECREF(par_kafka_error);
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_confluent_kafka$error$$$function__8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exception = python_pars[1];
    struct Nuitka_FrameObject *frame_d46dc8d4ccc5ccb38d931d95a6f77a6a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d46dc8d4ccc5ccb38d931d95a6f77a6a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d46dc8d4ccc5ccb38d931d95a6f77a6a)) {
        Py_XDECREF(cache_frame_d46dc8d4ccc5ccb38d931d95a6f77a6a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d46dc8d4ccc5ccb38d931d95a6f77a6a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d46dc8d4ccc5ccb38d931d95a6f77a6a = MAKE_FUNCTION_FRAME(codeobj_d46dc8d4ccc5ccb38d931d95a6f77a6a, module_confluent_kafka$error, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d46dc8d4ccc5ccb38d931d95a6f77a6a->m_type_description == NULL);
    frame_d46dc8d4ccc5ccb38d931d95a6f77a6a = cache_frame_d46dc8d4ccc5ccb38d931d95a6f77a6a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d46dc8d4ccc5ccb38d931d95a6f77a6a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d46dc8d4ccc5ccb38d931d95a6f77a6a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_str_arg_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[16]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER2(tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[10]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exception);
        tmp_str_arg_1 = par_exception;
        tmp_args_element_value_2 = PyObject_Str(tmp_str_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d46dc8d4ccc5ccb38d931d95a6f77a6a->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exception);
        tmp_kw_call_dict_value_0_1 = par_exception;
        frame_d46dc8d4ccc5ccb38d931d95a6f77a6a->m_frame.f_lineno = 132;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[18]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d46dc8d4ccc5ccb38d931d95a6f77a6a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d46dc8d4ccc5ccb38d931d95a6f77a6a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d46dc8d4ccc5ccb38d931d95a6f77a6a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d46dc8d4ccc5ccb38d931d95a6f77a6a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d46dc8d4ccc5ccb38d931d95a6f77a6a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d46dc8d4ccc5ccb38d931d95a6f77a6a,
        type_description_1,
        par_self,
        par_exception
    );


    // Release cached frame if used for exception.
    if (frame_d46dc8d4ccc5ccb38d931d95a6f77a6a == cache_frame_d46dc8d4ccc5ccb38d931d95a6f77a6a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d46dc8d4ccc5ccb38d931d95a6f77a6a);
        cache_frame_d46dc8d4ccc5ccb38d931d95a6f77a6a = NULL;
    }

    assertFrameObject(frame_d46dc8d4ccc5ccb38d931d95a6f77a6a);

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
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_confluent_kafka$error$$$function__9___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exception = python_pars[1];
    struct Nuitka_FrameObject *frame_a4073bf23fe7d2f3f5a54fd780ba712a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a4073bf23fe7d2f3f5a54fd780ba712a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a4073bf23fe7d2f3f5a54fd780ba712a)) {
        Py_XDECREF(cache_frame_a4073bf23fe7d2f3f5a54fd780ba712a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a4073bf23fe7d2f3f5a54fd780ba712a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a4073bf23fe7d2f3f5a54fd780ba712a = MAKE_FUNCTION_FRAME(codeobj_a4073bf23fe7d2f3f5a54fd780ba712a, module_confluent_kafka$error, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a4073bf23fe7d2f3f5a54fd780ba712a->m_type_description == NULL);
    frame_a4073bf23fe7d2f3f5a54fd780ba712a = cache_frame_a4073bf23fe7d2f3f5a54fd780ba712a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a4073bf23fe7d2f3f5a54fd780ba712a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a4073bf23fe7d2f3f5a54fd780ba712a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_str_arg_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[19]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER2(tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[10]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exception);
        tmp_str_arg_1 = par_exception;
        tmp_args_element_value_2 = PyObject_Str(tmp_str_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a4073bf23fe7d2f3f5a54fd780ba712a->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exception);
        tmp_kw_call_dict_value_0_1 = par_exception;
        frame_a4073bf23fe7d2f3f5a54fd780ba712a->m_frame.f_lineno = 146;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[18]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a4073bf23fe7d2f3f5a54fd780ba712a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a4073bf23fe7d2f3f5a54fd780ba712a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a4073bf23fe7d2f3f5a54fd780ba712a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a4073bf23fe7d2f3f5a54fd780ba712a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a4073bf23fe7d2f3f5a54fd780ba712a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a4073bf23fe7d2f3f5a54fd780ba712a,
        type_description_1,
        par_self,
        par_exception
    );


    // Release cached frame if used for exception.
    if (frame_a4073bf23fe7d2f3f5a54fd780ba712a == cache_frame_a4073bf23fe7d2f3f5a54fd780ba712a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a4073bf23fe7d2f3f5a54fd780ba712a);
        cache_frame_a4073bf23fe7d2f3f5a54fd780ba712a = NULL;
    }

    assertFrameObject(frame_a4073bf23fe7d2f3f5a54fd780ba712a);

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
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exception);
    Py_DECREF(par_exception);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$error$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5357be998b8dc5b5aae671d19e12a62b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$error,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__2_code() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$error$$$function__2_code,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e76854af528f3a3faff624894de6edfb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$error,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__3_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$error$$$function__3_name,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7731d6470c3a7ed36d98eadbd705e128,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$error,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__4___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$error$$$function__4___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9fad4c61f75f2f2fa511d296bf311a34,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$error,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__5___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$error$$$function__5___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4288d305bd3b305f7674228388018618,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$error,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__6___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$error$$$function__6___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ae711923d300029243888f7bff8cde4e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$error,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__7___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$error$$$function__7___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8de896cc5038a0778c7e643ca1c2e163,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$error,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__8___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$error$$$function__8___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d46dc8d4ccc5ccb38d931d95a6f77a6a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$error,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_confluent_kafka$error$$$function__9___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_confluent_kafka$error$$$function__9___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a4073bf23fe7d2f3f5a54fd780ba712a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_confluent_kafka$error,
        NULL,
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

function_impl_code functable_confluent_kafka$error[] = {
    impl_confluent_kafka$error$$$function__1___init__,
    impl_confluent_kafka$error$$$function__2_code,
    impl_confluent_kafka$error$$$function__3_name,
    impl_confluent_kafka$error$$$function__4___init__,
    impl_confluent_kafka$error$$$function__5___init__,
    impl_confluent_kafka$error$$$function__6___init__,
    impl_confluent_kafka$error$$$function__7___init__,
    impl_confluent_kafka$error$$$function__8___init__,
    impl_confluent_kafka$error$$$function__9___init__,
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

    function_impl_code *current = functable_confluent_kafka$error;
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

    if (offset > sizeof(functable_confluent_kafka$error) || offset < 0) {
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
        functable_confluent_kafka$error[offset],
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
        module_confluent_kafka$error,
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
PyObject *modulecode_confluent_kafka$error(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("confluent_kafka.error");

    // Store the module for future use.
    module_confluent_kafka$error = module;

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
        PRINT_STRING("confluent_kafka.error: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("confluent_kafka.error: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("confluent_kafka.error: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initconfluent_kafka$error\n");

    moduledict_confluent_kafka$error = MODULE_DICT(module_confluent_kafka$error);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_confluent_kafka$error,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_confluent_kafka$error,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[48]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_confluent_kafka$error,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_confluent_kafka$error,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_confluent_kafka$error,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_confluent_kafka$error);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_confluent_kafka$error, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_confluent_kafka$error, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_confluent_kafka$error, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_confluent_kafka$error);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_confluent_kafka$error, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    PyObject *tmp_select_metaclass_5__base = NULL;
    PyObject *tmp_select_metaclass_6__base = NULL;
    PyObject *tmp_select_metaclass_7__base = NULL;
    struct Nuitka_FrameObject *frame_01086d7c020062bb83618966df5492d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_confluent_kafka$error$$$class__1__KafkaClientError_22 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_2a3434473eb6ddd79c5c413a44fefcc5_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_2a3434473eb6ddd79c5c413a44fefcc5_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_confluent_kafka$error$$$class__2_ConsumeError_49 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_confluent_kafka$error$$$class__3_KeyDeserializationError_71 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_confluent_kafka$error$$$class__4_ValueDeserializationError_90 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_confluent_kafka$error$$$class__5_ProduceError_109 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_confluent_kafka$error$$$class__6_KeySerializationError_123 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_confluent_kafka$error$$$class__7_ValueSerializationError_137 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_01086d7c020062bb83618966df5492d4 = MAKE_MODULE_FRAME(codeobj_01086d7c020062bb83618966df5492d4, module_confluent_kafka$error);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_01086d7c020062bb83618966df5492d4);
    assert(Py_REFCNT(frame_01086d7c020062bb83618966df5492d4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        tmp_name_value_1 = mod_consts[24];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_confluent_kafka$error;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[25];
        frame_01086d7c020062bb83618966df5492d4->m_frame.f_lineno = 18;
        tmp_assign_source_3 = IMPORT_MODULE4(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[26]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[10]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        tmp_name_value_2 = mod_consts[27];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_confluent_kafka$error;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[28];
        frame_01086d7c020062bb83618966df5492d4->m_frame.f_lineno = 19;
        tmp_import_name_from_3 = IMPORT_MODULE4(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[29]);
        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_6);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_assign_source_7 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_7, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_confluent_kafka$error$$$class__1__KafkaClientError_22 = tmp_set_locals_1;
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__1__KafkaClientError_22, mod_consts[31], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[32];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__1__KafkaClientError_22, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[33];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_confluent_kafka$error$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__1__KafkaClientError_22, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        if (isFrameUnusable(cache_frame_2a3434473eb6ddd79c5c413a44fefcc5_2)) {
            Py_XDECREF(cache_frame_2a3434473eb6ddd79c5c413a44fefcc5_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_2a3434473eb6ddd79c5c413a44fefcc5_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_2a3434473eb6ddd79c5c413a44fefcc5_2 = MAKE_FUNCTION_FRAME(codeobj_2a3434473eb6ddd79c5c413a44fefcc5, module_confluent_kafka$error, 0);
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_2a3434473eb6ddd79c5c413a44fefcc5_2->m_type_description == NULL);
        frame_2a3434473eb6ddd79c5c413a44fefcc5_2 = cache_frame_2a3434473eb6ddd79c5c413a44fefcc5_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_2a3434473eb6ddd79c5c413a44fefcc5_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_2a3434473eb6ddd79c5c413a44fefcc5_2) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_1 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_1 = MAKE_FUNCTION_confluent_kafka$error$$$function__2_code();

            frame_2a3434473eb6ddd79c5c413a44fefcc5_2->m_frame.f_lineno = 40;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__1__KafkaClientError_22, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_2 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_confluent_kafka$error$$$function__3_name();

            frame_2a3434473eb6ddd79c5c413a44fefcc5_2->m_frame.f_lineno = 44;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__1__KafkaClientError_22, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2a3434473eb6ddd79c5c413a44fefcc5_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_2a3434473eb6ddd79c5c413a44fefcc5_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2a3434473eb6ddd79c5c413a44fefcc5_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2a3434473eb6ddd79c5c413a44fefcc5_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2a3434473eb6ddd79c5c413a44fefcc5_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2a3434473eb6ddd79c5c413a44fefcc5_2,
            type_description_2
        );


        // Release cached frame if used for exception.
        if (frame_2a3434473eb6ddd79c5c413a44fefcc5_2 == cache_frame_2a3434473eb6ddd79c5c413a44fefcc5_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_2a3434473eb6ddd79c5c413a44fefcc5_2);
            cache_frame_2a3434473eb6ddd79c5c413a44fefcc5_2 = NULL;
        }

        assertFrameObject(frame_2a3434473eb6ddd79c5c413a44fefcc5_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        tmp_assign_source_8 = locals_confluent_kafka$error$$$class__1__KafkaClientError_22;
        Py_INCREF(tmp_assign_source_8);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_confluent_kafka$error$$$class__1__KafkaClientError_22);
        locals_confluent_kafka$error$$$class__1__KafkaClientError_22 = NULL;
        goto outline_result_1;
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

        Py_DECREF(locals_confluent_kafka$error$$$class__1__KafkaClientError_22);
        locals_confluent_kafka$error$$$class__1__KafkaClientError_22 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 22;
        goto try_except_handler_2;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        tmp_key_value_1 = mod_consts[34];
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
        tmp_key_value_2 = mod_consts[34];
        tmp_assign_source_9 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_assign_source_9 == NULL) {
            tmp_assign_source_9 = Py_None;
        }
        assert(!(tmp_assign_source_9 == NULL));
        Py_INCREF(tmp_assign_source_9);
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_expression_value_1 = tmp_class_creation_1__bases;
            tmp_subscript_value_1 = mod_consts[5];
            tmp_assign_source_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_2;
            }
            assert(tmp_select_metaclass_1__base == NULL);
            tmp_select_metaclass_1__base = tmp_assign_source_10;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_expression_value_2 = tmp_select_metaclass_1__base;
            tmp_assign_source_9 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_5;
            }
            goto try_return_handler_4;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_5:;
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
            CHECK_OBJECT(tmp_select_metaclass_1__base);
            tmp_type_arg_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_9 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_9 == NULL));
            goto try_return_handler_4;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_select_metaclass_1__base);
        Py_DECREF(tmp_select_metaclass_1__base);
        tmp_select_metaclass_1__base = NULL;
        goto outline_result_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_value_3 = tmp_class_creation_1__metaclass;
        tmp_args_element_value_3 = mod_consts[0];
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_args_element_value_4 = tmp_class_creation_1__bases;
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_value_5 = tmp_class_creation_1__class_dict;
        frame_01086d7c020062bb83618966df5492d4->m_frame.f_lineno = 22;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_11;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_dict);
    tmp_class_creation_1__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_12 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_12);
    }
    CHECK_OBJECT(tmp_class_creation_1__class);
    Py_DECREF(tmp_class_creation_1__class);
    tmp_class_creation_1__class = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_dict);
    Py_DECREF(tmp_class_creation_1__class_dict);
    tmp_class_creation_1__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_6;
        }
        tmp_assign_source_13 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_13, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_confluent_kafka$error$$$class__2_ConsumeError_49 = tmp_set_locals_2;
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__2_ConsumeError_49, mod_consts[31], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[35];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__2_ConsumeError_49, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[33];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_confluent_kafka$error$$$function__4___init__(tmp_defaults_2);

            tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__2_ConsumeError_49, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        tmp_assign_source_14 = locals_confluent_kafka$error$$$class__2_ConsumeError_49;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_confluent_kafka$error$$$class__2_ConsumeError_49);
        locals_confluent_kafka$error$$$class__2_ConsumeError_49 = NULL;
        goto outline_result_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_3:;
        assert(tmp_class_creation_2__class_dict == NULL);
        tmp_class_creation_2__class_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        bool tmp_condition_result_2;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_key_value_4;
        tmp_key_value_3 = mod_consts[34];
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
        tmp_key_value_4 = mod_consts[34];
        tmp_assign_source_15 = DICT_GET_ITEM0(tmp_dict_arg_value_4, tmp_key_value_4);
        if (tmp_assign_source_15 == NULL) {
            tmp_assign_source_15 = Py_None;
        }
        assert(!(tmp_assign_source_15 == NULL));
        Py_INCREF(tmp_assign_source_15);
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_expression_value_3 = tmp_class_creation_2__bases;
            tmp_subscript_value_2 = mod_consts[5];
            tmp_assign_source_16 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 0);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto try_except_handler_6;
            }
            assert(tmp_select_metaclass_2__base == NULL);
            tmp_select_metaclass_2__base = tmp_assign_source_16;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_4;
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_expression_value_4 = tmp_select_metaclass_2__base;
            tmp_assign_source_15 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_4);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto try_except_handler_9;
            }
            goto try_return_handler_8;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
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

        {
            PyObject *tmp_type_arg_2;
            Py_DECREF(exception_keeper_type_5);
            Py_XDECREF(exception_keeper_value_5);
            Py_XDECREF(exception_keeper_tb_5);
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_type_arg_2 = tmp_select_metaclass_2__base;
            tmp_assign_source_15 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_assign_source_15 == NULL));
            goto try_return_handler_8;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_select_metaclass_2__base);
        Py_DECREF(tmp_select_metaclass_2__base);
        tmp_select_metaclass_2__base = NULL;
        goto outline_result_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_4:;
        condexpr_end_2:;
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_called_value_4 = tmp_class_creation_2__metaclass;
        tmp_args_element_value_6 = mod_consts[8];
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_args_element_value_7 = tmp_class_creation_2__bases;
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_args_element_value_8 = tmp_class_creation_2__class_dict;
        frame_01086d7c020062bb83618966df5492d4->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__class == NULL);
        tmp_class_creation_2__class = tmp_assign_source_17;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_dict);
    tmp_class_creation_2__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_assign_source_18 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_18);
    }
    CHECK_OBJECT(tmp_class_creation_2__class);
    Py_DECREF(tmp_class_creation_2__class);
    tmp_class_creation_2__class = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_dict);
    Py_DECREF(tmp_class_creation_2__class_dict);
    tmp_class_creation_2__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_10;
        }
        tmp_assign_source_19 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_assign_source_19, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_19, 1, tmp_tuple_element_3);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_19);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_confluent_kafka$error$$$class__3_KeyDeserializationError_71 = tmp_set_locals_3;
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__3_KeyDeserializationError_71, mod_consts[31], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[36];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__3_KeyDeserializationError_71, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[33];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_confluent_kafka$error$$$function__5___init__(tmp_defaults_3);

            tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__3_KeyDeserializationError_71, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        tmp_assign_source_20 = locals_confluent_kafka$error$$$class__3_KeyDeserializationError_71;
        Py_INCREF(tmp_assign_source_20);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_confluent_kafka$error$$$class__3_KeyDeserializationError_71);
        locals_confluent_kafka$error$$$class__3_KeyDeserializationError_71 = NULL;
        goto outline_result_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_5:;
        assert(tmp_class_creation_3__class_dict == NULL);
        tmp_class_creation_3__class_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_5;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_dict_arg_value_6;
        PyObject *tmp_key_value_6;
        tmp_key_value_5 = mod_consts[34];
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
        tmp_key_value_6 = mod_consts[34];
        tmp_assign_source_21 = DICT_GET_ITEM0(tmp_dict_arg_value_6, tmp_key_value_6);
        if (tmp_assign_source_21 == NULL) {
            tmp_assign_source_21 = Py_None;
        }
        assert(!(tmp_assign_source_21 == NULL));
        Py_INCREF(tmp_assign_source_21);
        goto condexpr_end_3;
        condexpr_false_3:;
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_expression_value_5 = tmp_class_creation_3__bases;
            tmp_subscript_value_3 = mod_consts[5];
            tmp_assign_source_22 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_3, 0);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto try_except_handler_10;
            }
            assert(tmp_select_metaclass_3__base == NULL);
            tmp_select_metaclass_3__base = tmp_assign_source_22;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_6;
            CHECK_OBJECT(tmp_select_metaclass_3__base);
            tmp_expression_value_6 = tmp_select_metaclass_3__base;
            tmp_assign_source_21 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_6);
            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto try_except_handler_13;
            }
            goto try_return_handler_12;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_3;
            Py_DECREF(exception_keeper_type_7);
            Py_XDECREF(exception_keeper_value_7);
            Py_XDECREF(exception_keeper_tb_7);
            CHECK_OBJECT(tmp_select_metaclass_3__base);
            tmp_type_arg_3 = tmp_select_metaclass_3__base;
            tmp_assign_source_21 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_assign_source_21 == NULL));
            goto try_return_handler_12;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(tmp_select_metaclass_3__base);
        Py_DECREF(tmp_select_metaclass_3__base);
        tmp_select_metaclass_3__base = NULL;
        goto outline_result_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_6:;
        condexpr_end_3:;
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_called_value_5 = tmp_class_creation_3__metaclass;
        tmp_args_element_value_9 = mod_consts[9];
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_args_element_value_10 = tmp_class_creation_3__bases;
        CHECK_OBJECT(tmp_class_creation_3__class_dict);
        tmp_args_element_value_11 = tmp_class_creation_3__class_dict;
        frame_01086d7c020062bb83618966df5492d4->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__class == NULL);
        tmp_class_creation_3__class = tmp_assign_source_23;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_class_creation_3__class);
        tmp_assign_source_24 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_24);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_14;
        }
        tmp_assign_source_25 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_25, 1, tmp_tuple_element_4);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_25);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_4;
            tmp_set_locals_4 = PyDict_New();
            locals_confluent_kafka$error$$$class__4_ValueDeserializationError_90 = tmp_set_locals_4;
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__4_ValueDeserializationError_90, mod_consts[31], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__4_ValueDeserializationError_90, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[33];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_confluent_kafka$error$$$function__6___init__(tmp_defaults_4);

            tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__4_ValueDeserializationError_90, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        tmp_assign_source_26 = locals_confluent_kafka$error$$$class__4_ValueDeserializationError_90;
        Py_INCREF(tmp_assign_source_26);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_confluent_kafka$error$$$class__4_ValueDeserializationError_90);
        locals_confluent_kafka$error$$$class__4_ValueDeserializationError_90 = NULL;
        goto outline_result_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_7:;
        assert(tmp_class_creation_4__class_dict == NULL);
        tmp_class_creation_4__class_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        bool tmp_condition_result_4;
        PyObject *tmp_key_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        tmp_key_value_7 = mod_consts[34];
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
        tmp_key_value_8 = mod_consts[34];
        tmp_assign_source_27 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_assign_source_27 == NULL) {
            tmp_assign_source_27 = Py_None;
        }
        assert(!(tmp_assign_source_27 == NULL));
        Py_INCREF(tmp_assign_source_27);
        goto condexpr_end_4;
        condexpr_false_4:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_expression_value_7 = tmp_class_creation_4__bases;
            tmp_subscript_value_4 = mod_consts[5];
            tmp_assign_source_28 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_4, 0);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto try_except_handler_14;
            }
            assert(tmp_select_metaclass_4__base == NULL);
            tmp_select_metaclass_4__base = tmp_assign_source_28;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_8;
            CHECK_OBJECT(tmp_select_metaclass_4__base);
            tmp_expression_value_8 = tmp_select_metaclass_4__base;
            tmp_assign_source_27 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_8);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto try_except_handler_17;
            }
            goto try_return_handler_16;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_4;
            Py_DECREF(exception_keeper_type_9);
            Py_XDECREF(exception_keeper_value_9);
            Py_XDECREF(exception_keeper_tb_9);
            CHECK_OBJECT(tmp_select_metaclass_4__base);
            tmp_type_arg_4 = tmp_select_metaclass_4__base;
            tmp_assign_source_27 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_assign_source_27 == NULL));
            goto try_return_handler_16;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(tmp_select_metaclass_4__base);
        Py_DECREF(tmp_select_metaclass_4__base);
        tmp_select_metaclass_4__base = NULL;
        goto outline_result_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_8:;
        condexpr_end_4:;
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_called_value_6 = tmp_class_creation_4__metaclass;
        tmp_args_element_value_12 = mod_consts[13];
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_args_element_value_13 = tmp_class_creation_4__bases;
        CHECK_OBJECT(tmp_class_creation_4__class_dict);
        tmp_args_element_value_14 = tmp_class_creation_4__class_dict;
        frame_01086d7c020062bb83618966df5492d4->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_4__class == NULL);
        tmp_class_creation_4__class = tmp_assign_source_29;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_dict);
    tmp_class_creation_4__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_class_creation_4__class);
        tmp_assign_source_30 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_30);
    }
    CHECK_OBJECT(tmp_class_creation_4__class);
    Py_DECREF(tmp_class_creation_4__class);
    tmp_class_creation_4__class = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_dict);
    Py_DECREF(tmp_class_creation_4__class_dict);
    tmp_class_creation_4__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_18;
        }
        tmp_assign_source_31 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_31, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        {
            PyObject *tmp_set_locals_5;
            tmp_set_locals_5 = PyDict_New();
            locals_confluent_kafka$error$$$class__5_ProduceError_109 = tmp_set_locals_5;
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__5_ProduceError_109, mod_consts[31], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__5_ProduceError_109, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[39];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_confluent_kafka$error$$$function__7___init__(tmp_defaults_5);

            tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__5_ProduceError_109, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        tmp_assign_source_32 = locals_confluent_kafka$error$$$class__5_ProduceError_109;
        Py_INCREF(tmp_assign_source_32);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_confluent_kafka$error$$$class__5_ProduceError_109);
        locals_confluent_kafka$error$$$class__5_ProduceError_109 = NULL;
        goto outline_result_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_9:;
        assert(tmp_class_creation_5__class_dict == NULL);
        tmp_class_creation_5__class_dict = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        bool tmp_condition_result_5;
        PyObject *tmp_key_value_9;
        PyObject *tmp_dict_arg_value_9;
        PyObject *tmp_dict_arg_value_10;
        PyObject *tmp_key_value_10;
        tmp_key_value_9 = mod_consts[34];
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
        tmp_key_value_10 = mod_consts[34];
        tmp_assign_source_33 = DICT_GET_ITEM0(tmp_dict_arg_value_10, tmp_key_value_10);
        if (tmp_assign_source_33 == NULL) {
            tmp_assign_source_33 = Py_None;
        }
        assert(!(tmp_assign_source_33 == NULL));
        Py_INCREF(tmp_assign_source_33);
        goto condexpr_end_5;
        condexpr_false_5:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_expression_value_9 = tmp_class_creation_5__bases;
            tmp_subscript_value_5 = mod_consts[5];
            tmp_assign_source_34 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_5, 0);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto try_except_handler_18;
            }
            assert(tmp_select_metaclass_5__base == NULL);
            tmp_select_metaclass_5__base = tmp_assign_source_34;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_10;
            CHECK_OBJECT(tmp_select_metaclass_5__base);
            tmp_expression_value_10 = tmp_select_metaclass_5__base;
            tmp_assign_source_33 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_10);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto try_except_handler_21;
            }
            goto try_return_handler_20;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_5;
            Py_DECREF(exception_keeper_type_11);
            Py_XDECREF(exception_keeper_value_11);
            Py_XDECREF(exception_keeper_tb_11);
            CHECK_OBJECT(tmp_select_metaclass_5__base);
            tmp_type_arg_5 = tmp_select_metaclass_5__base;
            tmp_assign_source_33 = BUILTIN_TYPE1(tmp_type_arg_5);
            assert(!(tmp_assign_source_33 == NULL));
            goto try_return_handler_20;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(tmp_select_metaclass_5__base);
        Py_DECREF(tmp_select_metaclass_5__base);
        tmp_select_metaclass_5__base = NULL;
        goto outline_result_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_10:;
        condexpr_end_5:;
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_called_value_7 = tmp_class_creation_5__metaclass;
        tmp_args_element_value_15 = mod_consts[15];
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_args_element_value_16 = tmp_class_creation_5__bases;
        CHECK_OBJECT(tmp_class_creation_5__class_dict);
        tmp_args_element_value_17 = tmp_class_creation_5__class_dict;
        frame_01086d7c020062bb83618966df5492d4->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_18;
        }
        assert(tmp_class_creation_5__class == NULL);
        tmp_class_creation_5__class = tmp_assign_source_35;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_dict);
    tmp_class_creation_5__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_class_creation_5__class);
        tmp_assign_source_36 = tmp_class_creation_5__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_36);
    }
    CHECK_OBJECT(tmp_class_creation_5__class);
    Py_DECREF(tmp_class_creation_5__class);
    tmp_class_creation_5__class = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_dict);
    Py_DECREF(tmp_class_creation_5__class_dict);
    tmp_class_creation_5__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_22;
        }
        tmp_assign_source_37 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_assign_source_37, 0, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_37, 1, tmp_tuple_element_6);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_assign_source_37);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        {
            PyObject *tmp_set_locals_6;
            tmp_set_locals_6 = PyDict_New();
            locals_confluent_kafka$error$$$class__6_KeySerializationError_123 = tmp_set_locals_6;
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__6_KeySerializationError_123, mod_consts[31], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[40];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__6_KeySerializationError_123, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = mod_consts[39];
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_confluent_kafka$error$$$function__8___init__(tmp_defaults_6);

            tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__6_KeySerializationError_123, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        tmp_assign_source_38 = locals_confluent_kafka$error$$$class__6_KeySerializationError_123;
        Py_INCREF(tmp_assign_source_38);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_confluent_kafka$error$$$class__6_KeySerializationError_123);
        locals_confluent_kafka$error$$$class__6_KeySerializationError_123 = NULL;
        goto outline_result_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_11:;
        assert(tmp_class_creation_6__class_dict == NULL);
        tmp_class_creation_6__class_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        bool tmp_condition_result_6;
        PyObject *tmp_key_value_11;
        PyObject *tmp_dict_arg_value_11;
        PyObject *tmp_dict_arg_value_12;
        PyObject *tmp_key_value_12;
        tmp_key_value_11 = mod_consts[34];
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
        tmp_key_value_12 = mod_consts[34];
        tmp_assign_source_39 = DICT_GET_ITEM0(tmp_dict_arg_value_12, tmp_key_value_12);
        if (tmp_assign_source_39 == NULL) {
            tmp_assign_source_39 = Py_None;
        }
        assert(!(tmp_assign_source_39 == NULL));
        Py_INCREF(tmp_assign_source_39);
        goto condexpr_end_6;
        condexpr_false_6:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_expression_value_11 = tmp_class_creation_6__bases;
            tmp_subscript_value_6 = mod_consts[5];
            tmp_assign_source_40 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_6, 0);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto try_except_handler_22;
            }
            assert(tmp_select_metaclass_6__base == NULL);
            tmp_select_metaclass_6__base = tmp_assign_source_40;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_12;
            CHECK_OBJECT(tmp_select_metaclass_6__base);
            tmp_expression_value_12 = tmp_select_metaclass_6__base;
            tmp_assign_source_39 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_12);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto try_except_handler_25;
            }
            goto try_return_handler_24;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_6;
            Py_DECREF(exception_keeper_type_13);
            Py_XDECREF(exception_keeper_value_13);
            Py_XDECREF(exception_keeper_tb_13);
            CHECK_OBJECT(tmp_select_metaclass_6__base);
            tmp_type_arg_6 = tmp_select_metaclass_6__base;
            tmp_assign_source_39 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_assign_source_39 == NULL));
            goto try_return_handler_24;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT(tmp_select_metaclass_6__base);
        Py_DECREF(tmp_select_metaclass_6__base);
        tmp_select_metaclass_6__base = NULL;
        goto outline_result_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_12:;
        condexpr_end_6:;
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_called_value_8 = tmp_class_creation_6__metaclass;
        tmp_args_element_value_18 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_args_element_value_19 = tmp_class_creation_6__bases;
        CHECK_OBJECT(tmp_class_creation_6__class_dict);
        tmp_args_element_value_20 = tmp_class_creation_6__class_dict;
        frame_01086d7c020062bb83618966df5492d4->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_6__class == NULL);
        tmp_class_creation_6__class = tmp_assign_source_41;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
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
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(tmp_class_creation_6__class);
        tmp_assign_source_42 = tmp_class_creation_6__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_42);
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
        PyObject *tmp_assign_source_43;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_26;
        }
        tmp_assign_source_43 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_assign_source_43, 0, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_43, 1, tmp_tuple_element_7);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_assign_source_43);
        goto try_except_handler_26;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        {
            PyObject *tmp_set_locals_7;
            tmp_set_locals_7 = PyDict_New();
            locals_confluent_kafka$error$$$class__7_ValueSerializationError_137 = tmp_set_locals_7;
        }
        tmp_dictset_value = mod_consts[30];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__7_ValueSerializationError_137, mod_consts[31], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[41];
        tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__7_ValueSerializationError_137, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = mod_consts[39];
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_confluent_kafka$error$$$function__9___init__(tmp_defaults_7);

            tmp_res = PyDict_SetItem(locals_confluent_kafka$error$$$class__7_ValueSerializationError_137, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        tmp_assign_source_44 = locals_confluent_kafka$error$$$class__7_ValueSerializationError_137;
        Py_INCREF(tmp_assign_source_44);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_confluent_kafka$error$$$class__7_ValueSerializationError_137);
        locals_confluent_kafka$error$$$class__7_ValueSerializationError_137 = NULL;
        goto outline_result_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_13:;
        assert(tmp_class_creation_7__class_dict == NULL);
        tmp_class_creation_7__class_dict = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        bool tmp_condition_result_7;
        PyObject *tmp_key_value_13;
        PyObject *tmp_dict_arg_value_13;
        PyObject *tmp_dict_arg_value_14;
        PyObject *tmp_key_value_14;
        tmp_key_value_13 = mod_consts[34];
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
        tmp_key_value_14 = mod_consts[34];
        tmp_assign_source_45 = DICT_GET_ITEM0(tmp_dict_arg_value_14, tmp_key_value_14);
        if (tmp_assign_source_45 == NULL) {
            tmp_assign_source_45 = Py_None;
        }
        assert(!(tmp_assign_source_45 == NULL));
        Py_INCREF(tmp_assign_source_45);
        goto condexpr_end_7;
        condexpr_false_7:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_expression_value_13 = tmp_class_creation_7__bases;
            tmp_subscript_value_7 = mod_consts[5];
            tmp_assign_source_46 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_7, 0);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto try_except_handler_26;
            }
            assert(tmp_select_metaclass_7__base == NULL);
            tmp_select_metaclass_7__base = tmp_assign_source_46;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_14;
            CHECK_OBJECT(tmp_select_metaclass_7__base);
            tmp_expression_value_14 = tmp_select_metaclass_7__base;
            tmp_assign_source_45 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_14);
            if (tmp_assign_source_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto try_except_handler_29;
            }
            goto try_return_handler_28;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_7;
            Py_DECREF(exception_keeper_type_15);
            Py_XDECREF(exception_keeper_value_15);
            Py_XDECREF(exception_keeper_tb_15);
            CHECK_OBJECT(tmp_select_metaclass_7__base);
            tmp_type_arg_7 = tmp_select_metaclass_7__base;
            tmp_assign_source_45 = BUILTIN_TYPE1(tmp_type_arg_7);
            assert(!(tmp_assign_source_45 == NULL));
            goto try_return_handler_28;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        CHECK_OBJECT(tmp_select_metaclass_7__base);
        Py_DECREF(tmp_select_metaclass_7__base);
        tmp_select_metaclass_7__base = NULL;
        goto outline_result_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_14:;
        condexpr_end_7:;
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_called_value_9 = tmp_class_creation_7__metaclass;
        tmp_args_element_value_21 = mod_consts[19];
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_args_element_value_22 = tmp_class_creation_7__bases;
        CHECK_OBJECT(tmp_class_creation_7__class_dict);
        tmp_args_element_value_23 = tmp_class_creation_7__class_dict;
        frame_01086d7c020062bb83618966df5492d4->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_7__class == NULL);
        tmp_class_creation_7__class = tmp_assign_source_47;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
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
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_01086d7c020062bb83618966df5492d4);
#endif
    popFrameStack();

    assertFrameObject(frame_01086d7c020062bb83618966df5492d4);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_01086d7c020062bb83618966df5492d4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_01086d7c020062bb83618966df5492d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_01086d7c020062bb83618966df5492d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_01086d7c020062bb83618966df5492d4, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_48;
        CHECK_OBJECT(tmp_class_creation_7__class);
        tmp_assign_source_48 = tmp_class_creation_7__class;
        UPDATE_STRING_DICT0(moduledict_confluent_kafka$error, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_48);
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("confluent_kafka.error", false);

    return module_confluent_kafka$error;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_confluent_kafka$error, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("confluent_kafka$error", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
