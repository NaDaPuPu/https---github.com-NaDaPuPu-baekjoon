#include <iostream>
#include <vector>

using namespace std;

vector<int> root;
vector<int> fee;

int find(int node) {
    if (root[node] == node) return node;
    return root[node] = find(root[node]);
}

void merge(int a, int b) {
    a = find(a);
    b = find(b);
    if (fee[a] <= fee[b]) {
        root[b] = a;
    } else {
        root[a] = b;
    }
}

int n, m, k, money;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> n >> m >> k;

    root.push_back(0);
    fee.push_back(0);

    for (int i = 1; i <= n; i++)
    {
        root.push_back(i);
        cin >> money;
        fee.push_back(money);
    }
    
    int a, b;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        merge(a, b);
    }

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        int temp = find(i);
        if (temp != 0)
        {
            sum += fee[temp];
            merge(0, temp);
        }
    }
    
    if (sum <= k)
    {
        cout << sum;
    } else {
        cout << "Oh no";
    }

    return 0;
}