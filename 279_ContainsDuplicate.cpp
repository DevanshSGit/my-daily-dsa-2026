// Problem 279: Contains Duplicate
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // for (int i = 0; i < nums.size(); ++i) {
        //     for (int j = i + 1; j < nums.size(); ++j) {
        //         if (nums[i] == nums[j]) {
        //             return true;
        //         }
        //     }
        // }
        // return false;
        unordered_set<int> seen;

        for (int n : nums) {
            if (seen.find(n) != seen.end()) {
                return true;
            }
            seen.insert(n);
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> input = {1, 2, 1};
    bool result = sol.containsDuplicate(input);

    cout << "Output: " << (result ? "true" : "false") << endl;

    return 0;
}

