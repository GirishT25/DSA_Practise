#include<bits\stdc++.h>
using namespace std;
int main(){

    queue<int> q;
    q.push(25);
    q.push(35);
    q.push(45);
    q.push(55);
    q.emplace(65);

    cout<< q.front() << "\n";

    q.pop();

    cout<< q.front() << "\n";

    cout<<q.back() << "\n";


    return 0;
}