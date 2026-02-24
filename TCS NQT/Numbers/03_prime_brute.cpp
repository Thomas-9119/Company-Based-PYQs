#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
  int count=0;
  for(int i=1;i<=n;i++){
    if(n%i==0){
      count++;
    }
  }
  if(count==2){
    return true;
  }else{
    return false;
  }
}
int main(){
  int num = 11;
  if(prime(num)){
    cout<<num<<" is a prime";
  }else{
    cout<<num<<" is not a prime";
  }
  return 0;

}