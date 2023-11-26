#include <iostream>
#include <string> 
using namespace std ; 
int main () 
{
    string msg ; 
    string result ; 
    cout << "Enter your massege : " << endl; 
    getline(cin , msg) ; 

    int len = msg.length() ;
    int shift ; 
    cout << "Enter how many times do you want to shift = " << endl ; 
    cin >> shift ; 

    if (shift >= 27 ) {
        shift = shift % 26 ;  
    }
    else if (shift < 0 ) { 
        shift = ( shift % 26 ) + 26 ; 
    }

    for (int i = 0 ; i < len ; i ++ ) {
        if (msg[i] != ' ')
            if (isupper(msg[i])) {
                result = result + char(((msg[i] + shift - 65 ) % 26 ) + 65 ) ; 
            }
            else {
                result = result + char(((msg[i] + shift - 97 ) % 26 ) + 97 ) ; 
            }

       else {
        result = result + msg[i] ;
    }
}
    cout << result << endl ; 
}
