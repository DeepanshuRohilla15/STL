#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    //Init
    list<int> l1{1,2,3,4};

    //Different Datatype
    list<string> l2{"mango","lemon","apple","grapes"};
    l2.push_back("pineapple");

    //sort
    l2.sort();

    //reverse
    l2.reverse();

    //pop front
    cout<<l2.front()<<"\n";
    l2.pop_front();

    l2.push_back("orange");
    l2.push_back("lemon");

    //Iterate over the string
    for(auto s:l2){
      cout<<s<<"-->";
    }
    cout<<"\n";

    //remove a fruit
    string f;
    cin>>f;
    l2.remove(f);

     for(auto s:l2){
      cout<<s<<"-->";
    }
}