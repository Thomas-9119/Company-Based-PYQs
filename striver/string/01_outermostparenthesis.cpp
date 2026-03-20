#include<bits/stdc++.h>
using namespace std;
string removeParenthesis(string &s){
  string ans = "";
  stack<char> st;
  for(char ch:s){
    if(ch==')'){
      st.pop();
    }
    if(!st.empty()){
      ans+=ch;
    }
    if(ch=='('){
      st.push(ch);
    }
  }
  return ans;
}
int main(){
  string str = "(()())(())";
  cout<<removeParenthesis(str);
  return 0;
}