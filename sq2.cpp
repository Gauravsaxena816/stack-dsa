#include<iostream>
#define size 5
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

    bool push(int n){
        if(top>=size-1){
            cout<<"stack overflow"<<endl;
            return false;
        }
        arr[++top] = n;
        return true;
    }

    int pop(){
        if(top<1){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return arr[top--];
    }
    
    int peek(){
        if(top<1){
            cout<<"stack is empty"<<endl;
            return 0;
        }
        return arr[top];
    }

    bool isempty(){
        return (top<1);
    }

    bool isfull(){
        return (top>size-1);
    }

    void display(){
        if(top<1){
            cout<<"stack is empty"<<endl;
        }

        for(int i = top;i>=0;i--){
            cout<<arr[i]<<" ";       
            }
    }
};

int main(){
    stack s;
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        s.push(x);
    }
    cout<<s.isempty()<<endl;
    cout<<s.isfull()<<endl;
    s.pop();

    cout<<"Element of the stack are :"<<endl;
    s.display();
}