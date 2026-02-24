// Problem 242: Valid Anagram
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    // bool isAnagram(string s, string t) {
    //     sort(s.begin(), s.end());
    //     sort(t.begin(), t.end());
    //     return s == t;
    // }

    // O(n) approach

    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        vector<int> count(26, 0);

        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int x : count) {
            if (x != 0) return false;
        }

        return true;
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

