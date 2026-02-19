// Problem 242: Valid Anagram
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

    }
};

int main() {
    Solution sol;
    string s = "anagram";
    string t = "nagaram";
    bool result = sol.isAnagram(s, t);

    cout << "Output: " << (result ? "true" : "false") << endl;

    return 0;
}

