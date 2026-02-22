#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minFlips(string pwd)
{
  int count = 0;
  for (int i = 0; i < pwd.size() - 1; i += 2)
  {
    if (pwd[i] != pwd[i + 1])
    {
      count++;
    }
  }
  return count;
}

int main()
{
  string pwd = "101011";
  int result = minFlips(pwd);
  cout << result << endl;

  return 0;
}