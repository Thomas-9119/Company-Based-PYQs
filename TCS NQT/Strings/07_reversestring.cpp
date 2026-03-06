#include<bits/stdc++.h>
using namespace std;
string reverseString(string s){
  int start =0;
  int end = s.length()-1;
  while(start<end){
    swap(s[start],s[end]);
    start++;
    end--;
  }
  return s;
}
int main(){
  string str = "Rajparno Dhar";
  cout<<reverseString(str);
  return 0;
}