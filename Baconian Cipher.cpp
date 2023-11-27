#include <iostream>
#include <string>
#include <map>
using namespace std;
string baconianEncrypt(const string& message) {
    string encryptedMessage;
    map<char, string> baconianDictionary;
    baconianDictionary['A'] = "AAAAA";
    baconianDictionary['B'] = "AAAAB";
    baconianDictionary['C'] = "AAABA";
    baconianDictionary['D'] = "AAABB";
    baconianDictionary['E'] = "AABAA";
    baconianDictionary['F'] = "AABAB";
    baconianDictionary['G'] = "AABBA";
    baconianDictionary['H'] = "AABBB";
    baconianDictionary['I'] = "ABAAA";
    baconianDictionary['J'] = "ABAAB";
    baconianDictionary['K'] = "ABABA";
    baconianDictionary['L'] = "ABABB";
    baconianDictionary['M'] = "ABBAA";
    baconianDictionary['N'] = "ABBAB";
    baconianDictionary['O'] = "ABBBA";
    baconianDictionary['P'] = "ABBBB";
    baconianDictionary['Q'] = "BAAAA";
    baconianDictionary['R'] = "BAAAB";
    baconianDictionary['S'] = "BAABA";
    baconianDictionary['T'] = "BAABB";
    baconianDictionary['U'] = "BABAA";
    baconianDictionary['V'] = "BABAB";
    baconianDictionary['W'] = "BABBA";
    baconianDictionary['X'] = "BABBB";
    baconianDictionary['Y'] = "BBAAA";
    baconianDictionary['Z'] = "BBAAB";

    for (char ch : message) {
        if (isalpha(ch)) {
            char uppercaseChar = toupper(ch);
            encryptedMessage += baconianDictionary[uppercaseChar];
        } else {
            encryptedMessage += ch;
        }
    }

    return encryptedMessage;
}

int main() {
    string message;
    cout << "Enter the message: ";
    getline(cin, message);
    string encryptedMessage = baconianEncrypt(message);
    cout << "Encrypted Message: " << encryptedMessage << endl;

    return 0;
}
