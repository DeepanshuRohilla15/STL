#include<bits/stdc++.h>
using namespace std;


int main()
{
     int a[]={1,10,11,9,100};
     int n = sizeof(a)/sizeof(int);
     // Search --> find

     int key;
     cin>>key;
     auto it = find(a,a+n,key);
     cout<<it<<"\n";
}