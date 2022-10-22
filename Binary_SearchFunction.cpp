#include<bits/stdc++.h>
using namespace std;


int main()
{
      int arr[]={20,30,40,40,40,50,100,1100};
      int n= sizeof(arr)/sizeof(int);

      //Search in a sorted array
      int key;
      cin>>key;

      bool present = binary_search(arr,arr+n,key);
      if(present){
            cout<<"Present"<<"\n";
      }
      else{
            cout<<"Not present"<<"\n";
      }

      //Two more things
      //Get the index of the element
      // lower_bound(s,e,key) and upper_bound(s,e,key)

      auto it = lower_bound(arr,arr+n,key);
      cout<<"Lower bound: "<<it-arr<<"\n";

      auto it1 = upper_bound(arr,arr+n,key);
      cout<<"Upper bound: "<<it1-arr<<"\n";

      cout<<"Occ freq of 40 is: "<<it1-it<<"\n";

}