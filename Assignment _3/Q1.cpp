// Develop a menu driven program demonstrating the following operations on a Stack using array:
// (i) push(), (ii) pop(), (iii) isEmpty(), (iv) isFull(), (v) display(), and (vi) peek()
#include<iostream>
using namespace std;

class Stack{
    int top=-1;
    int *s;
    int capacity;

    public:
    Stack(void){
        cout<<"entr the size of stack: ";
        cin>>capacity;
        s= new int [capacity];
    }

    bool isEmpty(){
        return (top==-1);
    }

    bool isFull(){
        return (top==capacity);
    }

    void push (int x){
        if (!isFull()) {
            top+=1;
            s[top]=x;
            cout<<x<<" is pushed in stack"<<endl;
        }
        else
        cout<<"stack is full-> OVERFLOW!!"<<endl;
    }

    void pop (){
        if (!isEmpty()) {
            cout<<s[top]<<" is popped!!"<<endl;
            top-=1;
        }
        else
        cout<<"stack is Empty-> UNDERFLOW!!!"<<endl;
    }

    void peek(){
        cout<<s[top]<<" is topmost element"<<endl;
    }

    void display(){
        if(isEmpty()) cout<<" stack is empty"<<endl;
        else{
            cout<<" elements top -> bottom are:"<<endl;
            for(int i=top; i>-1; i--){
                cout<<s[i]<<" ";
            }
            cout<<endl;
        }
    }
    ~Stack(){
        delete []s;
    }
    
};

int main(){
    Stack s;
   int choice,value; 
    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. isEmpty\n";
        cout << "5. isFull\n";
        cout << "6. Display\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                if (s.isEmpty())
                    cout << "Stack is empty." << endl;
                else
                    cout << "Stack is not empty." << endl;
                break;
            case 5:
                if (s.isFull())
                    cout << "Stack is full." << endl;
                else
                    cout << "Stack is not full." << endl;
                break;
            case 6:
                s.display();
                break;
            case 7:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 7);

    return 0;


}
