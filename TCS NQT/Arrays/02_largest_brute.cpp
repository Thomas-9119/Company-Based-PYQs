#include<bits/stdc++.h>
using namespace std;
int largestNumber(vector<int> &arr){
  sort(arr.begin(),arr.end());
  return arr[arr.size()-1];
}
int main(){
  vector<int> arr1 = {15,78,123,1};
  cout<<"The largest element is: "<<largestNumber(arr1)<<endl;
  return 0;
}