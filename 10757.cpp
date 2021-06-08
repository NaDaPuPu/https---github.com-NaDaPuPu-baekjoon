#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    string a, b, temp;

    getline(cin, a, ' ');
    getline(cin, b);

    if (a.length() < b.length())
    {
        temp = a;
        a = b;
        b = temp;
    }
    
    int result[a.length() + 1];
    fill_n(result, a.length() + 1, 0);

    for (int i = 0; i < a.length(); i++)
    {
        if (b.length() > i)
        {
            int sum = int(a[a.length() - 1 - i]) + int(b[b.length() - 1 - i]) - 96; // 숫자 하나 당 '0'의 값만큼 빼줌
            
            result[a.length() - i] += sum;
        } else {
            result[a.length() - i] += (int(a[a.length() - 1 - i]) - 48);
        }
        
        if (result[a.length() - i] >= 10)
        {
            result[a.length() - i] -= 10;
            result[a.length() - i - 1] += 1;
        }
        
    }
    
    for (int i = 1; i < sizeof(result) / sizeof(result[0]); i++)
    {
        if (i == 1 && result[0] != 0)
        {
            cout << result[0];
        }
        cout << result[i];
    }
    
    return 0;
}