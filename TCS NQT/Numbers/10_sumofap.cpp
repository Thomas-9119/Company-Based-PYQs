#include <bits/stdc++.h>
using namespace std;
double sumofAP(int a, int d, int n)
{
  return (n / 2.0) * (2.0 * a + ((n - 1.0) * d));
}
int main()
{
  cout << sumofAP(2, 2, 6);
  return 0;
}