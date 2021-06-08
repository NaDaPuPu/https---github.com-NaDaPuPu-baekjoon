#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> trees;

int n, m, h;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    int input;
    cin >> input;
    trees.push_back(input);
  }
  
  int st = 0;
  int ed = INT_MAX;

  long long max = 0;

  while(st <= ed) {
    int mid = (st + ed) / 2;
    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
      if (trees[i] - mid > 0)
      {
        ans += trees[i] - mid;
      }
    }

    if (ans >= m)
    {
      if (max < mid)
      {
        max = mid;
      }
      st = mid + 1;
    } else {
      ed = mid - 1;
    }
  }
  cout << max;
}