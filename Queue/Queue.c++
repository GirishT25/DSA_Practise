#include<bits\stdc++.h>
using namespace std;

class Queue{
    public : 
    static const  int SIZE = 10  ;
    int start = -1 , end = -1 ;
    int q[SIZE]; 
    int currsize = 0;

    void push(int x){
        if(currsize == SIZE){
            cout<<"Element cannot be insert";
            return;
        }
        else if(currsize == 0){
            start = 0 ;
            end = 0;
        }
        else{

            end = (end + 1) % SIZE;
            
        }

        q[end] = x ;
        currsize += 1;

        cout<<"pushed " << q[end];
    }

    int pop(){
        if(SIZE == -1){
            cout<<"Queue is empty";
        }
        int element = q[end];
        if(currsize == 1){
            start = -1;
            end = -1;
        }
        else { 
            start = (start + 1) % SIZE;
        }

        currsize -= 1;
        return element; 
    }

    int top(){
        if(currsize == -1){
            cout<<"Queue is empty";
        }
        return q[start];
    }

    int size(){
        return currsize;
    }
    
};


int main(){
Queue q;
    q.push(25);
    q.push(50);
    cout << "Top: " << q.top() << endl;
    cout << "Popped: " << q.pop()<< endl;
    cout << "New Top: " << q.top() << endl;

return 0;
}