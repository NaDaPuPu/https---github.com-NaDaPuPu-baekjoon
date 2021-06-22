#include <iostream>
#include <vector>

using namespace std;

vector<int> result;
vector<int> isChecked;

int countOf(int arr[], int value) {
    int count = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] == value) count++;
    }
    return count;
}

void solution(int arr[]) {
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        int cnt = 0;
        if (isChecked.size() > 0)
        {
            
            for (int j = 0; j < isChecked.size(); j++)
            {
                if (isChecked[j] == arr[i]) cnt++;
            } 
        }
        if (cnt == 0)
        {
            int count = countOf(arr, arr[i]);
            isChecked.push_back(arr[i]);
            result.push_back(count);
        }
    }
    
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
}

int main() {
    int arr[8] = {1, 2, 3, 3, 3, 3, 4 ,4};
    
    solution(arr);

    return 0;
}