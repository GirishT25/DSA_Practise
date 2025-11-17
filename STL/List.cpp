#include<bits\stdc++.h>
using namespace std;
int main(){
// list is the container which is same as the vector but in the vector there is the double ended queue
// in the list there is the single queue it makes the queue more cost firendly
        list<int> ls;
        ls.push_back(25);
        ls.emplace_back(20);
        for(auto it = ls.begin() ; it !=ls.end(); it++){
            cout<< *(it) << " ";
        }
        cout<<endl;
ls.push_front(12);
ls.insert(ls.begin() , {12 , 13 , 140}); 
for(auto it = ls.begin() ; it !=ls.end(); it++){
            cout<< *(it) << " ";
        }


// All other function are same as the   vectors
    return  0 ;
}