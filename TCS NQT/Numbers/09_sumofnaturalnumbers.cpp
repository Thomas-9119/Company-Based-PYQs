#include <bits/stdc++.h>
using namespace std;
int naturalsum(int n)
{
  return (n * (n + 1)) / 2;
}
int main()
{
  int number = 5;
  cout << naturalsum(number);
  return 0;
}