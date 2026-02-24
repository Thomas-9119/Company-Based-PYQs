#include <bits/stdc++.h>
using namespace std;
int largestNumber(vector<int> &arr)
{
  int max = arr[0];
  for (int i = 0; i < arr.size(); i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
  }
  return max;
}
int main()
{
  vector<int> arr1 = {24, 78, 94, 1};
  cout << "The largest element is: " << largestNumber(arr1) << endl;
  return 0;
}