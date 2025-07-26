#include <iostram>
#include <string>
#include "encrypt.hpp"
#include "decrypt.hpp"

int main() {
	std::string text = "Hello";	
	int shift = 3;

	std::string encode = encrypt(text, shift);
	std::string decode = decrypt(encode, shift);

	std::cout << "Cipher: " << encode << std::endl;
	std::cout << "Pure text: " << decode << std::endl;
    return 0;
}
