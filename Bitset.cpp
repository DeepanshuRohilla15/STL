#include<bits/stdc++.h>
using namespace std;

int main()
{
      bitset<5> bt;
      cin>>bt;
      // all  true or false
      cout<<bt.all(); // return true if all bit are set else false
      
      // count
      cout<<bt.count(); // print the number of set bits

      //flip
      bt.flip(2); // 0->1 and 1->0 on that particular index

      //none
      // if none is set then, then true, else false
      cout<<bt.none();

      //set 
      bt.set(); // set entirely 1 irrespective of initial position

      bt.set(2); // set the 2nd index
      bt.set(2,0); // set 0 to the 2nd position

      //reset
      bt.reset(); // turn all indexes to zero
      bt.reset(2);// turn the 2nd index to 0

      //size
      cout<<bt.size(); // print 5

      //test
      cout<<bt.test(1); // check if the bit is set or not at index 1
}