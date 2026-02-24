#include <bits/stdc++.h>
using namespace std;
int lcm(int n1, int n2)
{
  int gcd = 1;
  for (int i = 1; i <= min(n1, n2); i++)
  {
    if (n1 % i == 0 && n2 % i == 0)
    {
      gcd = i;
    }
  }
  return ((n1 * n2) / gcd);
}
int main()
{
  cout << lcm(10, 15);
  return 0;
}