#include<bits/stdc++.h>
using namespace std;


int main()
{
 vector<int> vec(4,0); //-> {0,0,0,0}
 vector<int> vec2(4,10); //-> {10,10,10,10}
 
 //copy the entire vec2 into  vec3
 vector<int> vec3(vec2.begin(),vec2.end());
 vector<int> vec3(vec2);

vector<int> raj;
raj.push_back(1); //raj.emplace_back(1); it takes less time
raj.push_back(3);
raj.push_back(2);
raj.push_back(5); // -> {1,3,2,5}

vector<int> raj2(raj.begin(),raj.begin()+2);// -> {1,3}

vector<vector<int>> v;
vector<int> r1;
r1.push_back(1);
r1.push_back(3);

vector<int> r2;
r2.push_back(5);
r2.push_back(6);
v.push_back(r1);
v.push_back(r2);

for(auto vctr: vec)
{
    for(auto it: vctr)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
}

//define 10 x 20
vector<vector<int>> vec(10,vector<int>(20,0));
   
//define 10 x 20 x30 
int arr[10][20][30];
vector<vector<vector<int>>> vec(10,vector<vector<int>>(20,vector<int>(30,0)));

}