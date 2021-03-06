extern "C" {
#include "keepkey/firmware/coins.h"
}

#include "gtest/gtest.h"

#include <sstream>
#include <string>

static const int MaxLength = 256;

template<int size>
static std::string arrayToStr(const uint32_t (&address_n)[size]) {
    std::string str;
    std::stringstream OS(str);
    OS << "{";
    for (int i = 0; i < size; ++i) {
        OS << address_n[i];
        if (i + 1 != size)
            OS << ", ";
    }
    OS << "}";
    return OS.str();
}

TEST(Coins, Bip32PathToString) {
    struct {
        uint32_t address_n[10];
        size_t address_n_count;
        std::string expected;
    } vector[] = {
        {{ 0x80000000 | 44, 0x80000000 | 0, 0x80000000 | 0, 0, 0 }, 5, "m/44'/0'/0'/0/0"},
        {{ 0x80000000 | 44, 0x80000000 | 0, 0x80000000 | 0 },       3, "m/44'/0'/0'"},
        {{ }, 0, "m"},
        {{ 0 }, 1, "m/0"},
        {{ 0,0,0,0,0,0,0,0,0,0 }, 10, "m/0/0/0/0/0/0/0/0/0/0" },
        {{ 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff,
           0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff}, 10,
         "m/2147483647'/2147483647'/2147483647'/2147483647'/2147483647'/2147483647'/2147483647'/2147483647'/2147483647'/2147483647'"},
    };

    for (const auto &vec : vector) {
        // Check that we get it right when provided with exactly enough characters.
        std::vector<char> exact_len(vec.expected.size() + 1);
        ASSERT_TRUE(bip32_path_to_string(&exact_len[0], exact_len.size(), &vec.address_n[0], vec.address_n_count));
        ASSERT_EQ(&exact_len[0], vec.expected)
            << "address_n:       " << arrayToStr(vec.address_n) << "\n"
            << "address_n_count: " << vec.address_n_count << "\n";

        // Check that we report success iff we were able to write the whole string.
        for (int i = 0; i < MaxLength; ++i) {
            char str[MaxLength];
            memset(str, 0, sizeof(str));
            if (bip32_path_to_string(&str[0], i, &vec.address_n[0], vec.address_n_count)) {
                ASSERT_EQ(&str[0], vec.expected)
                    << "address_n:       " << arrayToStr(vec.address_n) << "\n"
                    << "address_n_count: " << vec.address_n_count << "\n"
                    << "i:               " << i << "\n";
            }
        }
    }
}
