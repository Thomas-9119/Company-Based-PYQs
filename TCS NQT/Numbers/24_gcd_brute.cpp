#include <bits/stdc++.h>
using namespace std;
int gcd(int n1, int n2)
{
  int gcd = 1;
  for (int i = 1; i <= min(n1, n2); i++)
  {
    if (n1 % i == 0 && n2 % i == 0)
    {
      gcd = i;
    }
  }
  return gcd;
}
int main()
{
  int n1 = 15;
  int n2 = 12;
  int findgcd = gcd(n1, n2);
  cout << "the gcd of " << n1 << "and" << n2 << "is" << findgcd;
  return 0;
}