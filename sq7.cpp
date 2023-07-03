// Write a C++ program to implement a stack using a vector with push and pop operations. 
// Check if the stack is empty or not and find the top element of the stack.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class stack{
    private:
    vector<int> element;

    public:

    void push(int x){
        element.push_back(x);
    }

   void pop() {
        if (element.empty()) {
            cout << "Stack is full" << endl;
        } else {
            element.pop_back(); 
        }
    }

    int top(){
        if(element.empty()){
            cout<<"Stack is full"<<endl;
        }

        return element.back();
    }

    void isempty(){
        if(element.empty()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    void display() {
    vector<int> v = element;
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
};

int main(){
    stack s;
    int t;
    cout<<"enter the number of elements :";
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        s.push(x);
    }

    cout<<"Given stack is given below :"<<endl;
    s.display();  //displaying the stack
    
    //pop of stack
    cout<<"****Stack afer popping out****"<<endl;
    s.pop();
    s.pop();

    //displaying the updated stack
    s.display();

    cout<<"check whether the stack is empty : "<<endl;
    s.isempty();
}