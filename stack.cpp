#include <iostream>
using namespace std;
#define MAX_SIZE 1000 // Maximum size of stack
class Stack {
private:
    int top; // Index of top element
    int arr[MAX_SIZE]; // Array to store elements
public:
    Stack() {
        top = -1; // Initialize top index to -1 (empty stack)
    }

    bool push(int x) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack is full" << endl;
            return false;
        }
        arr[++top] = x; // Increment top index and add element to array
        return true;
    }

    int pop() {
        if (top < 0) {
            cout << "Stack underflow" << endl;
            return 0;
        }
        return arr[top--]; // Return top element and decrement top index
    }
    int peek() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return arr[top]; // Return top element without modifying top index
    }
    bool isEmpty() {
        return (top < 0); // Stack is empty if top index is -1
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

  void sort() {
    Stack tmp; 
    while (!isEmpty()) {
        int x = pop(); 
        while (!tmp.isEmpty() && tmp.peek() > x) {     	
            push(tmp.pop()); 
        }
        tmp.push(x); 
    }
    while (!tmp.isEmpty()) {
        push(tmp.pop());
    }
}  
  
};
