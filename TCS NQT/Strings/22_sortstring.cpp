#include<bits/stdc++.h>
using namespace std;
string sortString(string s){
  sort(s.begin(),s.end());
  return s;
}
int main(){
  string str = "bgdty";
  cout<<sortString(str);
  return 0;
}