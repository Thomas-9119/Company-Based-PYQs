#include<bits/stdc++.h>
using namespace std;
void second(vector<int> &arr){
  
  sort(arr.begin(),arr.end());
  cout<<"The second smallest is: "<<arr[1]<<endl;
  cout<<"The second highest is: "<<arr[arr.size()-2];
}
int main(){
  vector<int> arr1 = {12,78,96,36,100,45};
  int n1 = sizeof(arr1)/sizeof(arr1[0]);
  second(arr1);
  return 0;

}