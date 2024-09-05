#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("AX", soundex);
 EXPECT_STREQ(soundex,"A200");
 // ASSERT_EQ(soundex,"A200");
}

TEST(SoudexTestsuite, AllLowerCaseCharacters) {
  char soundex[5];
  generateSoundex("kashi", soundex);
  EXPECT_STREQ(soundex,"K000");
}

TEST(SoudexTestsuite, AllDigits) {
  char soundex[5];
  generateSoundex("12345", soundex);
  EXPECT_STREQ(soundex,"1000");
}

TEST(SoudexTestsuite, NumberWithCharacters) {
  char soundex[5];
  generateSoundex("777ka", soundex);
  EXPECT_STREQ(soundex,"7200");
}

TEST(SoudexTestsuite, NumberWithSpeacialCharacter) {
  char soundex[5];
  generateSoundex("7@$&*", soundex);
  EXPECT_STREQ(soundex,"7000");
}
