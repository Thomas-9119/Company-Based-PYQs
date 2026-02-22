#include <bits/stdc++.h>
using namespace std;
int fizzBuzz(int n)
{
  for (int i = 1; i <= n; i++)
  {
    if (i % 3 == 0 && i % 5 == 0)
    {
      cout << "fizzBuzz" << endl;
    }
    else if (i % 3 == 0 && i % 5 != 0)
    {
      cout << "Fizz" << endl;
    }
    else if (i % 3 != 0 && i % 5 == 0)
    {
      cout << "Buzz" << endl;
    }
    else
    {
      cout << i << endl;
    }
  }
}
int main()
{
  int n = 15;
  fizzBuzz(n);
  return 0;
}