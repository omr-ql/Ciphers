#include <iostream>
#include <string>
using namespace std;
string vigenereEncrypt(const string& message, const string& key) {
    string encryptedMessage;
    int messageLength = message.length();
    int keyLength = key.length();

    for (int i = 0; i < messageLength; i++) {
        char currentChar = message[i];
        if (isalpha(currentChar)) {
            char keyChar = key[i % keyLength];
            keyChar = isupper(currentChar) ? toupper(keyChar) : tolower(keyChar);
            char encryptedChar = 'A' + (toupper(currentChar) + toupper(keyChar) - 2 * 'A') % 26;
            if (islower(currentChar)) {
                encryptedChar = tolower(encryptedChar);
            }

            encryptedMessage += encryptedChar;
        } else {
            encryptedMessage += currentChar;
        }
    }

    return encryptedMessage;
}

int main() {
    string message, key;
    cout << "Enter the message: ";
    getline(cin, message);

    cout << "Enter the key: ";
    cin >> key;

    string encryptedMessage = vigenereEncrypt(message, key);

    cout << "Encrypted Message: " << encryptedMessage << endl;

    return 0;
}
