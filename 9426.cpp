#include <iostream>
#define MAX 65536

using namespace std;

typedef long long ll;

int seg[MAX * 4] = {0, };
int n, k;
int arr[250000];
ll result;

int search(int val, int node, int left, int right) {
    if (left == right) {
        return left;
    }
    
    int mid = (left + right) / 2;

    if (val <= seg[node * 2]) {
        return search(val, node * 2, left, mid);
    } else {
        return search(val - seg[node * 2], node * 2 + 1, mid + 1, right);
    }
}

int update(int idx, int val, int node, int left, int right) {
    if (idx < left || idx > right) {
        return seg[node];
    }
        
    if (left == right) {
        seg[node] += val;
        return seg[node];
    }

    int mid = (left + right) / 2;

    seg[node] = update(idx, val, node * 2, left, mid) + update(idx, val, node * 2 + 1, mid + 1, right);

    return seg[node];
}

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // k 이하의 인덱스 
    for (int i = 0; i < k; i++)
    {
        update(arr[i], 1, 1, 0, MAX); // 여기서 arr 값에 따른 seg 업데이트
    }
    
    result = search((k + 1) / 2, 1, 0, MAX); // 

    // k 이상의 인덱스
    for (int i = k; i < n; i++)
    {
        update(arr[i], 1, 1, 0, MAX);
        update(arr[i - k], -1, 1, 0, MAX); // 최근 k초 동안의 결과만 남김

        int medium = search((k + 1) / 2, 1, 0, MAX); // 합치기
        result += medium;
    }
    
    cout << result;

    return 0;
}