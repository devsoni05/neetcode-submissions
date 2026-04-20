class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if (s.empty()) {
            return 0;
        }
        vector<bool> check(260, 0);
        int len = INT_MIN;

        int i = 0;
        int j = 0;

        while (j < s.size()) {

            while (check[s[j]]) {
                check[s[i]] = 0;
                i++;
            }

            len = max(len, j - i + 1);
            check[s[j]] = 1;
            j++;
        }

        return len;
    }
};