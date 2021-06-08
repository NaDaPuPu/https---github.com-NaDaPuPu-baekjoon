#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int m, n;
vector<pair<int, int>> human;

bool compare(pair<int, int> a, pair<int, int> b) {
  return a.first > b.first;
}

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
      human.push_back(make_pair(a, b));
    }
  }
  sort(human.begin(), human.end(), compare);

  long long result = m;
  int start = -1, end = -1;

  for (int i = 0; i < human.size(); i++)
  {
    int h_start = human[i].first;
    int h_end = human[i].second;
    if (i == 0)
    {
      start = h_start;
      end = h_end;
    } else {
      if (h_start >= end)
      {
        end = min(end, h_end);
      } else {
        result += (start - end) * 2;
        start = h_start;
        end = h_end;
      }
    }
  }
  result += (start - end) * 2;

  cout << result;

  return 0; 
}