#include<bits/stdc++.h>
using namespace std;


int main()
{

}

class TwoStack {
      int *arr;
      int top1;
      int top2;
      int size;

   public:
       // Initialize TwoStack
       TwoStack(int s) {
            this -> size = s;
            top1 = -1;
            top2 = s;
            arr = new int[s];
       }

       // Push in stack 1.
       void push1(int num) {
            //atleast a empty space present
            if(top2 - top1 > 1) {
                  top1++;
                  arr[top1] = num;
            }
            else{
                  cout<< "Stack Overflow"<<"\n";
            }
       }

       
       // Push in stack 2.
       void push2(int num) {
            //atleast a empty space present
            if(top2 - top1 > 1) {
                  top2--;
                  arr[top2] = num;
            }
            else{
                  cout<< "Stack Overflow"<<"\n";
            }
       }

       //Pop from stack1 and return popped element.
       int pop1(){
            if(top1 >= 0){
                  int ans = arr[top1];
                  top1--;
                  return ans;
            }
            else{
                  return -1;
            }
       }

       //Pop from stack1 and return popped element.
       int pop() {
            if(top2 < size) {
                  int ans = arr[top2];
                  top2++;
                  return ans;
            }
            else{
                  return -1;
            }
       }

};