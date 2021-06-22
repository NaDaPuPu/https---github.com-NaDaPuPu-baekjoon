#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    vector<pair<int, int>> human;
    int n, x, y;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        human.push_back(make_pair(x, y));
    }

    for (int i = 0; i < n; i++)
    {
        int rank = 1;
        for (int j = 0; j < n; j++)
        {
            if (human[i].first < human[j].first && human[i].second < human[j].second)
            {
                rank++;
            }
        }
        cout << rank << " ";
    }

    return 0;
}