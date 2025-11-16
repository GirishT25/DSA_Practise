#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
   unordered_map<int , int>mpp;
    int n;
    cin >> n ;
    int arr[n];
    for(int i = 0 ;i < n ; i++){
        cin>> arr[i];
        mpp[arr[i]]++;
    }
        for(auto it : mpp){
            cout<< it.first << "->" << it.second << endl;
       }
    int q;
    cin>>q;
    while(q--){
        int number ;
        cin>> number;
        // Fetch

        cout<<mpp[number] << endl;
    }
    return 0;
}