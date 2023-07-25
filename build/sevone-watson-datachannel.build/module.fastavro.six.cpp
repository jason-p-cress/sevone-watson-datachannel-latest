/* Generated code for Python module 'fastavro.six'
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

/* The "module_fastavro$six" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_fastavro$six;
PyDictObject *moduledict_fastavro$six;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[92];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[92];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("fastavro.six"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 92; i++) {
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
void checkModuleConstants_fastavro$six(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 92; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1101e47259b282fb78e500b507adbcea;
static PyCodeObject *codeobj_5e13106de1a7436cb4bb5474d9eed451;
static PyCodeObject *codeobj_454cef71d054edf0dad9daa84f115194;
static PyCodeObject *codeobj_51186963224133dbb1f78c8e4a2fad5e;
static PyCodeObject *codeobj_dd00b7f8a2b5c8fd56e7284f316b2689;
static PyCodeObject *codeobj_d152fdd1bf3b0a19658657196d594f48;
static PyCodeObject *codeobj_c704e0f8f3492760797ef6cd950d613a;
static PyCodeObject *codeobj_8052a64ede539ff4ad7226aa36b120d3;
static PyCodeObject *codeobj_4f681c596c2943a0762858469477a292;
static PyCodeObject *codeobj_d524f9b3a5b72f71ea542cd18595c914;
static PyCodeObject *codeobj_0def8a70ba530edafd5b3eef967bd204;
static PyCodeObject *codeobj_b4893a8a0d0bbd35f12852b27799806c;
static PyCodeObject *codeobj_9afacbc7dcb96b7056efceea877959aa;
static PyCodeObject *codeobj_18f00efcc41047a2ca2c2ae65b1d3261;
static PyCodeObject *codeobj_f32cb07684537de7a93bda7e6430860d;
static PyCodeObject *codeobj_1bfd4d98b838ebaadc18913953ceab73;
static PyCodeObject *codeobj_d3552e0375a1bbf88004c714b4246243;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[42]; CHECK_OBJECT(module_filename_obj);
    codeobj_1101e47259b282fb78e500b507adbcea = MAKE_CODEOBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[10], mod_consts[80], NULL, 1, 0, 0);
    codeobj_5e13106de1a7436cb4bb5474d9eed451 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[81], NULL, NULL, 0, 0, 0);
    codeobj_454cef71d054edf0dad9daa84f115194 = MAKE_CODEOBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[17], mod_consts[82], NULL, 1, 0, 0);
    codeobj_51186963224133dbb1f78c8e4a2fad5e = MAKE_CODEOBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[64], mod_consts[82], NULL, 1, 0, 0);
    codeobj_dd00b7f8a2b5c8fd56e7284f316b2689 = MAKE_CODEOBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[66], mod_consts[83], NULL, 1, 0, 0);
    codeobj_d152fdd1bf3b0a19658657196d594f48 = MAKE_CODEOBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[54], mod_consts[84], NULL, 2, 0, 0);
    codeobj_c704e0f8f3492760797ef6cd950d613a = MAKE_CODEOBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[63], mod_consts[85], NULL, 1, 0, 0);
    codeobj_8052a64ede539ff4ad7226aa36b120d3 = MAKE_CODEOBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[65], mod_consts[86], NULL, 2, 0, 0);
    codeobj_4f681c596c2943a0762858469477a292 = MAKE_CODEOBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[60], mod_consts[87], NULL, 1, 0, 0);
    codeobj_d524f9b3a5b72f71ea542cd18595c914 = MAKE_CODEOBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[59], mod_consts[87], NULL, 1, 0, 0);
    codeobj_0def8a70ba530edafd5b3eef967bd204 = MAKE_CODEOBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[57], mod_consts[87], NULL, 1, 0, 0);
    codeobj_b4893a8a0d0bbd35f12852b27799806c = MAKE_CODEOBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[58], mod_consts[87], NULL, 1, 0, 0);
    codeobj_9afacbc7dcb96b7056efceea877959aa = MAKE_CODEOBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[56], mod_consts[88], NULL, 1, 0, 0);
    codeobj_18f00efcc41047a2ca2c2ae65b1d3261 = MAKE_CODEOBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[61], mod_consts[89], NULL, 1, 0, 0);
    codeobj_f32cb07684537de7a93bda7e6430860d = MAKE_CODEOBJECT(module_filename_obj, 160, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[67], mod_consts[90], NULL, 2, 0, 0);
    codeobj_1bfd4d98b838ebaadc18913953ceab73 = MAKE_CODEOBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[62], mod_consts[85], NULL, 1, 0, 0);
    codeobj_d3552e0375a1bbf88004c714b4246243 = MAKE_CODEOBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT, mod_consts[55], mod_consts[84], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_fastavro$six$$$function__15_py2_btou(PyObject *defaults);


static PyObject *MAKE_FUNCTION_fastavro$six$$$function__16_py2_utob(PyObject *defaults);


static PyObject *MAKE_FUNCTION_fastavro$six$$$function__17_py2_json_dump();


static PyObject *MAKE_FUNCTION_fastavro$six$$$function__18_py2_iterkeys();


static PyObject *MAKE_FUNCTION_fastavro$six$$$function__19_py2_itervalues();


static PyObject *MAKE_FUNCTION_fastavro$six$$$function__20_py2_iteritems();


static PyObject *MAKE_FUNCTION_fastavro$six$$$function__21_py2_is_str();


static PyObject *MAKE_FUNCTION_fastavro$six$$$function__22_py2_mk_bits();


static PyObject *MAKE_FUNCTION_fastavro$six$$$function__23_py2_str2ints();


static PyObject *MAKE_FUNCTION_fastavro$six$$$function__23_py2_str2ints$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_fastavro$six$$$function__24_py2_fstint();


static PyObject *MAKE_FUNCTION_fastavro$six$$$function__25__readable();


static PyObject *MAKE_FUNCTION_fastavro$six$$$function__26_py2_appendable();


static PyObject *MAKE_FUNCTION_fastavro$six$$$function__27_py2_int_to_be_signed_bytes();


static PyObject *MAKE_FUNCTION_fastavro$six$$$function__28_py2_be_signed_bytes_to_int();


static PyObject *MAKE_FUNCTION_fastavro$six$$$function__29_py2_reraise();


// The module function definitions.
static PyObject *impl_fastavro$six$$$function__15_py2_btou(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    struct Nuitka_FrameObject *frame_d152fdd1bf3b0a19658657196d594f48;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d152fdd1bf3b0a19658657196d594f48 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d152fdd1bf3b0a19658657196d594f48)) {
        Py_XDECREF(cache_frame_d152fdd1bf3b0a19658657196d594f48);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d152fdd1bf3b0a19658657196d594f48 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d152fdd1bf3b0a19658657196d594f48 = MAKE_FUNCTION_FRAME(codeobj_d152fdd1bf3b0a19658657196d594f48, module_fastavro$six, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d152fdd1bf3b0a19658657196d594f48->m_type_description == NULL);
    frame_d152fdd1bf3b0a19658657196d594f48 = cache_frame_d152fdd1bf3b0a19658657196d594f48;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d152fdd1bf3b0a19658657196d594f48);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d152fdd1bf3b0a19658657196d594f48) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_unicode_encoding_1;
        CHECK_OBJECT(par_n);
        tmp_unicode_arg_1 = par_n;
        CHECK_OBJECT(par_encoding);
        tmp_unicode_encoding_1 = par_encoding;
        tmp_return_value = TO_UNICODE3(tmp_unicode_arg_1, tmp_unicode_encoding_1, NULL);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d152fdd1bf3b0a19658657196d594f48);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d152fdd1bf3b0a19658657196d594f48);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d152fdd1bf3b0a19658657196d594f48);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d152fdd1bf3b0a19658657196d594f48, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d152fdd1bf3b0a19658657196d594f48->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d152fdd1bf3b0a19658657196d594f48, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d152fdd1bf3b0a19658657196d594f48,
        type_description_1,
        par_n,
        par_encoding
    );


    // Release cached frame if used for exception.
    if (frame_d152fdd1bf3b0a19658657196d594f48 == cache_frame_d152fdd1bf3b0a19658657196d594f48) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d152fdd1bf3b0a19658657196d594f48);
        cache_frame_d152fdd1bf3b0a19658657196d594f48 = NULL;
    }

    assertFrameObject(frame_d152fdd1bf3b0a19658657196d594f48);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$six$$$function__16_py2_utob(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    struct Nuitka_FrameObject *frame_d3552e0375a1bbf88004c714b4246243;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d3552e0375a1bbf88004c714b4246243 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d3552e0375a1bbf88004c714b4246243)) {
        Py_XDECREF(cache_frame_d3552e0375a1bbf88004c714b4246243);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d3552e0375a1bbf88004c714b4246243 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d3552e0375a1bbf88004c714b4246243 = MAKE_FUNCTION_FRAME(codeobj_d3552e0375a1bbf88004c714b4246243, module_fastavro$six, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d3552e0375a1bbf88004c714b4246243->m_type_description == NULL);
    frame_d3552e0375a1bbf88004c714b4246243 = cache_frame_d3552e0375a1bbf88004c714b4246243;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d3552e0375a1bbf88004c714b4246243);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d3552e0375a1bbf88004c714b4246243) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_n);
        tmp_expression_value_1 = par_n;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_1 = par_encoding;
        frame_d3552e0375a1bbf88004c714b4246243->m_frame.f_lineno = 85;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d3552e0375a1bbf88004c714b4246243);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d3552e0375a1bbf88004c714b4246243);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d3552e0375a1bbf88004c714b4246243);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d3552e0375a1bbf88004c714b4246243, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d3552e0375a1bbf88004c714b4246243->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d3552e0375a1bbf88004c714b4246243, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d3552e0375a1bbf88004c714b4246243,
        type_description_1,
        par_n,
        par_encoding
    );


    // Release cached frame if used for exception.
    if (frame_d3552e0375a1bbf88004c714b4246243 == cache_frame_d3552e0375a1bbf88004c714b4246243) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d3552e0375a1bbf88004c714b4246243);
        cache_frame_d3552e0375a1bbf88004c714b4246243 = NULL;
    }

    assertFrameObject(frame_d3552e0375a1bbf88004c714b4246243);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$six$$$function__17_py2_json_dump(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    struct Nuitka_FrameObject *frame_9afacbc7dcb96b7056efceea877959aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9afacbc7dcb96b7056efceea877959aa = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9afacbc7dcb96b7056efceea877959aa)) {
        Py_XDECREF(cache_frame_9afacbc7dcb96b7056efceea877959aa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9afacbc7dcb96b7056efceea877959aa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9afacbc7dcb96b7056efceea877959aa = MAKE_FUNCTION_FRAME(codeobj_9afacbc7dcb96b7056efceea877959aa, module_fastavro$six, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9afacbc7dcb96b7056efceea877959aa->m_type_description == NULL);
    frame_9afacbc7dcb96b7056efceea877959aa = cache_frame_9afacbc7dcb96b7056efceea877959aa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9afacbc7dcb96b7056efceea877959aa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9afacbc7dcb96b7056efceea877959aa) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_tuple_element_1 = par_obj;
        tmp_dircall_arg2_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[3]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[4];
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_call_result_1 = impl___main__$$$function__4_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9afacbc7dcb96b7056efceea877959aa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9afacbc7dcb96b7056efceea877959aa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9afacbc7dcb96b7056efceea877959aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9afacbc7dcb96b7056efceea877959aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9afacbc7dcb96b7056efceea877959aa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9afacbc7dcb96b7056efceea877959aa,
        type_description_1,
        par_obj,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_9afacbc7dcb96b7056efceea877959aa == cache_frame_9afacbc7dcb96b7056efceea877959aa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9afacbc7dcb96b7056efceea877959aa);
        cache_frame_9afacbc7dcb96b7056efceea877959aa = NULL;
    }

    assertFrameObject(frame_9afacbc7dcb96b7056efceea877959aa);

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
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$six$$$function__18_py2_iterkeys(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    struct Nuitka_FrameObject *frame_0def8a70ba530edafd5b3eef967bd204;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0def8a70ba530edafd5b3eef967bd204 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0def8a70ba530edafd5b3eef967bd204)) {
        Py_XDECREF(cache_frame_0def8a70ba530edafd5b3eef967bd204);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0def8a70ba530edafd5b3eef967bd204 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0def8a70ba530edafd5b3eef967bd204 = MAKE_FUNCTION_FRAME(codeobj_0def8a70ba530edafd5b3eef967bd204, module_fastavro$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0def8a70ba530edafd5b3eef967bd204->m_type_description == NULL);
    frame_0def8a70ba530edafd5b3eef967bd204 = cache_frame_0def8a70ba530edafd5b3eef967bd204;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0def8a70ba530edafd5b3eef967bd204);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0def8a70ba530edafd5b3eef967bd204) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_1 = par_obj;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0def8a70ba530edafd5b3eef967bd204->m_frame.f_lineno = 93;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0def8a70ba530edafd5b3eef967bd204);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0def8a70ba530edafd5b3eef967bd204);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0def8a70ba530edafd5b3eef967bd204);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0def8a70ba530edafd5b3eef967bd204, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0def8a70ba530edafd5b3eef967bd204->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0def8a70ba530edafd5b3eef967bd204, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0def8a70ba530edafd5b3eef967bd204,
        type_description_1,
        par_obj
    );


    // Release cached frame if used for exception.
    if (frame_0def8a70ba530edafd5b3eef967bd204 == cache_frame_0def8a70ba530edafd5b3eef967bd204) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0def8a70ba530edafd5b3eef967bd204);
        cache_frame_0def8a70ba530edafd5b3eef967bd204 = NULL;
    }

    assertFrameObject(frame_0def8a70ba530edafd5b3eef967bd204);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$six$$$function__19_py2_itervalues(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    struct Nuitka_FrameObject *frame_b4893a8a0d0bbd35f12852b27799806c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b4893a8a0d0bbd35f12852b27799806c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b4893a8a0d0bbd35f12852b27799806c)) {
        Py_XDECREF(cache_frame_b4893a8a0d0bbd35f12852b27799806c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b4893a8a0d0bbd35f12852b27799806c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b4893a8a0d0bbd35f12852b27799806c = MAKE_FUNCTION_FRAME(codeobj_b4893a8a0d0bbd35f12852b27799806c, module_fastavro$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b4893a8a0d0bbd35f12852b27799806c->m_type_description == NULL);
    frame_b4893a8a0d0bbd35f12852b27799806c = cache_frame_b4893a8a0d0bbd35f12852b27799806c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b4893a8a0d0bbd35f12852b27799806c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b4893a8a0d0bbd35f12852b27799806c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_1 = par_obj;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b4893a8a0d0bbd35f12852b27799806c->m_frame.f_lineno = 96;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4893a8a0d0bbd35f12852b27799806c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4893a8a0d0bbd35f12852b27799806c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b4893a8a0d0bbd35f12852b27799806c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b4893a8a0d0bbd35f12852b27799806c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b4893a8a0d0bbd35f12852b27799806c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b4893a8a0d0bbd35f12852b27799806c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b4893a8a0d0bbd35f12852b27799806c,
        type_description_1,
        par_obj
    );


    // Release cached frame if used for exception.
    if (frame_b4893a8a0d0bbd35f12852b27799806c == cache_frame_b4893a8a0d0bbd35f12852b27799806c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b4893a8a0d0bbd35f12852b27799806c);
        cache_frame_b4893a8a0d0bbd35f12852b27799806c = NULL;
    }

    assertFrameObject(frame_b4893a8a0d0bbd35f12852b27799806c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$six$$$function__20_py2_iteritems(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    struct Nuitka_FrameObject *frame_d524f9b3a5b72f71ea542cd18595c914;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d524f9b3a5b72f71ea542cd18595c914 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d524f9b3a5b72f71ea542cd18595c914)) {
        Py_XDECREF(cache_frame_d524f9b3a5b72f71ea542cd18595c914);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d524f9b3a5b72f71ea542cd18595c914 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d524f9b3a5b72f71ea542cd18595c914 = MAKE_FUNCTION_FRAME(codeobj_d524f9b3a5b72f71ea542cd18595c914, module_fastavro$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d524f9b3a5b72f71ea542cd18595c914->m_type_description == NULL);
    frame_d524f9b3a5b72f71ea542cd18595c914 = cache_frame_d524f9b3a5b72f71ea542cd18595c914;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d524f9b3a5b72f71ea542cd18595c914);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d524f9b3a5b72f71ea542cd18595c914) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_1 = par_obj;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d524f9b3a5b72f71ea542cd18595c914->m_frame.f_lineno = 99;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d524f9b3a5b72f71ea542cd18595c914);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d524f9b3a5b72f71ea542cd18595c914);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d524f9b3a5b72f71ea542cd18595c914);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d524f9b3a5b72f71ea542cd18595c914, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d524f9b3a5b72f71ea542cd18595c914->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d524f9b3a5b72f71ea542cd18595c914, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d524f9b3a5b72f71ea542cd18595c914,
        type_description_1,
        par_obj
    );


    // Release cached frame if used for exception.
    if (frame_d524f9b3a5b72f71ea542cd18595c914 == cache_frame_d524f9b3a5b72f71ea542cd18595c914) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d524f9b3a5b72f71ea542cd18595c914);
        cache_frame_d524f9b3a5b72f71ea542cd18595c914 = NULL;
    }

    assertFrameObject(frame_d524f9b3a5b72f71ea542cd18595c914);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$six$$$function__21_py2_is_str(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    struct Nuitka_FrameObject *frame_4f681c596c2943a0762858469477a292;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4f681c596c2943a0762858469477a292 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4f681c596c2943a0762858469477a292)) {
        Py_XDECREF(cache_frame_4f681c596c2943a0762858469477a292);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f681c596c2943a0762858469477a292 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f681c596c2943a0762858469477a292 = MAKE_FUNCTION_FRAME(codeobj_4f681c596c2943a0762858469477a292, module_fastavro$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4f681c596c2943a0762858469477a292->m_type_description == NULL);
    frame_4f681c596c2943a0762858469477a292 = cache_frame_4f681c596c2943a0762858469477a292;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4f681c596c2943a0762858469477a292);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4f681c596c2943a0762858469477a292) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_obj);
        tmp_isinstance_inst_1 = par_obj;
        tmp_isinstance_cls_1 = (PyObject *)&PyBaseString_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4f681c596c2943a0762858469477a292);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4f681c596c2943a0762858469477a292);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4f681c596c2943a0762858469477a292);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4f681c596c2943a0762858469477a292, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f681c596c2943a0762858469477a292->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f681c596c2943a0762858469477a292, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f681c596c2943a0762858469477a292,
        type_description_1,
        par_obj
    );


    // Release cached frame if used for exception.
    if (frame_4f681c596c2943a0762858469477a292 == cache_frame_4f681c596c2943a0762858469477a292) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4f681c596c2943a0762858469477a292);
        cache_frame_4f681c596c2943a0762858469477a292 = NULL;
    }

    assertFrameObject(frame_4f681c596c2943a0762858469477a292);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$six$$$function__22_py2_mk_bits(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_bits = python_pars[0];
    struct Nuitka_FrameObject *frame_18f00efcc41047a2ca2c2ae65b1d3261;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_18f00efcc41047a2ca2c2ae65b1d3261 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_18f00efcc41047a2ca2c2ae65b1d3261)) {
        Py_XDECREF(cache_frame_18f00efcc41047a2ca2c2ae65b1d3261);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18f00efcc41047a2ca2c2ae65b1d3261 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18f00efcc41047a2ca2c2ae65b1d3261 = MAKE_FUNCTION_FRAME(codeobj_18f00efcc41047a2ca2c2ae65b1d3261, module_fastavro$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_18f00efcc41047a2ca2c2ae65b1d3261->m_type_description == NULL);
    frame_18f00efcc41047a2ca2c2ae65b1d3261 = cache_frame_18f00efcc41047a2ca2c2ae65b1d3261;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_18f00efcc41047a2ca2c2ae65b1d3261);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_18f00efcc41047a2ca2c2ae65b1d3261) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_chr_arg_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_bits);
        tmp_left_value_1 = par_bits;
        tmp_right_value_1 = mod_consts[8];
        tmp_chr_arg_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_INT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_chr_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_CHR(tmp_chr_arg_1);
        Py_DECREF(tmp_chr_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_18f00efcc41047a2ca2c2ae65b1d3261);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_18f00efcc41047a2ca2c2ae65b1d3261);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_18f00efcc41047a2ca2c2ae65b1d3261);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_18f00efcc41047a2ca2c2ae65b1d3261, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18f00efcc41047a2ca2c2ae65b1d3261->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18f00efcc41047a2ca2c2ae65b1d3261, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18f00efcc41047a2ca2c2ae65b1d3261,
        type_description_1,
        par_bits
    );


    // Release cached frame if used for exception.
    if (frame_18f00efcc41047a2ca2c2ae65b1d3261 == cache_frame_18f00efcc41047a2ca2c2ae65b1d3261) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_18f00efcc41047a2ca2c2ae65b1d3261);
        cache_frame_18f00efcc41047a2ca2c2ae65b1d3261 = NULL;
    }

    assertFrameObject(frame_18f00efcc41047a2ca2c2ae65b1d3261);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_bits);
    Py_DECREF(par_bits);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_bits);
    Py_DECREF(par_bits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$six$$$function__23_py2_str2ints(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_datum = python_pars[0];
    struct Nuitka_FrameObject *frame_1bfd4d98b838ebaadc18913953ceab73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1bfd4d98b838ebaadc18913953ceab73 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1bfd4d98b838ebaadc18913953ceab73)) {
        Py_XDECREF(cache_frame_1bfd4d98b838ebaadc18913953ceab73);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1bfd4d98b838ebaadc18913953ceab73 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1bfd4d98b838ebaadc18913953ceab73 = MAKE_FUNCTION_FRAME(codeobj_1bfd4d98b838ebaadc18913953ceab73, module_fastavro$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1bfd4d98b838ebaadc18913953ceab73->m_type_description == NULL);
    frame_1bfd4d98b838ebaadc18913953ceab73 = cache_frame_1bfd4d98b838ebaadc18913953ceab73;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1bfd4d98b838ebaadc18913953ceab73);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1bfd4d98b838ebaadc18913953ceab73) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[9]);
        assert(tmp_called_value_1 != NULL);


        tmp_args_element_value_1 = MAKE_FUNCTION_fastavro$six$$$function__23_py2_str2ints$$$function__1_lambda();

        CHECK_OBJECT(par_datum);
        tmp_args_element_value_2 = par_datum;
        frame_1bfd4d98b838ebaadc18913953ceab73->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1bfd4d98b838ebaadc18913953ceab73);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1bfd4d98b838ebaadc18913953ceab73);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1bfd4d98b838ebaadc18913953ceab73);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1bfd4d98b838ebaadc18913953ceab73, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1bfd4d98b838ebaadc18913953ceab73->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1bfd4d98b838ebaadc18913953ceab73, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1bfd4d98b838ebaadc18913953ceab73,
        type_description_1,
        par_datum
    );


    // Release cached frame if used for exception.
    if (frame_1bfd4d98b838ebaadc18913953ceab73 == cache_frame_1bfd4d98b838ebaadc18913953ceab73) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1bfd4d98b838ebaadc18913953ceab73);
        cache_frame_1bfd4d98b838ebaadc18913953ceab73 = NULL;
    }

    assertFrameObject(frame_1bfd4d98b838ebaadc18913953ceab73);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_datum);
    Py_DECREF(par_datum);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_datum);
    Py_DECREF(par_datum);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$six$$$function__23_py2_str2ints$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_1101e47259b282fb78e500b507adbcea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1101e47259b282fb78e500b507adbcea = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1101e47259b282fb78e500b507adbcea)) {
        Py_XDECREF(cache_frame_1101e47259b282fb78e500b507adbcea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1101e47259b282fb78e500b507adbcea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1101e47259b282fb78e500b507adbcea = MAKE_FUNCTION_FRAME(codeobj_1101e47259b282fb78e500b507adbcea, module_fastavro$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1101e47259b282fb78e500b507adbcea->m_type_description == NULL);
    frame_1101e47259b282fb78e500b507adbcea = cache_frame_1101e47259b282fb78e500b507adbcea;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1101e47259b282fb78e500b507adbcea);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1101e47259b282fb78e500b507adbcea) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ord_arg_1;
        CHECK_OBJECT(par_x);
        tmp_ord_arg_1 = par_x;
        tmp_return_value = BUILTIN_ORD(tmp_ord_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1101e47259b282fb78e500b507adbcea);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1101e47259b282fb78e500b507adbcea);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1101e47259b282fb78e500b507adbcea);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1101e47259b282fb78e500b507adbcea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1101e47259b282fb78e500b507adbcea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1101e47259b282fb78e500b507adbcea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1101e47259b282fb78e500b507adbcea,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_1101e47259b282fb78e500b507adbcea == cache_frame_1101e47259b282fb78e500b507adbcea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1101e47259b282fb78e500b507adbcea);
        cache_frame_1101e47259b282fb78e500b507adbcea = NULL;
    }

    assertFrameObject(frame_1101e47259b282fb78e500b507adbcea);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$six$$$function__24_py2_fstint(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_datum = python_pars[0];
    struct Nuitka_FrameObject *frame_c704e0f8f3492760797ef6cd950d613a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c704e0f8f3492760797ef6cd950d613a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c704e0f8f3492760797ef6cd950d613a)) {
        Py_XDECREF(cache_frame_c704e0f8f3492760797ef6cd950d613a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c704e0f8f3492760797ef6cd950d613a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c704e0f8f3492760797ef6cd950d613a = MAKE_FUNCTION_FRAME(codeobj_c704e0f8f3492760797ef6cd950d613a, module_fastavro$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c704e0f8f3492760797ef6cd950d613a->m_type_description == NULL);
    frame_c704e0f8f3492760797ef6cd950d613a = cache_frame_c704e0f8f3492760797ef6cd950d613a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c704e0f8f3492760797ef6cd950d613a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c704e0f8f3492760797ef6cd950d613a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[11]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[12];
        CHECK_OBJECT(par_datum);
        tmp_expression_value_2 = par_datum;
        tmp_subscript_value_1 = mod_consts[13];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c704e0f8f3492760797ef6cd950d613a->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[13];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c704e0f8f3492760797ef6cd950d613a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c704e0f8f3492760797ef6cd950d613a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c704e0f8f3492760797ef6cd950d613a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c704e0f8f3492760797ef6cd950d613a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c704e0f8f3492760797ef6cd950d613a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c704e0f8f3492760797ef6cd950d613a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c704e0f8f3492760797ef6cd950d613a,
        type_description_1,
        par_datum
    );


    // Release cached frame if used for exception.
    if (frame_c704e0f8f3492760797ef6cd950d613a == cache_frame_c704e0f8f3492760797ef6cd950d613a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c704e0f8f3492760797ef6cd950d613a);
        cache_frame_c704e0f8f3492760797ef6cd950d613a = NULL;
    }

    assertFrameObject(frame_c704e0f8f3492760797ef6cd950d613a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_datum);
    Py_DECREF(par_datum);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_datum);
    Py_DECREF(par_datum);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$six$$$function__25__readable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_file_like = python_pars[0];
    struct Nuitka_FrameObject *frame_454cef71d054edf0dad9daa84f115194;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_454cef71d054edf0dad9daa84f115194 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_454cef71d054edf0dad9daa84f115194)) {
        Py_XDECREF(cache_frame_454cef71d054edf0dad9daa84f115194);

#if _DEBUG_REFCOUNTS
        if (cache_frame_454cef71d054edf0dad9daa84f115194 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_454cef71d054edf0dad9daa84f115194 = MAKE_FUNCTION_FRAME(codeobj_454cef71d054edf0dad9daa84f115194, module_fastavro$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_454cef71d054edf0dad9daa84f115194->m_type_description == NULL);
    frame_454cef71d054edf0dad9daa84f115194 = cache_frame_454cef71d054edf0dad9daa84f115194;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_454cef71d054edf0dad9daa84f115194);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_454cef71d054edf0dad9daa84f115194) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_file_like);
        tmp_called_instance_1 = par_file_like;
        frame_454cef71d054edf0dad9daa84f115194->m_frame.f_lineno = 115;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[14]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_454cef71d054edf0dad9daa84f115194);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_454cef71d054edf0dad9daa84f115194, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_454cef71d054edf0dad9daa84f115194, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 114;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_454cef71d054edf0dad9daa84f115194->m_frame) frame_454cef71d054edf0dad9daa84f115194->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_454cef71d054edf0dad9daa84f115194);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_454cef71d054edf0dad9daa84f115194);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_454cef71d054edf0dad9daa84f115194);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_454cef71d054edf0dad9daa84f115194, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_454cef71d054edf0dad9daa84f115194->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_454cef71d054edf0dad9daa84f115194, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_454cef71d054edf0dad9daa84f115194,
        type_description_1,
        par_file_like
    );


    // Release cached frame if used for exception.
    if (frame_454cef71d054edf0dad9daa84f115194 == cache_frame_454cef71d054edf0dad9daa84f115194) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_454cef71d054edf0dad9daa84f115194);
        cache_frame_454cef71d054edf0dad9daa84f115194 = NULL;
    }

    assertFrameObject(frame_454cef71d054edf0dad9daa84f115194);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_file_like);
    Py_DECREF(par_file_like);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_file_like);
    Py_DECREF(par_file_like);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$six$$$function__26_py2_appendable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_file_like = python_pars[0];
    struct Nuitka_FrameObject *frame_51186963224133dbb1f78c8e4a2fad5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_51186963224133dbb1f78c8e4a2fad5e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_51186963224133dbb1f78c8e4a2fad5e)) {
        Py_XDECREF(cache_frame_51186963224133dbb1f78c8e4a2fad5e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_51186963224133dbb1f78c8e4a2fad5e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_51186963224133dbb1f78c8e4a2fad5e = MAKE_FUNCTION_FRAME(codeobj_51186963224133dbb1f78c8e4a2fad5e, module_fastavro$six, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_51186963224133dbb1f78c8e4a2fad5e->m_type_description == NULL);
    frame_51186963224133dbb1f78c8e4a2fad5e = cache_frame_51186963224133dbb1f78c8e4a2fad5e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_51186963224133dbb1f78c8e4a2fad5e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_51186963224133dbb1f78c8e4a2fad5e) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_file_like);
        tmp_expression_value_1 = par_file_like;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_attribute_value_1);
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_51186963224133dbb1f78c8e4a2fad5e);
    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_51186963224133dbb1f78c8e4a2fad5e, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_51186963224133dbb1f78c8e4a2fad5e, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_file_like);
        tmp_called_instance_1 = par_file_like;
        frame_51186963224133dbb1f78c8e4a2fad5e->m_frame.f_lineno = 129;
        tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = mod_consts[13];
        tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_INT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 129;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        assert(tmp_and_left_value_1 != NUITKA_BOOL_UNASSIGNED);
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_file_like);
        tmp_args_element_value_1 = par_file_like;
        frame_51186963224133dbb1f78c8e4a2fad5e->m_frame.f_lineno = 129;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 129;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION(frame_51186963224133dbb1f78c8e4a2fad5e);
    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_51186963224133dbb1f78c8e4a2fad5e, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_51186963224133dbb1f78c8e4a2fad5e, exception_keeper_lineno_2);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_2, exception_keeper_tb_2);
    PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = mod_consts[18];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 128;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_51186963224133dbb1f78c8e4a2fad5e->m_frame) frame_51186963224133dbb1f78c8e4a2fad5e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_no_3:;
    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 124;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_51186963224133dbb1f78c8e4a2fad5e->m_frame) frame_51186963224133dbb1f78c8e4a2fad5e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto frame_exception_exit_1;
    branch_end_1:;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_2;
        tmp_cmp_expr_left_4 = mod_consts[19];
        CHECK_OBJECT(par_file_like);
        tmp_expression_value_2 = par_file_like;
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_3;
        tmp_cmp_expr_left_5 = mod_consts[20];
        CHECK_OBJECT(par_file_like);
        tmp_expression_value_3 = par_file_like;
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[15]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[21];
        frame_51186963224133dbb1f78c8e4a2fad5e->m_frame.f_lineno = 139;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 139;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_end_5:;
    goto branch_end_4;
    branch_no_4:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_4:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_51186963224133dbb1f78c8e4a2fad5e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION(frame_51186963224133dbb1f78c8e4a2fad5e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION(frame_51186963224133dbb1f78c8e4a2fad5e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_51186963224133dbb1f78c8e4a2fad5e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51186963224133dbb1f78c8e4a2fad5e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51186963224133dbb1f78c8e4a2fad5e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_51186963224133dbb1f78c8e4a2fad5e,
        type_description_1,
        par_file_like
    );


    // Release cached frame if used for exception.
    if (frame_51186963224133dbb1f78c8e4a2fad5e == cache_frame_51186963224133dbb1f78c8e4a2fad5e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_51186963224133dbb1f78c8e4a2fad5e);
        cache_frame_51186963224133dbb1f78c8e4a2fad5e = NULL;
    }

    assertFrameObject(frame_51186963224133dbb1f78c8e4a2fad5e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_file_like);
    Py_DECREF(par_file_like);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_file_like);
    Py_DECREF(par_file_like);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$six$$$function__27_py2_int_to_be_signed_bytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_num = python_pars[0];
    PyObject *par_bytes_req = python_pars[1];
    PyObject *var_hex_str = NULL;
    struct Nuitka_FrameObject *frame_8052a64ede539ff4ad7226aa36b120d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8052a64ede539ff4ad7226aa36b120d3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8052a64ede539ff4ad7226aa36b120d3)) {
        Py_XDECREF(cache_frame_8052a64ede539ff4ad7226aa36b120d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8052a64ede539ff4ad7226aa36b120d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8052a64ede539ff4ad7226aa36b120d3 = MAKE_FUNCTION_FRAME(codeobj_8052a64ede539ff4ad7226aa36b120d3, module_fastavro$six, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8052a64ede539ff4ad7226aa36b120d3->m_type_description == NULL);
    frame_8052a64ede539ff4ad7226aa36b120d3 = cache_frame_8052a64ede539ff4ad7226aa36b120d3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8052a64ede539ff4ad7226aa36b120d3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8052a64ede539ff4ad7226aa36b120d3) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_num);
        tmp_cmp_expr_left_1 = par_num;
        tmp_cmp_expr_right_1 = mod_consts[13];
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_INT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_1;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_2;
        PyObject *tmp_right_value_3;
        tmp_left_value_2 = mod_consts[22];
        tmp_left_value_3 = mod_consts[23];
        CHECK_OBJECT(par_bytes_req);
        tmp_right_value_2 = par_bytes_req;
        tmp_right_value_1 = BINARY_OPERATION_MULT_OBJECT_INT_OBJECT(tmp_left_value_3, tmp_right_value_2);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = BINARY_OPERATION_POW_OBJECT_INT_OBJECT(tmp_left_value_2, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_num);
        tmp_right_value_3 = par_num;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_3);
        Py_DECREF(tmp_left_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_num;
            assert(old != NULL);
            par_num = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        tmp_left_value_4 = mod_consts[24];
        CHECK_OBJECT(par_num);
        tmp_right_value_4 = par_num;
        tmp_assign_source_2 = BINARY_OPERATION_MOD_OBJECT_STR_OBJECT(tmp_left_value_4, tmp_right_value_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_hex_str == NULL);
        var_hex_str = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_value_5;
        PyObject *tmp_left_value_6;
        PyObject *tmp_left_value_7;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_5;
        PyObject *tmp_right_value_6;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_value_7;
        PyObject *tmp_right_value_8;
        if (par_bytes_req == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;

            exception_lineno = 150;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_8 = par_bytes_req;
        tmp_right_value_5 = mod_consts[22];
        tmp_left_value_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_INT(tmp_left_value_8, tmp_right_value_5);
        if (tmp_left_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hex_str);
        tmp_len_arg_1 = var_hex_str;
        tmp_right_value_6 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_right_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_7);

            exception_lineno = 150;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_7, tmp_right_value_6);
        Py_DECREF(tmp_left_value_7);
        Py_DECREF(tmp_right_value_6);
        if (tmp_left_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_7 = mod_consts[26];
        tmp_left_value_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_STR(tmp_left_value_6, tmp_right_value_7);
        Py_DECREF(tmp_left_value_6);
        if (tmp_left_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_hex_str);
        tmp_right_value_8 = var_hex_str;
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_5, tmp_right_value_8);
        Py_DECREF(tmp_left_value_5);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_hex_str;
            assert(old != NULL);
            var_hex_str = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_hex_str);
        tmp_expression_value_1 = var_hex_str;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8052a64ede539ff4ad7226aa36b120d3->m_frame.f_lineno = 151;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[28]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8052a64ede539ff4ad7226aa36b120d3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8052a64ede539ff4ad7226aa36b120d3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8052a64ede539ff4ad7226aa36b120d3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8052a64ede539ff4ad7226aa36b120d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8052a64ede539ff4ad7226aa36b120d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8052a64ede539ff4ad7226aa36b120d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8052a64ede539ff4ad7226aa36b120d3,
        type_description_1,
        par_num,
        par_bytes_req,
        var_hex_str
    );


    // Release cached frame if used for exception.
    if (frame_8052a64ede539ff4ad7226aa36b120d3 == cache_frame_8052a64ede539ff4ad7226aa36b120d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8052a64ede539ff4ad7226aa36b120d3);
        cache_frame_8052a64ede539ff4ad7226aa36b120d3 = NULL;
    }

    assertFrameObject(frame_8052a64ede539ff4ad7226aa36b120d3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_num);
    Py_DECREF(par_num);
    par_num = NULL;
    CHECK_OBJECT(var_hex_str);
    Py_DECREF(var_hex_str);
    var_hex_str = NULL;
    goto function_return_exit;
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

    Py_XDECREF(par_num);
    par_num = NULL;
    Py_XDECREF(var_hex_str);
    var_hex_str = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_bytes_req);
    Py_DECREF(par_bytes_req);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_bytes_req);
    Py_DECREF(par_bytes_req);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$six$$$function__28_py2_be_signed_bytes_to_int(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *var_output = NULL;
    PyObject *var_bitsize = NULL;
    struct Nuitka_FrameObject *frame_dd00b7f8a2b5c8fd56e7284f316b2689;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dd00b7f8a2b5c8fd56e7284f316b2689 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dd00b7f8a2b5c8fd56e7284f316b2689)) {
        Py_XDECREF(cache_frame_dd00b7f8a2b5c8fd56e7284f316b2689);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd00b7f8a2b5c8fd56e7284f316b2689 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd00b7f8a2b5c8fd56e7284f316b2689 = MAKE_FUNCTION_FRAME(codeobj_dd00b7f8a2b5c8fd56e7284f316b2689, module_fastavro$six, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dd00b7f8a2b5c8fd56e7284f316b2689->m_type_description == NULL);
    frame_dd00b7f8a2b5c8fd56e7284f316b2689 = cache_frame_dd00b7f8a2b5c8fd56e7284f316b2689;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dd00b7f8a2b5c8fd56e7284f316b2689);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dd00b7f8a2b5c8fd56e7284f316b2689) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_value_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_base_value_1;
        CHECK_OBJECT(par_data);
        tmp_expression_value_1 = par_data;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_dd00b7f8a2b5c8fd56e7284f316b2689->m_frame.f_lineno = 154;
        tmp_value_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[28]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_base_value_1 = mod_consts[29];
        tmp_assign_source_1 = BUILTIN_INT2(tmp_value_value_1, tmp_base_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_value_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_data);
        tmp_len_arg_1 = par_data;
        tmp_left_value_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = mod_consts[23];
        tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_INT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_bitsize == NULL);
        var_bitsize = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        CHECK_OBJECT(var_output);
        tmp_cmp_expr_left_1 = var_output;
        tmp_left_value_2 = mod_consts[22];
        CHECK_OBJECT(var_bitsize);
        tmp_left_value_3 = var_bitsize;
        tmp_right_value_3 = mod_consts[30];
        tmp_right_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_INT(tmp_left_value_3, tmp_right_value_3);
        assert(!(tmp_right_value_2 == NULL));
        tmp_cmp_expr_right_1 = BINARY_OPERATION_POW_OBJECT_INT_OBJECT(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    CHECK_OBJECT(var_output);
    tmp_return_value = var_output;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        CHECK_OBJECT(var_output);
        tmp_left_value_4 = var_output;
        tmp_left_value_5 = mod_consts[22];
        CHECK_OBJECT(var_bitsize);
        tmp_right_value_5 = var_bitsize;
        tmp_right_value_4 = BINARY_OPERATION_POW_OBJECT_INT_OBJECT(tmp_left_value_5, tmp_right_value_5);
        if (tmp_right_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_4, tmp_right_value_4);
        Py_DECREF(tmp_right_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dd00b7f8a2b5c8fd56e7284f316b2689);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_dd00b7f8a2b5c8fd56e7284f316b2689);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dd00b7f8a2b5c8fd56e7284f316b2689);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dd00b7f8a2b5c8fd56e7284f316b2689, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd00b7f8a2b5c8fd56e7284f316b2689->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd00b7f8a2b5c8fd56e7284f316b2689, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd00b7f8a2b5c8fd56e7284f316b2689,
        type_description_1,
        par_data,
        var_output,
        var_bitsize
    );


    // Release cached frame if used for exception.
    if (frame_dd00b7f8a2b5c8fd56e7284f316b2689 == cache_frame_dd00b7f8a2b5c8fd56e7284f316b2689) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_dd00b7f8a2b5c8fd56e7284f316b2689);
        cache_frame_dd00b7f8a2b5c8fd56e7284f316b2689 = NULL;
    }

    assertFrameObject(frame_dd00b7f8a2b5c8fd56e7284f316b2689);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_output);
    var_output = NULL;
    Py_XDECREF(var_bitsize);
    var_bitsize = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_output);
    var_output = NULL;
    Py_XDECREF(var_bitsize);
    var_bitsize = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$six$$$function__29_py2_reraise(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_Err = python_pars[0];
    PyObject *par_msg = python_pars[1];
    PyObject *var_traceback = NULL;
    PyObject *var__locals = NULL;
    PyObject *tmp_exec_1__exec_source = NULL;
    PyObject *tmp_exec_1__globals = NULL;
    PyObject *tmp_exec_1__locals = NULL;
    nuitka_bool tmp_exec_1__plain = NUITKA_BOOL_UNASSIGNED;
    PyObject *locals_fastavro$six$$$function__29_py2_reraise = NULL;
    struct Nuitka_FrameObject *frame_f32cb07684537de7a93bda7e6430860d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_locals_value;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_f32cb07684537de7a93bda7e6430860d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_set_locals_1;
        tmp_set_locals_1 = PyDict_New();
        locals_fastavro$six$$$function__29_py2_reraise = tmp_set_locals_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_f32cb07684537de7a93bda7e6430860d)) {
        Py_XDECREF(cache_frame_f32cb07684537de7a93bda7e6430860d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f32cb07684537de7a93bda7e6430860d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f32cb07684537de7a93bda7e6430860d = MAKE_FUNCTION_FRAME(codeobj_f32cb07684537de7a93bda7e6430860d, module_fastavro$six, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f32cb07684537de7a93bda7e6430860d->m_type_description == NULL);
    frame_f32cb07684537de7a93bda7e6430860d = cache_frame_f32cb07684537de7a93bda7e6430860d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f32cb07684537de7a93bda7e6430860d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f32cb07684537de7a93bda7e6430860d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_instance_1 = DICT_GET_ITEM0(locals_fastavro$six$$$function__29_py2_reraise, mod_consts[31]);

        if (tmp_called_instance_1 == NULL) {
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[31]);
            }

            assert(!(tmp_called_instance_1 == NULL));
        }

        frame_f32cb07684537de7a93bda7e6430860d->m_frame.f_lineno = 161;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[22];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 2);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_traceback == NULL);
        var_traceback = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_Err);
        tmp_dict_value_1 = par_Err;
        tmp_dict_key_1 = mod_consts[33];
        tmp_assign_source_2 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_msg);
        tmp_dict_value_1 = par_msg;
        tmp_dict_key_1 = mod_consts[34];
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(var_traceback);
        tmp_dict_value_1 = var_traceback;
        tmp_dict_key_1 = mod_consts[35];
        tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var__locals == NULL);
        var__locals = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[36];
        assert(tmp_exec_1__exec_source == NULL);
        Py_INCREF(tmp_assign_source_3);
        tmp_exec_1__exec_source = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(var__locals);
        tmp_assign_source_4 = var__locals;
        assert(tmp_exec_1__globals == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_exec_1__globals = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_None;
        assert(tmp_exec_1__locals == NULL);
        Py_INCREF(tmp_assign_source_5);
        tmp_exec_1__locals = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_FALSE;
        tmp_exec_1__plain = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(tmp_exec_1__globals);
        tmp_cmp_expr_left_1 = tmp_exec_1__globals;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = (PyObject *)moduledict_fastavro$six;
        {
            PyObject *old = tmp_exec_1__globals;
            assert(old != NULL);
            tmp_exec_1__globals = tmp_assign_source_7;
            Py_INCREF(tmp_exec_1__globals);
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(tmp_exec_1__locals);
        tmp_cmp_expr_left_2 = tmp_exec_1__locals;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_8;
        if (locals_fastavro$six$$$function__29_py2_reraise == NULL) locals_fastavro$six$$$function__29_py2_reraise = PyDict_New();
        tmp_assign_source_8 = locals_fastavro$six$$$function__29_py2_reraise;
        Py_INCREF(tmp_assign_source_8);
        if (par_Err != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_Err);
            value = par_Err;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_8, (Nuitka_StringObject *)mod_consts[33], value);
        } else {
            int res = PyDict_DelItem(tmp_assign_source_8, mod_consts[33]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (par_msg != NULL) {
            PyObject *value;
            CHECK_OBJECT(par_msg);
            value = par_msg;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_8, (Nuitka_StringObject *)mod_consts[34], value);
        } else {
            int res = PyDict_DelItem(tmp_assign_source_8, mod_consts[34]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_traceback != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_traceback);
            value = var_traceback;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_8, (Nuitka_StringObject *)mod_consts[35], value);
        } else {
            int res = PyDict_DelItem(tmp_assign_source_8, mod_consts[35]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var__locals != NULL) {
            PyObject *value;
            CHECK_OBJECT(var__locals);
            value = var__locals;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_assign_source_8, (Nuitka_StringObject *)mod_consts[37], value);
        } else {
            int res = PyDict_DelItem(tmp_assign_source_8, mod_consts[37]);

            if (res != 0) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        {
            PyObject *old = tmp_exec_1__locals;
            assert(old != NULL);
            tmp_exec_1__locals = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_TRUE;
        tmp_exec_1__plain = tmp_assign_source_9;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(tmp_exec_1__locals);
        tmp_cmp_expr_left_3 = tmp_exec_1__locals;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_exec_1__globals);
        tmp_assign_source_10 = tmp_exec_1__globals;
        {
            PyObject *old = tmp_exec_1__locals;
            assert(old != NULL);
            tmp_exec_1__locals = tmp_assign_source_10;
            Py_INCREF(tmp_exec_1__locals);
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_end_1:;
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_exec_source_1;
        PyObject *tmp_exec_globals_1;
        PyObject *tmp_exec_locals_1;
        PyObject *tmp_exec_filename_1;
        PyObject *tmp_exec_compiled_1;
        PyObject *tmp_exec_result_1;
        CHECK_OBJECT(tmp_exec_1__exec_source);
        tmp_exec_source_1 = tmp_exec_1__exec_source;
        CHECK_OBJECT(tmp_exec_1__globals);
        tmp_exec_globals_1 = tmp_exec_1__globals;
        CHECK_OBJECT(tmp_exec_1__locals);
        tmp_exec_locals_1 = tmp_exec_1__locals;
        tmp_exec_filename_1 = mod_consts[38];
        Py_INCREF(tmp_exec_filename_1);
        Py_INCREF(tmp_exec_source_1);
        tmp_result = EXEC_FILE_ARG_HANDLING(&tmp_exec_source_1, &tmp_exec_filename_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_exec_filename_1);
            Py_DECREF(tmp_exec_source_1);

            exception_lineno = 163;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_exec_compiled_1 = COMPILE_CODE(tmp_exec_source_1, tmp_exec_filename_1, mod_consts[39], NULL, NULL);
        Py_DECREF(tmp_exec_source_1);
        Py_DECREF(tmp_exec_filename_1);
        if (tmp_exec_compiled_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_exec_result_1 = EVAL_CODE(tmp_exec_compiled_1, tmp_exec_globals_1, tmp_exec_locals_1);
        Py_DECREF(tmp_exec_compiled_1);
        if (tmp_exec_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_exec_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_exec_1__plain != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_exec_1__plain;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_sync_locals_1;
        CHECK_OBJECT(tmp_exec_1__locals);
        tmp_sync_locals_1 = tmp_exec_1__locals;
        tmp_locals_value = PyObject_GetItem(tmp_sync_locals_1, mod_consts[33]);
        if (tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE(GET_ERROR_OCCURRED(), PyExc_KeyError)) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);

            exception_lineno = 163;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CLEAR_ERROR_OCCURRED();
        if (tmp_locals_value != NULL)
        {
        {
            PyObject *old = par_Err;
            par_Err = tmp_locals_value;
            Py_XDECREF(old);
        }

        }
        tmp_locals_value = PyObject_GetItem(tmp_sync_locals_1, mod_consts[37]);
        if (tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE(GET_ERROR_OCCURRED(), PyExc_KeyError)) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);

            exception_lineno = 163;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CLEAR_ERROR_OCCURRED();
        if (tmp_locals_value != NULL)
        {
        {
            PyObject *old = var__locals;
            var__locals = tmp_locals_value;
            Py_XDECREF(old);
        }

        }
        tmp_locals_value = PyObject_GetItem(tmp_sync_locals_1, mod_consts[34]);
        if (tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE(GET_ERROR_OCCURRED(), PyExc_KeyError)) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);

            exception_lineno = 163;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CLEAR_ERROR_OCCURRED();
        if (tmp_locals_value != NULL)
        {
        {
            PyObject *old = par_msg;
            par_msg = tmp_locals_value;
            Py_XDECREF(old);
        }

        }
        tmp_locals_value = PyObject_GetItem(tmp_sync_locals_1, mod_consts[35]);
        if (tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE(GET_ERROR_OCCURRED(), PyExc_KeyError)) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_1);
            Py_XDECREF(exception_keeper_value_1);
            Py_XDECREF(exception_keeper_tb_1);

            exception_lineno = 163;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CLEAR_ERROR_OCCURRED();
        if (tmp_locals_value != NULL)
        {
        {
            PyObject *old = var_traceback;
            var_traceback = tmp_locals_value;
            Py_XDECREF(old);
        }

        }
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_exec_1__exec_source);
    Py_DECREF(tmp_exec_1__exec_source);
    tmp_exec_1__exec_source = NULL;
    CHECK_OBJECT(tmp_exec_1__globals);
    Py_DECREF(tmp_exec_1__globals);
    tmp_exec_1__globals = NULL;
    Py_XDECREF(tmp_exec_1__locals);
    tmp_exec_1__locals = NULL;
    tmp_exec_1__plain = NUITKA_BOOL_UNASSIGNED;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f32cb07684537de7a93bda7e6430860d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f32cb07684537de7a93bda7e6430860d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f32cb07684537de7a93bda7e6430860d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f32cb07684537de7a93bda7e6430860d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f32cb07684537de7a93bda7e6430860d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f32cb07684537de7a93bda7e6430860d,
        type_description_1,
        par_Err,
        par_msg,
        var_traceback,
        var__locals
    );


    // Release cached frame if used for exception.
    if (frame_f32cb07684537de7a93bda7e6430860d == cache_frame_f32cb07684537de7a93bda7e6430860d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f32cb07684537de7a93bda7e6430860d);
        cache_frame_f32cb07684537de7a93bda7e6430860d = NULL;
    }

    assertFrameObject(frame_f32cb07684537de7a93bda7e6430860d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(tmp_exec_1__plain != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = tmp_exec_1__plain;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_sync_locals_2;
        CHECK_OBJECT(tmp_exec_1__locals);
        tmp_sync_locals_2 = tmp_exec_1__locals;
        tmp_locals_value = PyObject_GetItem(tmp_sync_locals_2, mod_consts[33]);
        if (tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE(GET_ERROR_OCCURRED(), PyExc_KeyError)) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        CLEAR_ERROR_OCCURRED();
        if (tmp_locals_value != NULL)
        {
        {
            PyObject *old = par_Err;
            par_Err = tmp_locals_value;
            Py_XDECREF(old);
        }

        }
        tmp_locals_value = PyObject_GetItem(tmp_sync_locals_2, mod_consts[37]);
        if (tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE(GET_ERROR_OCCURRED(), PyExc_KeyError)) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        CLEAR_ERROR_OCCURRED();
        if (tmp_locals_value != NULL)
        {
        {
            PyObject *old = var__locals;
            var__locals = tmp_locals_value;
            Py_XDECREF(old);
        }

        }
        tmp_locals_value = PyObject_GetItem(tmp_sync_locals_2, mod_consts[34]);
        if (tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE(GET_ERROR_OCCURRED(), PyExc_KeyError)) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        CLEAR_ERROR_OCCURRED();
        if (tmp_locals_value != NULL)
        {
        {
            PyObject *old = par_msg;
            par_msg = tmp_locals_value;
            Py_XDECREF(old);
        }

        }
        tmp_locals_value = PyObject_GetItem(tmp_sync_locals_2, mod_consts[35]);
        if (tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE(GET_ERROR_OCCURRED(), PyExc_KeyError)) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);




            goto try_except_handler_1;
        }
        CLEAR_ERROR_OCCURRED();
        if (tmp_locals_value != NULL)
        {
        {
            PyObject *old = var_traceback;
            var_traceback = tmp_locals_value;
            Py_XDECREF(old);
        }

        }
    }
    branch_no_5:;
    CHECK_OBJECT(tmp_exec_1__exec_source);
    Py_DECREF(tmp_exec_1__exec_source);
    tmp_exec_1__exec_source = NULL;
    CHECK_OBJECT(tmp_exec_1__globals);
    Py_DECREF(tmp_exec_1__globals);
    tmp_exec_1__globals = NULL;
    Py_XDECREF(tmp_exec_1__locals);
    tmp_exec_1__locals = NULL;
    tmp_exec_1__plain = NUITKA_BOOL_UNASSIGNED;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_Err);
    par_Err = NULL;
    Py_XDECREF(par_msg);
    par_msg = NULL;
    Py_XDECREF(var_traceback);
    var_traceback = NULL;
    Py_XDECREF(var__locals);
    var__locals = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_Err);
    par_Err = NULL;
    Py_XDECREF(par_msg);
    par_msg = NULL;
    Py_XDECREF(var_traceback);
    var_traceback = NULL;
    Py_XDECREF(var__locals);
    var__locals = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    Py_XDECREF(locals_fastavro$six$$$function__29_py2_reraise);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_fastavro$six$$$function__29_py2_reraise);


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_fastavro$six$$$function__15_py2_btou(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$six$$$function__15_py2_btou,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d152fdd1bf3b0a19658657196d594f48,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$six$$$function__16_py2_utob(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$six$$$function__16_py2_utob,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d3552e0375a1bbf88004c714b4246243,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$six$$$function__17_py2_json_dump() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$six$$$function__17_py2_json_dump,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9afacbc7dcb96b7056efceea877959aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$six$$$function__18_py2_iterkeys() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$six$$$function__18_py2_iterkeys,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0def8a70ba530edafd5b3eef967bd204,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$six$$$function__19_py2_itervalues() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$six$$$function__19_py2_itervalues,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b4893a8a0d0bbd35f12852b27799806c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$six$$$function__20_py2_iteritems() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$six$$$function__20_py2_iteritems,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d524f9b3a5b72f71ea542cd18595c914,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$six$$$function__21_py2_is_str() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$six$$$function__21_py2_is_str,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4f681c596c2943a0762858469477a292,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$six$$$function__22_py2_mk_bits() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$six$$$function__22_py2_mk_bits,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_18f00efcc41047a2ca2c2ae65b1d3261,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$six$$$function__23_py2_str2ints() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$six$$$function__23_py2_str2ints,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1bfd4d98b838ebaadc18913953ceab73,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$six$$$function__23_py2_str2ints$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$six$$$function__23_py2_str2ints$$$function__1_lambda,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1101e47259b282fb78e500b507adbcea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$six$$$function__24_py2_fstint() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$six$$$function__24_py2_fstint,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c704e0f8f3492760797ef6cd950d613a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$six$$$function__25__readable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$six$$$function__25__readable,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_454cef71d054edf0dad9daa84f115194,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$six$$$function__26_py2_appendable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$six$$$function__26_py2_appendable,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_51186963224133dbb1f78c8e4a2fad5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$six$$$function__27_py2_int_to_be_signed_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$six$$$function__27_py2_int_to_be_signed_bytes,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8052a64ede539ff4ad7226aa36b120d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$six$$$function__28_py2_be_signed_bytes_to_int() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$six$$$function__28_py2_be_signed_bytes_to_int,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dd00b7f8a2b5c8fd56e7284f316b2689,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$six,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$six$$$function__29_py2_reraise() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$six$$$function__29_py2_reraise,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f32cb07684537de7a93bda7e6430860d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$six,
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

function_impl_code functable_fastavro$six[] = {
    impl_fastavro$six$$$function__23_py2_str2ints$$$function__1_lambda,
    impl_fastavro$six$$$function__15_py2_btou,
    impl_fastavro$six$$$function__16_py2_utob,
    impl_fastavro$six$$$function__17_py2_json_dump,
    impl_fastavro$six$$$function__18_py2_iterkeys,
    impl_fastavro$six$$$function__19_py2_itervalues,
    impl_fastavro$six$$$function__20_py2_iteritems,
    impl_fastavro$six$$$function__21_py2_is_str,
    impl_fastavro$six$$$function__22_py2_mk_bits,
    impl_fastavro$six$$$function__23_py2_str2ints,
    impl_fastavro$six$$$function__24_py2_fstint,
    impl_fastavro$six$$$function__25__readable,
    impl_fastavro$six$$$function__26_py2_appendable,
    impl_fastavro$six$$$function__27_py2_int_to_be_signed_bytes,
    impl_fastavro$six$$$function__28_py2_be_signed_bytes_to_int,
    impl_fastavro$six$$$function__29_py2_reraise,
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

    function_impl_code *current = functable_fastavro$six;
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

    if (offset > sizeof(functable_fastavro$six) || offset < 0) {
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
        functable_fastavro$six[offset],
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
        module_fastavro$six,
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
PyObject *modulecode_fastavro$six(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("fastavro.six");

    // Store the module for future use.
    module_fastavro$six = module;

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
        PRINT_STRING("fastavro.six: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("fastavro.six: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("fastavro.six: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initfastavro$six\n");

    moduledict_fastavro$six = MODULE_DICT(module_fastavro$six);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_fastavro$six,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_fastavro$six,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[91]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_fastavro$six,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_fastavro$six,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_fastavro$six,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_fastavro$six);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_fastavro$six);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_5e13106de1a7436cb4bb5474d9eed451;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_3 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[44]);
        }

        assert(!(tmp_assign_source_3 == NULL));
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_4);
    }
    // Frame without reuse.
    frame_5e13106de1a7436cb4bb5474d9eed451 = MAKE_MODULE_FRAME(codeobj_5e13106de1a7436cb4bb5474d9eed451, module_fastavro$six);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_5e13106de1a7436cb4bb5474d9eed451);
    assert(Py_REFCNT(frame_5e13106de1a7436cb4bb5474d9eed451) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[45];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_fastavro$six;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[46];
        tmp_level_value_1 = mod_consts[13];
        frame_5e13106de1a7436cb4bb5474d9eed451->m_frame.f_lineno = 9;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[11]);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[1];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_fastavro$six;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[13];
        frame_5e13106de1a7436cb4bb5474d9eed451->m_frame.f_lineno = 11;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[49];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_fastavro$six;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[50];
        tmp_level_value_3 = mod_consts[13];
        frame_5e13106de1a7436cb4bb5474d9eed451->m_frame.f_lineno = 77;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[51]);
        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[49];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_fastavro$six;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[50];
        tmp_level_value_4 = mod_consts[13];
        frame_5e13106de1a7436cb4bb5474d9eed451->m_frame.f_lineno = 78;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[51]);
        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_assign_source_10 == NULL)) {
            tmp_assign_source_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);


        tmp_assign_source_11 = MAKE_FUNCTION_fastavro$six$$$function__15_py2_btou(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_2);


        tmp_assign_source_12 = MAKE_FUNCTION_fastavro$six$$$function__16_py2_utob(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_getattr_target_1 = Nuitka_SysGetObject("stdout");
        assert(!(tmp_getattr_target_1 == NULL));
        tmp_getattr_attr_1 = mod_consts[4];
        tmp_getattr_default_1 = Py_None;
        tmp_or_left_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_or_right_value_1 == NULL)) {
            tmp_or_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_13 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_13 = tmp_or_left_value_1;
        or_end_1:;
        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_fastavro$six$$$function__17_py2_json_dump();

        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_fastavro$six$$$function__18_py2_iterkeys();

        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_fastavro$six$$$function__19_py2_itervalues();

        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_fastavro$six$$$function__20_py2_iteritems();

        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_fastavro$six$$$function__21_py2_is_str();

        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_fastavro$six$$$function__22_py2_mk_bits();

        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_fastavro$six$$$function__23_py2_str2ints();

        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_fastavro$six$$$function__24_py2_fstint();

        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_fastavro$six$$$function__25__readable();

        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_fastavro$six$$$function__26_py2_appendable();

        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_fastavro$six$$$function__27_py2_int_to_be_signed_bytes();

        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_fastavro$six$$$function__28_py2_be_signed_bytes_to_int();

        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_fastavro$six$$$function__29_py2_reraise();

        UPDATE_STRING_DICT1(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_assign_source_27 == NULL)) {
            tmp_assign_source_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        assert(!(tmp_assign_source_27 == NULL));
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_assign_source_28 == NULL)) {
            tmp_assign_source_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        assert(!(tmp_assign_source_28 == NULL));
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_assign_source_29 == NULL)) {
            tmp_assign_source_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_assign_source_29 == NULL));
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_assign_source_30 == NULL)) {
            tmp_assign_source_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        assert(!(tmp_assign_source_30 == NULL));
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_assign_source_31 == NULL)) {
            tmp_assign_source_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_assign_source_31 == NULL));
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_assign_source_32 == NULL)) {
            tmp_assign_source_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        assert(!(tmp_assign_source_32 == NULL));
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_assign_source_33 == NULL)) {
            tmp_assign_source_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_33);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5e13106de1a7436cb4bb5474d9eed451);
#endif
    popFrameStack();

    assertFrameObject(frame_5e13106de1a7436cb4bb5474d9eed451);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5e13106de1a7436cb4bb5474d9eed451);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5e13106de1a7436cb4bb5474d9eed451, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5e13106de1a7436cb4bb5474d9eed451->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5e13106de1a7436cb4bb5474d9eed451, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assign_source_34 == NULL)) {
            tmp_assign_source_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_assign_source_34 == NULL));
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_assign_source_35 == NULL)) {
            tmp_assign_source_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        assert(!(tmp_assign_source_35 == NULL));
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_assign_source_36 == NULL)) {
            tmp_assign_source_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        assert(!(tmp_assign_source_36 == NULL));
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_assign_source_37 == NULL)) {
            tmp_assign_source_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        assert(!(tmp_assign_source_37 == NULL));
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_assign_source_38 == NULL)) {
            tmp_assign_source_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_assign_source_38 == NULL));
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_assign_source_39 == NULL)) {
            tmp_assign_source_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        assert(!(tmp_assign_source_39 == NULL));
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_assign_source_40 == NULL)) {
            tmp_assign_source_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        assert(!(tmp_assign_source_40 == NULL));
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_assign_source_41 == NULL)) {
            tmp_assign_source_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        assert(!(tmp_assign_source_41 == NULL));
        UPDATE_STRING_DICT0(moduledict_fastavro$six, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_41);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("fastavro.six", false);

    return module_fastavro$six;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastavro$six, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("fastavro$six", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
