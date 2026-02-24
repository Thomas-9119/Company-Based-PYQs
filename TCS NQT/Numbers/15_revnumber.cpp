#include <bits/stdc++.h>
using namespace std;
int reverese(int n)
{
  int revnum = 0;
  while (n > 0)
  {
    int last = n % 10;
    revnum = revnum * 10 + last;
    n /= 10;
  }
  return revnum;
}
int main()
{
  int num1 = 56442;
  cout << reverese(num1);
  return 0;
}