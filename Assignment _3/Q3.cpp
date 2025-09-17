#include <iostream>
#include <string>
using namespace std;

class Stack {
    int top;
    int capacity;
    char *s;
    string str;

public:
    Stack() {
        cout << "Enter the expression: ";
        getline(cin, str);

        capacity = str.length();
        s = new char[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] s;
    }

    bool isEmpty() {
        return (top == -1);
    }

    void push(char c) {
        s[++top] = c;
    }

    char pop() {
        if (!isEmpty()) {
            return s[top--];
        }
      
    }

    bool isMatching(char open, char close) {
        return (open == '(' && close == ')') ||
               (open == '{' && close == '}') ||
               (open == '[' && close == ']');
    }

    void check() {
        for (int i = 0; i < capacity; i++) {
            if (str[i] == '{' || str[i] == '[' || str[i] == '(') {
                push(str[i]);
            } else if (str[i] == '}' || str[i] == ']' || str[i] == ')') {
                if (isEmpty()) {
                    cout << "STRING IS NOT BALANCED!!!" << endl;
                    return;
                }
                char topChar = pop();
                if (!isMatching(topChar, str[i])) {
                    cout << "STRING IS NOT BALANCED!!!" << endl;
                    return;
                }
            }
        }

        if (isEmpty())
            cout << "STRING IS BALANCED!!!" << endl;
        else
            cout << "STRING IS NOT BALANCED!!!" << endl;
    }
};

int main() {
    Stack s;
    s.check();
    return 0;
}
