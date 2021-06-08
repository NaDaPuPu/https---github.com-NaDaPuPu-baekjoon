#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

typedef long long ll;

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
int main()
{
	int n, m, k;
	cin >> n >> m >> k; // n : 수의 개수 // m : 수의 변경이 일어나는 횟수 // k : 구간의 합을 구하는 횟수

	int h = (int)ceil(log2(n)); // h : 2^h로 n보다 바로 큰 값을 만들 수 있는 h값
	int tree_size = (1 << (h + 1)); // 트리의 크기를 2^(h+1)로 잡아둠

	vector<ll> arr(n); // 입력받아 생성된 배열
	vector<ll> tree(tree_size); // 세그먼트 트리가 만들어지는 배열

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	init(arr, tree, 1, 0, n - 1);

	m += k; // 수의 변경이 일어나는 횟수 += 구간의 합을 구하는 횟수 (반복문을 총 m+k번 돌려야하므로)

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