// Copyright 2021 Ben Wojtowicz
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef __PCCH_Message_H__
#define __PCCH_Message_H__

#include "PCCH_MessageType.h"

#include <array>
#include <cstdint>
#include <vector>

class PCCH_Message
{
public:
    PCCH_Message() : message_present{false} {};
public:
    int Pack(std::vector<uint8_t> &bits);
    int Unpack(std::vector<uint8_t> bits);
    int Unpack(std::vector<uint8_t> bits, uint32_t &idx);
    std::string ToString(uint32_t indent) const;
    std::string ToStringNoNewLines() const;

    // message
public:
    PCCH_MessageType* message_Set();
    int message_Set(PCCH_MessageType &value);
    const PCCH_MessageType& message_Get() const;
    std::string message_ToString(uint32_t indent) const;
    std::string message_ToStringNoNewLines() const;
    int message_Clear();
    bool message_IsPresent() const;
private:
    bool message_present;
    PCCH_MessageType message;

};

#endif
