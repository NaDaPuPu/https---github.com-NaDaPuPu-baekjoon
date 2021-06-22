#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long double r;
    const long double PI = acos(-1); // 파이는 요렇게 정의할 것.

    cin >> r;

    cout<<fixed;
    cout.precision(6);

    cout << r * r * PI << "\n";
    cout << r * r * 2;
    
    return 0;
}