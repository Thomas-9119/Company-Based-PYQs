#include <bits/stdc++.h>
using namespace std;
int sum(vector<int> &arr)
{
  return accumulate(arr.begin(), arr.end(), 0);
}
int main()
{
  vector<int> arr1 = {1, 1, 2, 3};
  cout << sum(arr1) << endl;
  return 0;
}