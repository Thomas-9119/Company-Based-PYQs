#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  string arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  string ans;
  sort(arr,arr+n);
  string first =arr[0];
  string last = arr[n-1];
  for(int i=0;i<n;i++){
    if(first[i]!=last[i]){
      
      break;
    }
    ans+=first[i];
  }

  cout<<ans;
  return 0;
}