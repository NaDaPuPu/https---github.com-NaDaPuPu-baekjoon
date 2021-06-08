#include <iostream>
#include <algorithm>

using namespace std;

int n, m, b;
int a[100000];

int BS(int left, int right, int key) {
  if (left > right) {
    return 0;
  } else {
    int mid = (left + right) / 2;
    if (a[mid] == key)
    {
      return 1;
    } else if (a[mid] > key)
    {
      return BS(left, mid - 1, key);
    } else {
      return BS(mid + 1, right, key);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a, a + n);
  cin >> m;
  for (int i = 0; i < m; i++)
  {
    cin >> b;
    cout << BS(0, n - 1, b) << "\n";
  }

  return 0;
}