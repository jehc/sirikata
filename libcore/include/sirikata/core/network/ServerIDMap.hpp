/*  Sirikata
 *  ServerIDMap.hpp
 *
 *  Copyright (c) 2009, Daniel Reiter Horn
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

#ifndef _SIRIKATA_SERVERID_MAP_HPP_
#define _SIRIKATA_SERVERID_MAP_HPP_

#include <sirikata/core/util/Platform.hpp>
#include <sirikata/core/network/Address4.hpp>
#include <sirikata/core/util/Factory.hpp>
#include <sirikata/core/service/Context.hpp>

namespace Sirikata {

/* Represents the physical network addresses of servers
 */
class SIRIKATA_EXPORT ServerIDMap {
public:
    typedef std::tr1::function<void(ServerID)> ServerIDLookupCallback;
    typedef std::tr1::function<void(Address4)> Address4LookupCallback;

    ServerIDMap(Context* ctx)
        : mContext(ctx)
    {}
    virtual ~ServerIDMap() {}

    /** Lookup for internal addresses, i.e. those used for space server
     *  to space server communication. Returns NullServerID or Address4::Null if
     *  the server can't be found.
     *  \deprecated
     */
    virtual ServerID lookupInternal(const Address4& pos) = 0;
    virtual Address4 lookupInternal(const ServerID& obj_id) = 0;
    /** Lookup for internal addresses, i.e. those used for space server
     *  to space server communication. Returns NullServerID or Address4::Null if
     *  the server can't be found.
     */
    virtual void lookupInternal(const Address4& addr, ServerIDLookupCallback cb) = 0;
    virtual void lookupInternal(const ServerID& sid, Address4LookupCallback cb) = 0;


    /** Lookup for external addresses, i.e. those used for object host
     *  to space server communication. Returns NullServerID or Address4::Null if
     *  the server can't be found.
     */
    virtual void lookupExternal(const Address4& addr, ServerIDLookupCallback cb) = 0;
    virtual void lookupExternal(const ServerID& sid, Address4LookupCallback cb) = 0;

  protected:
    Context* mContext;
};

class SIRIKATA_EXPORT ServerIDMapFactory
    : public AutoSingleton<ServerIDMapFactory>,
      public Factory2<ServerIDMap*, Context*, const String &>
{
  public:
    static ServerIDMapFactory& getSingleton();
    static void destroy();
}; // class ServerIDMapFactory


} // namespace Sirikata

#endif //_SIRIKATA_SERVER_MAP_HPP_
