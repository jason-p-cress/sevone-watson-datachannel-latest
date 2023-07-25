/* Generated code for Python module 'fastavro.io.symbols'
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

/* The "module_fastavro$io$symbols" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_fastavro$io$symbols;
PyDictObject *moduledict_fastavro$io$symbols;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[61];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[61];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("fastavro.io.symbols"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 61; i++) {
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
void checkModuleConstants_fastavro$io$symbols(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 61; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e128e3caf7cd11d2327ce9ae7b6892fb;
static PyCodeObject *codeobj_28a3323b0250ffaa075bfe44a1d62c00;
static PyCodeObject *codeobj_dc63898efc35438dee8c74d632e12ae8;
static PyCodeObject *codeobj_5348fb50d23250ef587c003f57131f82;
static PyCodeObject *codeobj_236a8db11c68e4441818a138dae3faea;
static PyCodeObject *codeobj_cfad4c7b99643027a81864d8b3d9e1e4;
static PyCodeObject *codeobj_560d74cf5a9236e17b81455b47ec53da;
static PyCodeObject *codeobj_fa0571b3b162581e545fa7ad7fd3e780;
static PyCodeObject *codeobj_8f51dc43af3419ec16a46843fd1c4ffe;
static PyCodeObject *codeobj_4c28369da0d37a459c0368eb4ace2203;
static PyCodeObject *codeobj_d0d3c9edb33624d2647cb6249216fb0b;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[10]; CHECK_OBJECT(module_filename_obj);
    codeobj_e128e3caf7cd11d2327ce9ae7b6892fb = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[51], NULL, NULL, 0, 0, 0);
    codeobj_28a3323b0250ffaa075bfe44a1d62c00 = MAKE_CODEOBJECT(module_filename_obj, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[52], NULL, 2, 0, 0);
    codeobj_dc63898efc35438dee8c74d632e12ae8 = MAKE_CODEOBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[3], mod_consts[53], NULL, 2, 0, 0);
    codeobj_5348fb50d23250ef587c003f57131f82 = MAKE_CODEOBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[54], NULL, 2, 0, 0);
    codeobj_236a8db11c68e4441818a138dae3faea = MAKE_CODEOBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[55], NULL, 2, 0, 0);
    codeobj_cfad4c7b99643027a81864d8b3d9e1e4 = MAKE_CODEOBJECT(module_filename_obj, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[56], NULL, 2, 0, 0);
    codeobj_560d74cf5a9236e17b81455b47ec53da = MAKE_CODEOBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[3], mod_consts[57], NULL, 1, 0, 0);
    codeobj_fa0571b3b162581e545fa7ad7fd3e780 = MAKE_CODEOBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[58], NULL, 3, 0, 0);
    codeobj_8f51dc43af3419ec16a46843fd1c4ffe = MAKE_CODEOBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[52], NULL, 2, 0, 0);
    codeobj_4c28369da0d37a459c0368eb4ace2203 = MAKE_CODEOBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[59], NULL, 2, 0, 0);
    codeobj_d0d3c9edb33624d2647cb6249216fb0b = MAKE_CODEOBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[59], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__10___init__();


static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__2___eq__();


static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__3___ne__();


static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__4___init__();


static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__5___init__();


static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__6___init__();


static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__7_get_symbol();


static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__8_get_label();


static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__9___init__();


// The module function definitions.
static PyObject *impl_fastavro$io$symbols$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_production = python_pars[1];
    struct Nuitka_FrameObject *frame_cfad4c7b99643027a81864d8b3d9e1e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cfad4c7b99643027a81864d8b3d9e1e4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cfad4c7b99643027a81864d8b3d9e1e4)) {
        Py_XDECREF(cache_frame_cfad4c7b99643027a81864d8b3d9e1e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cfad4c7b99643027a81864d8b3d9e1e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cfad4c7b99643027a81864d8b3d9e1e4 = MAKE_FUNCTION_FRAME(codeobj_cfad4c7b99643027a81864d8b3d9e1e4, module_fastavro$io$symbols, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cfad4c7b99643027a81864d8b3d9e1e4->m_type_description == NULL);
    frame_cfad4c7b99643027a81864d8b3d9e1e4 = cache_frame_cfad4c7b99643027a81864d8b3d9e1e4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cfad4c7b99643027a81864d8b3d9e1e4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cfad4c7b99643027a81864d8b3d9e1e4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_production);
        tmp_assattr_value_1 = par_production;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cfad4c7b99643027a81864d8b3d9e1e4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cfad4c7b99643027a81864d8b3d9e1e4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cfad4c7b99643027a81864d8b3d9e1e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cfad4c7b99643027a81864d8b3d9e1e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cfad4c7b99643027a81864d8b3d9e1e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cfad4c7b99643027a81864d8b3d9e1e4,
        type_description_1,
        par_self,
        par_production
    );


    // Release cached frame if used for exception.
    if (frame_cfad4c7b99643027a81864d8b3d9e1e4 == cache_frame_cfad4c7b99643027a81864d8b3d9e1e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cfad4c7b99643027a81864d8b3d9e1e4);
        cache_frame_cfad4c7b99643027a81864d8b3d9e1e4 = NULL;
    }

    assertFrameObject(frame_cfad4c7b99643027a81864d8b3d9e1e4);

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
    CHECK_OBJECT(par_production);
    Py_DECREF(par_production);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_production);
    Py_DECREF(par_production);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$symbols$$$function__2___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_28a3323b0250ffaa075bfe44a1d62c00;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_28a3323b0250ffaa075bfe44a1d62c00 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_28a3323b0250ffaa075bfe44a1d62c00)) {
        Py_XDECREF(cache_frame_28a3323b0250ffaa075bfe44a1d62c00);

#if _DEBUG_REFCOUNTS
        if (cache_frame_28a3323b0250ffaa075bfe44a1d62c00 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_28a3323b0250ffaa075bfe44a1d62c00 = MAKE_FUNCTION_FRAME(codeobj_28a3323b0250ffaa075bfe44a1d62c00, module_fastavro$io$symbols, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_28a3323b0250ffaa075bfe44a1d62c00->m_type_description == NULL);
    frame_28a3323b0250ffaa075bfe44a1d62c00 = cache_frame_28a3323b0250ffaa075bfe44a1d62c00;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_28a3323b0250ffaa075bfe44a1d62c00);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_28a3323b0250ffaa075bfe44a1d62c00) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_value_2 = par_other;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 6;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_28a3323b0250ffaa075bfe44a1d62c00);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_28a3323b0250ffaa075bfe44a1d62c00);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_28a3323b0250ffaa075bfe44a1d62c00);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_28a3323b0250ffaa075bfe44a1d62c00, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_28a3323b0250ffaa075bfe44a1d62c00->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28a3323b0250ffaa075bfe44a1d62c00, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_28a3323b0250ffaa075bfe44a1d62c00,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_28a3323b0250ffaa075bfe44a1d62c00 == cache_frame_28a3323b0250ffaa075bfe44a1d62c00) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_28a3323b0250ffaa075bfe44a1d62c00);
        cache_frame_28a3323b0250ffaa075bfe44a1d62c00 = NULL;
    }

    assertFrameObject(frame_28a3323b0250ffaa075bfe44a1d62c00);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$symbols$$$function__3___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_8f51dc43af3419ec16a46843fd1c4ffe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8f51dc43af3419ec16a46843fd1c4ffe = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8f51dc43af3419ec16a46843fd1c4ffe)) {
        Py_XDECREF(cache_frame_8f51dc43af3419ec16a46843fd1c4ffe);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f51dc43af3419ec16a46843fd1c4ffe == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f51dc43af3419ec16a46843fd1c4ffe = MAKE_FUNCTION_FRAME(codeobj_8f51dc43af3419ec16a46843fd1c4ffe, module_fastavro$io$symbols, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8f51dc43af3419ec16a46843fd1c4ffe->m_type_description == NULL);
    frame_8f51dc43af3419ec16a46843fd1c4ffe = cache_frame_8f51dc43af3419ec16a46843fd1c4ffe;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8f51dc43af3419ec16a46843fd1c4ffe);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8f51dc43af3419ec16a46843fd1c4ffe) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        frame_8f51dc43af3419ec16a46843fd1c4ffe->m_frame.f_lineno = 9;
        tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f51dc43af3419ec16a46843fd1c4ffe);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f51dc43af3419ec16a46843fd1c4ffe);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8f51dc43af3419ec16a46843fd1c4ffe);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8f51dc43af3419ec16a46843fd1c4ffe, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f51dc43af3419ec16a46843fd1c4ffe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f51dc43af3419ec16a46843fd1c4ffe, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f51dc43af3419ec16a46843fd1c4ffe,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_8f51dc43af3419ec16a46843fd1c4ffe == cache_frame_8f51dc43af3419ec16a46843fd1c4ffe) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8f51dc43af3419ec16a46843fd1c4ffe);
        cache_frame_8f51dc43af3419ec16a46843fd1c4ffe = NULL;
    }

    assertFrameObject(frame_8f51dc43af3419ec16a46843fd1c4ffe);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$symbols$$$function__4___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_symbols = python_pars[1];
    struct Nuitka_FrameObject *frame_560d74cf5a9236e17b81455b47ec53da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_560d74cf5a9236e17b81455b47ec53da = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_560d74cf5a9236e17b81455b47ec53da)) {
        Py_XDECREF(cache_frame_560d74cf5a9236e17b81455b47ec53da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_560d74cf5a9236e17b81455b47ec53da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_560d74cf5a9236e17b81455b47ec53da = MAKE_FUNCTION_FRAME(codeobj_560d74cf5a9236e17b81455b47ec53da, module_fastavro$io$symbols, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_560d74cf5a9236e17b81455b47ec53da->m_type_description == NULL);
    frame_560d74cf5a9236e17b81455b47ec53da = cache_frame_560d74cf5a9236e17b81455b47ec53da;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_560d74cf5a9236e17b81455b47ec53da);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_560d74cf5a9236e17b81455b47ec53da) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_arg_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_symbols);
        tmp_list_arg_1 = par_symbols;
        tmp_args_element_value_2 = MAKE_LIST(tmp_list_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_560d74cf5a9236e17b81455b47ec53da->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_560d74cf5a9236e17b81455b47ec53da);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_560d74cf5a9236e17b81455b47ec53da);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_560d74cf5a9236e17b81455b47ec53da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_560d74cf5a9236e17b81455b47ec53da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_560d74cf5a9236e17b81455b47ec53da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_560d74cf5a9236e17b81455b47ec53da,
        type_description_1,
        par_self,
        par_symbols
    );


    // Release cached frame if used for exception.
    if (frame_560d74cf5a9236e17b81455b47ec53da == cache_frame_560d74cf5a9236e17b81455b47ec53da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_560d74cf5a9236e17b81455b47ec53da);
        cache_frame_560d74cf5a9236e17b81455b47ec53da = NULL;
    }

    assertFrameObject(frame_560d74cf5a9236e17b81455b47ec53da);

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
    CHECK_OBJECT(par_symbols);
    Py_DECREF(par_symbols);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_symbols);
    Py_DECREF(par_symbols);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$symbols$$$function__5___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_end = python_pars[1];
    PyObject *par_symbols = python_pars[2];
    struct Nuitka_FrameObject *frame_dc63898efc35438dee8c74d632e12ae8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_dc63898efc35438dee8c74d632e12ae8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dc63898efc35438dee8c74d632e12ae8)) {
        Py_XDECREF(cache_frame_dc63898efc35438dee8c74d632e12ae8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dc63898efc35438dee8c74d632e12ae8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dc63898efc35438dee8c74d632e12ae8 = MAKE_FUNCTION_FRAME(codeobj_dc63898efc35438dee8c74d632e12ae8, module_fastavro$io$symbols, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dc63898efc35438dee8c74d632e12ae8->m_type_description == NULL);
    frame_dc63898efc35438dee8c74d632e12ae8 = cache_frame_dc63898efc35438dee8c74d632e12ae8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dc63898efc35438dee8c74d632e12ae8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dc63898efc35438dee8c74d632e12ae8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_arg_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_symbols);
        tmp_list_arg_1 = par_symbols;
        tmp_args_element_value_2 = MAKE_LIST(tmp_list_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_dc63898efc35438dee8c74d632e12ae8->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[5];
        CHECK_OBJECT(par_self);
        tmp_args_element_value_4 = par_self;
        frame_dc63898efc35438dee8c74d632e12ae8->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_end);
        tmp_assattr_value_1 = par_end;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dc63898efc35438dee8c74d632e12ae8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dc63898efc35438dee8c74d632e12ae8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dc63898efc35438dee8c74d632e12ae8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dc63898efc35438dee8c74d632e12ae8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dc63898efc35438dee8c74d632e12ae8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dc63898efc35438dee8c74d632e12ae8,
        type_description_1,
        par_self,
        par_end,
        par_symbols
    );


    // Release cached frame if used for exception.
    if (frame_dc63898efc35438dee8c74d632e12ae8 == cache_frame_dc63898efc35438dee8c74d632e12ae8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_dc63898efc35438dee8c74d632e12ae8);
        cache_frame_dc63898efc35438dee8c74d632e12ae8 = NULL;
    }

    assertFrameObject(frame_dc63898efc35438dee8c74d632e12ae8);

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
    CHECK_OBJECT(par_end);
    Py_DECREF(par_end);
    CHECK_OBJECT(par_symbols);
    Py_DECREF(par_symbols);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_end);
    Py_DECREF(par_end);
    CHECK_OBJECT(par_symbols);
    Py_DECREF(par_symbols);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$symbols$$$function__6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_symbols = python_pars[1];
    PyObject *par_labels = python_pars[2];
    struct Nuitka_FrameObject *frame_fa0571b3b162581e545fa7ad7fd3e780;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_fa0571b3b162581e545fa7ad7fd3e780 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fa0571b3b162581e545fa7ad7fd3e780)) {
        Py_XDECREF(cache_frame_fa0571b3b162581e545fa7ad7fd3e780);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa0571b3b162581e545fa7ad7fd3e780 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa0571b3b162581e545fa7ad7fd3e780 = MAKE_FUNCTION_FRAME(codeobj_fa0571b3b162581e545fa7ad7fd3e780, module_fastavro$io$symbols, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fa0571b3b162581e545fa7ad7fd3e780->m_type_description == NULL);
    frame_fa0571b3b162581e545fa7ad7fd3e780 = cache_frame_fa0571b3b162581e545fa7ad7fd3e780;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fa0571b3b162581e545fa7ad7fd3e780);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fa0571b3b162581e545fa7ad7fd3e780) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_symbols);
        tmp_args_element_value_2 = par_symbols;
        frame_fa0571b3b162581e545fa7ad7fd3e780->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[3],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_labels);
        tmp_assattr_value_1 = par_labels;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fa0571b3b162581e545fa7ad7fd3e780);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fa0571b3b162581e545fa7ad7fd3e780);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fa0571b3b162581e545fa7ad7fd3e780, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa0571b3b162581e545fa7ad7fd3e780->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa0571b3b162581e545fa7ad7fd3e780, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa0571b3b162581e545fa7ad7fd3e780,
        type_description_1,
        par_self,
        par_symbols,
        par_labels
    );


    // Release cached frame if used for exception.
    if (frame_fa0571b3b162581e545fa7ad7fd3e780 == cache_frame_fa0571b3b162581e545fa7ad7fd3e780) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_fa0571b3b162581e545fa7ad7fd3e780);
        cache_frame_fa0571b3b162581e545fa7ad7fd3e780 = NULL;
    }

    assertFrameObject(frame_fa0571b3b162581e545fa7ad7fd3e780);

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
    CHECK_OBJECT(par_symbols);
    Py_DECREF(par_symbols);
    CHECK_OBJECT(par_labels);
    Py_DECREF(par_labels);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_symbols);
    Py_DECREF(par_symbols);
    CHECK_OBJECT(par_labels);
    Py_DECREF(par_labels);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$symbols$$$function__7_get_symbol(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    struct Nuitka_FrameObject *frame_d0d3c9edb33624d2647cb6249216fb0b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d0d3c9edb33624d2647cb6249216fb0b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d0d3c9edb33624d2647cb6249216fb0b)) {
        Py_XDECREF(cache_frame_d0d3c9edb33624d2647cb6249216fb0b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0d3c9edb33624d2647cb6249216fb0b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0d3c9edb33624d2647cb6249216fb0b = MAKE_FUNCTION_FRAME(codeobj_d0d3c9edb33624d2647cb6249216fb0b, module_fastavro$io$symbols, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d0d3c9edb33624d2647cb6249216fb0b->m_type_description == NULL);
    frame_d0d3c9edb33624d2647cb6249216fb0b = cache_frame_d0d3c9edb33624d2647cb6249216fb0b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d0d3c9edb33624d2647cb6249216fb0b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d0d3c9edb33624d2647cb6249216fb0b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_subscript_value_1 = par_index;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d0d3c9edb33624d2647cb6249216fb0b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d0d3c9edb33624d2647cb6249216fb0b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d0d3c9edb33624d2647cb6249216fb0b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d0d3c9edb33624d2647cb6249216fb0b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0d3c9edb33624d2647cb6249216fb0b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0d3c9edb33624d2647cb6249216fb0b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0d3c9edb33624d2647cb6249216fb0b,
        type_description_1,
        par_self,
        par_index
    );


    // Release cached frame if used for exception.
    if (frame_d0d3c9edb33624d2647cb6249216fb0b == cache_frame_d0d3c9edb33624d2647cb6249216fb0b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d0d3c9edb33624d2647cb6249216fb0b);
        cache_frame_d0d3c9edb33624d2647cb6249216fb0b = NULL;
    }

    assertFrameObject(frame_d0d3c9edb33624d2647cb6249216fb0b);

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
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$symbols$$$function__8_get_label(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    struct Nuitka_FrameObject *frame_4c28369da0d37a459c0368eb4ace2203;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4c28369da0d37a459c0368eb4ace2203 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4c28369da0d37a459c0368eb4ace2203)) {
        Py_XDECREF(cache_frame_4c28369da0d37a459c0368eb4ace2203);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c28369da0d37a459c0368eb4ace2203 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c28369da0d37a459c0368eb4ace2203 = MAKE_FUNCTION_FRAME(codeobj_4c28369da0d37a459c0368eb4ace2203, module_fastavro$io$symbols, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4c28369da0d37a459c0368eb4ace2203->m_type_description == NULL);
    frame_4c28369da0d37a459c0368eb4ace2203 = cache_frame_4c28369da0d37a459c0368eb4ace2203;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4c28369da0d37a459c0368eb4ace2203);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4c28369da0d37a459c0368eb4ace2203) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_subscript_value_1 = par_index;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4c28369da0d37a459c0368eb4ace2203);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4c28369da0d37a459c0368eb4ace2203);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4c28369da0d37a459c0368eb4ace2203);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c28369da0d37a459c0368eb4ace2203, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c28369da0d37a459c0368eb4ace2203->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c28369da0d37a459c0368eb4ace2203, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c28369da0d37a459c0368eb4ace2203,
        type_description_1,
        par_self,
        par_index
    );


    // Release cached frame if used for exception.
    if (frame_4c28369da0d37a459c0368eb4ace2203 == cache_frame_4c28369da0d37a459c0368eb4ace2203) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4c28369da0d37a459c0368eb4ace2203);
        cache_frame_4c28369da0d37a459c0368eb4ace2203 = NULL;
    }

    assertFrameObject(frame_4c28369da0d37a459c0368eb4ace2203);

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
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$symbols$$$function__9___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_labels = python_pars[1];
    struct Nuitka_FrameObject *frame_236a8db11c68e4441818a138dae3faea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_236a8db11c68e4441818a138dae3faea = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_236a8db11c68e4441818a138dae3faea)) {
        Py_XDECREF(cache_frame_236a8db11c68e4441818a138dae3faea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_236a8db11c68e4441818a138dae3faea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_236a8db11c68e4441818a138dae3faea = MAKE_FUNCTION_FRAME(codeobj_236a8db11c68e4441818a138dae3faea, module_fastavro$io$symbols, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_236a8db11c68e4441818a138dae3faea->m_type_description == NULL);
    frame_236a8db11c68e4441818a138dae3faea = cache_frame_236a8db11c68e4441818a138dae3faea;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_236a8db11c68e4441818a138dae3faea);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_236a8db11c68e4441818a138dae3faea) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_labels);
        tmp_assattr_value_1 = par_labels;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_236a8db11c68e4441818a138dae3faea);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_236a8db11c68e4441818a138dae3faea);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_236a8db11c68e4441818a138dae3faea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_236a8db11c68e4441818a138dae3faea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_236a8db11c68e4441818a138dae3faea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_236a8db11c68e4441818a138dae3faea,
        type_description_1,
        par_self,
        par_labels
    );


    // Release cached frame if used for exception.
    if (frame_236a8db11c68e4441818a138dae3faea == cache_frame_236a8db11c68e4441818a138dae3faea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_236a8db11c68e4441818a138dae3faea);
        cache_frame_236a8db11c68e4441818a138dae3faea = NULL;
    }

    assertFrameObject(frame_236a8db11c68e4441818a138dae3faea);

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
    CHECK_OBJECT(par_labels);
    Py_DECREF(par_labels);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_labels);
    Py_DECREF(par_labels);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$symbols$$$function__10___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_field_name = python_pars[1];
    struct Nuitka_FrameObject *frame_5348fb50d23250ef587c003f57131f82;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5348fb50d23250ef587c003f57131f82 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5348fb50d23250ef587c003f57131f82)) {
        Py_XDECREF(cache_frame_5348fb50d23250ef587c003f57131f82);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5348fb50d23250ef587c003f57131f82 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5348fb50d23250ef587c003f57131f82 = MAKE_FUNCTION_FRAME(codeobj_5348fb50d23250ef587c003f57131f82, module_fastavro$io$symbols, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5348fb50d23250ef587c003f57131f82->m_type_description == NULL);
    frame_5348fb50d23250ef587c003f57131f82 = cache_frame_5348fb50d23250ef587c003f57131f82;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5348fb50d23250ef587c003f57131f82);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5348fb50d23250ef587c003f57131f82) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_field_name);
        tmp_assattr_value_1 = par_field_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5348fb50d23250ef587c003f57131f82);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5348fb50d23250ef587c003f57131f82);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5348fb50d23250ef587c003f57131f82, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5348fb50d23250ef587c003f57131f82->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5348fb50d23250ef587c003f57131f82, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5348fb50d23250ef587c003f57131f82,
        type_description_1,
        par_self,
        par_field_name
    );


    // Release cached frame if used for exception.
    if (frame_5348fb50d23250ef587c003f57131f82 == cache_frame_5348fb50d23250ef587c003f57131f82) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5348fb50d23250ef587c003f57131f82);
        cache_frame_5348fb50d23250ef587c003f57131f82 = NULL;
    }

    assertFrameObject(frame_5348fb50d23250ef587c003f57131f82);

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
    CHECK_OBJECT(par_field_name);
    Py_DECREF(par_field_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_field_name);
    Py_DECREF(par_field_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__10___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$symbols$$$function__10___init__,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5348fb50d23250ef587c003f57131f82,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$symbols,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$symbols$$$function__1___init__,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cfad4c7b99643027a81864d8b3d9e1e4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$symbols,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__2___eq__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$symbols$$$function__2___eq__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_28a3323b0250ffaa075bfe44a1d62c00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$symbols,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__3___ne__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$symbols$$$function__3___ne__,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8f51dc43af3419ec16a46843fd1c4ffe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$symbols,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__4___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$symbols$$$function__4___init__,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_560d74cf5a9236e17b81455b47ec53da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$symbols,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__5___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$symbols$$$function__5___init__,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dc63898efc35438dee8c74d632e12ae8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$symbols,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__6___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$symbols$$$function__6___init__,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fa0571b3b162581e545fa7ad7fd3e780,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$symbols,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__7_get_symbol() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$symbols$$$function__7_get_symbol,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d0d3c9edb33624d2647cb6249216fb0b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$symbols,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__8_get_label() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$symbols$$$function__8_get_label,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4c28369da0d37a459c0368eb4ace2203,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$symbols,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$symbols$$$function__9___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$symbols$$$function__9___init__,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_236a8db11c68e4441818a138dae3faea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$symbols,
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

function_impl_code functable_fastavro$io$symbols[] = {
    impl_fastavro$io$symbols$$$function__1___init__,
    impl_fastavro$io$symbols$$$function__2___eq__,
    impl_fastavro$io$symbols$$$function__3___ne__,
    impl_fastavro$io$symbols$$$function__4___init__,
    impl_fastavro$io$symbols$$$function__5___init__,
    impl_fastavro$io$symbols$$$function__6___init__,
    impl_fastavro$io$symbols$$$function__7_get_symbol,
    impl_fastavro$io$symbols$$$function__8_get_label,
    impl_fastavro$io$symbols$$$function__9___init__,
    impl_fastavro$io$symbols$$$function__10___init__,
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

    function_impl_code *current = functable_fastavro$io$symbols;
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

    if (offset > sizeof(functable_fastavro$io$symbols) || offset < 0) {
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
        functable_fastavro$io$symbols[offset],
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
        module_fastavro$io$symbols,
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
PyObject *modulecode_fastavro$io$symbols(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("fastavro.io.symbols");

    // Store the module for future use.
    module_fastavro$io$symbols = module;

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
        PRINT_STRING("fastavro.io.symbols: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("fastavro.io.symbols: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("fastavro.io.symbols: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initfastavro$io$symbols\n");

    moduledict_fastavro$io$symbols = MODULE_DICT(module_fastavro$io$symbols);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_fastavro$io$symbols,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_fastavro$io$symbols,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[60]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_fastavro$io$symbols,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_fastavro$io$symbols,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_fastavro$io$symbols,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_fastavro$io$symbols);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_fastavro$io$symbols);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__class = NULL;
    PyObject *tmp_class_creation_12__class_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__class = NULL;
    PyObject *tmp_class_creation_13__class_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
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
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__class = NULL;
    PyObject *tmp_class_creation_8__class_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__class = NULL;
    PyObject *tmp_class_creation_9__class_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___eq__ = NULL;
    PyObject *tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___init__ = NULL;
    PyObject *tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___ne__ = NULL;
    PyObject *tmp_select_metaclass_10__base = NULL;
    PyObject *tmp_select_metaclass_11__base = NULL;
    PyObject *tmp_select_metaclass_12__base = NULL;
    PyObject *tmp_select_metaclass_13__base = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    PyObject *tmp_select_metaclass_5__base = NULL;
    PyObject *tmp_select_metaclass_6__base = NULL;
    PyObject *tmp_select_metaclass_7__base = NULL;
    PyObject *tmp_select_metaclass_8__base = NULL;
    PyObject *tmp_select_metaclass_9__base = NULL;
    int tmp_res;
    struct Nuitka_FrameObject *frame_e128e3caf7cd11d2327ce9ae7b6892fb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_fastavro$io$symbols$$$class__2_Root_12 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_fastavro$io$symbols$$$class__3_Terminal_16 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_fastavro$io$symbols$$$class__4_Sequence_43 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_fastavro$io$symbols$$$class__5_Repeater_48 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_fastavro$io$symbols$$$class__6_Alternative_56 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_fastavro$io$symbols$$$class__7_Action_69 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_fastavro$io$symbols$$$class__8_EnumLabels_73 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_fastavro$io$symbols$$$class__9_UnionEnd_78 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *locals_fastavro$io$symbols$$$class__10_RecordStart_82 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_fastavro$io$symbols$$$class__11_RecordEnd_86 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_fastavro$io$symbols$$$class__12_FieldStart_90 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *locals_fastavro$io$symbols$$$class__13_FieldEnd_95 = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[12];
            Py_INCREF(tmp_defaults_1);


            tmp_assign_source_4 = MAKE_FUNCTION_fastavro$io$symbols$$$function__1___init__(tmp_defaults_1);

            assert(tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___init__ == NULL);
            tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___init__ = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;


            tmp_assign_source_5 = MAKE_FUNCTION_fastavro$io$symbols$$$function__2___eq__();

            assert(tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___eq__ == NULL);
            tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___eq__ = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;


            tmp_assign_source_6 = MAKE_FUNCTION_fastavro$io$symbols$$$function__3___ne__();

            assert(tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___ne__ == NULL);
            tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___ne__ = tmp_assign_source_6;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_dict_value_1 = mod_consts[14];
            tmp_dict_key_1 = mod_consts[15];
            tmp_assign_source_3 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___init__);
            tmp_dict_value_1 = tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___init__;
            tmp_dict_key_1 = mod_consts[3];
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___eq__);
            tmp_dict_value_1 = tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___eq__;
            tmp_dict_key_1 = mod_consts[1];
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___ne__);
            tmp_dict_value_1 = tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___ne__;
            tmp_dict_key_1 = mod_consts[13];
            tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___init__);
        Py_DECREF(tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___init__);
        tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___init__ = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___eq__);
        Py_DECREF(tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___eq__);
        tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___eq__ = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___ne__);
        Py_DECREF(tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___ne__);
        tmp_locals_fastavro$io$symbols$$$class__1_Symbol_1_key___ne__ = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_7;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        tmp_key_value_1 = mod_consts[16];
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
        tmp_key_value_2 = mod_consts[16];
        tmp_assign_source_7 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_assign_source_7 == NULL) {
            tmp_assign_source_7 = Py_None;
        }
        assert(!(tmp_assign_source_7 == NULL));
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_7 = (PyObject *)&PyType_Type;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        Py_INCREF(tmp_assign_source_7);
        tmp_class_creation_1__metaclass = tmp_assign_source_7;
    }
    // Frame without reuse.
    frame_e128e3caf7cd11d2327ce9ae7b6892fb = MAKE_MODULE_FRAME(codeobj_e128e3caf7cd11d2327ce9ae7b6892fb, module_fastavro$io$symbols);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_e128e3caf7cd11d2327ce9ae7b6892fb);
    assert(Py_REFCNT(frame_e128e3caf7cd11d2327ce9ae7b6892fb) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_value_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_value_1 = mod_consts[2];
        tmp_args_element_value_2 = mod_consts[17];
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_value_3 = tmp_class_creation_1__class_dict;
        frame_e128e3caf7cd11d2327ce9ae7b6892fb->m_frame.f_lineno = 1;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_8;
    }
    goto try_end_1;
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
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_9 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_9);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        tmp_assign_source_10 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_10, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_fastavro$io$symbols$$$class__2_Root_12 = tmp_set_locals_1;
        }
        tmp_dictset_value = mod_consts[14];
        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__2_Root_12, mod_consts[15], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_11 = locals_fastavro$io$symbols$$$class__2_Root_12;
        Py_INCREF(tmp_assign_source_11);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_fastavro$io$symbols$$$class__2_Root_12);
        locals_fastavro$io$symbols$$$class__2_Root_12 = NULL;
        goto outline_result_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        assert(tmp_class_creation_2__class_dict == NULL);
        tmp_class_creation_2__class_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        bool tmp_condition_result_2;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_key_value_4;
        tmp_key_value_3 = mod_consts[16];
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
        tmp_key_value_4 = mod_consts[16];
        tmp_assign_source_12 = DICT_GET_ITEM0(tmp_dict_arg_value_4, tmp_key_value_4);
        if (tmp_assign_source_12 == NULL) {
            tmp_assign_source_12 = Py_None;
        }
        assert(!(tmp_assign_source_12 == NULL));
        Py_INCREF(tmp_assign_source_12);
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_expression_value_1 = tmp_class_creation_2__bases;
            tmp_subscript_value_1 = mod_consts[5];
            tmp_assign_source_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_3;
            }
            assert(tmp_select_metaclass_2__base == NULL);
            tmp_select_metaclass_2__base = tmp_assign_source_13;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_expression_value_2 = tmp_select_metaclass_2__base;
            tmp_assign_source_12 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_6;
            }
            goto try_return_handler_5;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF(exception_keeper_type_2);
            Py_XDECREF(exception_keeper_value_2);
            Py_XDECREF(exception_keeper_tb_2);
            CHECK_OBJECT(tmp_select_metaclass_2__base);
            tmp_type_arg_1 = tmp_select_metaclass_2__base;
            tmp_assign_source_12 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_assign_source_12 == NULL));
            goto try_return_handler_5;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_select_metaclass_2__base);
        Py_DECREF(tmp_select_metaclass_2__base);
        tmp_select_metaclass_2__base = NULL;
        goto outline_result_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_3:;
        condexpr_end_2:;
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_called_value_2 = tmp_class_creation_2__metaclass;
        tmp_args_element_value_4 = mod_consts[18];
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_args_element_value_5 = tmp_class_creation_2__bases;
        CHECK_OBJECT(tmp_class_creation_2__class_dict);
        tmp_args_element_value_6 = tmp_class_creation_2__class_dict;
        frame_e128e3caf7cd11d2327ce9ae7b6892fb->m_frame.f_lineno = 12;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_2__class == NULL);
        tmp_class_creation_2__class = tmp_assign_source_14;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_class_creation_2__class);
        tmp_assign_source_15 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_15);
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_7;
        }
        tmp_assign_source_16 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_16, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_fastavro$io$symbols$$$class__3_Terminal_16 = tmp_set_locals_2;
        }
        tmp_dictset_value = mod_consts[14];
        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__3_Terminal_16, mod_consts[15], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_17 = locals_fastavro$io$symbols$$$class__3_Terminal_16;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_fastavro$io$symbols$$$class__3_Terminal_16);
        locals_fastavro$io$symbols$$$class__3_Terminal_16 = NULL;
        goto outline_result_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_4:;
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
        tmp_key_value_5 = mod_consts[16];
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
        tmp_key_value_6 = mod_consts[16];
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
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_2;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_expression_value_3 = tmp_class_creation_3__bases;
            tmp_subscript_value_2 = mod_consts[5];
            tmp_assign_source_19 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 0);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_7;
            }
            assert(tmp_select_metaclass_3__base == NULL);
            tmp_select_metaclass_3__base = tmp_assign_source_19;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_4;
            CHECK_OBJECT(tmp_select_metaclass_3__base);
            tmp_expression_value_4 = tmp_select_metaclass_3__base;
            tmp_assign_source_18 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_4);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_10;
            }
            goto try_return_handler_9;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_2;
            Py_DECREF(exception_keeper_type_4);
            Py_XDECREF(exception_keeper_value_4);
            Py_XDECREF(exception_keeper_tb_4);
            CHECK_OBJECT(tmp_select_metaclass_3__base);
            tmp_type_arg_2 = tmp_select_metaclass_3__base;
            tmp_assign_source_18 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_assign_source_18 == NULL));
            goto try_return_handler_9;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(tmp_select_metaclass_3__base);
        Py_DECREF(tmp_select_metaclass_3__base);
        tmp_select_metaclass_3__base = NULL;
        goto outline_result_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_5:;
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
        tmp_args_element_value_7 = mod_consts[19];
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_args_element_value_8 = tmp_class_creation_3__bases;
        CHECK_OBJECT(tmp_class_creation_3__class_dict);
        tmp_args_element_value_9 = tmp_class_creation_3__class_dict;
        frame_e128e3caf7cd11d2327ce9ae7b6892fb->m_frame.f_lineno = 16;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_3__class == NULL);
        tmp_class_creation_3__class = tmp_assign_source_20;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_class_creation_3__class);
        tmp_assign_source_21 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_21);
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
        PyObject *tmp_type_name_value_1;
        PyObject *tmp_bases_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dict_value_2;
        tmp_type_name_value_1 = mod_consts[20];
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_1, 0, tmp_tuple_element_3);
        tmp_dict_value_2 = PyDict_New();
        tmp_assign_source_22 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_1, tmp_bases_value_1, tmp_dict_value_2);
        Py_DECREF(tmp_bases_value_1);
        Py_DECREF(tmp_dict_value_2);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_type_name_value_2;
        PyObject *tmp_bases_value_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_dict_value_3;
        tmp_type_name_value_2 = mod_consts[21];
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_2, 0, tmp_tuple_element_4);
        tmp_dict_value_3 = PyDict_New();
        tmp_assign_source_23 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_2, tmp_bases_value_2, tmp_dict_value_3);
        Py_DECREF(tmp_bases_value_2);
        Py_DECREF(tmp_dict_value_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_type_name_value_3;
        PyObject *tmp_bases_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_dict_value_4;
        tmp_type_name_value_3 = mod_consts[22];
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_3 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_3, 0, tmp_tuple_element_5);
        tmp_dict_value_4 = PyDict_New();
        tmp_assign_source_24 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_3, tmp_bases_value_3, tmp_dict_value_4);
        Py_DECREF(tmp_bases_value_3);
        Py_DECREF(tmp_dict_value_4);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_type_name_value_4;
        PyObject *tmp_bases_value_4;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_dict_value_5;
        tmp_type_name_value_4 = mod_consts[23];
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_4 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_4, 0, tmp_tuple_element_6);
        tmp_dict_value_5 = PyDict_New();
        tmp_assign_source_25 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_4, tmp_bases_value_4, tmp_dict_value_5);
        Py_DECREF(tmp_bases_value_4);
        Py_DECREF(tmp_dict_value_5);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_type_name_value_5;
        PyObject *tmp_bases_value_5;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_dict_value_6;
        tmp_type_name_value_5 = mod_consts[24];
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_5 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_5, 0, tmp_tuple_element_7);
        tmp_dict_value_6 = PyDict_New();
        tmp_assign_source_26 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_5, tmp_bases_value_5, tmp_dict_value_6);
        Py_DECREF(tmp_bases_value_5);
        Py_DECREF(tmp_dict_value_6);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_type_name_value_6;
        PyObject *tmp_bases_value_6;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_dict_value_7;
        tmp_type_name_value_6 = mod_consts[25];
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_6 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_6, 0, tmp_tuple_element_8);
        tmp_dict_value_7 = PyDict_New();
        tmp_assign_source_27 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_6, tmp_bases_value_6, tmp_dict_value_7);
        Py_DECREF(tmp_bases_value_6);
        Py_DECREF(tmp_dict_value_7);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_type_name_value_7;
        PyObject *tmp_bases_value_7;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_dict_value_8;
        tmp_type_name_value_7 = mod_consts[26];
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_7 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_7, 0, tmp_tuple_element_9);
        tmp_dict_value_8 = PyDict_New();
        tmp_assign_source_28 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_7, tmp_bases_value_7, tmp_dict_value_8);
        Py_DECREF(tmp_bases_value_7);
        Py_DECREF(tmp_dict_value_8);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_type_name_value_8;
        PyObject *tmp_bases_value_8;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_dict_value_9;
        tmp_type_name_value_8 = mod_consts[27];
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_8 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_8, 0, tmp_tuple_element_10);
        tmp_dict_value_9 = PyDict_New();
        tmp_assign_source_29 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_8, tmp_bases_value_8, tmp_dict_value_9);
        Py_DECREF(tmp_bases_value_8);
        Py_DECREF(tmp_dict_value_9);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_type_name_value_9;
        PyObject *tmp_bases_value_9;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_dict_value_10;
        tmp_type_name_value_9 = mod_consts[28];
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_9 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_9, 0, tmp_tuple_element_11);
        tmp_dict_value_10 = PyDict_New();
        tmp_assign_source_30 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_9, tmp_bases_value_9, tmp_dict_value_10);
        Py_DECREF(tmp_bases_value_9);
        Py_DECREF(tmp_dict_value_10);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_type_name_value_10;
        PyObject *tmp_bases_value_10;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_dict_value_11;
        tmp_type_name_value_10 = mod_consts[29];
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_10 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_10, 0, tmp_tuple_element_12);
        tmp_dict_value_11 = PyDict_New();
        tmp_assign_source_31 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_10, tmp_bases_value_10, tmp_dict_value_11);
        Py_DECREF(tmp_bases_value_10);
        Py_DECREF(tmp_dict_value_11);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_type_name_value_11;
        PyObject *tmp_bases_value_11;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_dict_value_12;
        tmp_type_name_value_11 = mod_consts[30];
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_13 == NULL)) {
            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_11 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_11, 0, tmp_tuple_element_13);
        tmp_dict_value_12 = PyDict_New();
        tmp_assign_source_32 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_11, tmp_bases_value_11, tmp_dict_value_12);
        Py_DECREF(tmp_bases_value_11);
        Py_DECREF(tmp_dict_value_12);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_type_name_value_12;
        PyObject *tmp_bases_value_12;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_dict_value_13;
        tmp_type_name_value_12 = mod_consts[31];
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_14 == NULL)) {
            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_12 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_12, 0, tmp_tuple_element_14);
        tmp_dict_value_13 = PyDict_New();
        tmp_assign_source_33 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_12, tmp_bases_value_12, tmp_dict_value_13);
        Py_DECREF(tmp_bases_value_12);
        Py_DECREF(tmp_dict_value_13);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_type_name_value_13;
        PyObject *tmp_bases_value_13;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_dict_value_14;
        tmp_type_name_value_13 = mod_consts[32];
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_13 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_13, 0, tmp_tuple_element_15);
        tmp_dict_value_14 = PyDict_New();
        tmp_assign_source_34 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_13, tmp_bases_value_13, tmp_dict_value_14);
        Py_DECREF(tmp_bases_value_13);
        Py_DECREF(tmp_dict_value_14);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_type_name_value_14;
        PyObject *tmp_bases_value_14;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_dict_value_15;
        tmp_type_name_value_14 = mod_consts[33];
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_14 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_14, 0, tmp_tuple_element_16);
        tmp_dict_value_15 = PyDict_New();
        tmp_assign_source_35 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_14, tmp_bases_value_14, tmp_dict_value_15);
        Py_DECREF(tmp_bases_value_14);
        Py_DECREF(tmp_dict_value_15);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_type_name_value_15;
        PyObject *tmp_bases_value_15;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_dict_value_16;
        tmp_type_name_value_15 = mod_consts[34];
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_15 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_15, 0, tmp_tuple_element_17);
        tmp_dict_value_16 = PyDict_New();
        tmp_assign_source_36 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_15, tmp_bases_value_15, tmp_dict_value_16);
        Py_DECREF(tmp_bases_value_15);
        Py_DECREF(tmp_dict_value_16);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_type_name_value_16;
        PyObject *tmp_bases_value_16;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_dict_value_17;
        tmp_type_name_value_16 = mod_consts[35];
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_18 == NULL)) {
            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_16 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_16, 0, tmp_tuple_element_18);
        tmp_dict_value_17 = PyDict_New();
        tmp_assign_source_37 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_16, tmp_bases_value_16, tmp_dict_value_17);
        Py_DECREF(tmp_bases_value_16);
        Py_DECREF(tmp_dict_value_17);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_type_name_value_17;
        PyObject *tmp_bases_value_17;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_dict_value_18;
        tmp_type_name_value_17 = mod_consts[36];
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_tuple_element_19 == NULL)) {
            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_bases_value_17 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_bases_value_17, 0, tmp_tuple_element_19);
        tmp_dict_value_18 = PyDict_New();
        tmp_assign_source_38 = BUILTIN_TYPE3(mod_consts[14], tmp_type_name_value_17, tmp_bases_value_17, tmp_dict_value_18);
        Py_DECREF(tmp_bases_value_17);
        Py_DECREF(tmp_dict_value_18);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_38);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_tuple_element_20;
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_20 == NULL)) {
            tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_11;
        }
        tmp_assign_source_39 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_39, 0, tmp_tuple_element_20);
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_fastavro$io$symbols$$$class__4_Sequence_43 = tmp_set_locals_3;
        }
        tmp_dictset_value = mod_consts[14];
        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__4_Sequence_43, mod_consts[15], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_fastavro$io$symbols$$$function__4___init__();

        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__4_Sequence_43, mod_consts[3], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_40 = locals_fastavro$io$symbols$$$class__4_Sequence_43;
        Py_INCREF(tmp_assign_source_40);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_fastavro$io$symbols$$$class__4_Sequence_43);
        locals_fastavro$io$symbols$$$class__4_Sequence_43 = NULL;
        goto outline_result_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_6:;
        assert(tmp_class_creation_4__class_dict == NULL);
        tmp_class_creation_4__class_dict = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        bool tmp_condition_result_4;
        PyObject *tmp_key_value_7;
        PyObject *tmp_dict_arg_value_7;
        PyObject *tmp_dict_arg_value_8;
        PyObject *tmp_key_value_8;
        tmp_key_value_7 = mod_consts[16];
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
        tmp_key_value_8 = mod_consts[16];
        tmp_assign_source_41 = DICT_GET_ITEM0(tmp_dict_arg_value_8, tmp_key_value_8);
        if (tmp_assign_source_41 == NULL) {
            tmp_assign_source_41 = Py_None;
        }
        assert(!(tmp_assign_source_41 == NULL));
        Py_INCREF(tmp_assign_source_41);
        goto condexpr_end_4;
        condexpr_false_4:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_3;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_expression_value_5 = tmp_class_creation_4__bases;
            tmp_subscript_value_3 = mod_consts[5];
            tmp_assign_source_42 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_3, 0);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto try_except_handler_11;
            }
            assert(tmp_select_metaclass_4__base == NULL);
            tmp_select_metaclass_4__base = tmp_assign_source_42;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_6;
            CHECK_OBJECT(tmp_select_metaclass_4__base);
            tmp_expression_value_6 = tmp_select_metaclass_4__base;
            tmp_assign_source_41 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_6);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto try_except_handler_14;
            }
            goto try_return_handler_13;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_3;
            Py_DECREF(exception_keeper_type_6);
            Py_XDECREF(exception_keeper_value_6);
            Py_XDECREF(exception_keeper_tb_6);
            CHECK_OBJECT(tmp_select_metaclass_4__base);
            tmp_type_arg_3 = tmp_select_metaclass_4__base;
            tmp_assign_source_41 = BUILTIN_TYPE1(tmp_type_arg_3);
            assert(!(tmp_assign_source_41 == NULL));
            goto try_return_handler_13;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(tmp_select_metaclass_4__base);
        Py_DECREF(tmp_select_metaclass_4__base);
        tmp_select_metaclass_4__base = NULL;
        goto outline_result_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_7:;
        condexpr_end_4:;
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_called_value_4 = tmp_class_creation_4__metaclass;
        tmp_args_element_value_10 = mod_consts[37];
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_args_element_value_11 = tmp_class_creation_4__bases;
        CHECK_OBJECT(tmp_class_creation_4__class_dict);
        tmp_args_element_value_12 = tmp_class_creation_4__class_dict;
        frame_e128e3caf7cd11d2327ce9ae7b6892fb->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__class == NULL);
        tmp_class_creation_4__class = tmp_assign_source_43;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_class_creation_4__class);
        tmp_assign_source_44 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_44);
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
        PyObject *tmp_assign_source_45;
        PyObject *tmp_tuple_element_21;
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_21 == NULL)) {
            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_15;
        }
        tmp_assign_source_45 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_45, 0, tmp_tuple_element_21);
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        {
            PyObject *tmp_set_locals_4;
            tmp_set_locals_4 = PyDict_New();
            locals_fastavro$io$symbols$$$class__5_Repeater_48 = tmp_set_locals_4;
        }
        tmp_dictset_value = mod_consts[14];
        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__5_Repeater_48, mod_consts[15], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__5_Repeater_48, mod_consts[9], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_fastavro$io$symbols$$$function__5___init__();

        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__5_Repeater_48, mod_consts[3], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_46 = locals_fastavro$io$symbols$$$class__5_Repeater_48;
        Py_INCREF(tmp_assign_source_46);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_fastavro$io$symbols$$$class__5_Repeater_48);
        locals_fastavro$io$symbols$$$class__5_Repeater_48 = NULL;
        goto outline_result_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_8:;
        assert(tmp_class_creation_5__class_dict == NULL);
        tmp_class_creation_5__class_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        bool tmp_condition_result_5;
        PyObject *tmp_key_value_9;
        PyObject *tmp_dict_arg_value_9;
        PyObject *tmp_dict_arg_value_10;
        PyObject *tmp_key_value_10;
        tmp_key_value_9 = mod_consts[16];
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
        tmp_key_value_10 = mod_consts[16];
        tmp_assign_source_47 = DICT_GET_ITEM0(tmp_dict_arg_value_10, tmp_key_value_10);
        if (tmp_assign_source_47 == NULL) {
            tmp_assign_source_47 = Py_None;
        }
        assert(!(tmp_assign_source_47 == NULL));
        Py_INCREF(tmp_assign_source_47);
        goto condexpr_end_5;
        condexpr_false_5:;
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_4;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_expression_value_7 = tmp_class_creation_5__bases;
            tmp_subscript_value_4 = mod_consts[5];
            tmp_assign_source_48 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_4, 0);
            if (tmp_assign_source_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto try_except_handler_15;
            }
            assert(tmp_select_metaclass_5__base == NULL);
            tmp_select_metaclass_5__base = tmp_assign_source_48;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_8;
            CHECK_OBJECT(tmp_select_metaclass_5__base);
            tmp_expression_value_8 = tmp_select_metaclass_5__base;
            tmp_assign_source_47 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_8);
            if (tmp_assign_source_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto try_except_handler_18;
            }
            goto try_return_handler_17;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_4;
            Py_DECREF(exception_keeper_type_8);
            Py_XDECREF(exception_keeper_value_8);
            Py_XDECREF(exception_keeper_tb_8);
            CHECK_OBJECT(tmp_select_metaclass_5__base);
            tmp_type_arg_4 = tmp_select_metaclass_5__base;
            tmp_assign_source_47 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_assign_source_47 == NULL));
            goto try_return_handler_17;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(tmp_select_metaclass_5__base);
        Py_DECREF(tmp_select_metaclass_5__base);
        tmp_select_metaclass_5__base = NULL;
        goto outline_result_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_9:;
        condexpr_end_5:;
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_called_value_5 = tmp_class_creation_5__metaclass;
        tmp_args_element_value_13 = mod_consts[39];
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_args_element_value_14 = tmp_class_creation_5__bases;
        CHECK_OBJECT(tmp_class_creation_5__class_dict);
        tmp_args_element_value_15 = tmp_class_creation_5__class_dict;
        frame_e128e3caf7cd11d2327ce9ae7b6892fb->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__class == NULL);
        tmp_class_creation_5__class = tmp_assign_source_49;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT(tmp_class_creation_5__class);
        tmp_assign_source_50 = tmp_class_creation_5__class;
        UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_50);
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
        PyObject *tmp_assign_source_51;
        PyObject *tmp_tuple_element_22;
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_22 == NULL)) {
            tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_19;
        }
        tmp_assign_source_51 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_51, 0, tmp_tuple_element_22);
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        {
            PyObject *tmp_set_locals_5;
            tmp_set_locals_5 = PyDict_New();
            locals_fastavro$io$symbols$$$class__6_Alternative_56 = tmp_set_locals_5;
        }
        tmp_dictset_value = mod_consts[14];
        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__6_Alternative_56, mod_consts[15], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[40];
        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__6_Alternative_56, mod_consts[9], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_fastavro$io$symbols$$$function__6___init__();

        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__6_Alternative_56, mod_consts[3], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_fastavro$io$symbols$$$function__7_get_symbol();

        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__6_Alternative_56, mod_consts[41], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_fastavro$io$symbols$$$function__8_get_label();

        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__6_Alternative_56, mod_consts[42], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_52 = locals_fastavro$io$symbols$$$class__6_Alternative_56;
        Py_INCREF(tmp_assign_source_52);
        goto try_return_handler_20;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF(locals_fastavro$io$symbols$$$class__6_Alternative_56);
        locals_fastavro$io$symbols$$$class__6_Alternative_56 = NULL;
        goto outline_result_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_10:;
        assert(tmp_class_creation_6__class_dict == NULL);
        tmp_class_creation_6__class_dict = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        bool tmp_condition_result_6;
        PyObject *tmp_key_value_11;
        PyObject *tmp_dict_arg_value_11;
        PyObject *tmp_dict_arg_value_12;
        PyObject *tmp_key_value_12;
        tmp_key_value_11 = mod_consts[16];
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
        tmp_key_value_12 = mod_consts[16];
        tmp_assign_source_53 = DICT_GET_ITEM0(tmp_dict_arg_value_12, tmp_key_value_12);
        if (tmp_assign_source_53 == NULL) {
            tmp_assign_source_53 = Py_None;
        }
        assert(!(tmp_assign_source_53 == NULL));
        Py_INCREF(tmp_assign_source_53);
        goto condexpr_end_6;
        condexpr_false_6:;
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_5;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_expression_value_9 = tmp_class_creation_6__bases;
            tmp_subscript_value_5 = mod_consts[5];
            tmp_assign_source_54 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_5, 0);
            if (tmp_assign_source_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto try_except_handler_19;
            }
            assert(tmp_select_metaclass_6__base == NULL);
            tmp_select_metaclass_6__base = tmp_assign_source_54;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_10;
            CHECK_OBJECT(tmp_select_metaclass_6__base);
            tmp_expression_value_10 = tmp_select_metaclass_6__base;
            tmp_assign_source_53 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_10);
            if (tmp_assign_source_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto try_except_handler_22;
            }
            goto try_return_handler_21;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_5;
            Py_DECREF(exception_keeper_type_10);
            Py_XDECREF(exception_keeper_value_10);
            Py_XDECREF(exception_keeper_tb_10);
            CHECK_OBJECT(tmp_select_metaclass_6__base);
            tmp_type_arg_5 = tmp_select_metaclass_6__base;
            tmp_assign_source_53 = BUILTIN_TYPE1(tmp_type_arg_5);
            assert(!(tmp_assign_source_53 == NULL));
            goto try_return_handler_21;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(tmp_select_metaclass_6__base);
        Py_DECREF(tmp_select_metaclass_6__base);
        tmp_select_metaclass_6__base = NULL;
        goto outline_result_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_11:;
        condexpr_end_6:;
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_called_value_6 = tmp_class_creation_6__metaclass;
        tmp_args_element_value_16 = mod_consts[43];
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_args_element_value_17 = tmp_class_creation_6__bases;
        CHECK_OBJECT(tmp_class_creation_6__class_dict);
        tmp_args_element_value_18 = tmp_class_creation_6__class_dict;
        frame_e128e3caf7cd11d2327ce9ae7b6892fb->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_6__class == NULL);
        tmp_class_creation_6__class = tmp_assign_source_55;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_class_creation_6__class);
        tmp_assign_source_56 = tmp_class_creation_6__class;
        UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_56);
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
        PyObject *tmp_assign_source_57;
        PyObject *tmp_tuple_element_23;
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_tuple_element_23 == NULL)) {
            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_23;
        }
        tmp_assign_source_57 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_57, 0, tmp_tuple_element_23);
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        {
            PyObject *tmp_set_locals_6;
            tmp_set_locals_6 = PyDict_New();
            locals_fastavro$io$symbols$$$class__7_Action_69 = tmp_set_locals_6;
        }
        tmp_dictset_value = mod_consts[14];
        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__7_Action_69, mod_consts[15], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_58 = locals_fastavro$io$symbols$$$class__7_Action_69;
        Py_INCREF(tmp_assign_source_58);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_fastavro$io$symbols$$$class__7_Action_69);
        locals_fastavro$io$symbols$$$class__7_Action_69 = NULL;
        goto outline_result_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_12:;
        assert(tmp_class_creation_7__class_dict == NULL);
        tmp_class_creation_7__class_dict = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        bool tmp_condition_result_7;
        PyObject *tmp_key_value_13;
        PyObject *tmp_dict_arg_value_13;
        PyObject *tmp_dict_arg_value_14;
        PyObject *tmp_key_value_14;
        tmp_key_value_13 = mod_consts[16];
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
        tmp_key_value_14 = mod_consts[16];
        tmp_assign_source_59 = DICT_GET_ITEM0(tmp_dict_arg_value_14, tmp_key_value_14);
        if (tmp_assign_source_59 == NULL) {
            tmp_assign_source_59 = Py_None;
        }
        assert(!(tmp_assign_source_59 == NULL));
        Py_INCREF(tmp_assign_source_59);
        goto condexpr_end_7;
        condexpr_false_7:;
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_6;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_expression_value_11 = tmp_class_creation_7__bases;
            tmp_subscript_value_6 = mod_consts[5];
            tmp_assign_source_60 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_6, 0);
            if (tmp_assign_source_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto try_except_handler_23;
            }
            assert(tmp_select_metaclass_7__base == NULL);
            tmp_select_metaclass_7__base = tmp_assign_source_60;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_12;
            CHECK_OBJECT(tmp_select_metaclass_7__base);
            tmp_expression_value_12 = tmp_select_metaclass_7__base;
            tmp_assign_source_59 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_12);
            if (tmp_assign_source_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto try_except_handler_26;
            }
            goto try_return_handler_25;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_6;
            Py_DECREF(exception_keeper_type_12);
            Py_XDECREF(exception_keeper_value_12);
            Py_XDECREF(exception_keeper_tb_12);
            CHECK_OBJECT(tmp_select_metaclass_7__base);
            tmp_type_arg_6 = tmp_select_metaclass_7__base;
            tmp_assign_source_59 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_assign_source_59 == NULL));
            goto try_return_handler_25;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT(tmp_select_metaclass_7__base);
        Py_DECREF(tmp_select_metaclass_7__base);
        tmp_select_metaclass_7__base = NULL;
        goto outline_result_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_13:;
        condexpr_end_7:;
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_called_value_7 = tmp_class_creation_7__metaclass;
        tmp_args_element_value_19 = mod_consts[44];
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_args_element_value_20 = tmp_class_creation_7__bases;
        CHECK_OBJECT(tmp_class_creation_7__class_dict);
        tmp_args_element_value_21 = tmp_class_creation_7__class_dict;
        frame_e128e3caf7cd11d2327ce9ae7b6892fb->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_7__class == NULL);
        tmp_class_creation_7__class = tmp_assign_source_61;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_62;
        CHECK_OBJECT(tmp_class_creation_7__class);
        tmp_assign_source_62 = tmp_class_creation_7__class;
        UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_62);
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
        PyObject *tmp_assign_source_63;
        PyObject *tmp_tuple_element_24;
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_24 == NULL)) {
            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_tuple_element_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_27;
        }
        tmp_assign_source_63 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_63, 0, tmp_tuple_element_24);
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        {
            PyObject *tmp_set_locals_7;
            tmp_set_locals_7 = PyDict_New();
            locals_fastavro$io$symbols$$$class__8_EnumLabels_73 = tmp_set_locals_7;
        }
        tmp_dictset_value = mod_consts[14];
        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__8_EnumLabels_73, mod_consts[15], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_fastavro$io$symbols$$$function__9___init__();

        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__8_EnumLabels_73, mod_consts[3], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_64 = locals_fastavro$io$symbols$$$class__8_EnumLabels_73;
        Py_INCREF(tmp_assign_source_64);
        goto try_return_handler_28;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF(locals_fastavro$io$symbols$$$class__8_EnumLabels_73);
        locals_fastavro$io$symbols$$$class__8_EnumLabels_73 = NULL;
        goto outline_result_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_14:;
        assert(tmp_class_creation_8__class_dict == NULL);
        tmp_class_creation_8__class_dict = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        bool tmp_condition_result_8;
        PyObject *tmp_key_value_15;
        PyObject *tmp_dict_arg_value_15;
        PyObject *tmp_dict_arg_value_16;
        PyObject *tmp_key_value_16;
        tmp_key_value_15 = mod_consts[16];
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
        tmp_key_value_16 = mod_consts[16];
        tmp_assign_source_65 = DICT_GET_ITEM0(tmp_dict_arg_value_16, tmp_key_value_16);
        if (tmp_assign_source_65 == NULL) {
            tmp_assign_source_65 = Py_None;
        }
        assert(!(tmp_assign_source_65 == NULL));
        Py_INCREF(tmp_assign_source_65);
        goto condexpr_end_8;
        condexpr_false_8:;
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_7;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_expression_value_13 = tmp_class_creation_8__bases;
            tmp_subscript_value_7 = mod_consts[5];
            tmp_assign_source_66 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_7, 0);
            if (tmp_assign_source_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto try_except_handler_27;
            }
            assert(tmp_select_metaclass_8__base == NULL);
            tmp_select_metaclass_8__base = tmp_assign_source_66;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_14;
            CHECK_OBJECT(tmp_select_metaclass_8__base);
            tmp_expression_value_14 = tmp_select_metaclass_8__base;
            tmp_assign_source_65 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_14);
            if (tmp_assign_source_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto try_except_handler_30;
            }
            goto try_return_handler_29;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_7;
            Py_DECREF(exception_keeper_type_14);
            Py_XDECREF(exception_keeper_value_14);
            Py_XDECREF(exception_keeper_tb_14);
            CHECK_OBJECT(tmp_select_metaclass_8__base);
            tmp_type_arg_7 = tmp_select_metaclass_8__base;
            tmp_assign_source_65 = BUILTIN_TYPE1(tmp_type_arg_7);
            assert(!(tmp_assign_source_65 == NULL));
            goto try_return_handler_29;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        CHECK_OBJECT(tmp_select_metaclass_8__base);
        Py_DECREF(tmp_select_metaclass_8__base);
        tmp_select_metaclass_8__base = NULL;
        goto outline_result_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_15:;
        condexpr_end_8:;
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_called_value_8 = tmp_class_creation_8__metaclass;
        tmp_args_element_value_22 = mod_consts[45];
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_args_element_value_23 = tmp_class_creation_8__bases;
        CHECK_OBJECT(tmp_class_creation_8__class_dict);
        tmp_args_element_value_24 = tmp_class_creation_8__class_dict;
        frame_e128e3caf7cd11d2327ce9ae7b6892fb->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_27;
        }
        assert(tmp_class_creation_8__class == NULL);
        tmp_class_creation_8__class = tmp_assign_source_67;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    {
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT(tmp_class_creation_8__class);
        tmp_assign_source_68 = tmp_class_creation_8__class;
        UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_68);
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
        PyObject *tmp_assign_source_69;
        PyObject *tmp_tuple_element_25;
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_25 == NULL)) {
            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_tuple_element_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_31;
        }
        tmp_assign_source_69 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_69, 0, tmp_tuple_element_25);
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        {
            PyObject *tmp_set_locals_8;
            tmp_set_locals_8 = PyDict_New();
            locals_fastavro$io$symbols$$$class__9_UnionEnd_78 = tmp_set_locals_8;
        }
        tmp_dictset_value = mod_consts[14];
        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__9_UnionEnd_78, mod_consts[15], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_70 = locals_fastavro$io$symbols$$$class__9_UnionEnd_78;
        Py_INCREF(tmp_assign_source_70);
        goto try_return_handler_32;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        Py_DECREF(locals_fastavro$io$symbols$$$class__9_UnionEnd_78);
        locals_fastavro$io$symbols$$$class__9_UnionEnd_78 = NULL;
        goto outline_result_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_16:;
        assert(tmp_class_creation_9__class_dict == NULL);
        tmp_class_creation_9__class_dict = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        bool tmp_condition_result_9;
        PyObject *tmp_key_value_17;
        PyObject *tmp_dict_arg_value_17;
        PyObject *tmp_dict_arg_value_18;
        PyObject *tmp_key_value_18;
        tmp_key_value_17 = mod_consts[16];
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
        tmp_key_value_18 = mod_consts[16];
        tmp_assign_source_71 = DICT_GET_ITEM0(tmp_dict_arg_value_18, tmp_key_value_18);
        if (tmp_assign_source_71 == NULL) {
            tmp_assign_source_71 = Py_None;
        }
        assert(!(tmp_assign_source_71 == NULL));
        Py_INCREF(tmp_assign_source_71);
        goto condexpr_end_9;
        condexpr_false_9:;
        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_8;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_expression_value_15 = tmp_class_creation_9__bases;
            tmp_subscript_value_8 = mod_consts[5];
            tmp_assign_source_72 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_8, 0);
            if (tmp_assign_source_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto try_except_handler_31;
            }
            assert(tmp_select_metaclass_9__base == NULL);
            tmp_select_metaclass_9__base = tmp_assign_source_72;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_16;
            CHECK_OBJECT(tmp_select_metaclass_9__base);
            tmp_expression_value_16 = tmp_select_metaclass_9__base;
            tmp_assign_source_71 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_16);
            if (tmp_assign_source_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto try_except_handler_34;
            }
            goto try_return_handler_33;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_8;
            Py_DECREF(exception_keeper_type_16);
            Py_XDECREF(exception_keeper_value_16);
            Py_XDECREF(exception_keeper_tb_16);
            CHECK_OBJECT(tmp_select_metaclass_9__base);
            tmp_type_arg_8 = tmp_select_metaclass_9__base;
            tmp_assign_source_71 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_assign_source_71 == NULL));
            goto try_return_handler_33;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        CHECK_OBJECT(tmp_select_metaclass_9__base);
        Py_DECREF(tmp_select_metaclass_9__base);
        tmp_select_metaclass_9__base = NULL;
        goto outline_result_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_17:;
        condexpr_end_9:;
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_called_value_9 = tmp_class_creation_9__metaclass;
        tmp_args_element_value_25 = mod_consts[46];
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_args_element_value_26 = tmp_class_creation_9__bases;
        CHECK_OBJECT(tmp_class_creation_9__class_dict);
        tmp_args_element_value_27 = tmp_class_creation_9__class_dict;
        frame_e128e3caf7cd11d2327ce9ae7b6892fb->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto try_except_handler_31;
        }
        assert(tmp_class_creation_9__class == NULL);
        tmp_class_creation_9__class = tmp_assign_source_73;
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
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
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT(tmp_class_creation_9__class);
        tmp_assign_source_74 = tmp_class_creation_9__class;
        UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_74);
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
        PyObject *tmp_assign_source_75;
        PyObject *tmp_tuple_element_26;
        tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_26 == NULL)) {
            tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_tuple_element_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_35;
        }
        tmp_assign_source_75 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_75, 0, tmp_tuple_element_26);
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        {
            PyObject *tmp_set_locals_9;
            tmp_set_locals_9 = PyDict_New();
            locals_fastavro$io$symbols$$$class__10_RecordStart_82 = tmp_set_locals_9;
        }
        tmp_dictset_value = mod_consts[14];
        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__10_RecordStart_82, mod_consts[15], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_76 = locals_fastavro$io$symbols$$$class__10_RecordStart_82;
        Py_INCREF(tmp_assign_source_76);
        goto try_return_handler_36;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        Py_DECREF(locals_fastavro$io$symbols$$$class__10_RecordStart_82);
        locals_fastavro$io$symbols$$$class__10_RecordStart_82 = NULL;
        goto outline_result_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_18:;
        assert(tmp_class_creation_10__class_dict == NULL);
        tmp_class_creation_10__class_dict = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        bool tmp_condition_result_10;
        PyObject *tmp_key_value_19;
        PyObject *tmp_dict_arg_value_19;
        PyObject *tmp_dict_arg_value_20;
        PyObject *tmp_key_value_20;
        tmp_key_value_19 = mod_consts[16];
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
        tmp_key_value_20 = mod_consts[16];
        tmp_assign_source_77 = DICT_GET_ITEM0(tmp_dict_arg_value_20, tmp_key_value_20);
        if (tmp_assign_source_77 == NULL) {
            tmp_assign_source_77 = Py_None;
        }
        assert(!(tmp_assign_source_77 == NULL));
        Py_INCREF(tmp_assign_source_77);
        goto condexpr_end_10;
        condexpr_false_10:;
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_9;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_expression_value_17 = tmp_class_creation_10__bases;
            tmp_subscript_value_9 = mod_consts[5];
            tmp_assign_source_78 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_9, 0);
            if (tmp_assign_source_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto try_except_handler_35;
            }
            assert(tmp_select_metaclass_10__base == NULL);
            tmp_select_metaclass_10__base = tmp_assign_source_78;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_18;
            CHECK_OBJECT(tmp_select_metaclass_10__base);
            tmp_expression_value_18 = tmp_select_metaclass_10__base;
            tmp_assign_source_77 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_18);
            if (tmp_assign_source_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto try_except_handler_38;
            }
            goto try_return_handler_37;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_9;
            Py_DECREF(exception_keeper_type_18);
            Py_XDECREF(exception_keeper_value_18);
            Py_XDECREF(exception_keeper_tb_18);
            CHECK_OBJECT(tmp_select_metaclass_10__base);
            tmp_type_arg_9 = tmp_select_metaclass_10__base;
            tmp_assign_source_77 = BUILTIN_TYPE1(tmp_type_arg_9);
            assert(!(tmp_assign_source_77 == NULL));
            goto try_return_handler_37;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        CHECK_OBJECT(tmp_select_metaclass_10__base);
        Py_DECREF(tmp_select_metaclass_10__base);
        tmp_select_metaclass_10__base = NULL;
        goto outline_result_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_19:;
        condexpr_end_10:;
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_called_value_10 = tmp_class_creation_10__metaclass;
        tmp_args_element_value_28 = mod_consts[47];
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_args_element_value_29 = tmp_class_creation_10__bases;
        CHECK_OBJECT(tmp_class_creation_10__class_dict);
        tmp_args_element_value_30 = tmp_class_creation_10__class_dict;
        frame_e128e3caf7cd11d2327ce9ae7b6892fb->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_assign_source_79 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_10, call_args);
        }

        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_10__class == NULL);
        tmp_class_creation_10__class = tmp_assign_source_79;
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
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
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    {
        PyObject *tmp_assign_source_80;
        CHECK_OBJECT(tmp_class_creation_10__class);
        tmp_assign_source_80 = tmp_class_creation_10__class;
        UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_80);
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
        PyObject *tmp_assign_source_81;
        PyObject *tmp_tuple_element_27;
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_39;
        }
        tmp_assign_source_81 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_81, 0, tmp_tuple_element_27);
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        {
            PyObject *tmp_set_locals_10;
            tmp_set_locals_10 = PyDict_New();
            locals_fastavro$io$symbols$$$class__11_RecordEnd_86 = tmp_set_locals_10;
        }
        tmp_dictset_value = mod_consts[14];
        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__11_RecordEnd_86, mod_consts[15], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_82 = locals_fastavro$io$symbols$$$class__11_RecordEnd_86;
        Py_INCREF(tmp_assign_source_82);
        goto try_return_handler_40;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        Py_DECREF(locals_fastavro$io$symbols$$$class__11_RecordEnd_86);
        locals_fastavro$io$symbols$$$class__11_RecordEnd_86 = NULL;
        goto outline_result_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_20:;
        assert(tmp_class_creation_11__class_dict == NULL);
        tmp_class_creation_11__class_dict = tmp_assign_source_82;
    }
    {
        PyObject *tmp_assign_source_83;
        bool tmp_condition_result_11;
        PyObject *tmp_key_value_21;
        PyObject *tmp_dict_arg_value_21;
        PyObject *tmp_dict_arg_value_22;
        PyObject *tmp_key_value_22;
        tmp_key_value_21 = mod_consts[16];
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
        tmp_key_value_22 = mod_consts[16];
        tmp_assign_source_83 = DICT_GET_ITEM0(tmp_dict_arg_value_22, tmp_key_value_22);
        if (tmp_assign_source_83 == NULL) {
            tmp_assign_source_83 = Py_None;
        }
        assert(!(tmp_assign_source_83 == NULL));
        Py_INCREF(tmp_assign_source_83);
        goto condexpr_end_11;
        condexpr_false_11:;
        {
            PyObject *tmp_assign_source_84;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_10;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_expression_value_19 = tmp_class_creation_11__bases;
            tmp_subscript_value_10 = mod_consts[5];
            tmp_assign_source_84 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_19, tmp_subscript_value_10, 0);
            if (tmp_assign_source_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto try_except_handler_39;
            }
            assert(tmp_select_metaclass_11__base == NULL);
            tmp_select_metaclass_11__base = tmp_assign_source_84;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_20;
            CHECK_OBJECT(tmp_select_metaclass_11__base);
            tmp_expression_value_20 = tmp_select_metaclass_11__base;
            tmp_assign_source_83 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_20);
            if (tmp_assign_source_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto try_except_handler_42;
            }
            goto try_return_handler_41;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_42:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_10;
            Py_DECREF(exception_keeper_type_20);
            Py_XDECREF(exception_keeper_value_20);
            Py_XDECREF(exception_keeper_tb_20);
            CHECK_OBJECT(tmp_select_metaclass_11__base);
            tmp_type_arg_10 = tmp_select_metaclass_11__base;
            tmp_assign_source_83 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_assign_source_83 == NULL));
            goto try_return_handler_41;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_41:;
        CHECK_OBJECT(tmp_select_metaclass_11__base);
        Py_DECREF(tmp_select_metaclass_11__base);
        tmp_select_metaclass_11__base = NULL;
        goto outline_result_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_21:;
        condexpr_end_11:;
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_called_value_11 = tmp_class_creation_11__metaclass;
        tmp_args_element_value_31 = mod_consts[48];
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_args_element_value_32 = tmp_class_creation_11__bases;
        CHECK_OBJECT(tmp_class_creation_11__class_dict);
        tmp_args_element_value_33 = tmp_class_creation_11__class_dict;
        frame_e128e3caf7cd11d2327ce9ae7b6892fb->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_assign_source_85 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_11, call_args);
        }

        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_39;
        }
        assert(tmp_class_creation_11__class == NULL);
        tmp_class_creation_11__class = tmp_assign_source_85;
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
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
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    {
        PyObject *tmp_assign_source_86;
        CHECK_OBJECT(tmp_class_creation_11__class);
        tmp_assign_source_86 = tmp_class_creation_11__class;
        UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_86);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_tuple_element_28;
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_28 == NULL)) {
            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_tuple_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_43;
        }
        tmp_assign_source_87 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_87, 0, tmp_tuple_element_28);
        assert(tmp_class_creation_12__bases == NULL);
        tmp_class_creation_12__bases = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        {
            PyObject *tmp_set_locals_11;
            tmp_set_locals_11 = PyDict_New();
            locals_fastavro$io$symbols$$$class__12_FieldStart_90 = tmp_set_locals_11;
        }
        tmp_dictset_value = mod_consts[14];
        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__12_FieldStart_90, mod_consts[15], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_fastavro$io$symbols$$$function__10___init__();

        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__12_FieldStart_90, mod_consts[3], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_88 = locals_fastavro$io$symbols$$$class__12_FieldStart_90;
        Py_INCREF(tmp_assign_source_88);
        goto try_return_handler_44;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_44:;
        Py_DECREF(locals_fastavro$io$symbols$$$class__12_FieldStart_90);
        locals_fastavro$io$symbols$$$class__12_FieldStart_90 = NULL;
        goto outline_result_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_22:;
        assert(tmp_class_creation_12__class_dict == NULL);
        tmp_class_creation_12__class_dict = tmp_assign_source_88;
    }
    {
        PyObject *tmp_assign_source_89;
        bool tmp_condition_result_12;
        PyObject *tmp_key_value_23;
        PyObject *tmp_dict_arg_value_23;
        PyObject *tmp_dict_arg_value_24;
        PyObject *tmp_key_value_24;
        tmp_key_value_23 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_12__class_dict);
        tmp_dict_arg_value_23 = tmp_class_creation_12__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_23, tmp_key_value_23);
        assert(!(tmp_res == -1));
        tmp_condition_result_12 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_12__class_dict);
        tmp_dict_arg_value_24 = tmp_class_creation_12__class_dict;
        tmp_key_value_24 = mod_consts[16];
        tmp_assign_source_89 = DICT_GET_ITEM0(tmp_dict_arg_value_24, tmp_key_value_24);
        if (tmp_assign_source_89 == NULL) {
            tmp_assign_source_89 = Py_None;
        }
        assert(!(tmp_assign_source_89 == NULL));
        Py_INCREF(tmp_assign_source_89);
        goto condexpr_end_12;
        condexpr_false_12:;
        {
            PyObject *tmp_assign_source_90;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_11;
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_expression_value_21 = tmp_class_creation_12__bases;
            tmp_subscript_value_11 = mod_consts[5];
            tmp_assign_source_90 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_11, 0);
            if (tmp_assign_source_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto try_except_handler_43;
            }
            assert(tmp_select_metaclass_12__base == NULL);
            tmp_select_metaclass_12__base = tmp_assign_source_90;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_22;
            CHECK_OBJECT(tmp_select_metaclass_12__base);
            tmp_expression_value_22 = tmp_select_metaclass_12__base;
            tmp_assign_source_89 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_22);
            if (tmp_assign_source_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto try_except_handler_46;
            }
            goto try_return_handler_45;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_46:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_11;
            Py_DECREF(exception_keeper_type_22);
            Py_XDECREF(exception_keeper_value_22);
            Py_XDECREF(exception_keeper_tb_22);
            CHECK_OBJECT(tmp_select_metaclass_12__base);
            tmp_type_arg_11 = tmp_select_metaclass_12__base;
            tmp_assign_source_89 = BUILTIN_TYPE1(tmp_type_arg_11);
            assert(!(tmp_assign_source_89 == NULL));
            goto try_return_handler_45;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_45:;
        CHECK_OBJECT(tmp_select_metaclass_12__base);
        Py_DECREF(tmp_select_metaclass_12__base);
        tmp_select_metaclass_12__base = NULL;
        goto outline_result_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_23:;
        condexpr_end_12:;
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_called_value_12 = tmp_class_creation_12__metaclass;
        tmp_args_element_value_34 = mod_consts[49];
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_args_element_value_35 = tmp_class_creation_12__bases;
        CHECK_OBJECT(tmp_class_creation_12__class_dict);
        tmp_args_element_value_36 = tmp_class_creation_12__class_dict;
        frame_e128e3caf7cd11d2327ce9ae7b6892fb->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_assign_source_91 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_12, call_args);
        }

        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_43;
        }
        assert(tmp_class_creation_12__class == NULL);
        tmp_class_creation_12__class = tmp_assign_source_91;
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    Py_XDECREF(tmp_class_creation_12__class_dict);
    tmp_class_creation_12__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    {
        PyObject *tmp_assign_source_92;
        CHECK_OBJECT(tmp_class_creation_12__class);
        tmp_assign_source_92 = tmp_class_creation_12__class;
        UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_92);
    }
    CHECK_OBJECT(tmp_class_creation_12__class);
    Py_DECREF(tmp_class_creation_12__class);
    tmp_class_creation_12__class = NULL;
    CHECK_OBJECT(tmp_class_creation_12__bases);
    Py_DECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_12__class_dict);
    Py_DECREF(tmp_class_creation_12__class_dict);
    tmp_class_creation_12__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__metaclass);
    Py_DECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_tuple_element_29;
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_29 == NULL)) {
            tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_tuple_element_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_47;
        }
        tmp_assign_source_93 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_93, 0, tmp_tuple_element_29);
        assert(tmp_class_creation_13__bases == NULL);
        tmp_class_creation_13__bases = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        {
            PyObject *tmp_set_locals_12;
            tmp_set_locals_12 = PyDict_New();
            locals_fastavro$io$symbols$$$class__13_FieldEnd_95 = tmp_set_locals_12;
        }
        tmp_dictset_value = mod_consts[14];
        tmp_res = PyDict_SetItem(locals_fastavro$io$symbols$$$class__13_FieldEnd_95, mod_consts[15], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        tmp_assign_source_94 = locals_fastavro$io$symbols$$$class__13_FieldEnd_95;
        Py_INCREF(tmp_assign_source_94);
        goto try_return_handler_48;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_48:;
        Py_DECREF(locals_fastavro$io$symbols$$$class__13_FieldEnd_95);
        locals_fastavro$io$symbols$$$class__13_FieldEnd_95 = NULL;
        goto outline_result_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_24:;
        assert(tmp_class_creation_13__class_dict == NULL);
        tmp_class_creation_13__class_dict = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        bool tmp_condition_result_13;
        PyObject *tmp_key_value_25;
        PyObject *tmp_dict_arg_value_25;
        PyObject *tmp_dict_arg_value_26;
        PyObject *tmp_key_value_26;
        tmp_key_value_25 = mod_consts[16];
        CHECK_OBJECT(tmp_class_creation_13__class_dict);
        tmp_dict_arg_value_25 = tmp_class_creation_13__class_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_25, tmp_key_value_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_13__class_dict);
        tmp_dict_arg_value_26 = tmp_class_creation_13__class_dict;
        tmp_key_value_26 = mod_consts[16];
        tmp_assign_source_95 = DICT_GET_ITEM0(tmp_dict_arg_value_26, tmp_key_value_26);
        if (tmp_assign_source_95 == NULL) {
            tmp_assign_source_95 = Py_None;
        }
        assert(!(tmp_assign_source_95 == NULL));
        Py_INCREF(tmp_assign_source_95);
        goto condexpr_end_13;
        condexpr_false_13:;
        {
            PyObject *tmp_assign_source_96;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_12;
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_expression_value_23 = tmp_class_creation_13__bases;
            tmp_subscript_value_12 = mod_consts[5];
            tmp_assign_source_96 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_23, tmp_subscript_value_12, 0);
            if (tmp_assign_source_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto try_except_handler_47;
            }
            assert(tmp_select_metaclass_13__base == NULL);
            tmp_select_metaclass_13__base = tmp_assign_source_96;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_expression_value_24;
            CHECK_OBJECT(tmp_select_metaclass_13__base);
            tmp_expression_value_24 = tmp_select_metaclass_13__base;
            tmp_assign_source_95 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_24);
            if (tmp_assign_source_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto try_except_handler_50;
            }
            goto try_return_handler_49;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Exception handler code:
        try_except_handler_50:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_12;
            Py_DECREF(exception_keeper_type_24);
            Py_XDECREF(exception_keeper_value_24);
            Py_XDECREF(exception_keeper_tb_24);
            CHECK_OBJECT(tmp_select_metaclass_13__base);
            tmp_type_arg_12 = tmp_select_metaclass_13__base;
            tmp_assign_source_95 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_assign_source_95 == NULL));
            goto try_return_handler_49;
        }
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_49:;
        CHECK_OBJECT(tmp_select_metaclass_13__base);
        Py_DECREF(tmp_select_metaclass_13__base);
        tmp_select_metaclass_13__base = NULL;
        goto outline_result_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_25:;
        condexpr_end_13:;
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_called_value_13 = tmp_class_creation_13__metaclass;
        tmp_args_element_value_37 = mod_consts[50];
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_args_element_value_38 = tmp_class_creation_13__bases;
        CHECK_OBJECT(tmp_class_creation_13__class_dict);
        tmp_args_element_value_39 = tmp_class_creation_13__class_dict;
        frame_e128e3caf7cd11d2327ce9ae7b6892fb->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39};
            tmp_assign_source_97 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_13, call_args);
        }

        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_47;
        }
        assert(tmp_class_creation_13__class == NULL);
        tmp_class_creation_13__class = tmp_assign_source_97;
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    Py_XDECREF(tmp_class_creation_13__class_dict);
    tmp_class_creation_13__class_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e128e3caf7cd11d2327ce9ae7b6892fb);
#endif
    popFrameStack();

    assertFrameObject(frame_e128e3caf7cd11d2327ce9ae7b6892fb);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e128e3caf7cd11d2327ce9ae7b6892fb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e128e3caf7cd11d2327ce9ae7b6892fb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e128e3caf7cd11d2327ce9ae7b6892fb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e128e3caf7cd11d2327ce9ae7b6892fb, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_98;
        CHECK_OBJECT(tmp_class_creation_13__class);
        tmp_assign_source_98 = tmp_class_creation_13__class;
        UPDATE_STRING_DICT0(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_98);
    }
    CHECK_OBJECT(tmp_class_creation_13__class);
    Py_DECREF(tmp_class_creation_13__class);
    tmp_class_creation_13__class = NULL;
    CHECK_OBJECT(tmp_class_creation_13__bases);
    Py_DECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_13__class_dict);
    Py_DECREF(tmp_class_creation_13__class_dict);
    tmp_class_creation_13__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__metaclass);
    Py_DECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("fastavro.io.symbols", false);

    return module_fastavro$io$symbols;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastavro$io$symbols, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("fastavro$io$symbols", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
