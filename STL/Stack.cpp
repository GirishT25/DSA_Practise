#include<bits\stdc++.h>
using namespace std;
int main(){
        stack<int> st;
        st.push(25);
        st.push(20);
        st.push(30);
        st.push(35);
        st.push(40);
        // while(!st.empty()){
        //     cout<< st.top() << " ";
        //     st.pop();
        // }
        st.pop();
       cout << st.size();
       cout<<endl;
       cout << st.empty();
    return 0 ;
}