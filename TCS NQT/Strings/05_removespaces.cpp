#include <bits/stdc++.h>
using namespace std;
string removeSpaces(string s)
{
  string ans = "";
  for (char ch : s)
  {
    if (ch == ' ')
    {
      continue;
    }
    ans += ch;
  }
  return ans;
}
int main()
{
  string str = "Hello this is me";
  cout << removeSpaces(str) << endl;
  return 0;
}