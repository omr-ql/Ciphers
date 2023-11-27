#include <iostream>
#include <map>
#include <cctype>
using namespace std;
string morseCodeEncode(const string& message) {
    map<char, string> morseCodeMap;
    morseCodeMap['A'] = ".-";
    morseCodeMap['B'] = "-...";
    morseCodeMap['C'] = "-.-.";
    morseCodeMap['D'] = "-..";
    morseCodeMap['E'] = ".";
    morseCodeMap['F'] = "..-.";
    morseCodeMap['G'] = "--.";
    morseCodeMap['H'] = "....";
    morseCodeMap['I'] = "..";
    morseCodeMap['J'] = ".---";
    morseCodeMap['K'] = "-.-";
    morseCodeMap['L'] = ".-..";
    morseCodeMap['M'] = "--";
    morseCodeMap['N'] = "-.";
    morseCodeMap['O'] = "---";
    morseCodeMap['P'] = ".--.";
    morseCodeMap['Q'] = "--.-";
    morseCodeMap['R'] = ".-.";
    morseCodeMap['S'] = "...";
    morseCodeMap['T'] = "-";
    morseCodeMap['U'] = "..-";
    morseCodeMap['V'] = "...-";
    morseCodeMap['W'] = ".--";
    morseCodeMap['X'] = "-..-";
    morseCodeMap['Y'] = "-.--";
    morseCodeMap['Z'] = "--..";
    morseCodeMap['0'] = "-----";
    morseCodeMap['1'] = ".----";
    morseCodeMap['2'] = "..---";
    morseCodeMap['3'] = "...--";
    morseCodeMap['4'] = "....-";
    morseCodeMap['5'] = ".....";
    morseCodeMap['6'] = "-....";
    morseCodeMap['7'] = "--...";
    morseCodeMap['8'] = "---..";
    morseCodeMap['9'] = "----.";
    string encodedMessage = "";

    for (char ch : message) {
        ch = toupper(ch);
        if (morseCodeMap.find(ch) != morseCodeMap.end()) {
            encodedMessage += morseCodeMap[ch] + " ";
        } else {
            encodedMessage += ch;
        }
    }

    return encodedMessage;
}

int main() {
    string message;
    cout << "Enter the message: ";
    getline(cin, message);
    string encodedMessage = morseCodeEncode(message);
    cout << "Encoded Message (Morse Code): " << encodedMessage << endl;

    return 0;
}
