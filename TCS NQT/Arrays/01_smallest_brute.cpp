#include <bits/stdc++.h>
using namespace std;
int sortarray(vector<int> &arr)
{
  sort(arr.begin(), arr.end());
  return arr[0];
}
int main()
{
  vector<int> a = {5, 8, 9, 7};
  cout << "The smallest number is:" << sortarray(a) << endl;
  return 0;
}