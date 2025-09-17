// Write a program to convert an Infix expression into a Postfix expression.

#include<iostream>
#include<string>
using namespace std;

class Stack{
    int top=-1;
    int capacity;
    char *arr;
    string str;
    public:

    Stack(){
        cout<<"entr the expression: ";
        getline(cin,str);

        capacity= str.length();
        arr= new char[capacity];

    }
    int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

    ~Stack() {
        delete[] arr;
    }

    void push(char c) {
        if (top < capacity - 1) {
            arr[++top] = c;
        }
    }

    char pop() {
        if (top >= 0) {
            return arr[top--];
        }
        return '\0';
    }

    char peek() {
        if (top >= 0) return arr[top];
        return '\0';
    }

    bool isEmpty() {
        return top == -1;
    }
    
}
