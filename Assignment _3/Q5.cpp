#include <iostream>
#include <string>
using namespace std;

class Stack {
    int top;
    int capacity;
    int *arr;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int val) {
        if (top < capacity - 1) {
            arr[++top] = val;
        }
    }

    int pop() {
        if (top >= 0) {
            return arr[top--];
        }
        return 0;
    }

    bool isEmpty() {
        return top == -1;
    }
};

int evaluatePostfix(string expr) {
    Stack st(expr.length());

    for (char c : expr) {
        if (isdigit(c)) {
            st.push(c - '0');
        }
        else {
            int val2 = st.pop();
            int val1 = st.pop();

            switch (c) {
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break;
                case '^': {
                    int res = 1;
                    for (int i = 0; i < val2; i++) res *= val1;
                    st.push(res);
                    break;
                }
            }
        }
    }
    return st.pop();
}

int main() {
    string expr;
    cout << "Enter Postfix expression: ";
    cin >> expr;

    int result = evaluatePostfix(expr);
    cout << "Result: " << result << endl;

    return 0;
}
