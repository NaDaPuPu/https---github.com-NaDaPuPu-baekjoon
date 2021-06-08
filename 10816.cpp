#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int card[500000];

int BS(int left, int right, int key) {
  int result = 0;
  if (left > right)
  {
    return 0;
  } else {
    int mid = (left + right) / 2;
    if (card[mid] == key)
    {
      return result;
    } else if (card[mid] > key)
    {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> card[i];
  }
  sort(card, card + n);

  cin >> m;
  for (int i = 0; i < m; i++)
  {
    int num;
    cin >> num;


  }
  

  return 0;
}