#include<bits/stdc++.h>
using namespace std;
void median(int arr[],int n){
  n = sizeof(arr);
  sort(arr,arr+n);
  if(n%2==0){
    int ind1 = (n/2)-1;
    int ind2= n/2;
    cout<<double((arr[ind1]+arr[ind2])/2);

  }else{
    cout<<arr[n/2];
  }
  
}
int main(){
  int n=5;
  int arr[n] = {1,2,8,7,9};
  median(arr,n);
  return 0;
}