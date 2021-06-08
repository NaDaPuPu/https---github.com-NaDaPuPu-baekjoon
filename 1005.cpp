#include <stdio.h>
#include <vector>

using namespace std;

void AddGraph (vector<int> * v, int x, int y, int weight) {
    v[x].push_back(y);
    v[x].push_back(weight);
}

int main() {
    vector<int> building[10001];
    int weight[1001];
    int t, n, k, x, y, w;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &k);
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &weight[j]);
        }
        
        for (int j = 1; j <= k; j++)
        {
            scanf("%d %d", &x, &y);
            AddGraph(building, x, y, weight[j]);
        }     

        scanf("%d", &w);

        for (int j = 0; j < 10001; j++)
        {
            building[j].clear();
        }
    }
    
    return 0;
}