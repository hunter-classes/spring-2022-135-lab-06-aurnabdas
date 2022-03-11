#pragma once
#include <string>

char shift_char_uncipher(char c, int rshift);
std::string decrypt_Caesar(std::string ciphertext, int rshift);
char get_char_uncipher(int input, bool is_upper);
std::string decrypt_Vigenere(std::string ciphertext, std::string keyword);