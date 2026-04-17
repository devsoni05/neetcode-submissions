class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            int k = target - nums[i];
            if (m.find(k) != m.end()) {
                ans.push_back(i);
                ans.push_back(m[k]);
                sort(ans.begin(),ans.end());
                break;
            }
            m[nums[i]] = i;
        }
        return ans;
    }
};
