#include<bits\stdc++.h>
using namespace std;

int main(){

    // Set is the data structre which store the element in the sorted manner where the elemente can do operation in the log(n) manner
    //
 set<int> st;
 st.insert(25);
 st.insert(35);
 st.insert(45);
 st.insert(55);
 st.insert(65);

// Whenever if we try to find the elemnt and it does not exist it return to the last index
// it give us the itreator which traverse the set
 auto it = st.find(7);
 cout<< *(it);

 st.erase(5); // it erase or delete the 5 element of the set


 // all the vector function is apply here

    return 0;
}