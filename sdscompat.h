/*
 * Copyright (c) 2020, Michael Grunder <michael dot grunder at gmail dot com>
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   * Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *   * Neither the name of Redis nor the names of its contributors may be used
 *     to endorse or promote products derived from this software without
 *     specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * SDS compatibility header.
 *
 * This simple file maps sds types and calls to their unique hiredis symbol names.
 * It's useful when we build Hiredis as a dependency of Redis and want to call
 * Hiredis' sds symbols rather than the ones built into Redis, as the libraries
 * have slightly diverged and could cause hard to track down ABI incompatibility
 * bugs.
 *
 */

#ifndef HIREDIS_SDS_COMPAT
#define HIREDIS_SDS_COMPAT

#define sds hisds

#define sdsempty hi_sdsempty
#define sdscatfmt hi_sdscatfmt
#define sdscatlen hi_sdscatlen
#define sdsfree hi_sdsfree
#define sdsnew hi_sdsnew
#define sdscatprintf hi_sdscatprintf
#define sdsnewlen hi_sdsnewlen
#define sdslen hi_sdslen
#define sdscat hi_sdscat
#define sdssplitargs hi_sdssplitargs
#define sdstoupper hi_sdstoupper
#define sdsfreesplitres hi_sdsfreesplitres
#define sdsrange hi_sdsrange
#define sdscatsds hi_sdscatsds
#define sdscatrepr hi_sdscatrepr
#define sdscpy hi_sdscpy
#define sdstolower hi_sdstolower
#define sdscmp hi_sdscmp
#define sdsdup hi_sdsdup
#define sdsfromlonglong hi_sdsfromlonglong
#define sdsclear hi_sdsclear

#define sds_malloc hi_sds_malloc
#define sds_realloc hi_sds_realloc
#define sds_free hi_sds_free

#endif /* HIREDIS_SDS_COMPAT */
