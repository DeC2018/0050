#include <iostream>
#include <cmath>

class Solution {
public:
    double myPow(double x, int n) {
        if (n < 0) {
            x = 1 / x;
        }

        long num = labs(n);

        double pow = 1;

        while (num) { // equivalent to while(num != 0)
            if (num & 1) { // equivalent to if((num & 1) != 0)
                pow *= x;
            }

            x *= x;
            num >>= 1;
        }

        return pow;
    }
};

int main() {
    Solution solution;

    double x1 = 2.00000;
    int n1 = 10;
    double result1 = solution.myPow(x1, n1);
    std::cout << "Input: x = " << x1 << ", n = " << n1 << std::endl;
    std::cout << "Output: " << result1 << std::endl;

    double x2 = 2.10000;
    int n2 = 3;
    double result2 = solution.myPow(x2, n2);
    std::cout << "Input: x = " << x2 << ", n = " << n2 << std::endl;
    std::cout << "Output: " << result2 << std::endl;

    double x3 = 2.00000;
    int n3 = -2;
    double result3 = solution.myPow(x3, n3);
    std::cout << "Input: x = " << x3 << ", n = " << n3 << std::endl;
    std::cout << "Output: " << result3 << std::endl;

    return 0;
}
