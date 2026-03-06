#include<bits/stdc++.h>
using namespace std;
string removeNonAlpha(string s){
  string ans = "";
  for(char ch:s){
    if(ch>='a'&& ch<='z'||ch>='A'&& ch<='Z'){
      ans += ch;
    }
  }
  return ans;
}
int main(){
  string str = "Hello this /////is me";
  cout<<removeNonAlpha(str);
  return 0;
}