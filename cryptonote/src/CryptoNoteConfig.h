// Copyright (c) 2012-2016, The CryptoNote developers, The Bytecoin developers, The Brazukcoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#ifndef SRC_CRYPTONOTECONFIG_H_
#define SRC_CRYPTONOTECONFIG_H_

#include <cstdint>

namespace CryptoNote {
namespace parameters {

const uint64_t CRYPTONOTE_MAX_BLOCK_NUMBER                   = 500000000;
const size_t   CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                = 500000000;
const size_t   CRYPTONOTE_MAX_TX_SIZE                        = 1000000000;
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX       = 0x73aa; // addresses start with "Vay"
const size_t   CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW          = 10;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT            = 60 * 60 * 2;

const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW             = 60;

// MONEY_SUPPLY - total number coins to be generated
const uint64_t MONEY_SUPPLY                                  = UINT64_C(18446744073709551615);
const uint64_t TAIL_EMISSION_REWARD                          = UINT64_C(0);
const size_t CRYPTONOTE_COIN_VERSION                         = 0;
const unsigned EMISSION_SPEED_FACTOR                         = 19;
static_assert(EMISSION_SPEED_FACTOR <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");

const size_t   CRYPTONOTE_REWARD_BLOCKS_WINDOW               = 100;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE     = 124400; //size of block (bytes) after which reward for block calculated using block size
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2  = 20000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1  = 10000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE;
const size_t   CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE        = 600;
const size_t   CRYPTONOTE_DISPLAY_DECIMAL_POINT              = 11;
const uint64_t MINIMUM_FEE                                   = UINT64_C(50000000);
const uint64_t DEFAULT_DUST_THRESHOLD                        = UINT64_C(50000000);

const uint64_t DIFFICULTY_TARGET                             = 120; // seconds
const uint64_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY             = 24 * 60 * 60 / DIFFICULTY_TARGET;
const size_t   DIFFICULTY_WINDOW = 17;// EXPECTED_NUMBER_OF_BLOCKS_PER_DAY; // blocks
const size_t   DIFFICULTY_WINDOW_V1 = 720;//17; // blocks
const size_t   DIFFICULTY_WINDOW_V2 = 720;//17; // blocks
const size_t   DIFFICULTY_CUT = 0;// 60;  // timestamps to cut after sorting
const size_t   DIFFICULTY_CUT_V1 = 60;// 60;  // timestamps to cut after sorting
const size_t   DIFFICULTY_CUT_V2 = 60;// 60;  // timestamps to cut after sorting
const size_t   DIFFICULTY_LAG = 0;// 15;  // !!!
const size_t   DIFFICULTY_LAG_V1 = 15;// 15;  // !!!
const size_t   DIFFICULTY_LAG_V2 = 15;// 15;  // !!!
static_assert(2 * DIFFICULTY_CUT <= DIFFICULTY_WINDOW - 2, "Bad DIFFICULTY_WINDOW or DIFFICULTY_CUT");

const size_t   MAX_BLOCK_SIZE_INITIAL                        = 1000000;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR         = 100 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR       = 365 * 24 * 60 * 60 / DIFFICULTY_TARGET;

const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS     = 1;
const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS    = DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;

const uint64_t CRYPTONOTE_MEMPOOL_TX_LIVETIME                = 60 * 60 * 24;     //seconds, one day
const uint64_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = 60 * 60 * 24 * 7; //seconds, one week 14757395258967641292
const uint64_t CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 7;  // CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL * CRYPTONOTE_MEMPOOL_TX_LIVETIME = time to forget tx

const size_t   FUSION_TX_MAX_SIZE                            = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT * 30 / 100;
const size_t   FUSION_TX_MIN_INPUT_COUNT                     = 12;
const size_t   FUSION_TX_MIN_IN_OUT_COUNT_RATIO              = 4;

const uint32_t UPGRADE_HEIGHT_V2							 = 1;
const uint32_t UPGRADE_HEIGHT_V3							 = 30;
const unsigned UPGRADE_VOTING_THRESHOLD = 90;               // percent
const uint32_t   UPGRADE_VOTING_WINDOW                       = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
const uint32_t   UPGRADE_WINDOW                              = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
static_assert(0 < UPGRADE_VOTING_THRESHOLD && UPGRADE_VOTING_THRESHOLD <= 100, "Bad UPGRADE_VOTING_THRESHOLD");
static_assert(UPGRADE_VOTING_WINDOW > 1, "Bad UPGRADE_VOTING_WINDOW");
const uint64_t GENESIS_BLOCK_REWARD = 3873816255479005700;

const size_t MIN_MIXIN = 0;
const uint8_t MANDATORY_MIXIN_BLOCK_VERSION = 0;
const uint32_t MIXIN_START_HEIGHT = 0;
const uint32_t MANDATORY_TRANSACTION = 0;
const uint32_t KILL_HEIGHT = 0;
const uint32_t ZAWY_DIFFICULTY_BLOCK_INDEX = 30;
const size_t ZAWY_DIFFICULTY_V2 = 0;
const uint8_t ZAWY_DIFFICULTY_DIFFICULTY_BLOCK_VERSION = 0;
const uint32_t BUGGED_ZAWY_DIFFICULTY_BLOCK_INDEX = 0;
const uint64_t MAX_TRANSACTION_SIZE_LIMIT = 124400;
const uint32_t KEY_IMAGE_CHECKING_BLOCK_INDEX = 0;

const char     CRYPTONOTE_BLOCKS_FILENAME[]                  = "blocks.dat";
const char     CRYPTONOTE_BLOCKINDEXES_FILENAME[]            = "blockindexes.dat";
const char     CRYPTONOTE_BLOCKSCACHE_FILENAME[]             = "blockscache.dat";
const char     CRYPTONOTE_POOLDATA_FILENAME[]                = "poolstate.bin";
const char     P2P_NET_DATA_FILENAME[]                       = "p2pstate.bin";
const char     CRYPTONOTE_BLOCKCHAIN_INDICES_FILENAME[]      = "blockchainindices.dat";
const char     MINER_CONFIG_FILE_NAME[]                      = "miner_conf.json";
} // parameters

const char     CRYPTONOTE_NAME[]                             = "valentinecoin";
const char     GENESIS_COINBASE_TX_HEX[]                     = "010a01ff000282c2eba3e1f5d1f01a022c088f7b62ec3c549351520b5809906d82faebed4271f0f2bb41731c2d9c768482c2eba3e1f5d1f01a02f5ccea5384515b3586fca77bbc6d9169a1841fcec61929e937732d093cd00fe02101286e8dda517fd413c8e65738efc244c564eced4c9eb5e5b20a28e0f6ab42f3e1";

const uint8_t  TRANSACTION_VERSION_1 = 1;
const uint8_t  TRANSACTION_VERSION_2 = 2;
const uint8_t  CURRENT_TRANSACTION_VERSION = TRANSACTION_VERSION_1;
const uint8_t  BLOCK_MAJOR_VERSION_1 = 1;
const uint8_t  BLOCK_MAJOR_VERSION_2 = 2;
const uint8_t  BLOCK_MAJOR_VERSION_3 = 3;
const uint8_t  BLOCK_MINOR_VERSION_0 = 0;
const uint8_t  BLOCK_MINOR_VERSION_1 = 1;
const size_t   BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT        =  10000;  //by default, blocks ids count in synchronizing
const size_t   BLOCKS_SYNCHRONIZING_DEFAULT_COUNT            =  200;    //by default, blocks count in blocks downloading
const size_t   COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT         =  1000;

const int      P2P_DEFAULT_PORT                              = 45888;
const int      RPC_DEFAULT_PORT                              = 45889;

const size_t   P2P_LOCAL_WHITE_PEERLIST_LIMIT                =  1000;
const size_t   P2P_LOCAL_GRAY_PEERLIST_LIMIT                 =  5000;

const size_t   P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE          = 16 * 1024 * 1024; // 16 MB
const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT                 = 8;
const size_t   P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT     = 70;
const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL                = 60;            // seconds
const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE                   = 50000000;      // 50000000 bytes maximum packet size
const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE                = 250;
const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT                = 5000;          // 5 seconds
const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT           = 2000;          // 2 seconds
const uint64_t P2P_DEFAULT_INVOKE_TIMEOUT                    = 60 * 2 * 1000; // 2 minutes
const size_t   P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT          = 5000;          // 5 seconds
const char     P2P_STAT_TRUSTED_PUB_KEY[]                    = "8f80f9a5a434a9f1510d13336228debfee9c918ce505efe225d8c94d045fa115";
//const char BYTECOIN_NETWORK[]  = 5f9a2ecc - bc81 - 5725 - 874b - 5e5f8f63e723

const char* const SEED_NODES[] = { 
	"195.201.26.145:45888",
	"174.138.2.129:45888"
};

struct CheckpointData {
  uint32_t height;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = { 
	{ 355, "4e0c5eca79bb312e7bfeaef270f9fa857de9cc707429448006243fcd4c406024" },
	{ 356, "cffeab251ead675f2f4df5e2a33b6b6e14ad5b2ed93f4c3c0eb25a8095dc79f5" },
	{ 4800, "29d7309777f4c5cfa3b04a3eea978225e80a783bc518fd3e5a77a392aa6b22ee" },
	{ 15000, "b1fe5d960215f5689dbd9cd514cfd1008ce027b5fd36cc72b6392eb663aa530c" },
};

} // CryptoNote

#define ALLOW_DEBUG_COMMANDS

#endif  // SRC_CRYPTONOTECONFIG_H_
 
