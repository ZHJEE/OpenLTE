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

#ifndef __IRAT_ParametersCDMA2000_1XRTT_v920_H__
#define __IRAT_ParametersCDMA2000_1XRTT_v920_H__

#include <array>
#include <cstdint>
#include <vector>

class IRAT_ParametersCDMA2000_1XRTT_v920
{
public:
    IRAT_ParametersCDMA2000_1XRTT_v920() : e_CSFB_1XRTT_r9_present{false}, e_CSFB_ConcPS_Mob1XRTT_r9_present{false} {};
public:
    int Pack(std::vector<uint8_t> &bits);
    int Unpack(std::vector<uint8_t> bits);
    int Unpack(std::vector<uint8_t> bits, uint32_t &idx);
    std::string ToString(uint32_t indent) const;
    std::string ToStringNoNewLines() const;

    // e-CSFB-1XRTT-r9
public:
    enum e_CSFB_1XRTT_r9_Enum {
        k_e_CSFB_1XRTT_r9_supported = 0,
    };
    int e_CSFB_1XRTT_r9_Pack(std::vector<uint8_t> &bits);
    int e_CSFB_1XRTT_r9_Unpack(std::vector<uint8_t> bits);
    int e_CSFB_1XRTT_r9_Unpack(std::vector<uint8_t> bits, uint32_t &idx);
    e_CSFB_1XRTT_r9_Enum e_CSFB_1XRTT_r9_Value() const;
    int e_CSFB_1XRTT_r9_SetValue(e_CSFB_1XRTT_r9_Enum value);
    int e_CSFB_1XRTT_r9_SetValue(std::string value);
    std::string e_CSFB_1XRTT_r9_ValueToString(e_CSFB_1XRTT_r9_Enum value) const;
    uint64_t e_CSFB_1XRTT_r9_NumberOfValues() const;
    std::string e_CSFB_1XRTT_r9_ToString(uint32_t indent) const;
    std::string e_CSFB_1XRTT_r9_ToStringNoNewLines() const;
    int e_CSFB_1XRTT_r9_Clear();
    bool e_CSFB_1XRTT_r9_IsPresent() const;
private:
    bool e_CSFB_1XRTT_r9_present;
    e_CSFB_1XRTT_r9_Enum e_CSFB_1XRTT_r9_internal_value;

    // e-CSFB-ConcPS-Mob1XRTT-r9
public:
    enum e_CSFB_ConcPS_Mob1XRTT_r9_Enum {
        k_e_CSFB_ConcPS_Mob1XRTT_r9_supported = 0,
    };
    int e_CSFB_ConcPS_Mob1XRTT_r9_Pack(std::vector<uint8_t> &bits);
    int e_CSFB_ConcPS_Mob1XRTT_r9_Unpack(std::vector<uint8_t> bits);
    int e_CSFB_ConcPS_Mob1XRTT_r9_Unpack(std::vector<uint8_t> bits, uint32_t &idx);
    e_CSFB_ConcPS_Mob1XRTT_r9_Enum e_CSFB_ConcPS_Mob1XRTT_r9_Value() const;
    int e_CSFB_ConcPS_Mob1XRTT_r9_SetValue(e_CSFB_ConcPS_Mob1XRTT_r9_Enum value);
    int e_CSFB_ConcPS_Mob1XRTT_r9_SetValue(std::string value);
    std::string e_CSFB_ConcPS_Mob1XRTT_r9_ValueToString(e_CSFB_ConcPS_Mob1XRTT_r9_Enum value) const;
    uint64_t e_CSFB_ConcPS_Mob1XRTT_r9_NumberOfValues() const;
    std::string e_CSFB_ConcPS_Mob1XRTT_r9_ToString(uint32_t indent) const;
    std::string e_CSFB_ConcPS_Mob1XRTT_r9_ToStringNoNewLines() const;
    int e_CSFB_ConcPS_Mob1XRTT_r9_Clear();
    bool e_CSFB_ConcPS_Mob1XRTT_r9_IsPresent() const;
private:
    bool e_CSFB_ConcPS_Mob1XRTT_r9_present;
    e_CSFB_ConcPS_Mob1XRTT_r9_Enum e_CSFB_ConcPS_Mob1XRTT_r9_internal_value;

};

#endif
