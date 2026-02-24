#include <bits/stdc++.h>
using namespace std;
bool leapyear(int n)
{
  if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
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
  int year = 100;
  if (leapyear(year))
  {
    cout << "leap year";
  }
  else
  {
    cout << "not a leap year";
  }
  return 0;
}