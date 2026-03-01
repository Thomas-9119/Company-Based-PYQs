#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> ls;
  ls.push_back(1);
  ls.push_front(5);
  for (auto it : ls)
  {
    cout << it << " ";
  }

  return 0;
}