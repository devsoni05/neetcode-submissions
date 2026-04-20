class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need, window;
        
        for (char c : t) need[c]++;
        
        int have = 0, required = need.size();
        int i = 0;
        int minLen = INT_MAX, start = 0;

        for (int j = 0; j < s.size(); j++) {
            char c = s[j];
            window[c]++;

            if (need.count(c) && window[c] == need[c]) {
                have++;
            }

           
            while (have == required) {
                if (j - i + 1 < minLen) {
                    minLen = j - i + 1;
                    start = i;
                }

                window[s[i]]--;
                if (need.count(s[i]) && window[s[i]] < need[s[i]]) {
                    have--;
                }
                i++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};