#include<bits/stdc++.h>
using namespace std;

int main()
{
   // Key Value
   // raj -> 27
   // hima -> 31
   // sandeep -> 63
   // tank -> 89
   // map only stores unique keys
   // log n is TC of Map
   map<string, int> mpp;
   mpp["raj"] = 27;
   mpp["hima"] = 31;
   mpp["sandeep"]=67;
   mpp["tank"]=29;
   mpp.emplace("raj",45);
   mpp.erase("raj"); //mpp.erase(key)
   mpp.erase(mpp.begin());
   mpp.clear(); //entire map is cleaned up
   mpp.erase(mpp.begin(),mpp.begin()+2); // cleans up a given range

   auto it = mpp.find("raj"); // points to where raj lies
   mpp.empty();

   mpp.count("raj"); // always returns 1 as it stores only 1
   // instances of raj

   // Printing map
   for(auto it: mpp){
     cout<< it.first<<" "<< it.second<<"\n";
   }

    unordered_map<int,int> mpp;
    // O(1) in almost all cases
    // O(n) in the worst case, where n is the container size
    // does not store in any order 

    //   Pair Class
    pair<int,int> pr1 = {1,2};
    pair<pair<int,int>,int> pr = {{1,2},3};
    cout<< pr.first.second <<"\n";

    pair<pair<int,int>,pair<int,int>> pr3= {{1,2},{3,4}};
    cout<< pr3.first.first; // -> 1
    cout<< pr3.second.second; // -> 4
    
    multimap<string,int> mp;
    mp.emplace("raj",2);
    mp.emplace("raj",24);


}