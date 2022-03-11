#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "funcs.h"
#include "vigenere.h"
#include "decrypt.h"



TEST_CASE("Caesar Cipher")
{
    CHECK(encrypt_Caesar("Hello, World!", 10) == "Rovvy, Gybvn!");
    CHECK(encrypt_Caesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encrypt_Caesar("121", 2) == "121");
    CHECK(encrypt_Caesar("!!!", 2) == "!!!");

}

TEST_CASE("Vigenere Cipher")
{
    CHECK(encrypt_Vigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
    CHECK(encrypt_Vigenere("JAVATPOINT", "BEST") == "KENTUTGBOX");
    CHECK(encrypt_Vigenere("1231231", "ok") == "1231231");


}

TEST_CASE("Decryptions")
{
    CHECK(decrypt_Caesar(encrypt_Caesar("Hello, World!", 10), 10) == "Hello, World!");
    CHECK(decrypt_Caesar(encrypt_Caesar("To be or not to be, That is the question", 3), 3) == "To be or not to be, That is the question");
    CHECK(decrypt_Caesar(encrypt_Caesar("&&()", 20), 20) == "&&()");
    CHECK(decrypt_Vigenere(encrypt_Vigenere("Hello, World!", "cake"), "cake") == "Hello, World!");

}
