#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

void query_print(priority_queue<int,vector<int>,greater<int>> pq)
{
      while(!pq.empty()){
            cout<<pq.top()<<",";
            pq.pop();
      }
      cout<<"\n";

}

int main(){
      int no;
      int k=3;

      //To find the largest k numbers (query point)
      priority_queue<int,vector<int>,greater<int>> pq;
      int cs=0;
      while(scanf("%d",&no)!=EOF){
            if(no==-1){
                  query_print(pq);
            }
            else if(cs<k){
                  pq.push(no);
                  cs++;
            }
            else{
                  if(no>pq.top()){
                        pq.pop();
                        pq.push(no);
                  }
            }
      }
}