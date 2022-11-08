#include<iostream>
#include<queue>
using namespace std;

int main(){
      priority_queue<int> pq;
      int n;
      cin>>n;

      for(int i=0;i<n;i++){
            int no;
            cin>>no;
            pq.push(no);  //O(logn)
      }

      //Remove elements from the heap
      while(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
      }
}