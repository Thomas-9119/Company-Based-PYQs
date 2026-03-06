#include<bits/stdc++.h>
using namespace std;
string changeCase(string s){
  for(int i=0;i<s.length();i++){
    

    if(s[i]>='A'&&s[i]<='Z'){
      s[i]=tolower(s[i]);
    }
    else if(s[i]>='a'&&s[i]<='z'){
      s[i]=toupper(s[i]);
    }
  }
  return s;
}
int main(){
  string str = "Rajparno Dhar";
  cout<<changeCase(str);
  return 0;
}