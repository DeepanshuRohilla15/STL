#include<bits/stdc++.h>
using namespace std;

struct node{
    string str;
    int num;
    double doub;
    char x;
};

int main(){

   // Arrays -> int arr[100]
     array<int,3> arr1; // -> {?,?,?}
      array<int,5> arr2 = {1}; // -> {1,0,0,0,0}
     
    array<int, 5> arr3;
    arr3.fill(10); // -> {10,10,10,10,10}

   // arr.at(index);

   for(int i=0; i<5;i++)
   {
    cout<<arr3.at(i)<<" ";
   }

   // iterators
   // begin(), end(), rbegin(), rend()


     array<int, 5> arr = {1,2,3,4,5};
     for(auto it: arr.begin(); it!=arr.end();it++)
     {
        cout<< *it<<" ";
     }
     for(auto it: arr.rbegin(); it!=arr.rend();it++)
     {
        cout<< *it<<" ";
     }

     for(auto it: arr){
        cout<<it<<" ";
     }

     string s = "kullu"
     for(auto c : s){
        cout<<c <<" ";
     }
     
     // size
     cout<< arr.size();

     // front
     cout<< arr.front();

     //back
     cout<< arr.back();

}

