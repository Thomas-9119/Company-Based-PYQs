#include<bits/stdc++.h>
using namespace std;
int secondlargest(vector<int>arr,int n){
  int largest = arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>largest){
      largest=arr[i];
    }
  }
  int slargest = -1;
  for(int i=0;i<n;i++){
    if(arr[i]>slargest && arr[i]!=largest){
      slargest = arr[i];
    }
  }
  return slargest;
}
int main(){
  vector<int> a = {55,96,87,365,123};
  cout<<secondlargest(a,5);
  return 0;
}