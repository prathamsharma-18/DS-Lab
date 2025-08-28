// Write a program to delete all the vowels from the string.
#include<iostream>
using namespace std;

bool isVowel(char c){
    c= tolower(c);
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    return true;
    return false;
}
int main(){
    string str;
    cout<<"enter a string: ";
    getline(cin,str);

    string result;
    for(char c : str){
        if(!isVowel(c)){
            result += c;
        }
    }
    cout << result << endl;
}
