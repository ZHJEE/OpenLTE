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

#ifndef __RRCConnectionSetupComplete_H__
#define __RRCConnectionSetupComplete_H__

#include "RRC_TransactionIdentifier.h"
#include "RRCConnectionSetupComplete_r8_IEs.h"

#include <array>
#include <cstdint>
#include <vector>

class RRCConnectionSetupComplete
{
public:
    RRCConnectionSetupComplete() : rrc_TransactionIdentifier_present{false}, criticalExtensions_present{false} {};
public:
    int Pack(std::vector<uint8_t> &bits);
    int Unpack(std::vector<uint8_t> bits);
    int Unpack(std::vector<uint8_t> bits, uint32_t &idx);
    std::string ToString(uint32_t indent) const;
    std::string ToStringNoNewLines() const;

    // rrc-TransactionIdentifier
public:
    RRC_TransactionIdentifier* rrc_TransactionIdentifier_Set();
    int rrc_TransactionIdentifier_Set(RRC_TransactionIdentifier &value);
    const RRC_TransactionIdentifier& rrc_TransactionIdentifier_Get() const;
    std::string rrc_TransactionIdentifier_ToString(uint32_t indent) const;
    std::string rrc_TransactionIdentifier_ToStringNoNewLines() const;
    int rrc_TransactionIdentifier_Clear();
    bool rrc_TransactionIdentifier_IsPresent() const;
private:
    bool rrc_TransactionIdentifier_present;
    RRC_TransactionIdentifier rrc_TransactionIdentifier;

    // criticalExtensions
public:
    enum criticalExtensions_Enum {
        k_criticalExtensions_c1 = 0,
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

    // c1
public:
    enum criticalExtensions_c1_Enum {
        k_criticalExtensions_c1_rrcConnectionSetupComplete_r8 = 0,
        k_criticalExtensions_c1_spare3,
        k_criticalExtensions_c1_spare2,
        k_criticalExtensions_c1_spare1,
    };
    int criticalExtensions_c1_Pack(std::vector<uint8_t> &bits);
    int criticalExtensions_c1_Unpack(std::vector<uint8_t> bits);
    int criticalExtensions_c1_Unpack(std::vector<uint8_t> bits, uint32_t &idx);
    criticalExtensions_c1_Enum criticalExtensions_c1_Choice() const;
    int criticalExtensions_c1_SetChoice(criticalExtensions_c1_Enum choice);
    std::string criticalExtensions_c1_ChoiceToString(criticalExtensions_c1_Enum value) const;
    uint64_t criticalExtensions_c1_NumberOfChoices() const;
    std::string criticalExtensions_c1_ToString(uint32_t indent) const;
    std::string criticalExtensions_c1_ToStringNoNewLines() const;
    int criticalExtensions_c1_Clear();
    bool criticalExtensions_c1_IsPresent() const;
private:
    bool criticalExtensions_c1_present;
    criticalExtensions_c1_Enum criticalExtensions_c1_internal_choice;

    // rrcConnectionSetupComplete-r8
public:
    RRCConnectionSetupComplete_r8_IEs* criticalExtensions_c1_rrcConnectionSetupComplete_r8_Set();
    int criticalExtensions_c1_rrcConnectionSetupComplete_r8_Set(RRCConnectionSetupComplete_r8_IEs &value);
    const RRCConnectionSetupComplete_r8_IEs& criticalExtensions_c1_rrcConnectionSetupComplete_r8_Get() const;
    std::string criticalExtensions_c1_rrcConnectionSetupComplete_r8_ToString(uint32_t indent) const;
    std::string criticalExtensions_c1_rrcConnectionSetupComplete_r8_ToStringNoNewLines() const;
    int criticalExtensions_c1_rrcConnectionSetupComplete_r8_Clear();
    bool criticalExtensions_c1_rrcConnectionSetupComplete_r8_IsPresent() const;
private:
    bool criticalExtensions_c1_rrcConnectionSetupComplete_r8_present;
    RRCConnectionSetupComplete_r8_IEs criticalExtensions_c1_rrcConnectionSetupComplete_r8;

    // spare3
public:
    int criticalExtensions_c1_spare3_Pack(std::vector<uint8_t> &bits) {return 0;};
    int criticalExtensions_c1_spare3_Unpack(std::vector<uint8_t> bits) {return 0;};
    int criticalExtensions_c1_spare3_Unpack(std::vector<uint8_t> bits, uint32_t &idx) {return 0;};
    bool criticalExtensions_c1_spare3_IsPresent() const {return true;};
    std::string criticalExtensions_c1_spare3_ToString(uint32_t indent) {return "";};
    std::string criticalExtensions_c1_spare3_ToStringNoNewLines() {return "";};

    // spare2
public:
    int criticalExtensions_c1_spare2_Pack(std::vector<uint8_t> &bits) {return 0;};
    int criticalExtensions_c1_spare2_Unpack(std::vector<uint8_t> bits) {return 0;};
    int criticalExtensions_c1_spare2_Unpack(std::vector<uint8_t> bits, uint32_t &idx) {return 0;};
    bool criticalExtensions_c1_spare2_IsPresent() const {return true;};
    std::string criticalExtensions_c1_spare2_ToString(uint32_t indent) {return "";};
    std::string criticalExtensions_c1_spare2_ToStringNoNewLines() {return "";};

    // spare1
public:
    int criticalExtensions_c1_spare1_Pack(std::vector<uint8_t> &bits) {return 0;};
    int criticalExtensions_c1_spare1_Unpack(std::vector<uint8_t> bits) {return 0;};
    int criticalExtensions_c1_spare1_Unpack(std::vector<uint8_t> bits, uint32_t &idx) {return 0;};
    bool criticalExtensions_c1_spare1_IsPresent() const {return true;};
    std::string criticalExtensions_c1_spare1_ToString(uint32_t indent) {return "";};
    std::string criticalExtensions_c1_spare1_ToStringNoNewLines() {return "";};


    // criticalExtensionsFuture


};

#endif
