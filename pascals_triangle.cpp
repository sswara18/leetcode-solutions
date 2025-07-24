// File: pascals_triangle.cpp

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        for (int row = 0; row < numRows; ++row) {
            vector<int> newRow(row + 1, 1);  // Initialize row with 1s

            for (int col = 1; col < row; ++col) {
                newRow[col] = triangle[row - 1][col - 1] + triangle[row - 1][col];
            }

            triangle.push_back(newRow);
        }

        return triangle;
    }
};

// ----------------------------------
// 👇 Main Function (For VS Code Run)
// ----------------------------------
int main() {
    Solution sol;
    int numRows = 5;

    vector<vector<int>> result = sol.generate(numRows);

    cout << "Pascal's Triangle for numRows = " << numRows << ":\n";
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
