#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    // Set only stores unique element
    int n;
    cin>>n;
    for(int i=0; i<n;i++)
    {
        int x;
        cin>>x;
        st.insert(x); //1. it can store elements in ascending order

         // 2. in order to access set you have to use the  iterator
         // 3. *st.begin()
         // 4. Insert operation takes log(N) N = size of set

    }

    // st -> {1,2,5}
    // erase functionality
    st.erase(st.begin()); // TC - log n
     // st.erase(iterator)  st -> {2,5}

    st.erase(st.begin(),st.begin()+2); //TC = log n
    // st.erase(startItertor,endIterator)  [)
    // st -> {5}

    set<int> st1 = {1,5,7,9};
    auto it = st.find(7); // log n

    auto it = st.find(8); // it = st.end(); // log n
    
    st.emplace(6); // st.insert(6)
  

     unordered_set<int> st2;
     st.insert(2);
     st.insert(3);
     st.insert(5);

     // average time complexity is O(1)
     // tle -> switch to set
     // but the worst case is linear in nature, O(set size)

     multiset<int> ms;
     // it allowed un-unique elements and stored in sorted fashion
     ms.insert(1);
     ms.insert(1);
     ms.insert(3);
     ms.insert(2);
     ms.insert(2);
     ms.insert(3);

     //set -> {1,1,2,2,3,3}
    ms.erase(2); // all the instances will be erased
    
    auto it = ms.find(2);
    // return an iterator pointing to the first element
    ms.clear(); // deleted the entire set
    
    for(auto it = st.begin(); it!= st.end();it++)
    {
        cout<<*it<<"\n";
    }

    for(auto it: st){
        cout<<it <<"\n";
    }
}  
 