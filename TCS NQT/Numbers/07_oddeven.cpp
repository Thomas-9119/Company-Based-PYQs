#include <bits/stdc++.h>
using namespace std;
bool oddeven(int n)
{
  if (n % 2 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  int num = 45;
  if (oddeven(num))
  {
    cout << "Even";
  }
  else
  {
    cout << "Odd";
  }
  return 0;
}