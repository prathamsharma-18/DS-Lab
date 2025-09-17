// 2. Given a string, reverse it using STACK. For example “DataStructure” should be output as
// “erutcurtSataD.

#include<iostream>
#include<string>
using namespace std;

class Stack{
    int top=-1;
    char *s;
    int capacity;
    string str;
    public:

    Stack(){
        
        cout<<"enter the string: ";
        getline(cin,str);
        cout<<endl;
        capacity=str.length();
        s= new char[capacity];

        cout<<"original string entered is:  "<<str<<endl;

        for(int i=0; i<capacity; i++){
            s[++top]=str[i];
        }

        cout<<"Reversed string is : ";
        for(int i=top; i>-1; i--){
            cout<<s[i];
        }
    }

    
};
int main(){
    Stack s;
}
