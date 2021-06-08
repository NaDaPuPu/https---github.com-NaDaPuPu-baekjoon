#include <iostream>

#define MAX 5
using namespace std;

int Arr[MAX];
bool Select[MAX];

void Print() {
    for (int i = 0; i < MAX; i++)
    {
        if (Select[i] == true)
        {
            cout << Arr[i] << " ";
        }
    }
    cout << endl;
}

void DFS(int idx, int cnt) {
    if (cnt == 3) // 3개 다 골랐으면
    {
        Print(); // 출력해
        return; // 끝내
    }
    
    for (int i = idx; i < MAX; i++)
    {
        if (Select[i] == true) continue;
        {
            Select[i] = true;

            DFS(i, cnt + 1);
            Select[i] = false;
        }
    }
}

int main() {
    Arr[0] = 1;
    Arr[1] = 2;
    Arr[2] = 3;
    Arr[3] = 4;
    Arr[4] = 5;

    DFS(0, 0);
}