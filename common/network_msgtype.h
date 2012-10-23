// Copyright (c) 2012, Robert Escriva
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     * Redistributions of source code must retain the above copyright notice,
//       this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of Replicant nor the names of its contributors may be
//       used to endorse or promote products derived from this software without
//       specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#ifndef replicant_network_msgtype_h_
#define replicant_network_msgtype_h_

// e
#include <e/buffer.h>

enum replicant_network_msgtype
{
    REPLNET_NOP,
    REPLNET_JOIN,
    REPLNET_INFORM,
    REPLNET_BECOME_SPARE,
    REPLNET_BECOME_STANDBY,
    REPLNET_BECOME_MEMBER,
    REPLNET_CONFIG_PROPOSE,
    REPLNET_CONFIG_ACCEPT,
    REPLNET_CONFIG_REJECT,
    REPLNET_IDENTIFY,
    REPLNET_IDENTIFIED,
    REPLNET_CLIENT_LIST,
    REPLNET_COMMAND_SUBMIT,
    REPLNET_COMMAND_ISSUE,
    REPLNET_COMMAND_ACK,
    REPLNET_COMMAND_RESPONSE,
    REPLNET_COMMAND_RESEND,
    REPLNET_REQ_STATE,
    REPLNET_RESP_STATE,
    REPLNET_SNAPSHOT,
    REPLNET_HEALED
};

std::ostream&
operator << (std::ostream& lhs, replicant_network_msgtype rhs);

e::buffer::packer
operator << (e::buffer::packer lhs, const replicant_network_msgtype& rhs);

e::buffer::unpacker
operator >> (e::buffer::unpacker lhs, replicant_network_msgtype& rhs);

size_t
pack_size(const replicant_network_msgtype& rhs);

#endif // replicant_network_msgtype_h_