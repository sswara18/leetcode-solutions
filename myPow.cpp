#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        double result = 1.0;
        while (N) {
            if (N % 2 == 1) {
                result *= x;
            }
            x *= x;
            N /= 2;
        }
        return result;
    }
};

int main() {
    Solution sol;
    double x = 2.0;
    int n = -2;

    double res = sol.myPow(x, n);
    cout << "Result: " << res << endl;

    return 0;
}
