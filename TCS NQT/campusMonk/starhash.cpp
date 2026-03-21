#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int starcount=0;
  int hashcount = 0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='*'){
      starcount++;
    }
    else if(s[i]=='#'){
      hashcount++;
    }else{
      cout<<"invalid string";
    }
  }
  int diff = abs(starcount-hashcount);
  cout<<diff;
  return 0;
}