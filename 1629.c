#include <stdio.h>
int a, b, c;

long long calc(int a, int b) {
    if (b == 0) return 1;

    long long save = calc(a, b / 2);
    long long result = save * save % c;
    if (b % 2) result = result * a % c;
    return result;
}

int main() {
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", calc(a, b));
}