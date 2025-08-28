// Write a program to convert a character from uppercase to lowercase.
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter a string: ";
    getline(cin,str);

    int n= str.length();
    bool flag=true;
    for(int i=0; i<n; i++){
        if (str[i]>=65 && str[i]<=90) {
            str[i]+=32;
            flag=false;
        }
    }
    if (flag) cout<<"the string is already in lowercase: "<<str<<endl;
    else cout<<"the string  in lowercase is "<<str<<endl;
}
