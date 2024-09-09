#include <gtest/gtest.h>
#include "Soundex.h"

#define MAX_CODE_LEN 5

char soundex[MAX_CODE_LEN];

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  generateSoundex("AX", soundex);
 EXPECT_STREQ(soundex,"A200");
 // ASSERT_EQ(soundex,"A200");
}

TEST(SoudexTestsuite, LowerCaseToUpeerCase) {
 //AAA
  generateSoundex("kashi", soundex);
 EXPECT_STREQ(soundex,"K200");
}
TEST(SoudexTestsuite, PadsWithZeoIfStringIsLessThanFourCharacters) {
 //AAA
  generateSoundex("kk", soundex);
  EXPECT_STREQ(soundex,"K200");
}
