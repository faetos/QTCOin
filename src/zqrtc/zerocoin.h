// Copyright (c) 2017-2020 The quirkyturtcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef quirkyturtcoin_ZEROCOIN_H
#define quirkyturtcoin_ZEROCOIN_H

#include "uint256.h"
#include "libzerocoin/bignum.h"

uint256 GetPubCoinHash(const CBigNum& bnValue);

#endif //quirkyturtcoin_ZEROCOIN_H
