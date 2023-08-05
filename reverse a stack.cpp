#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>&s,int target){

  if(s.empty()){
    s.push(target);
    return;
  }

  int temp=s.top();
  s.pop();
  insertAtBottom(s,target);
  s.push(temp);

}

void print(stack<int>s){
  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
}

void reverseStack(stack<int>&s){

  //BC
  if(s.empty()){
    return;
  }


  int target=s.top();
  s.pop();
  reverseStack(s);
  insertAtBottom(s,target);

}

int main() {
  stack<int>s;

  s.push(5);
  s.push(6);
  s.push(7);
  s.push(8);
  s.push(9);
  s.push(11);

  //int target=s.top();
  
  //cout<<endl;
  //s.pop();
  //insertAtBottom(s,target);
  print(s);
  cout<<endl;
  
  cout<<"after:"<<endl;
  reverseStack(s);
  
  print(s);
  //cout << "Hello world!" << endl;
  return 0;
}
