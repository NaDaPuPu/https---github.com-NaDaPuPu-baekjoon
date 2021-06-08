#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int a, b, v;
    double climbed_dist;
    
    cin >> a >> b >> v;

    climbed_dist = double(v - b) / double(a - b);

    cout << int(ceil(climbed_dist)) << endl;
    
    return 0;
}