class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.empty()&&t.empty()) return true;
        vector<int> a(26, 0);
        vector<int> b(26, 0);

        for (int i = 0; i < s.size(); i++) {
            int k = s[i] - 'a';
            a[k]++;
        }

        for (int i = 0; i < t.size(); i++) {
            int k = t[i] - 'a';
            b[k]++;
        }

        if (a == b) {
            return true;
        }

        return false;
    }
};
