#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
      map<string,int> m;

      //1. Insert
      m.insert(make_pair("Mango",100));

      //2. Search
      string fruit;
      cin>>fruit;

      auto it = m.find(fruit);
      if(it!=m.end()){
            cout<<"price of "<<fruit<<" is "<<m[fruit]<<"\n";
      }
      else{
            cout<<"fruit is not present\n";
      }

      // another way to find a particular map
      // it stores unique keys only once
      if(m.count(fruit)){
            cout<<"Price is"<<m[fruit]<<"\n";
      }
      else{
            cout<<"Couldn't found ";
      }

      //3. Erase
      m.erase(fruit);

      m["litchi"]=30;
      m["pineapple"]=20;

      //Iterate over all the key value pairs
      for(auto it= m.begin();it!=m.end();it++){
            cout<<it->first<<" and "<<it->second<<"\n";
      }

      //for each loop
      for(auto p: m){
            cout<<p.first<<" : "<<p.second<<"\n";
      }
 
}