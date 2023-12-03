#include <iostream>
#include <string>
using namespace std;
string xorCipher(const string& input, const string& key) {
    string result = input;

    for (size_t i = 0; i < input.length(); ++i) {
        result[i] = input[i] ^ key[i % key.length()];
    }

    return result;
}

int main() {
    string plaintext, key;
    cout << "Enter the plain text: ";
    getline(cin, plaintext);

    cout << "Enter the key: ";
    getline(cin, key);
    string ciphertext = xorCipher(plaintext, key);
    cout << "Encrypted Text: " << ciphertext << endl;
    string decryptedText = xorCipher(ciphertext, key);
    cout << "Decrypted Text: " << decryptedText << endl;

    return 0;
}