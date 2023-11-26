#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string atbashCipher(const string& input) {
    string result = input;

    for (char& ch : result) {
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            ch = static_cast<char>(base + ('Z' - toupper(ch)));
        }
    }

    return result;
}

int main() {
    string plaintext;
    cout << "Enter the plaintext: ";
    getline(cin, plaintext);

    string ciphertext = atbashCipher(plaintext);
    cout << "Result: " << ciphertext << endl;

    return 0;
}
