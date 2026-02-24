#include <bits/stdc++.h>
using namespace std;
bool harshad(int n)
{
  int sum = 0;
  int temp = n;
  while (temp != 0)
  {
    sum += temp % 10;
    temp /= 10;
  }
  return (n % sum == 0);
}
int main()
{
  if (harshad(100))
  {
    cout << "harshad";
  }
  else
  {
    cout << "not harshad";
  }
  return 0;
}