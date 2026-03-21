#include<bits/stdc++.h>
using namespace std;
int largest(vector<int>arr,int n){
  int largest = arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>largest){
      largest = arr[i];
    }
  }
  return largest;
}
int main(){
  vector<int> a = {5,44,8,96,365};
  cout<<largest(a,5);
  return 0;
}