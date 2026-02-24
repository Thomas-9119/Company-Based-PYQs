#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n){
  int rev = 0;
  int dup = n;
   while (n > 0) {
        int ld = n % 10; 
        rev= (rev * 10) + ld; 
        n = n / 10; 
    }
    if(rev == dup){
      return true;
    }else{
      return false;
    }
}
int main(){
  int number = 343;
  if(palindrome(number)){
    cout<<number<<" is palindrome";
  }else{
    cout<<number<<" is not palindrome";
  }
  return 0;

}