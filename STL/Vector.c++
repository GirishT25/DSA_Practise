#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v ;
    v.push_back(5);
    v.emplace_back(10); 

vector<pair<int, int>> pr ;
pr.push_back({10 , 20}); 
pr.emplace_back(30 , 40); // it directly consider the elemnts as the pair elements 


vector<int> v1(5 , 100); // It create the 5 instance of the vector of the elements of 100 like v1 = [100 ,100 ,100 ,100 ,100]
vector<int> v2(5); // it create the 5 instance values in the vector where it could be the 0 or grabage values

vector<int> v3(v1); //here we copy the vector into the another vector   

cout<< v3[0] << "\n";

vector<int>:: iterator it = v1.begin(); // here we acess the elements using the itreator where itreator point towards the location address of the element store
cout << *(it) << "\n"; // to access the element of the address location we use the * pointer


for(vector<int> :: iterator it = v1.begin() ; it != v1.end() ;it++){ // here we see we traverse the vector using the itreator 
    cout<< *(it) << " "; // and the syntax of the is very lengthy to resolve this we use the auto keyword
}
cout<<endl;

for(auto it =  v2.begin() ; it != v2.end() ;it++){ // the auto keyword automatically create the datatype as the values
    cout<< *(it) << " ";
}


// deletion of the vector elements

vector<int> v4;
v4.push_back(10);
v4.push_back(20);
v4.push_back(30);
v4.push_back(40);

for(auto it =  v4.begin() ; it != v4.end() ;it++){ 
        cout<< *(it) << " ";
}

v4.erase(v4.begin());

for(auto it =  v4.begin() ; it != v4.end() ;it++){ 
    cout<< *(it) << " ";
}
cout<<endl;
// Insert the elements

vector<int> v5 (5 , 50);
for(auto it =  v5.begin() ; it != v5.end() ;it++){ 
    cout<< *(it) << " ";
}
cout<<endl;

v5.insert(v5.begin() , 25);
for(auto it =  v5.begin() ; it != v5.end() ;it++){ 
    cout<< *(it) << " ";
}
cout<<endl;



    return 0;
}