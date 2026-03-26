#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int num;
  cin>>num;
  int mindigit=9;
  int maxdigit=0;
  while(num>0){
    int digit = num%10;
    mindigit=min(mindigit,digit);
    maxdigit=max(maxdigit,digit);
    num/=10;
  }
  cout<<mindigit<<maxdigit;

  }
  
  return 0;
}