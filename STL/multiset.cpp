#include<bits\stdc++.h>
using namespace std;

int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    
    auto it = ms.find(1);
    cout<< *(it);
    cout<< endl;
    ms.erase(ms.find(1));
    auto it2  =  ms.find(1);
    if(it2 != ms.end()){
        cout<<"Found";
    }
    else{
        cout<< "Not found";
    }

    return 0;
}