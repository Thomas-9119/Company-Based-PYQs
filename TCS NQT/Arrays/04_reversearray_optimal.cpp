#include <bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> &arr)
{
  int p1 = 0;
  int p2 = arr.size() - 1;
  while (p1 < p2)
  {
    swap(arr[p1], arr[p2]);
    p1++;
    p2--;
  }
  return arr;
}
int main()
{
  vector<int> arr1 = {5, 8, 9, 6};
  vector<int> a = reverse(arr1);
  for (int num : a)
  {
    cout << num << " ";
  }
  return 0;
}