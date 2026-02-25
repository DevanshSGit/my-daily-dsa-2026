#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        
        for (int i = 0; i < nums.size(); ++i) {
            int diff = target - nums[i];
            if (seen.count(diff)) {
                return {seen[diff], i};
            }

            seen[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    Solution sol;
    vector<int> v = {2, 11, 7, 15};
    int target = 9;
    vector<int> result = sol.twoSum(v, target);

    if (!result.empty()) {
        cout << "[" << result[0] << ", " << result[1] << "]";
    } else {
        cout << "not found";
    }
    cout << endl;

    return 0;
}
