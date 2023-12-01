#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string polybiusEncrypt(const string& message) {
    string encryptedMessage = "";
    char polybiusSquare[5][5] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'K'}, 
        {'L', 'M', 'N', 'O', 'P'},
        {'Q', 'R', 'S', 'T', 'U'},
        {'V', 'W', 'X', 'Y', 'Z'}
    };

    for (char ch : message) {
        if (isalpha(ch)) {
            ch = toupper(ch);
            int row, col;
            for (row = 0; row < 5; row++) {
                for (col = 0; col < 5; col++) {
                    if (polybiusSquare[row][col] == ch) {
                        encryptedMessage += to_string(row + 1) + to_string(col + 1) + " ";
                        break;
                    }
                }
            }
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
    string encryptedMessage = polybiusEncrypt(message);
    cout << "Encrypted Message: " << encryptedMessage << endl;

    return 0;
}
