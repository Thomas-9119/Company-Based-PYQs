#include <bits/stdc++.h>
using namespace std;
string removeVowels(string s)
{
  string ans = "";
  for (char ch : s)
  {
    char lower = tolower(ch);
    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
    {
      continue;
    }
    ans += ch;
  }
  return ans;
}
int main()
{
  string str = "Hello World";
  cout << removeVowels(str);
  return 0;
}