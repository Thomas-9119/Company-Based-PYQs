#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  char arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  unordered_map<char,int>mpp;
  for(int i=0;i<n;i++){
    mpp[arr[i]]++;
  }
  char ans;
  for(int i=0;i<n;i++){
    if(mpp[arr[i]]==1){
      ans=arr[i];
      break;
    }
  }
  cout<<ans;
  return 0;

}