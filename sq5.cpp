// Write a C++ program to calculate the average value of the stack (using an array) elements.

#include<iostream>
#define size 15
using namespace std;

class stack
{
    private:
    int top;
    int arr[size];

    public:
    stack(){
        top =-1;
    }

    bool push(int x){
        if(top<1){
            cout<<"stack underflow"<<endl;
            return false;
        }

        arr[++top] = x;
    }

    int pop(){
        if(top<1){
            cout<<"stack underflow"<<endl;
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
        return (top >= size - 1); 
    }

    void display(){
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        }

        for(int i = top;i<size-1;i--){
            cout<<arr[i]<<" ";
        }
    }

    void average(){
        int sum = 0;
        int n;
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        }

        for(int i = top;i>=0;i--){
            sum = sum + arr[i];
            n++;
        }

        float result;
        result  = sum / n;
        cout<<result ;
    }
};

int main(){
    stack s;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        s.push(n);
    }
    s.average();
}