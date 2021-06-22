#include <iostream>

using namespace std;

int factorial(int num) {
    if (num > 2) num *= factorial(num - 1);

    return num;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, result = 1;

    cin >> n;
    if (n != 0) result = factorial(n);
    cout << result;

    return 0;
}