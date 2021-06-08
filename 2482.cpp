#include <iostream>

using namespace std;

int n, k;
int table[1001][1001];

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(0);

  cin >> n;
  cin >> k;

  for (int i = 0; i <= n; i++)
  {
    table[i][1] = i;
    table[i][0] = 1;
  }

  for (int i = 4; i <= n; i++)
  {
    for (int j = 2; j <= k; j++)
    {
      table[i][j] = (table[i - 1][j] + table[i - 2][j - 1]) % 1000000003;
    }
  }
  
  cout << table[n][k] % 1000000003 << "\n";

  return 0;
}