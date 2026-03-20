#include<bits/stdc++.h>
using namespace std;
int countsubstring(string &s){
  int ans = 0;
  for(int i=0;i<s.length();i++){
    string temp ="";
    for(int j =i;j<s.length();j++){
      temp += s[j];
      cout<<temp<<" ";
      ans++;
    }
    cout<<endl;
  }
  return ans;
}
int main(){
  string name = "abs";
  cout<<countsubstring(name);
  return 0;
}