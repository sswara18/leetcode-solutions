#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        int maxi = INT_MIN;

        int start = 0;
        int ansStart = -1, ansEnd = -1;

        for (int i = 0; i < n; ++i) {
            if (sum == 0) start = i;

            sum += arr[i];

            if (sum > maxi) {
                maxi = sum;
                ansStart = start;
                ansEnd = i;
            }

            if (sum < 0) {
                sum = 0;
            }
        }

        cout << "Maximum subarray: ";
        for (int i = ansStart; i <= ansEnd; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;

        return maxi;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int result = sol.maxSubArray(nums);
    cout << "Maximum subarray sum: " << result << endl;

    return 0;
}
