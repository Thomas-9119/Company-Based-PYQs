#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  int k;
  while(t--){
    int n;
    int d[n];
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>d[i];
    }
    int sum =0;
    for(int i=0;i<n;i++){
      if(d[i]>k){
        sum += (k-d[i]);
      }
    }
    cout<<sum;
    
  }
}