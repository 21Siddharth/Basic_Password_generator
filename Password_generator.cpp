#include<bits/stdc++.h>
using namespace std;

string generatepassword(int length){
    string characters = 
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "!@#$%^&*()[]{},./_-+=";

        string password;
        for(int i = 0; i < length; ++i){
            password += characters[rand() % characters.size()];
        }
        return password;

}

int main(){
    srand(time(0));
    int length;
    cout<<"Enter the desired length of the password: ";
    cin>>length;

    string password = generatepassword(length);
    cout<<"Generated Password: "<< password << endl;

    return 0;
}