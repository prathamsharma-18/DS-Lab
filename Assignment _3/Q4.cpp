// Write a program to convert an Infix expression into a Postfix expression.

#include <iostream>
#include <string>
using namespace std;

class Stack {
    int top;
    int capacity;
    char *arr;

public:
    Stack(int size) {
        capacity = size;
        arr = new char[capacity];
        top = -1;
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
};

int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

string infixToPostfix(string infix) {
    Stack st(infix.length());
    string postfix = "";

    for (char c : infix) {
        if (isalnum(c)) {
            postfix += c;
        }
        else if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            while (!st.isEmpty() && st.peek() != '(') {
                postfix += st.pop();
            }
            st.pop();
        }
        else if (isOperator(c)) {
            while (!st.isEmpty() && precedence(st.peek()) >= precedence(c)) {
                postfix += st.pop();
            }
            st.push(c);
        }
    }

    while (!st.isEmpty()) {
        postfix += st.pop();
    }

    return postfix;
}

int main() {
    string expr;
    cout << "Enter infix expression: ";
    getline(cin, expr);

    string result = infixToPostfix(expr);
    cout << "Postfix expression: " << result << endl;

    return 0;
}
