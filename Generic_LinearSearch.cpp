#include<bits/stdc++.h>
using namespace std;

//Linear Search
template<typename T>
int search(T arr[],int n,T key){
      for(int i=0;i<n;i++){
            if(arr[i]==key){
                  return i;
            }
      }
      return n;
}


int main()
{
    int a[]={1,2,6,9,4};
    int n = sizeof(a)/sizeof(int);
    int key= 9;   
    //cout<<search(a,n,key);

    float b[]={1.1,2.6,5.9,3.6};
    float k = 5.9;
    cout<<search(b,4,k);
}