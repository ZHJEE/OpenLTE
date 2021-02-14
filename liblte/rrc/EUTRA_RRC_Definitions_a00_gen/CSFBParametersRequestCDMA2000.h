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

#ifndef __CSFBParametersRequestCDMA2000_H__
#define __CSFBParametersRequestCDMA2000_H__

#include "CSFBParametersRequestCDMA2000_r8_IEs.h"

#include <array>
#include <cstdint>
#include <vector>

class CSFBParametersRequestCDMA2000
{
public:
    CSFBParametersRequestCDMA2000() : criticalExtensions_present{false} {};
public:
    int Pack(std::vector<uint8_t> &bits);
    int Unpack(std::vector<uint8_t> bits);
    int Unpack(std::vector<uint8_t> bits, uint32_t &idx);
    std::string ToString(uint32_t indent) const;
    std::string ToStringNoNewLines() const;

    // criticalExtensions
public:
    enum criticalExtensions_Enum {
        k_criticalExtensions_csfbParametersRequestCDMA2000_r8 = 0,
        k_criticalExtensions_criticalExtensionsFuture,
    };
    int criticalExtensions_Pack(std::vector<uint8_t> &bits);
    int criticalExtensions_Unpack(std::vector<uint8_t> bits);
    int criticalExtensions_Unpack(std::vector<uint8_t> bits, uint32_t &idx);
    criticalExtensions_Enum criticalExtensions_Choice() const;
    int criticalExtensions_SetChoice(criticalExtensions_Enum choice);
    std::string criticalExtensions_ChoiceToString(criticalExtensions_Enum value) const;
    uint64_t criticalExtensions_NumberOfChoices() const;
    std::string criticalExtensions_ToString(uint32_t indent) const;
    std::string criticalExtensions_ToStringNoNewLines() const;
    int criticalExtensions_Clear();
    bool criticalExtensions_IsPresent() const;
private:
    bool criticalExtensions_present;
    criticalExtensions_Enum criticalExtensions_internal_choice;

    // csfbParametersRequestCDMA2000-r8
public:
    CSFBParametersRequestCDMA2000_r8_IEs* criticalExtensions_csfbParametersRequestCDMA2000_r8_Set();
    int criticalExtensions_csfbParametersRequestCDMA2000_r8_Set(CSFBParametersRequestCDMA2000_r8_IEs &value);
    const CSFBParametersRequestCDMA2000_r8_IEs& criticalExtensions_csfbParametersRequestCDMA2000_r8_Get() const;
    std::string criticalExtensions_csfbParametersRequestCDMA2000_r8_ToString(uint32_t indent) const;
    std::string criticalExtensions_csfbParametersRequestCDMA2000_r8_ToStringNoNewLines() const;
    int criticalExtensions_csfbParametersRequestCDMA2000_r8_Clear();
    bool criticalExtensions_csfbParametersRequestCDMA2000_r8_IsPresent() const;
private:
    bool criticalExtensions_csfbParametersRequestCDMA2000_r8_present;
    CSFBParametersRequestCDMA2000_r8_IEs criticalExtensions_csfbParametersRequestCDMA2000_r8;

    // criticalExtensionsFuture


};

#endif
