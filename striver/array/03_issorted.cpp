#include<bits/stdc++.h>
using namespace std;

// int largest(vector<int>arr,int n){
//   int largest = arr[0];
//   for(int i=0;i<n;i++){
//     if(arr[i]>largest){
//       largest = arr[i];
//     }
//   }
//   return largest;
// }
void sol(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  int mx = -1e9;
  for(int i=0;i<n;i++) mx = max(mx,a[i]);
  cout<<mx;
}
int main(){
  int t;
  cin >> t;
  while(t--)
  sol();
  return 0;
}