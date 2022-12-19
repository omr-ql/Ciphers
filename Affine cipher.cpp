#include <iostream>
#include <string>
using namespace std ; 
string encryptionAffine (string msg) ; 
string decryptionAffine (string msg) ; 
int main () 
{
    cout << encryptionAffine ("AFFINE CIPHER") << endl ; 
    cout << decryptionAffine ("IHHWVC TSWFRCP") << endl ; 
}

string encryptionAffine (string msg) { 
    string encrypted = "" ; 

    int a = 5 ; 
    int b = 8 ; 
    int len = msg.length() ; 

    for (int i = 0 ; i < len ; i++) { 
        if (msg[i] != ' ') {
            encrypted = encrypted + static_cast<char>((((a*msg[i]-'A') + b ) % 26 ) + 'A') ;
        }

        else {
            encrypted = encrypted + msg[i] ; 
        }
    }
    return encrypted ; 
}

string decryptionAffine (string msg) {
    string decrypted = "" ; 

    int a = 21 ; 
    int b = 8 ; 
    int len = msg.length() ;

    for (int i = 0 ; i < len ; i++) {

        if (msg[i] != ' ' ) {
            decrypted = decrypted + static_cast<char>((a*(msg[i] + 'A' - b ) % 26 )+ 'A') ; 
        }
        
        else {
            decrypted = decrypted + msg[i] ;  
        }
    } 
    return decrypted ; 
}