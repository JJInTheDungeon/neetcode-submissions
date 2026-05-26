class Solution {
public:
    bool isAnagram(string s, string t) {
        // quick length check
        if (s.length() != t.length()) {
            return false;
        }
        
        unordered_map<char, int> ans;
        // count frequencies in string s
        for (char c : s) {
            ans[c]++;
        }

        // decrement frequencies using string t
        for (char c : t) {
            ans[c]--;

            // if a character count goes below 0, t has more of this char than s
            if (ans[c] < 0) {
                return false;
            }
        }
        // if successfully matched every character
        return true;
    }
};
