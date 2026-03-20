#include<bits/stdc++.h>
using namespace std;
int fact(int n){
  int facto = 1;
  for(int i=1;i<=n;i++){
    facto *= i;
  }
  return facto;
}
int main(){
  cout<<fact(5);
  return 0;
}
