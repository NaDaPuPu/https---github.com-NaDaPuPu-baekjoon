#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int a, b;
    

    cin >> a >> b;

    if(a > b) {
        cout << ">" << endl;
    } else if(a < b) {
        cout << "<" << endl;
    } else {
        cout << "==" << endl;
    }

    return 0;
}