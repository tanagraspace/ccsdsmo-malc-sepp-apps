/*
 * The MIT License (MIT)
 * 
 * Copyright (c) 2016 CNES
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef __PROGRESS_CONSUMER_H_INCLUDED__
#define __PROGRESS_CONSUMER_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif

#include "mal.h"
#include "malbinary.h"
#include "malsplitbinary.h"
#include "malzmq.h"
#include "maltcp.h"
#include "testarea.h"
#include "malactor.h"

#define PROGRESS_CONSUMER_VERSION_MAJOR 1
#define PROGRESS_CONSUMER_VERSION_MINOR 0
#define PROGRESS_CONSUMER_VERSION_PATCH 0

#define PROGRESS_CONSUMER_MAKE_VERSION(major, minor, patch) \
    ((major) * 10000 + (minor) * 100 + (patch))
#define PROGRESS_CONSUMER_VERSION \
		PROGRESS_CONSUMER_MAKE_VERSION(PROGRESS_CONSUMER_VERSION_MAJOR, PROGRESS_CONSUMER_VERSION_MINOR, PROGRESS_CONSUMER_VERSION_PATCH)

typedef struct _progress_provider_t progress_provider_t;
typedef struct _progress_consumer_t progress_consumer_t;

progress_consumer_t *progress_consumer_new(mal_uri_t *provider_uri,
    mal_blob_t *authentication_id, mal_qoslevel_t qoslevel,
    mal_uinteger_t priority, mal_identifier_list_t *domain,
    mal_identifier_t *network_zone, mal_sessiontype_t session,
    mal_identifier_t *session_name,
    mal_encoder_t *encoder, mal_decoder_t *decoder);

int progress_consumer_initialize(void *self, mal_actor_t *mal_actor);

int progress_consumer_finalize(void *self, mal_actor_t *mal_actor);

int progress_consumer_testarea_testservice_testprogress_ack(
    void *self, mal_ctx_t *mal_ctx,
    mal_endpoint_t *mal_endpoint, mal_message_t *message);

int progress_consumer_testarea_testservice_testprogress_update(
    void *self, mal_ctx_t *mal_ctx,
    mal_endpoint_t *mal_endpoint, mal_message_t *message);

int progress_consumer_testarea_testservice_testprogress_response(
    void *self, mal_ctx_t *mal_ctx,
    mal_endpoint_t *mal_endpoint, mal_message_t *message);

mal_uri_t *progress_consumer_get_provider_uri(progress_consumer_t *self);

mal_identifier_list_t *progress_consumer_get_domain(
    progress_consumer_t *self);

mal_blob_t *progress_consumer_get_authentication_id(
    progress_consumer_t *self);

void progress_consumer_test(bool verbose);

extern mal_actor_t *consumer_actor;

// Fixes somes compilation issues with recent releases of Zproject.
void progress_consumer_private_selftest(bool verbose);

#ifdef __cplusplus
}
#endif

#endif
