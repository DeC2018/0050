#include <stdio.h>
#include <stdlib.h>

double myPow(double x, int n) {
    if (n == 0) {
        return 1.0;
    }

    long long N = n;
    if (N < 0) {
        x = 1 / x;
        N = -N;
    }

    double result = 1.0;
    while (N > 0) {
        if (N % 2 == 1) {
            result *= x;
        }
        x *= x;
        N /= 2;
    }

    return result;
}

int main() {
    double x1 = 2.00000;
    int n1 = 10;
    double result1 = myPow(x1, n1);
    printf("Input: x = %.5f, n = %d\n", x1, n1);
    printf("Output: %.5f\n", result1);

    double x2 = 2.10000;
    int n2 = 3;
    double result2 = myPow(x2, n2);
    printf("Input: x = %.5f, n = %d\n", x2, n2);
    printf("Output: %.5f\n", result2);

    double x3 = 2.00000;
    int n3 = -2;
    double result3 = myPow(x3, n3);
    printf("Input: x = %.5f, n = %d\n", x3, n3);
    printf("Output: %.5f\n", result3);

    return 0;
}
