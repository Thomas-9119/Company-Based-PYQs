#include<bits/stdc++.h>
using namespace std;

void explain_vector(){
  vector<int>v;
  v.push_back(1);
  v.emplace_back(2);
  for(auto it:v){
    cout<<it<<" ";
  }
}
int main(){
  explain_vector();
  return 0;
}