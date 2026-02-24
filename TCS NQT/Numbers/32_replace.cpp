#include <bits/stdc++.h>
using namespace std;
int replace(int n)
{
  string st = to_string(n);
  for (int i = 0; i < st.length(); i++)
  {
    if (st[i] == '0')
    {
      st[i] = '1';
    }
  }
  return stoi(st);
}
int main()
{
  cout << replace(10001);
  return 0;
}