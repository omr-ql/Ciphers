#include <iostream>
#include <string>
#include <vector>
using namespace std;
string railFenceEncrypt(const string& message, int numRows) {
    vector<string> fence(numRows, "");

    int row = 0;
    bool directionDown = true;

    for (char ch : message) {
        fence[row] += ch;

        if (row == 0) {
            directionDown = true;
        } else if (row == numRows - 1) {
            directionDown = false;
        }

        directionDown ? ++row : --row;
    }

    string encryptedMessage;
    for (const string& rowStr : fence) {
        encryptedMessage += rowStr;
    }

    return encryptedMessage;
}

int main() {
    string message;
    int numRows;
    cout << "Enter the message: ";
    getline(cin, message);

    cout << "Enter the number of rows: ";
    cin >> numRows;
    string encryptedMessage = railFenceEncrypt(message, numRows);
    cout << "Encrypted Message: " << encryptedMessage << endl;

    return 0;
}
