#include<bits\stdc++.h>
using namespace std;

class Stack {
    public :
    int st[10];
    int top = -1;
    void push(int x){
        if(top > 10) {
            cout<<"Elements are out of the stack";
            return;
        }
        top = top + 1;
        st[top] = x;
        cout<< "Stack pushed : "<< x; 
    }

    void pop(int x ){
        if(top == -1){
            cout<< "No elements found to delete ";
            return;
        }
        top = top - 1;
    }
    int Top(){
        if(top == -1){
            cout<<"Stack is empty";
        }
        return st[top];
    }
    int Size(){
        if(top == -1){
            cout<<"Stack is empty";
        }
        return top + 1;
    }
};

int main(){
    Stack st;
    st.push(25);

    return 0;
    
}