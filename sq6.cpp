// Write a C++ program to find the middle element(s) of a stack (using a vector).
#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

class Stack {
private:
   
   vector<int> elements; 

public:
   	void push(int element) {
      elements.push_back(element);
    }

    void pop() {
        if (elements.empty()) {
            cout << "Stack is full" << endl;
        } else {
            elements.pop_back(); 
        }
    }

    int top() {
        if (elements.empty()) {
            cout << "Stack is empty" << endl;
            return 0;
        } else {
            return elements.back(); 
        }
    }

    bool empty() {
        return elements.empty(); 
    }

 void display() {
    vector<int> v = elements;
    if (v.empty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack elements are: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
  }

vector<int> getMiddleElements() {
    vector<int> result;
    int size = elements.size();
    if (size % 2 == 0) {
        result.push_back(elements[size/2 - 1]);
    }
    result.push_back(elements[size/2]);
    return result;
  }
};  

int main() {
    Stack s;
    cout << "Create a stack object:\n";
    cout << "\nInput and store (using vector) some elements onto the stack:\n";
    cout<<"Enter number of elements : "<<endl;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    s.display();
    cout << "\nMiddle element(s) of the said stack elements:\n";
    vector<int> middleElements = s.getMiddleElements();
    for (int i = 0; i < middleElements.size(); i++) {
        cout << middleElements[i] << " ";
    }
    cout << "\n\nInput one more element:\n";
    s.push(0);
    s.display();
    cout << "\nMiddle element(s) of the said stack elements:\n";
    middleElements = s.getMiddleElements();
    for (int i = 0; i < middleElements.size(); i++) {
        cout << middleElements[i] << " ";
    }
    cout << endl;
    return 0;    
}
