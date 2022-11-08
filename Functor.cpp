#include<iostream>
#include<cstring>
using namespace std;

class Fun{
      public:
         void operator()(string s){
            cout<<"Having fun with "<<s;
         }

};

int main(){
      Fun f; // Constructor called
      f("C++");   //  Overloaded () operator = Function call where f is an object 


}