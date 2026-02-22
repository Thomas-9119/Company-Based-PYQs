#include <bits/stdc++.h>
using namespace std;
int findTriplets(int price[], int n, int d)
{
  int ans = 0;
  for (int i = 0; i < n - 2; i++)
  {
    for (int j = i + 1; j < n - 1; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if (i < j < k)
        {
          int sum = price[i] + price[j] + price[k];
          if (sum % d == 0)
          {
            ans++;
          }
        }
      }
    }
  }
}
int main()
{
  int n = 5;
  int d = 5;
  int price[n] = {3, 3, 4, 7, 8};
  int result = findTriplets(price, n, d);
  cout << result << endl;
  return 0;
}