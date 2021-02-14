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

#ifndef __CarrierFreqCDMA2000_H__
#define __CarrierFreqCDMA2000_H__

#include "BandclassCDMA2000.h"
#include "ARFCN_ValueCDMA2000.h"

#include <array>
#include <cstdint>
#include <vector>

class CarrierFreqCDMA2000
{
public:
    CarrierFreqCDMA2000() : bandClass_present{false}, arfcn_present{false} {};
public:
    int Pack(std::vector<uint8_t> &bits);
    int Unpack(std::vector<uint8_t> bits);
    int Unpack(std::vector<uint8_t> bits, uint32_t &idx);
    std::string ToString(uint32_t indent) const;
    std::string ToStringNoNewLines() const;

    // bandClass
public:
    BandclassCDMA2000* bandClass_Set();
    int bandClass_Set(BandclassCDMA2000 &value);
    const BandclassCDMA2000& bandClass_Get() const;
    std::string bandClass_ToString(uint32_t indent) const;
    std::string bandClass_ToStringNoNewLines() const;
    int bandClass_Clear();
    bool bandClass_IsPresent() const;
private:
    bool bandClass_present;
    BandclassCDMA2000 bandClass;

    // arfcn
public:
    ARFCN_ValueCDMA2000* arfcn_Set();
    int arfcn_Set(ARFCN_ValueCDMA2000 &value);
    const ARFCN_ValueCDMA2000& arfcn_Get() const;
    std::string arfcn_ToString(uint32_t indent) const;
    std::string arfcn_ToStringNoNewLines() const;
    int arfcn_Clear();
    bool arfcn_IsPresent() const;
private:
    bool arfcn_present;
    ARFCN_ValueCDMA2000 arfcn;

};

#endif
