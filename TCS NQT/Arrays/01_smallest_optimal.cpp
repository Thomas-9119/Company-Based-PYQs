#include <bits/stdc++.h>
using namespace std;
int smallestNumber(vector<int> &arr)
{
  int min = arr[0];
  for (int i = 0; i < arr.size(); i++)
  {
    if (min > arr[i])
    {
      min = arr[i];
    }
  }
  return min;
}
int main()
{
  vector<int> arr1 = {5, 7, 9, 1};
  cout << "The smallest element is: " << smallestNumber(arr1) << endl;
}