// Section 10
// Challenge - 
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>

using namespace std;
int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    cout << "please input your message \n";
    string msg_user;
    getline(cin,msg_user);
    string msg_key;
    cout << "Encrypted...... \n";
    for(size_t i=0;i<msg_user.length();i++){
        size_t index=alphabet.find(msg_user[i]);
        if(index !=string::npos){
            msg_key+=key.at(index);
        }
        else{
            msg_key+=msg_user[i];
        }
    
    }
    cout << "Encrypted message:"<<msg_key<<endl;
    cout<<"decryaping.... \n";
    cout<<"Decryapted message:"<<msg_user<<endl;
    
    
    cout << endl;
    return 0;
}

