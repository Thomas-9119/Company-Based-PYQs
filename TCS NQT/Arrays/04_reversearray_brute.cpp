#include <bits/stdc++.h>
using namespace std;
vector<int> reverseArray(vector<int> &arr)
{
  int n = arr.size();
  vector<int> ans(n);
  for (int i = 0; i < arr.size(); i++)
  {
    ans[i] = arr[n - 1 - i];
  }
  return ans;
}
int main()
{
  vector<int> arr1 = {1, 2, 3, 4, 5};

  vector<int> result = reverseArray(arr1);

  cout << "reversed array: {";
  for (int num : result)
  {
    cout << num << " ";
  }
  cout << "}";

  return 0;
}