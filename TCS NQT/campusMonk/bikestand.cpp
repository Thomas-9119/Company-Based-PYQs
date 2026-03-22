#include<bits/stdc++.h>
using namespace std;
int main(){
  int h;
  cin>>h;
  int amount;
  if(h<=2){
    amount=h*50;
  }
  else if(h<=5){
    amount=100+(h-2)*100;
  }
  else{
    amount=400+(h-5)*200;
  }
  cout<<amount;
  return 0;
}