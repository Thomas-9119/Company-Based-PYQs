#include <bits/stdc++.h>
using namespace std;
int equilibrium(int nums[], int n)
{

  for (int i = 0; i < n; i++)
  {
    int leftsum = 0;
    int rightsum = 0;
    for (int j = 0; j < i; j++)
    {
      leftsum += nums[j];
    }
    for (int j = i + 1; j < n; j++)
    {
      rightsum += nums[j];
    }
    if (leftsum == rightsum)
    {
      return i;
    }
  }
  return -1;
}
int main()
{
  int n = 5;
  int arr[] = {2, 3, -8, 8, 4};
  int equilibriumidx = equilibrium(arr, n);
  cout << equilibriumidx << endl;
  return 0;
}