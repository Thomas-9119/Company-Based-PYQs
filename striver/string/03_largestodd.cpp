#include<bits/stdc++.h>
using namespace std;
string longestOddNumber(string num){
  for(int i=num.size();i>=0;i--){
    if((num[i]-'0')%2){
      return num.substr(0,i+1);
    }
  }
  return "";
}
int main(){
  cout<<longestOddNumber("345892");
  return 0;
}