#include<bits/stdc++.h>
using namespace std;
string onesComplement(string s){
  for(int i=0;i<s.length();i++){
    if(s[i]=='1'){
      s[i]='0';
    }else if(s[i]=='0'){
      s[i]='1';
    }
  }
  return s;
}
int main(){
  cout<<onesComplement("1000");
  return 0;
}