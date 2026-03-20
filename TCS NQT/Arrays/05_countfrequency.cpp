#include<bits/stdc++.h>
using namespace std;
void countFrequency(int nums[],int n){
  unordered_map<int,int>map;

  for(int i=0;i<n;i++){
    map[nums[i]]++;
  }
  for(auto& x:map){
    cout<<x.first<<" "<<x.second<<endl;
  }
}
int main(){
  int arr[]= {25,54,996,25,52};
  int n = sizeof(arr)/sizeof(arr[0]);
  countFrequency(arr,n);
  return 0;

}