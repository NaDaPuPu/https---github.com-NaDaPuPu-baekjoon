#include <iostream>
#include <algorithm>

using namespace std;

int n;
pair<int, int> line[1000000];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> line[i].first >> line[i].second;
  }
  sort(line, line + n);

  int result = 0;
  int start = -1000000001, end = -1000000001;

  for (int i = 0; i < n; i++)
  {
    if (line[i].first > end)
    {
      start = line[i].first;
      end = line[i].second;
    } else {
      start = end;
      end = max(end, line[i].second);
    }
    result += end - start;
  }
  cout << result;
}