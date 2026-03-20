#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
  int count = 0;
  for(int i=1;i<=n;i++){
    if(n%i==0){
      count++;
    }
  }
  return count==2;
}
int main(){
  cout<<isPrime(5);
  return 0;

}