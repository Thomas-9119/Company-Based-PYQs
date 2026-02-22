#include <bits/stdc++.h>
using namespace std;
void reverseString(string &str)
{
  // reverse(str.begin(),str.end());
  int i = 0;
  int j = str.size() - 1;
  while (i <= j)
  {
    swap(str[i], str[j]);
    i++;
    j--;
  }
}
int main()
{
  string str = "Hello this is me";
  reverseString(str);
  cout << str << endl;
  return 0;
}