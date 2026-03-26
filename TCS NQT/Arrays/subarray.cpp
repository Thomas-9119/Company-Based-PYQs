#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    vector<int>v;
    for(int j=i;j<n;j++){
      v.push_back(arr[j]);
      for(int k = 0; k < v.size(); k++){
                cout << v[k] << " ";
            }
            cout<<endl;
    }
  }
}