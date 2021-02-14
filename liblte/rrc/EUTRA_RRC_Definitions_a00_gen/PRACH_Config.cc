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

#include "PRACH_Config.h"

#include <cmath>

int PRACH_Config::Pack(std::vector<uint8_t> &bits)
{
    // Extension indicator

    // Optional indicators
    bits.push_back(prach_ConfigInfo_IsPresent());

    // Fields
    {
        if(0 != rootSequenceIndex_Pack(bits))
        {
            printf("PRACH_Config:: field pack failure\n");
            return -1;
        }
    }
    if(prach_ConfigInfo_IsPresent())
    {
        if(0 != prach_ConfigInfo.Pack(bits))
        {
            printf("PRACH_Config:: field pack failure\n");
            return -1;
        }
    }
    return 0;
}

int PRACH_Config::Unpack(std::vector<uint8_t> bits)
{
    uint32_t idx = 0;
    return Unpack(bits, idx);
}

int PRACH_Config::Unpack(std::vector<uint8_t> bits, uint32_t &idx)
{
    // Extension indicator

    // Optional indicators
    if((idx + 1) > bits.size())
    {
        printf("PRACH_Config::Unpack() index out of bounds for optional indiator prach_ConfigInfo\n");
        return -1;
    }
    prach_ConfigInfo_present = bits[idx++];

    // Fields
    {
        if(0 != rootSequenceIndex_Unpack(bits, idx))
        {
            printf("PRACH_Config:: field unpack failure\n");
            return -1;
        }
    }
    if(prach_ConfigInfo_present)
    {
        if(0 != prach_ConfigInfo.Unpack(bits, idx))
        {
            printf("PRACH_Config:: field unpack failure\n");
            return -1;
        }
    }
    return 0;
}

std::string PRACH_Config::ToString(uint32_t indent) const
{
    std::string out;
    for(uint32_t i=0; i<indent; i++)
        out += "    ";
    out += "PRACH_Config:\n";
    out += rootSequenceIndex_ToString(indent+1);
    if(prach_ConfigInfo_IsPresent())
        out += prach_ConfigInfo_ToString(indent+1);
    return out;
}

std::string PRACH_Config::ToStringNoNewLines() const
{
    std::string out = "PRACH_Config:";
    out += rootSequenceIndex_ToStringNoNewLines();
    if(prach_ConfigInfo_IsPresent())
        out += prach_ConfigInfo_ToStringNoNewLines();
    return out;
}

int PRACH_Config::rootSequenceIndex_Pack(std::vector<uint8_t> &bits)
{
    if(!rootSequenceIndex_present)
    {
        printf("PRACH_Config::rootSequenceIndex_Pack() presence failure\n");
        return -1;
    }
    int64_t val_to_pack = rootSequenceIndex_internal_value - (0);
    uint32_t N_bits = 1;
    while(pow(2, N_bits) <= (837 - 0))
        N_bits++;
    for(uint32_t i=0; i<N_bits; i++)
        bits.push_back((val_to_pack >> (N_bits-i-1)) & 1);
    return 0;
}

int PRACH_Config::rootSequenceIndex_Unpack(std::vector<uint8_t> bits)
{
    uint32_t idx = 0;
    return rootSequenceIndex_Unpack(bits, idx);
}

int PRACH_Config::rootSequenceIndex_Unpack(std::vector<uint8_t> bits, uint32_t &idx)
{
    uint32_t N_bits = 1;
    while(pow(2, N_bits) <= (837 - 0))
        N_bits++;
    int64_t packed_val = 0;
    if((idx + N_bits) > bits.size())
    {
        printf("PRACH_Config::rootSequenceIndex_Unpack() index out of bound\n");
        return -1;
    }
    for(uint32_t i=0; i<N_bits; i++)
        packed_val |= bits[idx++] << (N_bits-i-1);
    rootSequenceIndex_internal_value = packed_val + 0;
    rootSequenceIndex_present = true;
    return 0;
}

int64_t PRACH_Config::rootSequenceIndex_Value() const
{
    if(rootSequenceIndex_present)
        return rootSequenceIndex_internal_value;
    int64_t tmp = 0;
    return tmp;
}

int PRACH_Config::rootSequenceIndex_SetValue(int64_t value)
{
    if(value < 0 || value > 837)
    {
        printf("PRACH_Config::rootSequenceIndex_SetValue() range failure\n");
        return -1;
    }
    rootSequenceIndex_internal_value = value;
    rootSequenceIndex_present = true;
    return 0;
}

std::string PRACH_Config::rootSequenceIndex_ToString(uint32_t indent) const
{
    std::string out;
    for(uint32_t i=0; i<indent; i++)
        out += "    ";
    out += "rootSequenceIndex = " + std::to_string(rootSequenceIndex_internal_value) + "\n";
    return out;
}

std::string PRACH_Config::rootSequenceIndex_ToStringNoNewLines() const
{
    std::string out = "rootSequenceIndex=" + std::to_string(rootSequenceIndex_internal_value) + ",";
    return out;
}

int PRACH_Config::rootSequenceIndex_Clear()
{
    rootSequenceIndex_present = false;
    return 0;
}

bool PRACH_Config::rootSequenceIndex_IsPresent() const
{
    return rootSequenceIndex_present;
}

PRACH_ConfigInfo* PRACH_Config::prach_ConfigInfo_Set()
{
    prach_ConfigInfo_present = true;
    return &prach_ConfigInfo;
}

int PRACH_Config::prach_ConfigInfo_Set(PRACH_ConfigInfo &value)
{
    prach_ConfigInfo_present = true;
    prach_ConfigInfo = value;
    return 0;
}

const PRACH_ConfigInfo& PRACH_Config::prach_ConfigInfo_Get() const
{
    return prach_ConfigInfo;
}

std::string PRACH_Config::prach_ConfigInfo_ToString(uint32_t indent) const
{
    std::string out;
    for(uint32_t i=0; i<indent; i++)
        out += "    ";
    out += "prach_ConfigInfo:\n";
    out += prach_ConfigInfo.ToString(indent+1);
    return out;
}

std::string PRACH_Config::prach_ConfigInfo_ToStringNoNewLines() const
{
    std::string out = "prach_ConfigInfo:";
    out += prach_ConfigInfo.ToStringNoNewLines();
    return out;
}

int PRACH_Config::prach_ConfigInfo_Clear()
{
    prach_ConfigInfo_present = false;
    return 0;
}

bool PRACH_Config::prach_ConfigInfo_IsPresent() const
{
    return prach_ConfigInfo_present;
}

