#include <iostream>
#include <string>
#include "encrypt.hpp"

// Encrypting the given text with the given key. 
std::string encrypt(std::string text, int s) {
    std::string result = "";

    for (std::string::size_type i = 0; i < text.length(); i++) {
        if (isupper(text[i]))
            result += char(int(text[i] + s - 65) % 26 + 65);
        else
            result += char(int(text[i] + s - 97) % 26 + 97);
    }

    return result;
}

