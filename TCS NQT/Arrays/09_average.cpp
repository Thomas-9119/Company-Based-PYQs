#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n = 5;
  int arr[] = {5, 4, 1, 4, 9};
  double sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }
  double avg = (sum / n);
  cout << avg;
  return 0;
}