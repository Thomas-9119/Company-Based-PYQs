#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int sum=67;
  n = (-1 + sqrt(1 + 8*sum)) / 2;
  
  cout<<(n*(n+1)/2)-sum;
  return 0;
}