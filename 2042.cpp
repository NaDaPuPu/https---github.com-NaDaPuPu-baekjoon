#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

typedef long long ll;

int n, m, k;

ll init(vector<ll> &arr, vector<ll> &tree, int node, int start, int end)
{
	if (start == end)
		return tree[node] = arr[start];

	int mid = (start + end) / 2;

	return tree[node] = init(arr, tree, node * 2, start, mid) + init(arr, tree, node * 2 + 1, mid + 1, end);
}										//				좌측자식노드					//					우측자식노드

// tree벡터, node번호, start, end, 바꾸고자하는 인덱스(노드)번호, 차이 
void update(vector<ll> &tree, int node, int start, int end, int index, ll diff)
{
	if (!(start <= index && index <= end)) // start와 end 사이에 index가 없다면 걍 리턴
		return;

	tree[node] += diff;

	if (start != end)
	{
		int mid = (start + end) / 2;
		update(tree, node * 2, start, mid, index, diff);
		update(tree, node * 2 + 1, mid + 1, end, index, diff);
	}

}

ll sum(vector<ll> &tree, int node, int start, int end, int left, int right)
{
	if (left > end || right < start)
		return 0;

	if (left <= start && end <= right)
		return tree[node];

	int mid = (start + end) / 2;
	return sum(tree, node * 2, start, mid, left, right) + sum(tree, node * 2 + 1, mid + 1, end, left, right);
}


int main() {
    cin >> n >> m >> k;

    int h = (int)ceil(log2(n));
    int tree_size = (1 << (h + 1));

    vector<long long> arr(n);
    vector<long long> tree(tree_size);

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    init(arr, tree, 1, 0, n - 1);

    m += k;

    while (m--)
	{
		int get;
		cin >> get; // a==1이면 b번째 수를 c로 바꿈 // a==2면 b번째 수부터 c번째 수까지의 합을 출력 

		if (get == 1)
		{
			int pos;
			ll val;
			cin >> pos >> val; // b>>c
			ll diff = val - arr[pos - 1];  // 변화량 =  바뀔수(c) - 원래의 수
			arr[pos - 1] = val; // b번째 수 (pos-1번째 배열)에 c를 넣음
			update(tree, 1, 0, n - 1, pos - 1, diff); // 최신화
		}

		else if (get == 2)
		{
			int left, right;
			cin >> left >> right;
			cout << sum(tree, 1, 0, n - 1, left - 1, right - 1) << "\n";
		}
	}
}