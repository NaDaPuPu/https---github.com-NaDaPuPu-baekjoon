#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string board[50];
string B[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};
string W[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

int check_B(int x, int y) {
    int cnt = 0;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if (board[x + i][y + j] != B[i][j]) cnt++;

    return cnt;
};

int check_W(int x, int y) {
    int cnt = 0;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if (board[x + i][y + j] != W[i][j]) cnt++;
    
    return cnt;
};

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, m, min_cnt = 2501;
    
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> board[i];
        

    for (int i = 0; i + 8 <= n; i++)
    {
        for (int j = 0; j + 8 <= m; j++)
        {
            int temp = min(check_B(i, j), check_W(i, j));
            
            if(temp < min_cnt) min_cnt = temp;
        }
    }

    cout << min_cnt;

    return 0;
}