#include <bits/stdc++.h>
using namespace std;
int main(){
     
    pair<int , int > p = { 1 ,3 };
    cout<< p.first << "\n";
    cout<< p.second<<"\n";
     
    pair<int , pair<int , int>> pr = {1 , {2 , 3}};
    cout<< pr.first << "\n";
    // cout << pr.second;
    cout<<pr.second.first<<"\n";
    cout<<pr.second.second<<"\n";


    pair<int,int> arr[]= {{1 , 2} , {3 , 4} , {5 , 6}};
    cout<<arr[0].first << "\n";
    cout<<arr[0].second;


return 0;

}