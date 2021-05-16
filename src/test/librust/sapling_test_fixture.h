// Copyright (c) 2020 The quirkyturtcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef quirkyturtcoin_SAPLING_TEST_FIXTURE_H
#define quirkyturtcoin_SAPLING_TEST_FIXTURE_H

#include "test/test_quirkyturtcoin.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup {
    SaplingTestingSetup();
    ~SaplingTestingSetup();
};


#endif //quirkyturtcoin_SAPLING_TEST_FIXTURE_H
