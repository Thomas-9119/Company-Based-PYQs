#include <bits/stdc++.h>
using namespace std;

int findMinMoves(string &word)
{
  int moves = 0;
  unordered_map<char, int> cmp;
  for (int i = 0; i < word.length(); i++)
  {
    cmp[word[i]]++;
  }
  for (auto it : cmp)
  {
    if (it.second > 1)
    {
      moves += (it.second) / 2;
    }
  }
  return moves;
}

int main()
{
  string word = "baabacaa";
  int result = findMinMoves(word);
  cout << result << endl;
  return 0;
}