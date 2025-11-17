#include<bits\stdc++.h>
using namespace std;

int main(){

    // Priority queue are those queue where the elements are store in the higher priority queue like the highest elemnet occur at top
    // here we see the top element is 65 
    // it gives the priorty to the top most element
  priority_queue<int> pq;
  pq.push(25);
  pq.push(35);
  pq.push(45);
  pq.push(55);
  pq.push(65);

  cout << pq.top() << "\n";
  pq.pop();
  cout << pq.top();
  cout<< endl;
 

  // This is called the minimum heap where the minimum element get store at the top of the queue
 
  priority_queue<int, vector<int> , greater<int>> pq1 ;
  pq.push(10);
  pq.push(20);
  pq.push(30);
  pq.push(40);


  cout << pq1.top() << "\n";



    return 0;
}