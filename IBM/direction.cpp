#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int roverMove(int n, vector<string> commands)
{
  int row = 0;
  int col = 0;
  for (const string &command : commands)
  {
    if (command == "UP" && row > 0)
    {
      row -= 1;
    }
    else if (command == "DOWN" && row < n - 1)
    {
      row += 1;
    }
    else if (command == "LEFT" && col > 0)
    {
      col -= 1;
    }
    else if (command == "RIGHT" && col < n - 1)
    {
      col += 1;
    }
  }
  return (row * n) + col;
}

int main()
{
  int n = 4;
  vector<string> commands = {"RIGHT", "UP", "DOWN", "LEFT", "DOWN", "DOWN"};
  int final = roverMove(n, commands);
  cout << "FinalPosition" << final << endl;
  return 0;
}