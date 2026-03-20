#include<bits/stdc++.h>
using namespace std;
int main(){
  int year = 1900;
  if(year%4==0 && year%100!=0 || year%400==0){
    cout<<"Leap year";
  }else{
    cout<<"not leap year";
  }
  return 0;
}