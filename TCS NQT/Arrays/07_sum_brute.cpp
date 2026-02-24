#include<bits/stdc++.h>
using namespace std;
int sum(vector<int> &arr){
  int sum =0;
  for(int i=0;i<arr.size();i++){
    sum += arr[i];
  }
  return sum;
}
int main(){
  vector<int> arr1 = {5,7,1,22};
  cout<<sum(arr1)<<endl;
  return 0;
}