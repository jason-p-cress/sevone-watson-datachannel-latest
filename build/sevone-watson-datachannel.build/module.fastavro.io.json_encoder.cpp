/* Generated code for Python module 'fastavro.io.json_encoder'
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

/* The "module_fastavro$io$json_encoder" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_fastavro$io$json_encoder;
PyDictObject *moduledict_fastavro$io$json_encoder;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[110];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[110];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("fastavro.io.json_encoder"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 110; i++) {
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
void checkModuleConstants_fastavro$io$json_encoder(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 110; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ca410d9d8bacfa88232f4d0e70670601;
static PyCodeObject *codeobj_4652130ed88093aa69e8746d52c270dc;
static PyCodeObject *codeobj_d4613c2f23086ed48de6ba5654416686;
static PyCodeObject *codeobj_ac8679ace318c59b20380485d7f500a0;
static PyCodeObject *codeobj_1c06d34bc597a11f6f80bbca8090ade3;
static PyCodeObject *codeobj_6b4e66ccee7da745d7eec3654bb71653;
static PyCodeObject *codeobj_8d4f958475b7bb792549068c7e62ad11;
static PyCodeObject *codeobj_8c7d714047fa9c75e8c72d52dc20c5ed;
static PyCodeObject *codeobj_21a28456739ded0ad97994699fede4a4;
static PyCodeObject *codeobj_bd4518400d631447ccff57cac74ae0f4;
static PyCodeObject *codeobj_d2432e24e9e827563d1494ba293520cc;
static PyCodeObject *codeobj_34f15d891abd4dc621a7efeed9c96ad7;
static PyCodeObject *codeobj_a2fa86d7da10e4bd1df00154aabe7588;
static PyCodeObject *codeobj_2aafc87fbe183a3f4cf21d689313dd0d;
static PyCodeObject *codeobj_83f3ef9ab53044b259cbe477e428ce6e;
static PyCodeObject *codeobj_ee2fd69a7488d64c8e962fd915be2485;
static PyCodeObject *codeobj_7f9f5bf1a4f9ffc963d0f7611516441d;
static PyCodeObject *codeobj_c75940837533692f0dc26497e4c10638;
static PyCodeObject *codeobj_f20003c6504271ed146ad049affcc585;
static PyCodeObject *codeobj_4d758b1355d3ef9c9138cb0fde9515d8;
static PyCodeObject *codeobj_a7bc955ae2590efa43f8784727c7b2d3;
static PyCodeObject *codeobj_2af365af6d582da55cc3b7ac45edb4e6;
static PyCodeObject *codeobj_6c606533ed6ea1ff6e578022a2277191;
static PyCodeObject *codeobj_eaa3faafeb8dcdb52a0693b8f1f6d21b;
static PyCodeObject *codeobj_fc12b826a44e1052b5f0dd9995035f77;
static PyCodeObject *codeobj_d9047f3a9edd985d63803f47705e42cc;
static PyCodeObject *codeobj_6c70001675eceff340644e7110cafb05;
static PyCodeObject *codeobj_14ad7dcc7092f167b19606d2e110feda;
static PyCodeObject *codeobj_0a4f03aa937861321d84ae074d0406d4;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[62]; CHECK_OBJECT(module_filename_obj);
    codeobj_ca410d9d8bacfa88232f4d0e70670601 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[97], NULL, NULL, 0, 0, 0);
    codeobj_4652130ed88093aa69e8746d52c270dc = MAKE_CODEOBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[98], NULL, 2, 0, 0);
    codeobj_d4613c2f23086ed48de6ba5654416686 = MAKE_CODEOBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[99], NULL, 1, 0, 0);
    codeobj_ac8679ace318c59b20380485d7f500a0 = MAKE_CODEOBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[100], NULL, 1, 0, 0);
    codeobj_1c06d34bc597a11f6f80bbca8090ade3 = MAKE_CODEOBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[101], NULL, 3, 0, 0);
    codeobj_6b4e66ccee7da745d7eec3654bb71653 = MAKE_CODEOBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[102], NULL, 2, 0, 0);
    codeobj_8d4f958475b7bb792549068c7e62ad11 = MAKE_CODEOBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[100], NULL, 1, 0, 0);
    codeobj_8c7d714047fa9c75e8c72d52dc20c5ed = MAKE_CODEOBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[100], NULL, 1, 0, 0);
    codeobj_21a28456739ded0ad97994699fede4a4 = MAKE_CODEOBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[100], NULL, 1, 0, 0);
    codeobj_bd4518400d631447ccff57cac74ae0f4 = MAKE_CODEOBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], mod_consts[100], NULL, 1, 0, 0);
    codeobj_d2432e24e9e827563d1494ba293520cc = MAKE_CODEOBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[103], NULL, 2, 0, 0);
    codeobj_34f15d891abd4dc621a7efeed9c96ad7 = MAKE_CODEOBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[104], NULL, 1, 0, 0);
    codeobj_a2fa86d7da10e4bd1df00154aabe7588 = MAKE_CODEOBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[103], NULL, 2, 0, 0);
    codeobj_2aafc87fbe183a3f4cf21d689313dd0d = MAKE_CODEOBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], mod_consts[103], NULL, 2, 0, 0);
    codeobj_83f3ef9ab53044b259cbe477e428ce6e = MAKE_CODEOBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[105], NULL, 2, 0, 0);
    codeobj_ee2fd69a7488d64c8e962fd915be2485 = MAKE_CODEOBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[103], NULL, 2, 0, 0);
    codeobj_7f9f5bf1a4f9ffc963d0f7611516441d = MAKE_CODEOBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[103], NULL, 2, 0, 0);
    codeobj_c75940837533692f0dc26497e4c10638 = MAKE_CODEOBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[90], mod_consts[106], NULL, 3, 0, 0);
    codeobj_f20003c6504271ed146ad049affcc585 = MAKE_CODEOBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[103], NULL, 2, 0, 0);
    codeobj_4d758b1355d3ef9c9138cb0fde9515d8 = MAKE_CODEOBJECT(module_filename_obj, 140, CO_NOFREE, mod_consts[85], mod_consts[107], NULL, 2, 0, 0);
    codeobj_a7bc955ae2590efa43f8784727c7b2d3 = MAKE_CODEOBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[103], NULL, 2, 0, 0);
    codeobj_2af365af6d582da55cc3b7ac45edb4e6 = MAKE_CODEOBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[100], NULL, 1, 0, 0);
    codeobj_6c606533ed6ea1ff6e578022a2277191 = MAKE_CODEOBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[100], NULL, 1, 0, 0);
    codeobj_eaa3faafeb8dcdb52a0693b8f1f6d21b = MAKE_CODEOBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[100], NULL, 1, 0, 0);
    codeobj_fc12b826a44e1052b5f0dd9995035f77 = MAKE_CODEOBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[100], NULL, 1, 0, 0);
    codeobj_d9047f3a9edd985d63803f47705e42cc = MAKE_CODEOBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[108], NULL, 2, 0, 0);
    codeobj_6c70001675eceff340644e7110cafb05 = MAKE_CODEOBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[100], NULL, 1, 0, 0);
    codeobj_14ad7dcc7092f167b19606d2e110feda = MAKE_CODEOBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[103], NULL, 2, 0, 0);
    codeobj_0a4f03aa937861321d84ae074d0406d4 = MAKE_CODEOBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[103], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__10_write_boolean();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__11_write_utf8();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__12_write_int();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__13_write_long();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__14_write_float();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__15_write_double();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__16_write_bytes();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__17_write_enum();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__18_write_fixed();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__19_write_array_start();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__1___init__();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__20_write_item_count();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__21_end_item();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__22_write_array_end();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__23_write_object_start();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__24_write_object_key();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__25_write_object_end();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__26_write_map_start();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__27_write_map_end();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__28_write_index();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__2_write_value();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__3__push();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__4__pop();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__5_write_buffer();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__6_configure();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__7_flush();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__8_do_action();


static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__9_write_null();


// The module function definitions.
static PyObject *impl_fastavro$io$json_encoder$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_fo = python_pars[1];
    struct Nuitka_FrameObject *frame_4652130ed88093aa69e8746d52c270dc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4652130ed88093aa69e8746d52c270dc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4652130ed88093aa69e8746d52c270dc)) {
        Py_XDECREF(cache_frame_4652130ed88093aa69e8746d52c270dc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4652130ed88093aa69e8746d52c270dc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4652130ed88093aa69e8746d52c270dc = MAKE_FUNCTION_FRAME(codeobj_4652130ed88093aa69e8746d52c270dc, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4652130ed88093aa69e8746d52c270dc->m_type_description == NULL);
    frame_4652130ed88093aa69e8746d52c270dc = cache_frame_4652130ed88093aa69e8746d52c270dc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4652130ed88093aa69e8746d52c270dc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4652130ed88093aa69e8746d52c270dc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_fo);
        tmp_assattr_value_1 = par_fo;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[4], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4652130ed88093aa69e8746d52c270dc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4652130ed88093aa69e8746d52c270dc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4652130ed88093aa69e8746d52c270dc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4652130ed88093aa69e8746d52c270dc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4652130ed88093aa69e8746d52c270dc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4652130ed88093aa69e8746d52c270dc,
        type_description_1,
        par_self,
        par_fo
    );


    // Release cached frame if used for exception.
    if (frame_4652130ed88093aa69e8746d52c270dc == cache_frame_4652130ed88093aa69e8746d52c270dc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4652130ed88093aa69e8746d52c270dc);
        cache_frame_4652130ed88093aa69e8746d52c270dc = NULL;
    }

    assertFrameObject(frame_4652130ed88093aa69e8746d52c270dc);

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
    CHECK_OBJECT(par_fo);
    Py_DECREF(par_fo);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fo);
    Py_DECREF(par_fo);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$json_encoder$$$function__2_write_value(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_0a4f03aa937861321d84ae074d0406d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0a4f03aa937861321d84ae074d0406d4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0a4f03aa937861321d84ae074d0406d4)) {
        Py_XDECREF(cache_frame_0a4f03aa937861321d84ae074d0406d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0a4f03aa937861321d84ae074d0406d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0a4f03aa937861321d84ae074d0406d4 = MAKE_FUNCTION_FRAME(codeobj_0a4f03aa937861321d84ae074d0406d4, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0a4f03aa937861321d84ae074d0406d4->m_type_description == NULL);
    frame_0a4f03aa937861321d84ae074d0406d4 = cache_frame_0a4f03aa937861321d84ae074d0406d4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0a4f03aa937861321d84ae074d0406d4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0a4f03aa937861321d84ae074d0406d4) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 33;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_value);
        tmp_ass_subvalue_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[5];
        frame_0a4f03aa937861321d84ae074d0406d4->m_frame.f_lineno = 36;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 36;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[2]);
        if (tmp_isinstance_inst_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = (PyObject *)&PyList_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_inst_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_0a4f03aa937861321d84ae074d0406d4->m_frame.f_lineno = 38;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[4]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_0a4f03aa937861321d84ae074d0406d4->m_frame.f_lineno = 42;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[6], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_3:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a4f03aa937861321d84ae074d0406d4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a4f03aa937861321d84ae074d0406d4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0a4f03aa937861321d84ae074d0406d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0a4f03aa937861321d84ae074d0406d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a4f03aa937861321d84ae074d0406d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0a4f03aa937861321d84ae074d0406d4,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_0a4f03aa937861321d84ae074d0406d4 == cache_frame_0a4f03aa937861321d84ae074d0406d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0a4f03aa937861321d84ae074d0406d4);
        cache_frame_0a4f03aa937861321d84ae074d0406d4 = NULL;
    }

    assertFrameObject(frame_0a4f03aa937861321d84ae074d0406d4);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$json_encoder$$$function__3__push(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ac8679ace318c59b20380485d7f500a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ac8679ace318c59b20380485d7f500a0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ac8679ace318c59b20380485d7f500a0)) {
        Py_XDECREF(cache_frame_ac8679ace318c59b20380485d7f500a0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ac8679ace318c59b20380485d7f500a0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ac8679ace318c59b20380485d7f500a0 = MAKE_FUNCTION_FRAME(codeobj_ac8679ace318c59b20380485d7f500a0, module_fastavro$io$json_encoder, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ac8679ace318c59b20380485d7f500a0->m_type_description == NULL);
    frame_ac8679ace318c59b20380485d7f500a0 = cache_frame_ac8679ace318c59b20380485d7f500a0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ac8679ace318c59b20380485d7f500a0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ac8679ace318c59b20380485d7f500a0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM(tmp_args_element_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_ac8679ace318c59b20380485d7f500a0->m_frame.f_lineno = 45;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac8679ace318c59b20380485d7f500a0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ac8679ace318c59b20380485d7f500a0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ac8679ace318c59b20380485d7f500a0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac8679ace318c59b20380485d7f500a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac8679ace318c59b20380485d7f500a0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ac8679ace318c59b20380485d7f500a0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ac8679ace318c59b20380485d7f500a0 == cache_frame_ac8679ace318c59b20380485d7f500a0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ac8679ace318c59b20380485d7f500a0);
        cache_frame_ac8679ace318c59b20380485d7f500a0 = NULL;
    }

    assertFrameObject(frame_ac8679ace318c59b20380485d7f500a0);

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


static PyObject *impl_fastavro$io$json_encoder$$$function__4__pop(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_prev_current = NULL;
    PyObject *var_prev_key = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d4613c2f23086ed48de6ba5654416686;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d4613c2f23086ed48de6ba5654416686 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d4613c2f23086ed48de6ba5654416686)) {
        Py_XDECREF(cache_frame_d4613c2f23086ed48de6ba5654416686);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d4613c2f23086ed48de6ba5654416686 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d4613c2f23086ed48de6ba5654416686 = MAKE_FUNCTION_FRAME(codeobj_d4613c2f23086ed48de6ba5654416686, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d4613c2f23086ed48de6ba5654416686->m_type_description == NULL);
    frame_d4613c2f23086ed48de6ba5654416686 = cache_frame_d4613c2f23086ed48de6ba5654416686;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d4613c2f23086ed48de6ba5654416686);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d4613c2f23086ed48de6ba5654416686) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_d4613c2f23086ed48de6ba5654416686->m_frame.f_lineno = 48;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooo";
            exception_lineno = 48;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooo";
            exception_lineno = 48;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooo";
                    exception_lineno = 48;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooo";
            exception_lineno = 48;
            goto try_except_handler_3;
        }
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_prev_current == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_prev_current = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_prev_key == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_prev_key = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_prev_current);
        tmp_isinstance_inst_1 = var_prev_current;
        tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_prev_current);
        tmp_ass_subscribed_1 = var_prev_current;
        CHECK_OBJECT(var_prev_key);
        tmp_ass_subscript_1 = var_prev_key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_prev_current);
        tmp_assattr_value_1 = var_prev_current;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_prev_current);
        tmp_isinstance_inst_2 = var_prev_current;
        tmp_isinstance_cls_2 = (PyObject *)&PyList_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_prev_current);
        tmp_expression_value_4 = var_prev_current;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[2]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_d4613c2f23086ed48de6ba5654416686->m_frame.f_lineno = 53;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_prev_current);
        tmp_assattr_value_2 = var_prev_current;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_prev_current);
        tmp_cmp_expr_left_1 = var_prev_current;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 56;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_prev_key);
        tmp_cmp_expr_left_2 = var_prev_key;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 57;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[4]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[6]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[2]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_d4613c2f23086ed48de6ba5654416686->m_frame.f_lineno = 59;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_prev_current);
        tmp_assattr_value_3 = var_prev_current;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(var_prev_key);
        tmp_assattr_value_4 = var_prev_key;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d4613c2f23086ed48de6ba5654416686);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d4613c2f23086ed48de6ba5654416686);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d4613c2f23086ed48de6ba5654416686, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d4613c2f23086ed48de6ba5654416686->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d4613c2f23086ed48de6ba5654416686, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d4613c2f23086ed48de6ba5654416686,
        type_description_1,
        par_self,
        var_prev_current,
        var_prev_key
    );


    // Release cached frame if used for exception.
    if (frame_d4613c2f23086ed48de6ba5654416686 == cache_frame_d4613c2f23086ed48de6ba5654416686) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d4613c2f23086ed48de6ba5654416686);
        cache_frame_d4613c2f23086ed48de6ba5654416686 = NULL;
    }

    assertFrameObject(frame_d4613c2f23086ed48de6ba5654416686);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_prev_current);
    var_prev_current = NULL;
    CHECK_OBJECT(var_prev_key);
    Py_DECREF(var_prev_key);
    var_prev_key = NULL;
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

    Py_XDECREF(var_prev_current);
    var_prev_current = NULL;
    Py_XDECREF(var_prev_key);
    var_prev_key = NULL;
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


static PyObject *impl_fastavro$io$json_encoder$$$function__5_write_buffer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_record = NULL;
    PyObject *var_json_data = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_34f15d891abd4dc621a7efeed9c96ad7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_34f15d891abd4dc621a7efeed9c96ad7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_34f15d891abd4dc621a7efeed9c96ad7)) {
        Py_XDECREF(cache_frame_34f15d891abd4dc621a7efeed9c96ad7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_34f15d891abd4dc621a7efeed9c96ad7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_34f15d891abd4dc621a7efeed9c96ad7 = MAKE_FUNCTION_FRAME(codeobj_34f15d891abd4dc621a7efeed9c96ad7, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_34f15d891abd4dc621a7efeed9c96ad7->m_type_description == NULL);
    frame_34f15d891abd4dc621a7efeed9c96ad7 = cache_frame_34f15d891abd4dc621a7efeed9c96ad7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_34f15d891abd4dc621a7efeed9c96ad7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_34f15d891abd4dc621a7efeed9c96ad7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[9];
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert(tmp_list_contraction_1__$0 == NULL);
            tmp_list_contraction_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyList_New(0);
            assert(tmp_list_contraction_1__contraction_result == NULL);
            tmp_list_contraction_1__contraction_result = tmp_assign_source_3;
        }
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_list_contraction_1__$0);
            tmp_next_source_1 = tmp_list_contraction_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooo";
                    exception_lineno = 65;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_list_contraction_1__iter_value_0;
                tmp_list_contraction_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_list_contraction_1__iter_value_0);
            tmp_assign_source_5 = tmp_list_contraction_1__iter_value_0;
            {
                PyObject *old = var_record;
                var_record = tmp_assign_source_5;
                Py_INCREF(var_record);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            CHECK_OBJECT(tmp_list_contraction_1__contraction_result);
            tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[10]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(var_record);
            tmp_args_element_value_1 = var_record;
            frame_34f15d891abd4dc621a7efeed9c96ad7->m_frame.f_lineno = 65;
            tmp_append_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[11], tmp_args_element_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_list_contraction_1__contraction_result);
        tmp_iterable_value_1 = tmp_list_contraction_1__contraction_result;
        Py_INCREF(tmp_iterable_value_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_list_contraction_1__$0);
        Py_DECREF(tmp_list_contraction_1__$0);
        tmp_list_contraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_list_contraction_1__contraction_result);
        Py_DECREF(tmp_list_contraction_1__contraction_result);
        tmp_list_contraction_1__contraction_result = NULL;
        Py_XDECREF(tmp_list_contraction_1__iter_value_0);
        tmp_list_contraction_1__iter_value_0 = NULL;
        goto outline_result_1;
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

        Py_XDECREF(tmp_list_contraction_1__$0);
        tmp_list_contraction_1__$0 = NULL;
        Py_XDECREF(tmp_list_contraction_1__contraction_result);
        tmp_list_contraction_1__contraction_result = NULL;
        Py_XDECREF(tmp_list_contraction_1__iter_value_0);
        tmp_list_contraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_assign_source_1 = STR_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_json_data == NULL);
        var_json_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_json_data);
        tmp_args_element_value_2 = var_json_data;
        frame_34f15d891abd4dc621a7efeed9c96ad7->m_frame.f_lineno = 66;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[12], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_34f15d891abd4dc621a7efeed9c96ad7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_34f15d891abd4dc621a7efeed9c96ad7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_34f15d891abd4dc621a7efeed9c96ad7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_34f15d891abd4dc621a7efeed9c96ad7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_34f15d891abd4dc621a7efeed9c96ad7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_34f15d891abd4dc621a7efeed9c96ad7,
        type_description_1,
        par_self,
        var_record,
        var_json_data
    );


    // Release cached frame if used for exception.
    if (frame_34f15d891abd4dc621a7efeed9c96ad7 == cache_frame_34f15d891abd4dc621a7efeed9c96ad7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_34f15d891abd4dc621a7efeed9c96ad7);
        cache_frame_34f15d891abd4dc621a7efeed9c96ad7 = NULL;
    }

    assertFrameObject(frame_34f15d891abd4dc621a7efeed9c96ad7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_record);
    var_record = NULL;
    CHECK_OBJECT(var_json_data);
    Py_DECREF(var_json_data);
    var_json_data = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_record);
    var_record = NULL;
    Py_XDECREF(var_json_data);
    var_json_data = NULL;
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


static PyObject *impl_fastavro$io$json_encoder$$$function__6_configure(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_schema = python_pars[1];
    PyObject *par_named_schemas = python_pars[2];
    struct Nuitka_FrameObject *frame_1c06d34bc597a11f6f80bbca8090ade3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1c06d34bc597a11f6f80bbca8090ade3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c06d34bc597a11f6f80bbca8090ade3)) {
        Py_XDECREF(cache_frame_1c06d34bc597a11f6f80bbca8090ade3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c06d34bc597a11f6f80bbca8090ade3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c06d34bc597a11f6f80bbca8090ade3 = MAKE_FUNCTION_FRAME(codeobj_1c06d34bc597a11f6f80bbca8090ade3, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1c06d34bc597a11f6f80bbca8090ade3->m_type_description == NULL);
    frame_1c06d34bc597a11f6f80bbca8090ade3 = cache_frame_1c06d34bc597a11f6f80bbca8090ade3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1c06d34bc597a11f6f80bbca8090ade3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1c06d34bc597a11f6f80bbca8090ade3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_schema);
        tmp_args_element_value_1 = par_schema;
        CHECK_OBJECT(par_named_schemas);
        tmp_args_element_value_2 = par_named_schemas;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1c06d34bc597a11f6f80bbca8090ade3->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[15], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c06d34bc597a11f6f80bbca8090ade3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1c06d34bc597a11f6f80bbca8090ade3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c06d34bc597a11f6f80bbca8090ade3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c06d34bc597a11f6f80bbca8090ade3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c06d34bc597a11f6f80bbca8090ade3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c06d34bc597a11f6f80bbca8090ade3,
        type_description_1,
        par_self,
        par_schema,
        par_named_schemas
    );


    // Release cached frame if used for exception.
    if (frame_1c06d34bc597a11f6f80bbca8090ade3 == cache_frame_1c06d34bc597a11f6f80bbca8090ade3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1c06d34bc597a11f6f80bbca8090ade3);
        cache_frame_1c06d34bc597a11f6f80bbca8090ade3 = NULL;
    }

    assertFrameObject(frame_1c06d34bc597a11f6f80bbca8090ade3);

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
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_named_schemas);
    Py_DECREF(par_named_schemas);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);
    CHECK_OBJECT(par_named_schemas);
    Py_DECREF(par_named_schemas);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$json_encoder$$$function__7_flush(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8c7d714047fa9c75e8c72d52dc20c5ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8c7d714047fa9c75e8c72d52dc20c5ed = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8c7d714047fa9c75e8c72d52dc20c5ed)) {
        Py_XDECREF(cache_frame_8c7d714047fa9c75e8c72d52dc20c5ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8c7d714047fa9c75e8c72d52dc20c5ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8c7d714047fa9c75e8c72d52dc20c5ed = MAKE_FUNCTION_FRAME(codeobj_8c7d714047fa9c75e8c72d52dc20c5ed, module_fastavro$io$json_encoder, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8c7d714047fa9c75e8c72d52dc20c5ed->m_type_description == NULL);
    frame_8c7d714047fa9c75e8c72d52dc20c5ed = cache_frame_8c7d714047fa9c75e8c72d52dc20c5ed;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8c7d714047fa9c75e8c72d52dc20c5ed);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8c7d714047fa9c75e8c72d52dc20c5ed) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_8c7d714047fa9c75e8c72d52dc20c5ed->m_frame.f_lineno = 72;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8c7d714047fa9c75e8c72d52dc20c5ed);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8c7d714047fa9c75e8c72d52dc20c5ed);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8c7d714047fa9c75e8c72d52dc20c5ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8c7d714047fa9c75e8c72d52dc20c5ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8c7d714047fa9c75e8c72d52dc20c5ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8c7d714047fa9c75e8c72d52dc20c5ed,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8c7d714047fa9c75e8c72d52dc20c5ed == cache_frame_8c7d714047fa9c75e8c72d52dc20c5ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8c7d714047fa9c75e8c72d52dc20c5ed);
        cache_frame_8c7d714047fa9c75e8c72d52dc20c5ed = NULL;
    }

    assertFrameObject(frame_8c7d714047fa9c75e8c72d52dc20c5ed);

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


static PyObject *impl_fastavro$io$json_encoder$$$function__8_do_action(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_action = python_pars[1];
    struct Nuitka_FrameObject *frame_6b4e66ccee7da745d7eec3654bb71653;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6b4e66ccee7da745d7eec3654bb71653 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6b4e66ccee7da745d7eec3654bb71653)) {
        Py_XDECREF(cache_frame_6b4e66ccee7da745d7eec3654bb71653);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b4e66ccee7da745d7eec3654bb71653 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b4e66ccee7da745d7eec3654bb71653 = MAKE_FUNCTION_FRAME(codeobj_6b4e66ccee7da745d7eec3654bb71653, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6b4e66ccee7da745d7eec3654bb71653->m_type_description == NULL);
    frame_6b4e66ccee7da745d7eec3654bb71653 = cache_frame_6b4e66ccee7da745d7eec3654bb71653;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6b4e66ccee7da745d7eec3654bb71653);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6b4e66ccee7da745d7eec3654bb71653) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_action);
        tmp_isinstance_inst_1 = par_action;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[17]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_6b4e66ccee7da745d7eec3654bb71653->m_frame.f_lineno = 76;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[18]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(par_action);
        tmp_isinstance_inst_2 = par_action;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[19]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_action);
        tmp_isinstance_inst_3 = par_action;
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_isinstance_cls_3 == NULL)) {
            tmp_isinstance_cls_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[20]);
        }

        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_6b4e66ccee7da745d7eec3654bb71653->m_frame.f_lineno = 78;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[21]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        CHECK_OBJECT(par_action);
        tmp_isinstance_inst_4 = par_action;
        tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_isinstance_cls_4 == NULL)) {
            tmp_isinstance_cls_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[22]);
        }

        if (tmp_isinstance_cls_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_action);
        tmp_expression_value_2 = par_action;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[24]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6b4e66ccee7da745d7eec3654bb71653->m_frame.f_lineno = 80;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_5;
        PyObject *tmp_isinstance_cls_5;
        CHECK_OBJECT(par_action);
        tmp_isinstance_inst_5 = par_action;
        tmp_isinstance_cls_5 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_isinstance_cls_5 == NULL)) {
            tmp_isinstance_cls_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[25]);
        }

        if (tmp_isinstance_cls_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_6;
        PyObject *tmp_isinstance_cls_6;
        CHECK_OBJECT(par_action);
        tmp_isinstance_inst_6 = par_action;
        tmp_isinstance_cls_6 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_isinstance_cls_6 == NULL)) {
            tmp_isinstance_cls_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[26]);
        }

        if (tmp_isinstance_cls_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_6, tmp_isinstance_cls_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_6b4e66ccee7da745d7eec3654bb71653->m_frame.f_lineno = 85;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[27]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_3 = mod_consts[28];
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[29]);
        assert(!(tmp_called_value_2 == NULL));
        CHECK_OBJECT(par_action);
        tmp_args_element_value_2 = par_action;
        frame_6b4e66ccee7da745d7eec3654bb71653->m_frame.f_lineno = 87;
        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6b4e66ccee7da745d7eec3654bb71653->m_frame.f_lineno = 87;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 87;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_end_5:;
    branch_no_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b4e66ccee7da745d7eec3654bb71653);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6b4e66ccee7da745d7eec3654bb71653);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6b4e66ccee7da745d7eec3654bb71653, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b4e66ccee7da745d7eec3654bb71653->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b4e66ccee7da745d7eec3654bb71653, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b4e66ccee7da745d7eec3654bb71653,
        type_description_1,
        par_self,
        par_action
    );


    // Release cached frame if used for exception.
    if (frame_6b4e66ccee7da745d7eec3654bb71653 == cache_frame_6b4e66ccee7da745d7eec3654bb71653) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6b4e66ccee7da745d7eec3654bb71653);
        cache_frame_6b4e66ccee7da745d7eec3654bb71653 = NULL;
    }

    assertFrameObject(frame_6b4e66ccee7da745d7eec3654bb71653);

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
    CHECK_OBJECT(par_action);
    Py_DECREF(par_action);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_action);
    Py_DECREF(par_action);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$json_encoder$$$function__9_write_null(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_eaa3faafeb8dcdb52a0693b8f1f6d21b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eaa3faafeb8dcdb52a0693b8f1f6d21b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eaa3faafeb8dcdb52a0693b8f1f6d21b)) {
        Py_XDECREF(cache_frame_eaa3faafeb8dcdb52a0693b8f1f6d21b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eaa3faafeb8dcdb52a0693b8f1f6d21b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eaa3faafeb8dcdb52a0693b8f1f6d21b = MAKE_FUNCTION_FRAME(codeobj_eaa3faafeb8dcdb52a0693b8f1f6d21b, module_fastavro$io$json_encoder, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_eaa3faafeb8dcdb52a0693b8f1f6d21b->m_type_description == NULL);
    frame_eaa3faafeb8dcdb52a0693b8f1f6d21b = cache_frame_eaa3faafeb8dcdb52a0693b8f1f6d21b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_eaa3faafeb8dcdb52a0693b8f1f6d21b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_eaa3faafeb8dcdb52a0693b8f1f6d21b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[31]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_eaa3faafeb8dcdb52a0693b8f1f6d21b->m_frame.f_lineno = 90;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_eaa3faafeb8dcdb52a0693b8f1f6d21b->m_frame.f_lineno = 90;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_eaa3faafeb8dcdb52a0693b8f1f6d21b->m_frame.f_lineno = 91;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[32],
            PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_eaa3faafeb8dcdb52a0693b8f1f6d21b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_eaa3faafeb8dcdb52a0693b8f1f6d21b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eaa3faafeb8dcdb52a0693b8f1f6d21b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eaa3faafeb8dcdb52a0693b8f1f6d21b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eaa3faafeb8dcdb52a0693b8f1f6d21b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eaa3faafeb8dcdb52a0693b8f1f6d21b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_eaa3faafeb8dcdb52a0693b8f1f6d21b == cache_frame_eaa3faafeb8dcdb52a0693b8f1f6d21b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_eaa3faafeb8dcdb52a0693b8f1f6d21b);
        cache_frame_eaa3faafeb8dcdb52a0693b8f1f6d21b = NULL;
    }

    assertFrameObject(frame_eaa3faafeb8dcdb52a0693b8f1f6d21b);

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


static PyObject *impl_fastavro$io$json_encoder$$$function__10_write_boolean(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_d2432e24e9e827563d1494ba293520cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d2432e24e9e827563d1494ba293520cc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d2432e24e9e827563d1494ba293520cc)) {
        Py_XDECREF(cache_frame_d2432e24e9e827563d1494ba293520cc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d2432e24e9e827563d1494ba293520cc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d2432e24e9e827563d1494ba293520cc = MAKE_FUNCTION_FRAME(codeobj_d2432e24e9e827563d1494ba293520cc, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d2432e24e9e827563d1494ba293520cc->m_type_description == NULL);
    frame_d2432e24e9e827563d1494ba293520cc = cache_frame_d2432e24e9e827563d1494ba293520cc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d2432e24e9e827563d1494ba293520cc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d2432e24e9e827563d1494ba293520cc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[34]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d2432e24e9e827563d1494ba293520cc->m_frame.f_lineno = 94;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d2432e24e9e827563d1494ba293520cc->m_frame.f_lineno = 94;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_d2432e24e9e827563d1494ba293520cc->m_frame.f_lineno = 95;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[32], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d2432e24e9e827563d1494ba293520cc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d2432e24e9e827563d1494ba293520cc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d2432e24e9e827563d1494ba293520cc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d2432e24e9e827563d1494ba293520cc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d2432e24e9e827563d1494ba293520cc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d2432e24e9e827563d1494ba293520cc,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_d2432e24e9e827563d1494ba293520cc == cache_frame_d2432e24e9e827563d1494ba293520cc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d2432e24e9e827563d1494ba293520cc);
        cache_frame_d2432e24e9e827563d1494ba293520cc = NULL;
    }

    assertFrameObject(frame_d2432e24e9e827563d1494ba293520cc);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$json_encoder$$$function__11_write_utf8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_14ad7dcc7092f167b19606d2e110feda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_14ad7dcc7092f167b19606d2e110feda = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_14ad7dcc7092f167b19606d2e110feda)) {
        Py_XDECREF(cache_frame_14ad7dcc7092f167b19606d2e110feda);

#if _DEBUG_REFCOUNTS
        if (cache_frame_14ad7dcc7092f167b19606d2e110feda == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_14ad7dcc7092f167b19606d2e110feda = MAKE_FUNCTION_FRAME(codeobj_14ad7dcc7092f167b19606d2e110feda, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_14ad7dcc7092f167b19606d2e110feda->m_type_description == NULL);
    frame_14ad7dcc7092f167b19606d2e110feda = cache_frame_14ad7dcc7092f167b19606d2e110feda;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_14ad7dcc7092f167b19606d2e110feda);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_14ad7dcc7092f167b19606d2e110feda) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[35]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 98;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_14ad7dcc7092f167b19606d2e110feda->m_frame.f_lineno = 98;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 98;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_14ad7dcc7092f167b19606d2e110feda->m_frame.f_lineno = 98;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_called_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[15]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[36]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[37];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, -1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[38]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_14ad7dcc7092f167b19606d2e110feda->m_frame.f_lineno = 99;
        tmp_cmp_expr_right_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
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
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[15]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[30]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[38]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_14ad7dcc7092f167b19606d2e110feda->m_frame.f_lineno = 100;
        tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_14ad7dcc7092f167b19606d2e110feda->m_frame.f_lineno = 100;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_3 = par_value;
        frame_14ad7dcc7092f167b19606d2e110feda->m_frame.f_lineno = 101;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[23], tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_4 = par_value;
        frame_14ad7dcc7092f167b19606d2e110feda->m_frame.f_lineno = 103;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[32], tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_14ad7dcc7092f167b19606d2e110feda);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_14ad7dcc7092f167b19606d2e110feda);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_14ad7dcc7092f167b19606d2e110feda, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_14ad7dcc7092f167b19606d2e110feda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_14ad7dcc7092f167b19606d2e110feda, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_14ad7dcc7092f167b19606d2e110feda,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_14ad7dcc7092f167b19606d2e110feda == cache_frame_14ad7dcc7092f167b19606d2e110feda) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_14ad7dcc7092f167b19606d2e110feda);
        cache_frame_14ad7dcc7092f167b19606d2e110feda = NULL;
    }

    assertFrameObject(frame_14ad7dcc7092f167b19606d2e110feda);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$json_encoder$$$function__12_write_int(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_f20003c6504271ed146ad049affcc585;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f20003c6504271ed146ad049affcc585 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f20003c6504271ed146ad049affcc585)) {
        Py_XDECREF(cache_frame_f20003c6504271ed146ad049affcc585);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f20003c6504271ed146ad049affcc585 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f20003c6504271ed146ad049affcc585 = MAKE_FUNCTION_FRAME(codeobj_f20003c6504271ed146ad049affcc585, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f20003c6504271ed146ad049affcc585->m_type_description == NULL);
    frame_f20003c6504271ed146ad049affcc585 = cache_frame_f20003c6504271ed146ad049affcc585;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f20003c6504271ed146ad049affcc585);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f20003c6504271ed146ad049affcc585) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[39]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f20003c6504271ed146ad049affcc585->m_frame.f_lineno = 106;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f20003c6504271ed146ad049affcc585->m_frame.f_lineno = 106;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_f20003c6504271ed146ad049affcc585->m_frame.f_lineno = 107;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[32], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f20003c6504271ed146ad049affcc585);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f20003c6504271ed146ad049affcc585);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f20003c6504271ed146ad049affcc585, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f20003c6504271ed146ad049affcc585->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f20003c6504271ed146ad049affcc585, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f20003c6504271ed146ad049affcc585,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_f20003c6504271ed146ad049affcc585 == cache_frame_f20003c6504271ed146ad049affcc585) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f20003c6504271ed146ad049affcc585);
        cache_frame_f20003c6504271ed146ad049affcc585 = NULL;
    }

    assertFrameObject(frame_f20003c6504271ed146ad049affcc585);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$json_encoder$$$function__13_write_long(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_a7bc955ae2590efa43f8784727c7b2d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a7bc955ae2590efa43f8784727c7b2d3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a7bc955ae2590efa43f8784727c7b2d3)) {
        Py_XDECREF(cache_frame_a7bc955ae2590efa43f8784727c7b2d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a7bc955ae2590efa43f8784727c7b2d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a7bc955ae2590efa43f8784727c7b2d3 = MAKE_FUNCTION_FRAME(codeobj_a7bc955ae2590efa43f8784727c7b2d3, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a7bc955ae2590efa43f8784727c7b2d3->m_type_description == NULL);
    frame_a7bc955ae2590efa43f8784727c7b2d3 = cache_frame_a7bc955ae2590efa43f8784727c7b2d3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a7bc955ae2590efa43f8784727c7b2d3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a7bc955ae2590efa43f8784727c7b2d3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[40]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a7bc955ae2590efa43f8784727c7b2d3->m_frame.f_lineno = 110;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a7bc955ae2590efa43f8784727c7b2d3->m_frame.f_lineno = 110;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_a7bc955ae2590efa43f8784727c7b2d3->m_frame.f_lineno = 111;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[32], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7bc955ae2590efa43f8784727c7b2d3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7bc955ae2590efa43f8784727c7b2d3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a7bc955ae2590efa43f8784727c7b2d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a7bc955ae2590efa43f8784727c7b2d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7bc955ae2590efa43f8784727c7b2d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a7bc955ae2590efa43f8784727c7b2d3,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_a7bc955ae2590efa43f8784727c7b2d3 == cache_frame_a7bc955ae2590efa43f8784727c7b2d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a7bc955ae2590efa43f8784727c7b2d3);
        cache_frame_a7bc955ae2590efa43f8784727c7b2d3 = NULL;
    }

    assertFrameObject(frame_a7bc955ae2590efa43f8784727c7b2d3);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$json_encoder$$$function__14_write_float(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_7f9f5bf1a4f9ffc963d0f7611516441d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7f9f5bf1a4f9ffc963d0f7611516441d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f9f5bf1a4f9ffc963d0f7611516441d)) {
        Py_XDECREF(cache_frame_7f9f5bf1a4f9ffc963d0f7611516441d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f9f5bf1a4f9ffc963d0f7611516441d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f9f5bf1a4f9ffc963d0f7611516441d = MAKE_FUNCTION_FRAME(codeobj_7f9f5bf1a4f9ffc963d0f7611516441d, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7f9f5bf1a4f9ffc963d0f7611516441d->m_type_description == NULL);
    frame_7f9f5bf1a4f9ffc963d0f7611516441d = cache_frame_7f9f5bf1a4f9ffc963d0f7611516441d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7f9f5bf1a4f9ffc963d0f7611516441d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7f9f5bf1a4f9ffc963d0f7611516441d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[41]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 114;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7f9f5bf1a4f9ffc963d0f7611516441d->m_frame.f_lineno = 114;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 114;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7f9f5bf1a4f9ffc963d0f7611516441d->m_frame.f_lineno = 114;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_7f9f5bf1a4f9ffc963d0f7611516441d->m_frame.f_lineno = 115;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[32], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f9f5bf1a4f9ffc963d0f7611516441d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f9f5bf1a4f9ffc963d0f7611516441d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f9f5bf1a4f9ffc963d0f7611516441d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f9f5bf1a4f9ffc963d0f7611516441d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f9f5bf1a4f9ffc963d0f7611516441d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f9f5bf1a4f9ffc963d0f7611516441d,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_7f9f5bf1a4f9ffc963d0f7611516441d == cache_frame_7f9f5bf1a4f9ffc963d0f7611516441d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7f9f5bf1a4f9ffc963d0f7611516441d);
        cache_frame_7f9f5bf1a4f9ffc963d0f7611516441d = NULL;
    }

    assertFrameObject(frame_7f9f5bf1a4f9ffc963d0f7611516441d);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$json_encoder$$$function__15_write_double(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_2aafc87fbe183a3f4cf21d689313dd0d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2aafc87fbe183a3f4cf21d689313dd0d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2aafc87fbe183a3f4cf21d689313dd0d)) {
        Py_XDECREF(cache_frame_2aafc87fbe183a3f4cf21d689313dd0d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2aafc87fbe183a3f4cf21d689313dd0d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2aafc87fbe183a3f4cf21d689313dd0d = MAKE_FUNCTION_FRAME(codeobj_2aafc87fbe183a3f4cf21d689313dd0d, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2aafc87fbe183a3f4cf21d689313dd0d->m_type_description == NULL);
    frame_2aafc87fbe183a3f4cf21d689313dd0d = cache_frame_2aafc87fbe183a3f4cf21d689313dd0d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2aafc87fbe183a3f4cf21d689313dd0d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2aafc87fbe183a3f4cf21d689313dd0d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[42]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 118;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2aafc87fbe183a3f4cf21d689313dd0d->m_frame.f_lineno = 118;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 118;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2aafc87fbe183a3f4cf21d689313dd0d->m_frame.f_lineno = 118;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_2aafc87fbe183a3f4cf21d689313dd0d->m_frame.f_lineno = 119;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[32], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2aafc87fbe183a3f4cf21d689313dd0d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2aafc87fbe183a3f4cf21d689313dd0d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2aafc87fbe183a3f4cf21d689313dd0d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2aafc87fbe183a3f4cf21d689313dd0d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2aafc87fbe183a3f4cf21d689313dd0d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2aafc87fbe183a3f4cf21d689313dd0d,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_2aafc87fbe183a3f4cf21d689313dd0d == cache_frame_2aafc87fbe183a3f4cf21d689313dd0d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2aafc87fbe183a3f4cf21d689313dd0d);
        cache_frame_2aafc87fbe183a3f4cf21d689313dd0d = NULL;
    }

    assertFrameObject(frame_2aafc87fbe183a3f4cf21d689313dd0d);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$json_encoder$$$function__16_write_bytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_a2fa86d7da10e4bd1df00154aabe7588;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a2fa86d7da10e4bd1df00154aabe7588 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a2fa86d7da10e4bd1df00154aabe7588)) {
        Py_XDECREF(cache_frame_a2fa86d7da10e4bd1df00154aabe7588);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a2fa86d7da10e4bd1df00154aabe7588 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a2fa86d7da10e4bd1df00154aabe7588 = MAKE_FUNCTION_FRAME(codeobj_a2fa86d7da10e4bd1df00154aabe7588, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a2fa86d7da10e4bd1df00154aabe7588->m_type_description == NULL);
    frame_a2fa86d7da10e4bd1df00154aabe7588 = cache_frame_a2fa86d7da10e4bd1df00154aabe7588;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a2fa86d7da10e4bd1df00154aabe7588);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a2fa86d7da10e4bd1df00154aabe7588) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[43]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a2fa86d7da10e4bd1df00154aabe7588->m_frame.f_lineno = 122;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a2fa86d7da10e4bd1df00154aabe7588->m_frame.f_lineno = 122;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[32]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[44]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_tuple_element_1 = par_value;
        tmp_args_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[45]);
        frame_a2fa86d7da10e4bd1df00154aabe7588->m_frame.f_lineno = 123;
        tmp_args_element_value_2 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a2fa86d7da10e4bd1df00154aabe7588->m_frame.f_lineno = 123;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a2fa86d7da10e4bd1df00154aabe7588);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a2fa86d7da10e4bd1df00154aabe7588);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a2fa86d7da10e4bd1df00154aabe7588, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a2fa86d7da10e4bd1df00154aabe7588->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a2fa86d7da10e4bd1df00154aabe7588, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a2fa86d7da10e4bd1df00154aabe7588,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_a2fa86d7da10e4bd1df00154aabe7588 == cache_frame_a2fa86d7da10e4bd1df00154aabe7588) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a2fa86d7da10e4bd1df00154aabe7588);
        cache_frame_a2fa86d7da10e4bd1df00154aabe7588 = NULL;
    }

    assertFrameObject(frame_a2fa86d7da10e4bd1df00154aabe7588);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$json_encoder$$$function__17_write_enum(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    PyObject *var_enum_labels = NULL;
    struct Nuitka_FrameObject *frame_83f3ef9ab53044b259cbe477e428ce6e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_83f3ef9ab53044b259cbe477e428ce6e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_83f3ef9ab53044b259cbe477e428ce6e)) {
        Py_XDECREF(cache_frame_83f3ef9ab53044b259cbe477e428ce6e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_83f3ef9ab53044b259cbe477e428ce6e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_83f3ef9ab53044b259cbe477e428ce6e = MAKE_FUNCTION_FRAME(codeobj_83f3ef9ab53044b259cbe477e428ce6e, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_83f3ef9ab53044b259cbe477e428ce6e->m_type_description == NULL);
    frame_83f3ef9ab53044b259cbe477e428ce6e = cache_frame_83f3ef9ab53044b259cbe477e428ce6e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_83f3ef9ab53044b259cbe477e428ce6e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_83f3ef9ab53044b259cbe477e428ce6e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[46]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_83f3ef9ab53044b259cbe477e428ce6e->m_frame.f_lineno = 126;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_83f3ef9ab53044b259cbe477e428ce6e->m_frame.f_lineno = 126;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[15]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_83f3ef9ab53044b259cbe477e428ce6e->m_frame.f_lineno = 127;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[47]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_enum_labels == NULL);
        var_enum_labels = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[32]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_enum_labels);
        tmp_expression_value_6 = var_enum_labels;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[48]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_subscript_value_1 = par_index;
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_83f3ef9ab53044b259cbe477e428ce6e->m_frame.f_lineno = 129;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_83f3ef9ab53044b259cbe477e428ce6e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_83f3ef9ab53044b259cbe477e428ce6e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_83f3ef9ab53044b259cbe477e428ce6e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83f3ef9ab53044b259cbe477e428ce6e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83f3ef9ab53044b259cbe477e428ce6e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_83f3ef9ab53044b259cbe477e428ce6e,
        type_description_1,
        par_self,
        par_index,
        var_enum_labels
    );


    // Release cached frame if used for exception.
    if (frame_83f3ef9ab53044b259cbe477e428ce6e == cache_frame_83f3ef9ab53044b259cbe477e428ce6e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_83f3ef9ab53044b259cbe477e428ce6e);
        cache_frame_83f3ef9ab53044b259cbe477e428ce6e = NULL;
    }

    assertFrameObject(frame_83f3ef9ab53044b259cbe477e428ce6e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_enum_labels);
    Py_DECREF(var_enum_labels);
    var_enum_labels = NULL;
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

    Py_XDECREF(var_enum_labels);
    var_enum_labels = NULL;
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


static PyObject *impl_fastavro$io$json_encoder$$$function__18_write_fixed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_ee2fd69a7488d64c8e962fd915be2485;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ee2fd69a7488d64c8e962fd915be2485 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ee2fd69a7488d64c8e962fd915be2485)) {
        Py_XDECREF(cache_frame_ee2fd69a7488d64c8e962fd915be2485);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee2fd69a7488d64c8e962fd915be2485 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee2fd69a7488d64c8e962fd915be2485 = MAKE_FUNCTION_FRAME(codeobj_ee2fd69a7488d64c8e962fd915be2485, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ee2fd69a7488d64c8e962fd915be2485->m_type_description == NULL);
    frame_ee2fd69a7488d64c8e962fd915be2485 = cache_frame_ee2fd69a7488d64c8e962fd915be2485;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ee2fd69a7488d64c8e962fd915be2485);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ee2fd69a7488d64c8e962fd915be2485) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[49]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ee2fd69a7488d64c8e962fd915be2485->m_frame.f_lineno = 132;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ee2fd69a7488d64c8e962fd915be2485->m_frame.f_lineno = 132;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[32]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[44]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_tuple_element_1 = par_value;
        tmp_args_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[45]);
        frame_ee2fd69a7488d64c8e962fd915be2485->m_frame.f_lineno = 133;
        tmp_args_element_value_2 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ee2fd69a7488d64c8e962fd915be2485->m_frame.f_lineno = 133;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee2fd69a7488d64c8e962fd915be2485);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee2fd69a7488d64c8e962fd915be2485);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ee2fd69a7488d64c8e962fd915be2485, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee2fd69a7488d64c8e962fd915be2485->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee2fd69a7488d64c8e962fd915be2485, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee2fd69a7488d64c8e962fd915be2485,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_ee2fd69a7488d64c8e962fd915be2485 == cache_frame_ee2fd69a7488d64c8e962fd915be2485) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ee2fd69a7488d64c8e962fd915be2485);
        cache_frame_ee2fd69a7488d64c8e962fd915be2485 = NULL;
    }

    assertFrameObject(frame_ee2fd69a7488d64c8e962fd915be2485);

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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$json_encoder$$$function__19_write_array_start(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bd4518400d631447ccff57cac74ae0f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_bd4518400d631447ccff57cac74ae0f4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bd4518400d631447ccff57cac74ae0f4)) {
        Py_XDECREF(cache_frame_bd4518400d631447ccff57cac74ae0f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bd4518400d631447ccff57cac74ae0f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bd4518400d631447ccff57cac74ae0f4 = MAKE_FUNCTION_FRAME(codeobj_bd4518400d631447ccff57cac74ae0f4, module_fastavro$io$json_encoder, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bd4518400d631447ccff57cac74ae0f4->m_type_description == NULL);
    frame_bd4518400d631447ccff57cac74ae0f4 = cache_frame_bd4518400d631447ccff57cac74ae0f4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bd4518400d631447ccff57cac74ae0f4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bd4518400d631447ccff57cac74ae0f4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[50]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_bd4518400d631447ccff57cac74ae0f4->m_frame.f_lineno = 136;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_bd4518400d631447ccff57cac74ae0f4->m_frame.f_lineno = 136;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_bd4518400d631447ccff57cac74ae0f4->m_frame.f_lineno = 137;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[51]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd4518400d631447ccff57cac74ae0f4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd4518400d631447ccff57cac74ae0f4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bd4518400d631447ccff57cac74ae0f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bd4518400d631447ccff57cac74ae0f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd4518400d631447ccff57cac74ae0f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bd4518400d631447ccff57cac74ae0f4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_bd4518400d631447ccff57cac74ae0f4 == cache_frame_bd4518400d631447ccff57cac74ae0f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bd4518400d631447ccff57cac74ae0f4);
        cache_frame_bd4518400d631447ccff57cac74ae0f4 = NULL;
    }

    assertFrameObject(frame_bd4518400d631447ccff57cac74ae0f4);

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


static PyObject *impl_fastavro$io$json_encoder$$$function__21_end_item(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8d4f958475b7bb792549068c7e62ad11;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8d4f958475b7bb792549068c7e62ad11 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8d4f958475b7bb792549068c7e62ad11)) {
        Py_XDECREF(cache_frame_8d4f958475b7bb792549068c7e62ad11);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8d4f958475b7bb792549068c7e62ad11 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8d4f958475b7bb792549068c7e62ad11 = MAKE_FUNCTION_FRAME(codeobj_8d4f958475b7bb792549068c7e62ad11, module_fastavro$io$json_encoder, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8d4f958475b7bb792549068c7e62ad11->m_type_description == NULL);
    frame_8d4f958475b7bb792549068c7e62ad11 = cache_frame_8d4f958475b7bb792549068c7e62ad11;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8d4f958475b7bb792549068c7e62ad11);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8d4f958475b7bb792549068c7e62ad11) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[52]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_8d4f958475b7bb792549068c7e62ad11->m_frame.f_lineno = 144;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_8d4f958475b7bb792549068c7e62ad11->m_frame.f_lineno = 144;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8d4f958475b7bb792549068c7e62ad11);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8d4f958475b7bb792549068c7e62ad11);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8d4f958475b7bb792549068c7e62ad11, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8d4f958475b7bb792549068c7e62ad11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8d4f958475b7bb792549068c7e62ad11, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8d4f958475b7bb792549068c7e62ad11,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8d4f958475b7bb792549068c7e62ad11 == cache_frame_8d4f958475b7bb792549068c7e62ad11) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8d4f958475b7bb792549068c7e62ad11);
        cache_frame_8d4f958475b7bb792549068c7e62ad11 = NULL;
    }

    assertFrameObject(frame_8d4f958475b7bb792549068c7e62ad11);

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


static PyObject *impl_fastavro$io$json_encoder$$$function__22_write_array_end(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_21a28456739ded0ad97994699fede4a4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_21a28456739ded0ad97994699fede4a4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_21a28456739ded0ad97994699fede4a4)) {
        Py_XDECREF(cache_frame_21a28456739ded0ad97994699fede4a4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21a28456739ded0ad97994699fede4a4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21a28456739ded0ad97994699fede4a4 = MAKE_FUNCTION_FRAME(codeobj_21a28456739ded0ad97994699fede4a4, module_fastavro$io$json_encoder, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_21a28456739ded0ad97994699fede4a4->m_type_description == NULL);
    frame_21a28456739ded0ad97994699fede4a4 = cache_frame_21a28456739ded0ad97994699fede4a4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_21a28456739ded0ad97994699fede4a4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_21a28456739ded0ad97994699fede4a4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[53]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 147;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_21a28456739ded0ad97994699fede4a4->m_frame.f_lineno = 147;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 147;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_21a28456739ded0ad97994699fede4a4->m_frame.f_lineno = 147;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_21a28456739ded0ad97994699fede4a4->m_frame.f_lineno = 148;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[54]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_21a28456739ded0ad97994699fede4a4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_21a28456739ded0ad97994699fede4a4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_21a28456739ded0ad97994699fede4a4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21a28456739ded0ad97994699fede4a4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21a28456739ded0ad97994699fede4a4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21a28456739ded0ad97994699fede4a4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_21a28456739ded0ad97994699fede4a4 == cache_frame_21a28456739ded0ad97994699fede4a4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_21a28456739ded0ad97994699fede4a4);
        cache_frame_21a28456739ded0ad97994699fede4a4 = NULL;
    }

    assertFrameObject(frame_21a28456739ded0ad97994699fede4a4);

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


static PyObject *impl_fastavro$io$json_encoder$$$function__23_write_object_start(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6c70001675eceff340644e7110cafb05;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6c70001675eceff340644e7110cafb05 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6c70001675eceff340644e7110cafb05)) {
        Py_XDECREF(cache_frame_6c70001675eceff340644e7110cafb05);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c70001675eceff340644e7110cafb05 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c70001675eceff340644e7110cafb05 = MAKE_FUNCTION_FRAME(codeobj_6c70001675eceff340644e7110cafb05, module_fastavro$io$json_encoder, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6c70001675eceff340644e7110cafb05->m_type_description == NULL);
    frame_6c70001675eceff340644e7110cafb05 = cache_frame_6c70001675eceff340644e7110cafb05;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6c70001675eceff340644e7110cafb05);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6c70001675eceff340644e7110cafb05) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_6c70001675eceff340644e7110cafb05->m_frame.f_lineno = 151;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[51]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = PyDict_New();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6c70001675eceff340644e7110cafb05);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6c70001675eceff340644e7110cafb05);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6c70001675eceff340644e7110cafb05, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c70001675eceff340644e7110cafb05->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c70001675eceff340644e7110cafb05, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c70001675eceff340644e7110cafb05,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6c70001675eceff340644e7110cafb05 == cache_frame_6c70001675eceff340644e7110cafb05) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6c70001675eceff340644e7110cafb05);
        cache_frame_6c70001675eceff340644e7110cafb05 = NULL;
    }

    assertFrameObject(frame_6c70001675eceff340644e7110cafb05);

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


static PyObject *impl_fastavro$io$json_encoder$$$function__24_write_object_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    struct Nuitka_FrameObject *frame_d9047f3a9edd985d63803f47705e42cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d9047f3a9edd985d63803f47705e42cc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d9047f3a9edd985d63803f47705e42cc)) {
        Py_XDECREF(cache_frame_d9047f3a9edd985d63803f47705e42cc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d9047f3a9edd985d63803f47705e42cc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d9047f3a9edd985d63803f47705e42cc = MAKE_FUNCTION_FRAME(codeobj_d9047f3a9edd985d63803f47705e42cc, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d9047f3a9edd985d63803f47705e42cc->m_type_description == NULL);
    frame_d9047f3a9edd985d63803f47705e42cc = cache_frame_d9047f3a9edd985d63803f47705e42cc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d9047f3a9edd985d63803f47705e42cc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d9047f3a9edd985d63803f47705e42cc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_key);
        tmp_assattr_value_1 = par_key;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d9047f3a9edd985d63803f47705e42cc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d9047f3a9edd985d63803f47705e42cc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d9047f3a9edd985d63803f47705e42cc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d9047f3a9edd985d63803f47705e42cc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9047f3a9edd985d63803f47705e42cc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d9047f3a9edd985d63803f47705e42cc,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame if used for exception.
    if (frame_d9047f3a9edd985d63803f47705e42cc == cache_frame_d9047f3a9edd985d63803f47705e42cc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d9047f3a9edd985d63803f47705e42cc);
        cache_frame_d9047f3a9edd985d63803f47705e42cc = NULL;
    }

    assertFrameObject(frame_d9047f3a9edd985d63803f47705e42cc);

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_fastavro$io$json_encoder$$$function__25_write_object_end(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_fc12b826a44e1052b5f0dd9995035f77;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fc12b826a44e1052b5f0dd9995035f77 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fc12b826a44e1052b5f0dd9995035f77)) {
        Py_XDECREF(cache_frame_fc12b826a44e1052b5f0dd9995035f77);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc12b826a44e1052b5f0dd9995035f77 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc12b826a44e1052b5f0dd9995035f77 = MAKE_FUNCTION_FRAME(codeobj_fc12b826a44e1052b5f0dd9995035f77, module_fastavro$io$json_encoder, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_fc12b826a44e1052b5f0dd9995035f77->m_type_description == NULL);
    frame_fc12b826a44e1052b5f0dd9995035f77 = cache_frame_fc12b826a44e1052b5f0dd9995035f77;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fc12b826a44e1052b5f0dd9995035f77);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fc12b826a44e1052b5f0dd9995035f77) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_fc12b826a44e1052b5f0dd9995035f77->m_frame.f_lineno = 158;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[54]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fc12b826a44e1052b5f0dd9995035f77);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fc12b826a44e1052b5f0dd9995035f77);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fc12b826a44e1052b5f0dd9995035f77, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc12b826a44e1052b5f0dd9995035f77->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc12b826a44e1052b5f0dd9995035f77, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc12b826a44e1052b5f0dd9995035f77,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_fc12b826a44e1052b5f0dd9995035f77 == cache_frame_fc12b826a44e1052b5f0dd9995035f77) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_fc12b826a44e1052b5f0dd9995035f77);
        cache_frame_fc12b826a44e1052b5f0dd9995035f77 = NULL;
    }

    assertFrameObject(frame_fc12b826a44e1052b5f0dd9995035f77);

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


static PyObject *impl_fastavro$io$json_encoder$$$function__26_write_map_start(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6c606533ed6ea1ff6e578022a2277191;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6c606533ed6ea1ff6e578022a2277191 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6c606533ed6ea1ff6e578022a2277191)) {
        Py_XDECREF(cache_frame_6c606533ed6ea1ff6e578022a2277191);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c606533ed6ea1ff6e578022a2277191 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c606533ed6ea1ff6e578022a2277191 = MAKE_FUNCTION_FRAME(codeobj_6c606533ed6ea1ff6e578022a2277191, module_fastavro$io$json_encoder, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6c606533ed6ea1ff6e578022a2277191->m_type_description == NULL);
    frame_6c606533ed6ea1ff6e578022a2277191 = cache_frame_6c606533ed6ea1ff6e578022a2277191;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6c606533ed6ea1ff6e578022a2277191);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6c606533ed6ea1ff6e578022a2277191) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[55]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 161;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6c606533ed6ea1ff6e578022a2277191->m_frame.f_lineno = 161;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 161;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6c606533ed6ea1ff6e578022a2277191->m_frame.f_lineno = 161;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_6c606533ed6ea1ff6e578022a2277191->m_frame.f_lineno = 162;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[18]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6c606533ed6ea1ff6e578022a2277191);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6c606533ed6ea1ff6e578022a2277191);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6c606533ed6ea1ff6e578022a2277191, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c606533ed6ea1ff6e578022a2277191->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c606533ed6ea1ff6e578022a2277191, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c606533ed6ea1ff6e578022a2277191,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6c606533ed6ea1ff6e578022a2277191 == cache_frame_6c606533ed6ea1ff6e578022a2277191) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6c606533ed6ea1ff6e578022a2277191);
        cache_frame_6c606533ed6ea1ff6e578022a2277191 = NULL;
    }

    assertFrameObject(frame_6c606533ed6ea1ff6e578022a2277191);

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


static PyObject *impl_fastavro$io$json_encoder$$$function__27_write_map_end(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2af365af6d582da55cc3b7ac45edb4e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2af365af6d582da55cc3b7ac45edb4e6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2af365af6d582da55cc3b7ac45edb4e6)) {
        Py_XDECREF(cache_frame_2af365af6d582da55cc3b7ac45edb4e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2af365af6d582da55cc3b7ac45edb4e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2af365af6d582da55cc3b7ac45edb4e6 = MAKE_FUNCTION_FRAME(codeobj_2af365af6d582da55cc3b7ac45edb4e6, module_fastavro$io$json_encoder, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2af365af6d582da55cc3b7ac45edb4e6->m_type_description == NULL);
    frame_2af365af6d582da55cc3b7ac45edb4e6 = cache_frame_2af365af6d582da55cc3b7ac45edb4e6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2af365af6d582da55cc3b7ac45edb4e6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2af365af6d582da55cc3b7ac45edb4e6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[56]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2af365af6d582da55cc3b7ac45edb4e6->m_frame.f_lineno = 165;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2af365af6d582da55cc3b7ac45edb4e6->m_frame.f_lineno = 165;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_2af365af6d582da55cc3b7ac45edb4e6->m_frame.f_lineno = 166;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[21]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2af365af6d582da55cc3b7ac45edb4e6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2af365af6d582da55cc3b7ac45edb4e6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2af365af6d582da55cc3b7ac45edb4e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2af365af6d582da55cc3b7ac45edb4e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2af365af6d582da55cc3b7ac45edb4e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2af365af6d582da55cc3b7ac45edb4e6,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2af365af6d582da55cc3b7ac45edb4e6 == cache_frame_2af365af6d582da55cc3b7ac45edb4e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2af365af6d582da55cc3b7ac45edb4e6);
        cache_frame_2af365af6d582da55cc3b7ac45edb4e6 = NULL;
    }

    assertFrameObject(frame_2af365af6d582da55cc3b7ac45edb4e6);

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


static PyObject *impl_fastavro$io$json_encoder$$$function__28_write_index(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    PyObject *par_schema = python_pars[2];
    PyObject *var_alternative_symbol = NULL;
    PyObject *var_symbol = NULL;
    struct Nuitka_FrameObject *frame_c75940837533692f0dc26497e4c10638;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c75940837533692f0dc26497e4c10638 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c75940837533692f0dc26497e4c10638)) {
        Py_XDECREF(cache_frame_c75940837533692f0dc26497e4c10638);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c75940837533692f0dc26497e4c10638 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c75940837533692f0dc26497e4c10638 = MAKE_FUNCTION_FRAME(codeobj_c75940837533692f0dc26497e4c10638, module_fastavro$io$json_encoder, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c75940837533692f0dc26497e4c10638->m_type_description == NULL);
    frame_c75940837533692f0dc26497e4c10638 = cache_frame_c75940837533692f0dc26497e4c10638;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c75940837533692f0dc26497e4c10638);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c75940837533692f0dc26497e4c10638) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[57]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_c75940837533692f0dc26497e4c10638->m_frame.f_lineno = 169;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_c75940837533692f0dc26497e4c10638->m_frame.f_lineno = 169;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[15]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_c75940837533692f0dc26497e4c10638->m_frame.f_lineno = 170;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[47]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_alternative_symbol == NULL);
        var_alternative_symbol = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_alternative_symbol);
        tmp_called_instance_2 = var_alternative_symbol;
        CHECK_OBJECT(par_index);
        tmp_args_element_value_2 = par_index;
        frame_c75940837533692f0dc26497e4c10638->m_frame.f_lineno = 172;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[58], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_symbol == NULL);
        var_symbol = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_3;
        CHECK_OBJECT(var_symbol);
        tmp_cmp_expr_left_1 = var_symbol;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[31]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_c75940837533692f0dc26497e4c10638->m_frame.f_lineno = 174;
        tmp_cmp_expr_right_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooo";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_c75940837533692f0dc26497e4c10638->m_frame.f_lineno = 175;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[18]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[23]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_alternative_symbol);
        tmp_called_instance_4 = var_alternative_symbol;
        CHECK_OBJECT(par_index);
        tmp_args_element_value_4 = par_index;
        frame_c75940837533692f0dc26497e4c10638->m_frame.f_lineno = 176;
        tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[59], tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 176;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_c75940837533692f0dc26497e4c10638->m_frame.f_lineno = 176;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[15]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[60]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK_IN_FUNCTION(mod_consts[20]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 178;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_c75940837533692f0dc26497e4c10638->m_frame.f_lineno = 178;
        tmp_args_element_value_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 178;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_c75940837533692f0dc26497e4c10638->m_frame.f_lineno = 178;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[15]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_symbol);
        tmp_args_element_value_6 = var_symbol;
        frame_c75940837533692f0dc26497e4c10638->m_frame.f_lineno = 180;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[60], tmp_args_element_value_6);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c75940837533692f0dc26497e4c10638);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c75940837533692f0dc26497e4c10638);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c75940837533692f0dc26497e4c10638, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c75940837533692f0dc26497e4c10638->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c75940837533692f0dc26497e4c10638, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c75940837533692f0dc26497e4c10638,
        type_description_1,
        par_self,
        par_index,
        par_schema,
        var_alternative_symbol,
        var_symbol
    );


    // Release cached frame if used for exception.
    if (frame_c75940837533692f0dc26497e4c10638 == cache_frame_c75940837533692f0dc26497e4c10638) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c75940837533692f0dc26497e4c10638);
        cache_frame_c75940837533692f0dc26497e4c10638 = NULL;
    }

    assertFrameObject(frame_c75940837533692f0dc26497e4c10638);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_alternative_symbol);
    Py_DECREF(var_alternative_symbol);
    var_alternative_symbol = NULL;
    CHECK_OBJECT(var_symbol);
    Py_DECREF(var_symbol);
    var_symbol = NULL;
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

    Py_XDECREF(var_alternative_symbol);
    var_alternative_symbol = NULL;
    Py_XDECREF(var_symbol);
    var_symbol = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_schema);
    Py_DECREF(par_schema);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__10_write_boolean() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__10_write_boolean,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d2432e24e9e827563d1494ba293520cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__11_write_utf8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__11_write_utf8,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_14ad7dcc7092f167b19606d2e110feda,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__12_write_int() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__12_write_int,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f20003c6504271ed146ad049affcc585,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__13_write_long() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__13_write_long,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a7bc955ae2590efa43f8784727c7b2d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__14_write_float() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__14_write_float,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7f9f5bf1a4f9ffc963d0f7611516441d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__15_write_double() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__15_write_double,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2aafc87fbe183a3f4cf21d689313dd0d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__16_write_bytes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__16_write_bytes,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a2fa86d7da10e4bd1df00154aabe7588,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__17_write_enum() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__17_write_enum,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_83f3ef9ab53044b259cbe477e428ce6e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__18_write_fixed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__18_write_fixed,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ee2fd69a7488d64c8e962fd915be2485,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__19_write_array_start() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__19_write_array_start,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bd4518400d631447ccff57cac74ae0f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__1___init__,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4652130ed88093aa69e8746d52c270dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__20_write_item_count() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4d758b1355d3ef9c9138cb0fde9515d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__21_end_item() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__21_end_item,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8d4f958475b7bb792549068c7e62ad11,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__22_write_array_end() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__22_write_array_end,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_21a28456739ded0ad97994699fede4a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__23_write_object_start() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__23_write_object_start,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6c70001675eceff340644e7110cafb05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__24_write_object_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__24_write_object_key,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d9047f3a9edd985d63803f47705e42cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__25_write_object_end() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__25_write_object_end,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fc12b826a44e1052b5f0dd9995035f77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__26_write_map_start() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__26_write_map_start,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6c606533ed6ea1ff6e578022a2277191,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__27_write_map_end() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__27_write_map_end,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2af365af6d582da55cc3b7ac45edb4e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__28_write_index() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__28_write_index,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c75940837533692f0dc26497e4c10638,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__2_write_value() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__2_write_value,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0a4f03aa937861321d84ae074d0406d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__3__push() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__3__push,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ac8679ace318c59b20380485d7f500a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__4__pop() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__4__pop,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d4613c2f23086ed48de6ba5654416686,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__5_write_buffer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__5_write_buffer,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_34f15d891abd4dc621a7efeed9c96ad7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__6_configure() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__6_configure,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1c06d34bc597a11f6f80bbca8090ade3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__7_flush() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__7_flush,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8c7d714047fa9c75e8c72d52dc20c5ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__8_do_action() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__8_do_action,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6b4e66ccee7da745d7eec3654bb71653,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_fastavro$io$json_encoder$$$function__9_write_null() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fastavro$io$json_encoder$$$function__9_write_null,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eaa3faafeb8dcdb52a0693b8f1f6d21b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fastavro$io$json_encoder,
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

function_impl_code functable_fastavro$io$json_encoder[] = {
    impl_fastavro$io$json_encoder$$$function__1___init__,
    impl_fastavro$io$json_encoder$$$function__2_write_value,
    impl_fastavro$io$json_encoder$$$function__3__push,
    impl_fastavro$io$json_encoder$$$function__4__pop,
    impl_fastavro$io$json_encoder$$$function__5_write_buffer,
    impl_fastavro$io$json_encoder$$$function__6_configure,
    impl_fastavro$io$json_encoder$$$function__7_flush,
    impl_fastavro$io$json_encoder$$$function__8_do_action,
    impl_fastavro$io$json_encoder$$$function__9_write_null,
    impl_fastavro$io$json_encoder$$$function__10_write_boolean,
    impl_fastavro$io$json_encoder$$$function__11_write_utf8,
    impl_fastavro$io$json_encoder$$$function__12_write_int,
    impl_fastavro$io$json_encoder$$$function__13_write_long,
    impl_fastavro$io$json_encoder$$$function__14_write_float,
    impl_fastavro$io$json_encoder$$$function__15_write_double,
    impl_fastavro$io$json_encoder$$$function__16_write_bytes,
    impl_fastavro$io$json_encoder$$$function__17_write_enum,
    impl_fastavro$io$json_encoder$$$function__18_write_fixed,
    impl_fastavro$io$json_encoder$$$function__19_write_array_start,
    NULL,
    impl_fastavro$io$json_encoder$$$function__21_end_item,
    impl_fastavro$io$json_encoder$$$function__22_write_array_end,
    impl_fastavro$io$json_encoder$$$function__23_write_object_start,
    impl_fastavro$io$json_encoder$$$function__24_write_object_key,
    impl_fastavro$io$json_encoder$$$function__25_write_object_end,
    impl_fastavro$io$json_encoder$$$function__26_write_map_start,
    impl_fastavro$io$json_encoder$$$function__27_write_map_end,
    impl_fastavro$io$json_encoder$$$function__28_write_index,
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

    function_impl_code *current = functable_fastavro$io$json_encoder;
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

    if (offset > sizeof(functable_fastavro$io$json_encoder) || offset < 0) {
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
        functable_fastavro$io$json_encoder[offset],
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
        module_fastavro$io$json_encoder,
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
PyObject *modulecode_fastavro$io$json_encoder(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("fastavro.io.json_encoder");

    // Store the module for future use.
    module_fastavro$io$json_encoder = module;

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
        PRINT_STRING("fastavro.io.json_encoder: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("fastavro.io.json_encoder: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("fastavro.io.json_encoder: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initfastavro$io$json_encoder\n");

    moduledict_fastavro$io$json_encoder = MODULE_DICT(module_fastavro$io$json_encoder);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_fastavro$io$json_encoder,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_fastavro$io$json_encoder,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[109]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_fastavro$io$json_encoder,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_fastavro$io$json_encoder,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_fastavro$io$json_encoder,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_fastavro$io$json_encoder);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_fastavro$io$json_encoder);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key___init__ = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key__pop = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key__push = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_configure = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_do_action = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_end_item = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_flush = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_array_end = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_array_start = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_boolean = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_buffer = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_bytes = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_double = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_enum = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_fixed = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_float = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_index = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_int = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_item_count = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_long = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_map_end = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_map_start = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_null = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_end = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_key = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_start = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_utf8 = NULL;
    PyObject *tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_value = NULL;
    struct Nuitka_FrameObject *frame_ca410d9d8bacfa88232f4d0e70670601;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_ca410d9d8bacfa88232f4d0e70670601 = MAKE_MODULE_FRAME(codeobj_ca410d9d8bacfa88232f4d0e70670601, module_fastavro$io$json_encoder);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_ca410d9d8bacfa88232f4d0e70670601);
    assert(Py_REFCNT(frame_ca410d9d8bacfa88232f4d0e70670601) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        tmp_name_value_1 = mod_consts[10];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_fastavro$io$json_encoder;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        frame_ca410d9d8bacfa88232f4d0e70670601->m_frame.f_lineno = 1;
        tmp_assign_source_3 = IMPORT_MODULE4(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[64];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_fastavro$io$json_encoder;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[65];
        tmp_level_value_2 = mod_consts[66];
        frame_ca410d9d8bacfa88232f4d0e70670601->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[13]);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[67];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_fastavro$io$json_encoder;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[68];
        tmp_level_value_3 = mod_consts[66];
        frame_ca410d9d8bacfa88232f4d0e70670601->m_frame.f_lineno = 4;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[26]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[34]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[39]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[17]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[19]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[22]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[25]);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[31]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[35]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[57]);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_12 = tmp_import_from_1__module;
        tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[20]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_13 = tmp_import_from_1__module;
        tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[40]);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_14 = tmp_import_from_1__module;
        tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[41]);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_15 = tmp_import_from_1__module;
        tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[42]);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_16 = tmp_import_from_1__module;
        tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[43]);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_17 = tmp_import_from_1__module;
        tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[55]);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_18 = tmp_import_from_1__module;
        tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[56]);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_19 = tmp_import_from_1__module;
        tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[38]);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_20 = tmp_import_from_1__module;
        tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[46]);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_21 = tmp_import_from_1__module;
        tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[49]);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_22 = tmp_import_from_1__module;
        tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[50]);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_23 = tmp_import_from_1__module;
        tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[53]);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_24 = tmp_import_from_1__module;
        tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[52]);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_28);
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
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[69];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_fastavro$io$json_encoder;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[70];
        tmp_level_value_4 = mod_consts[71];
        frame_ca410d9d8bacfa88232f4d0e70670601->m_frame.f_lineno = 9;
        tmp_import_name_from_25 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[44]);
        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_assign_source_31;


            tmp_assign_source_31 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__1___init__();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key___init__ == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key___init__ = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;


            tmp_assign_source_32 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__2_write_value();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_value == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_value = tmp_assign_source_32;
        }
        {
            PyObject *tmp_assign_source_33;


            tmp_assign_source_33 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__3__push();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key__push == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key__push = tmp_assign_source_33;
        }
        {
            PyObject *tmp_assign_source_34;


            tmp_assign_source_34 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__4__pop();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key__pop == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key__pop = tmp_assign_source_34;
        }
        {
            PyObject *tmp_assign_source_35;


            tmp_assign_source_35 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__5_write_buffer();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_buffer == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_buffer = tmp_assign_source_35;
        }
        {
            PyObject *tmp_assign_source_36;


            tmp_assign_source_36 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__6_configure();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_configure == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_configure = tmp_assign_source_36;
        }
        {
            PyObject *tmp_assign_source_37;


            tmp_assign_source_37 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__7_flush();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_flush == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_flush = tmp_assign_source_37;
        }
        {
            PyObject *tmp_assign_source_38;


            tmp_assign_source_38 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__8_do_action();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_do_action == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_do_action = tmp_assign_source_38;
        }
        {
            PyObject *tmp_assign_source_39;


            tmp_assign_source_39 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__9_write_null();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_null == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_null = tmp_assign_source_39;
        }
        {
            PyObject *tmp_assign_source_40;


            tmp_assign_source_40 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__10_write_boolean();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_boolean == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_boolean = tmp_assign_source_40;
        }
        {
            PyObject *tmp_assign_source_41;


            tmp_assign_source_41 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__11_write_utf8();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_utf8 == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_utf8 = tmp_assign_source_41;
        }
        {
            PyObject *tmp_assign_source_42;


            tmp_assign_source_42 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__12_write_int();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_int == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_int = tmp_assign_source_42;
        }
        {
            PyObject *tmp_assign_source_43;


            tmp_assign_source_43 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__13_write_long();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_long == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_long = tmp_assign_source_43;
        }
        {
            PyObject *tmp_assign_source_44;


            tmp_assign_source_44 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__14_write_float();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_float == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_float = tmp_assign_source_44;
        }
        {
            PyObject *tmp_assign_source_45;


            tmp_assign_source_45 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__15_write_double();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_double == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_double = tmp_assign_source_45;
        }
        {
            PyObject *tmp_assign_source_46;


            tmp_assign_source_46 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__16_write_bytes();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_bytes == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_bytes = tmp_assign_source_46;
        }
        {
            PyObject *tmp_assign_source_47;


            tmp_assign_source_47 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__17_write_enum();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_enum == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_enum = tmp_assign_source_47;
        }
        {
            PyObject *tmp_assign_source_48;


            tmp_assign_source_48 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__18_write_fixed();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_fixed == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_fixed = tmp_assign_source_48;
        }
        {
            PyObject *tmp_assign_source_49;


            tmp_assign_source_49 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__19_write_array_start();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_array_start == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_array_start = tmp_assign_source_49;
        }
        {
            PyObject *tmp_assign_source_50;


            tmp_assign_source_50 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__20_write_item_count();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_item_count == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_item_count = tmp_assign_source_50;
        }
        {
            PyObject *tmp_assign_source_51;


            tmp_assign_source_51 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__21_end_item();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_end_item == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_end_item = tmp_assign_source_51;
        }
        {
            PyObject *tmp_assign_source_52;


            tmp_assign_source_52 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__22_write_array_end();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_array_end == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_array_end = tmp_assign_source_52;
        }
        {
            PyObject *tmp_assign_source_53;


            tmp_assign_source_53 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__23_write_object_start();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_start == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_start = tmp_assign_source_53;
        }
        {
            PyObject *tmp_assign_source_54;


            tmp_assign_source_54 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__24_write_object_key();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_key == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_key = tmp_assign_source_54;
        }
        {
            PyObject *tmp_assign_source_55;


            tmp_assign_source_55 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__25_write_object_end();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_end == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_end = tmp_assign_source_55;
        }
        {
            PyObject *tmp_assign_source_56;


            tmp_assign_source_56 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__26_write_map_start();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_map_start == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_map_start = tmp_assign_source_56;
        }
        {
            PyObject *tmp_assign_source_57;


            tmp_assign_source_57 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__27_write_map_end();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_map_end == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_map_end = tmp_assign_source_57;
        }
        {
            PyObject *tmp_assign_source_58;


            tmp_assign_source_58 = MAKE_FUNCTION_fastavro$io$json_encoder$$$function__28_write_index();

            assert(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_index == NULL);
            tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_index = tmp_assign_source_58;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_dict_value_1 = mod_consts[91];
            tmp_dict_key_1 = mod_consts[92];
            tmp_assign_source_30 = _PyDict_NewPresized( 30 );
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_value_1 = mod_consts[93];
            tmp_dict_key_1 = mod_consts[61];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key___init__);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key___init__;
            tmp_dict_key_1 = mod_consts[72];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_value);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_value;
            tmp_dict_key_1 = mod_consts[32];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key__push);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key__push;
            tmp_dict_key_1 = mod_consts[51];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key__pop);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key__pop;
            tmp_dict_key_1 = mod_consts[54];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_buffer);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_buffer;
            tmp_dict_key_1 = mod_consts[27];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_configure);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_configure;
            tmp_dict_key_1 = mod_consts[73];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_flush);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_flush;
            tmp_dict_key_1 = mod_consts[16];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_do_action);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_do_action;
            tmp_dict_key_1 = mod_consts[14];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_null);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_null;
            tmp_dict_key_1 = mod_consts[74];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_boolean);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_boolean;
            tmp_dict_key_1 = mod_consts[75];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_utf8);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_utf8;
            tmp_dict_key_1 = mod_consts[76];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_int);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_int;
            tmp_dict_key_1 = mod_consts[77];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_long);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_long;
            tmp_dict_key_1 = mod_consts[78];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_float);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_float;
            tmp_dict_key_1 = mod_consts[79];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_double);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_double;
            tmp_dict_key_1 = mod_consts[80];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_bytes);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_bytes;
            tmp_dict_key_1 = mod_consts[81];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_enum);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_enum;
            tmp_dict_key_1 = mod_consts[82];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_fixed);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_fixed;
            tmp_dict_key_1 = mod_consts[83];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_array_start);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_array_start;
            tmp_dict_key_1 = mod_consts[84];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_item_count);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_item_count;
            tmp_dict_key_1 = mod_consts[85];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_end_item);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_end_item;
            tmp_dict_key_1 = mod_consts[86];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_array_end);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_array_end;
            tmp_dict_key_1 = mod_consts[87];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_start);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_start;
            tmp_dict_key_1 = mod_consts[18];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_key);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_key;
            tmp_dict_key_1 = mod_consts[23];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_end);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_end;
            tmp_dict_key_1 = mod_consts[21];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_map_start);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_map_start;
            tmp_dict_key_1 = mod_consts[88];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_map_end);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_map_end;
            tmp_dict_key_1 = mod_consts[89];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_index);
            tmp_dict_value_1 = tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_index;
            tmp_dict_key_1 = mod_consts[90];
            tmp_res = PyDict_SetItem(tmp_assign_source_30, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key___init__);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key___init__);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key___init__ = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_value);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_value);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_value = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key__push);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key__push);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key__push = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key__pop);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key__pop);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key__pop = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_buffer);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_buffer);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_buffer = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_configure);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_configure);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_configure = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_flush);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_flush);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_flush = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_do_action);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_do_action);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_do_action = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_null);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_null);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_null = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_boolean);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_boolean);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_boolean = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_utf8);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_utf8);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_utf8 = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_int);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_int);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_int = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_long);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_long);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_long = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_float);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_float);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_float = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_double);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_double);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_double = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_bytes);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_bytes);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_bytes = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_enum);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_enum);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_enum = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_fixed);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_fixed);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_fixed = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_array_start);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_array_start);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_array_start = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_item_count);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_item_count);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_item_count = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_end_item);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_end_item);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_end_item = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_array_end);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_array_end);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_array_end = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_start);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_start);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_start = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_key);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_key);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_key = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_end);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_end);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_object_end = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_map_start);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_map_start);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_map_start = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_map_end);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_map_end);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_map_end = NULL;
        CHECK_OBJECT(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_index);
        Py_DECREF(tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_index);
        tmp_locals_fastavro$io$json_encoder$$$class__1_AvroJSONEncoder_12_key_write_index = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        assert(tmp_class_creation_1__class_dict == NULL);
        tmp_class_creation_1__class_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_59;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        tmp_key_value_1 = mod_consts[94];
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
        tmp_key_value_2 = mod_consts[94];
        tmp_assign_source_59 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_assign_source_59 == NULL) {
            tmp_assign_source_59 = Py_None;
        }
        assert(!(tmp_assign_source_59 == NULL));
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_59 = (PyObject *)&PyType_Type;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        Py_INCREF(tmp_assign_source_59);
        tmp_class_creation_1__metaclass = tmp_assign_source_59;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_called_value_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_value_1 = mod_consts[95];
        tmp_args_element_value_2 = mod_consts[96];
        CHECK_OBJECT(tmp_class_creation_1__class_dict);
        tmp_args_element_value_3 = tmp_class_creation_1__class_dict;
        frame_ca410d9d8bacfa88232f4d0e70670601->m_frame.f_lineno = 12;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__class == NULL);
        tmp_class_creation_1__class = tmp_assign_source_60;
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

    CHECK_OBJECT(tmp_class_creation_1__class_dict);
    Py_DECREF(tmp_class_creation_1__class_dict);
    tmp_class_creation_1__class_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ca410d9d8bacfa88232f4d0e70670601);
#endif
    popFrameStack();

    assertFrameObject(frame_ca410d9d8bacfa88232f4d0e70670601);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ca410d9d8bacfa88232f4d0e70670601);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ca410d9d8bacfa88232f4d0e70670601, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ca410d9d8bacfa88232f4d0e70670601->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ca410d9d8bacfa88232f4d0e70670601, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_61;
        CHECK_OBJECT(tmp_class_creation_1__class);
        tmp_assign_source_61 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_61);
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("fastavro.io.json_encoder", false);

    return module_fastavro$io$json_encoder;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fastavro$io$json_encoder, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("fastavro$io$json_encoder", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
