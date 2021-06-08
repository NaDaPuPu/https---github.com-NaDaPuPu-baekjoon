#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<pair<int, int>> island;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    island.push_back(make_pair(x, y));
  }
  
  return 0;
}