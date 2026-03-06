#include<bits/stdc++.h>
using namespace std;
string removeBracket(string s){
  string ans = "";
  for(char ch:s){
    if(ch==')'||ch=='('||ch=='{'||ch=='}'||ch=='['||ch==']'){
      continue;
    }
    ans += ch;
  }
  return ans;
}
int main(){
  string str = "{42*(i85/[5566])}";
  cout<<removeBracket(str);
  return 0;
}