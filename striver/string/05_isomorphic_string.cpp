#include<bits/stdc++.h>
using namespace std;
bool isisomorphic(string s,string t){
  if(s.length()!=t.length()){
    return false;
  }
  unordered_map<char, char> mapST, mapTs;
  for(int i=0;i<s.length();++i){
    char cs = s[i];
    char ct = t[i];
    if(mapST.count(cs)&& mapST[cs]!=ct){
      return false;
    }
     if(mapTs.count(ct)&& mapTs[ct]!=cs){
      return false;
    }
    mapST[cs]=ct;
    mapTs[ct]=cs;

  }
  return true;
}
int main(){
  
  cout<<isisomorphic("egg","add");
  return 0;
}