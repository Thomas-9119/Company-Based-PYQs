#include <bits/stdc++.h>
using namespace std;
vector<int> rearrange(vector<int> &arr)
{

  sort(arr.begin(), arr.end());
  int n = arr.size();
  reverse(arr.begin() + n / 2, arr.end());
  return arr;
}
int main()
{
  vector<int> arr1 = {5, 1, 9, 11, 36, 5};
  rearrange(arr1);
  for (int x : arr1)
  {
    cout << x << " ";
  }
  return 0;
}