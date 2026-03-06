#include <bits/stdc++.h>
using namespace std;
int count(string s)
{
  int vowels = 0, consonant = 0, spaces = 0;
  for (int i = 0; i < s.length(); i++)
  {
    s[i] = tolower(s[i]);
  }
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
      vowels++;
    }
    else if (s[i] >= 'a' && s[i] <= 'z')
    {
      consonant++;
    }
    else if (s[i] == ' ')
    {
      spaces++;
    }
  }
  cout << "The count of vowel is:" << vowels << endl;
  cout << "The count of consonant is:" << consonant << endl;
  cout << "The count of spaces is:" << spaces << endl;
}
int main()
{
  string str = "This is me Rajparno Dhar";
  count(str);
  return 0;
}