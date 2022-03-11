#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "funcs.h"
#include <iomanip>
#include "decrypt.h"



int main()
{
  std::cout << "caesar: (hello world) - " << encrypt_Caesar("Hello, World!", 10) << std::endl;
  std::cout << "vingenare: (hello world) -" << encrypt_Vigenere("Hello, World!", "cake") << std::endl;
  std::cout << "caesar decrypt: (hello world) - " << decrypt_Caesar(encrypt_Caesar("Hello, World!", 10), 10) << std::endl;
  std::cout << "decrypt vigenere: (hello world) -" << decrypt_Vigenere(encrypt_Vigenere("Hello, World!", "cake"), "cake") << std::endl;


  return 0;
}
