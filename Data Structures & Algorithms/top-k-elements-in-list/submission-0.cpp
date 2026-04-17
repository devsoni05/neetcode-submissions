class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         map<int, int> m;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (m.find(nums[i]) != m.end()) {
                m[nums[i]]++;
            }

            else {
                m[nums[i]]++;
            }
        }
        vector<pair<int, int>> v;

        for (auto& it : m) {
            v.push_back({it.second, it.first});
        }

        sort(v.rbegin(), v.rend());
        int a = 0;
        for (auto i : v) {
            if (a == k)
                break;
            ans.push_back(i.second);
            a++;
        }
        return ans;
    }
};
