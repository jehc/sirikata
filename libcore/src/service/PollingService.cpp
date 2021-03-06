/*  Sirikata
 *  PollingService.cpp
 *
 *  Copyright (c) 2009, Ewen Cheslack-Postava
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are
 *  met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of Sirikata nor the names of its contributors may
 *    be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
 * OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <sirikata/core/util/Standard.hh>
#include <sirikata/core/service/PollingService.hpp>
#include <sirikata/core/service/Context.hpp>
#ifdef _WIN32
#pragma warning (disable:4355)
#endif
namespace Sirikata {

PollingService::PollingService(Network::IOStrand* str, const Duration& max_rate, Context* ctx, const String& name, bool accurate)
 : Poller(str, std::tr1::bind(&PollingService::indirectPoll, this), max_rate, accurate),
   mProfiler(NULL)
{
    if (ctx != NULL && !name.empty())
        mProfiler = ctx->profiler->addStage(name);
}

PollingService::~PollingService() {
    delete mProfiler;
}

void PollingService::indirectPoll() {
    if (mProfiler != NULL)
        mProfiler->started();

    poll();

    if (mProfiler != NULL)
        mProfiler->finished();
}

void PollingService::stop() {
    shutdown();
    Poller::stop();
}

} // namespace Sirikata
