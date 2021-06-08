#include <iostream>
#include <cmath>

using namespace std;

int a, b, t, result;

void func(int a, int b, int num, int temp) {
    if (temp == 3)
    {
        return;
    }

    if (b == 1)
    {
        func(a, b + 1, num + 1, temp);
        return;
    }
    
    int i = 1;
    while (a >= pow(b, i))
    {
        i++;
    }

    if (num == 0)
    {
        result = i;
        func(a, b + 1, num + 1, temp);
    } else if (i + num < result)
    {
        result = i + num;
        func(a, b + 1, num + 1, temp);
    } else {
        func(a, b + 1, num + 1, temp + 1);
    }
}

int main() {
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        result = 100000000;
        cin >> a >> b;
        
        func(a, b, 0, 0);
        cout << result << "\n";
    }

    return 0;
}