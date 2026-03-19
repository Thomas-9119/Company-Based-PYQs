#include<bits/stdc++.h>
using namespace std;
int swap(int a, int b){
  a=a^b;
  b=a^b;
  a=a^b;
}
int main(){
  int c = 25;
  int d = 26;
  swap(c,d);
  cout<<c<<endl;
  cout<<d<<endl;
  return 0;
}