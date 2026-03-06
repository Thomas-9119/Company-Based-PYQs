#include<bits/stdc++.h>
using namespace std;
int countWord(string s){
  int count =0;
  for(char ch:s){
    if(ch==' '){
      count++;
    }
  }
  return count+1;
}
int main(){
  string s = "Hello this is me";
  cout<<countWord(s);
  return 0;

}