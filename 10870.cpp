#include <iostream>

using namespace std;

int fibonacci(int num) {
    if (num <= 1) return num;

    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;

    cin >> n;
    cout << fibonacci(n);

    return 0;
}