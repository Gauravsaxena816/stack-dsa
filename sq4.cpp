// Write a C++ program that reverses the stack (using an array) elements.
#include <iostream>

using namespace std;
#define MAX_SIZE 15 
class Stack {
private:
    int top;
    int arr[MAX_SIZE];
public:
    Stack() {
        top = -1;
    }

    bool push(int x) {
        if (isFull()) {
            cout << "Stack overflow" << endl;
            return false;
        }
        arr[++top] = x; 
        return true;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow" << endl;
            return 0;
        }
        return arr[top--]; 
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return arr[top]; 
    }

    bool isEmpty() {
        return (top < 0); 
    }

    bool isFull() {
        return (top >= MAX_SIZE - 1); 
    }

void display() {
    if (top < 0) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "\nStack elements: ";
    for (int i = top; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
  }
  void reverse() { 
    for (int i = 0; i < top; i++)
    cout << arr[i] << " ";
    cout << endl;
  }
};

int main() {
    Stack stk; 
    cout << "Input some elements onto the stack:";
    stk.push(7);
    stk.push(4);
    stk.push(2);
    stk.push(5);
    stk.push(1);
    stk.push(0);
    stk.display(); 
    stk.reverse();
    cout << "Display the reverse elements of the stack:";
    stk.display(); 
    cout << "\nRemove two elements:";
    stk.pop();
    stk.pop();
    stk.display(); 
    cout << "\nInput two more elements";
    stk.push(-1);
    stk.push(10);
    stk.display();
    stk.reverse();
    // cout << "Display the reverse elements of the stack:";
    // stk.display(); 
    // cout << endl;
    return 0;
}