#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;
#include <string>
using namespace std;
#include <stdexcept>

TEST_CASE("Good snowman code1") {
            CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
            CHECK(snowman(22222222) == string("  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" \") "));
            CHECK(snowman(33333333) == string("   _   \n  /_\\  \n (O_O) \n/(> <)\\\n (___) "));
            CHECK(snowman(44444444) == string("  ___  \n (_*_) \n (- -) \n (   ) \n (   ) "));

            CHECK(snowman(24444442) == string("  ___  \n ..... \n (- -) \n (   ) \n (\" \") "));
            CHECK(snowman(32222223) == string("   _   \n  /_\\  \n\\(o.o)/\n (] [) \n (___) "));
            CHECK(snowman(13333331) == string("       \n _===_ \n (O_O) \n/(> <)\\\n ( : ) "));
            CHECK(snowman(41111114) == string("  ___  \n (_*_) \n (.,.) \n<( : )>\n (   ) "));

            CHECK(snowman(22224444) == string("  ___  \n ..... \n (o.o) \n (   ) \n (   ) "));
            CHECK(snowman(44441111) == string("  ___  \n (_*_) \n (- -) \n<( : )>\n ( : ) "));
            CHECK(snowman(11113333) == string("       \n _===_ \n (.,.) \n/(> <)\\\n (___) "));
            CHECK(snowman(33332222) == string("   _   \n  /_\\  \n\\(O_O)/\n (] [) \n (\" \") "));
            CHECK(snowman(11223344) == string("       \n _===_ \n (o,o) \n/(   )\\\n (   ) "));

            CHECK(snowman(11114411) == string("       \n _===_ \n (.,.) \n ( : ) \n ( : ) "));
            CHECK(snowman(32443333) == string("   _   \n  /_\\  \n (-.-) \n/(> <)\\\n (___) "));
            CHECK(snowman(33232124) == string("   _   \n  /_\\  \n\\(o_O) \n (] [)>\n (   ) "));
            CHECK(snowman(14241324) == string("       \n _===_ \n (o -) \n<(] [)\\\n (   ) "));
            CHECK(snowman(43444241) == string("  ___  \n (_*_) \n (-_-)/\n (   ) \n ( : ) "));
            CHECK(snowman(12121212) == string ("       \n _===_ \n (..o)/\n<( : ) \n (\" \") "));
            CHECK(snowman(12212211) == string ("       \n _===_ \n\\(o..)/\n ( : ) \n ( : ) "));
            CHECK(snowman(12223334) == string ("       \n _===_ \n (o.o) \n/(> <)\\\n (   ) "));
            CHECK(snowman(22223331) == string ("  ___  \n ..... \n (o.o) \n/(> <)\\\n ( : ) "));
            CHECK(snowman(31131114) == string ("   _   \n  /_\\  \n (.,O) \n<( : )>\n (   ) "));
            CHECK(snowman(41131112) == string ("  ___  \n (_*_) \n (.,O) \n<( : )>\n (\" \") "));

}
TEST_CASE("eror snowman code2") {
            CHECK_THROWS(snowman(1234));
            CHECK_THROWS(snowman(1234123));
            CHECK_THROWS(snowman(11111116));
            CHECK_THROWS(snowman(19123421));
            CHECK_THROWS(snowman(00000000));
            CHECK_THROWS(snowman(1));
            CHECK_THROWS(snowman(19842));
            CHECK_THROWS(snowman(383-237));


}


