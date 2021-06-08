#include <iostream>
#define MAX 65536

using namespace std;

typedef long long ll;

int seg[MAX * 4] = {0, };
int n, k;
int arr[250000];
ll result;

int init(int val, int node, int left, int right) { // val : 값, node : 노드 번호
    if (left == right)
    {
        return seg[node] += val;
    }
    
    int mid = (left + right) / 2;
    return seg[node] = init(val, node * 2, left, mid) + init(val, node * 2 + 1, mid + 1, right);
}

void update(int idx, int val, int node, int left, int right) {
    if (idx < left || idx > right)
    {
        return;
    }
    
    if (left == right)
    {
        return;
    }
    
    int mid = (left + right) / 2;

    update(idx, val, node * 2, left, mid);
    update(idx, val, node * 2 + 1, mid + 1, right);
}

int search(int val, int node, int left, int right) {
    if (left == right)
    {
        return left;
    }
    
    int mid = (left + right) / 2;

    if (val <= seg[node * 2]) {
        return init(val, node * 2, left, mid);
    } else {
        return init(val - seg[node * 2], node * 2 + 1, mid + 1, right);
    }
}

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    init(1, 1, 0, MAX);

    result = search((k + 1) / 2, 1, 0, MAX);

    for (int i = k; i < n; i++)
    {
        update(arr[i], 1, 1, 0, MAX);
        update(arr[i - k], -1, 1, 0, MAX);

        int medium = search((k + 1) / 2, 1, 0, MAX);
        result += medium;
    }

    cout << result;

    return 0;
}