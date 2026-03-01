#include <bits/stdc++.h>
using namespace std;
void explainPair()
{
  pair<int, int> p = {1, 3};
  cout << p.first;
  pair<int, pair<int, int>> pr = {1, {2, 5}};
  cout << pr.second.first;
  pair<int, int> arr[] = {{1, 2}, {4, 5}};
}
int main()
{
  explainPair();
  return 0;
}