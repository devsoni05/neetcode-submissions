class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        vector<vector<string>> ans;
        for (int i = 0; i < strs.size(); i++) {
            string k = strs[i];
            sort(k.begin(), k.end());
            if (m.find(k) != m.end()) {
                m[k].push_back(strs[i]);
            }

            else {
                m[k].push_back(strs[i]);
            }
        }

        for (auto i : m) {
            ans.push_back(i.second);
        }

        return ans;
    }
};
