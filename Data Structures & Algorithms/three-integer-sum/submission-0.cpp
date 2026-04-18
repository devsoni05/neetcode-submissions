class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        set<vector<int>> s;
        for (int i = 0; i < nums.size(); i++) {
            int tar = -1 * nums[i];

            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {
                if (nums[j] + nums[k] == tar) {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    if (s.find(temp) == s.end()) {
                        ans.push_back(temp);
                        s.insert(temp);
                    }
                    j++;
                    k--;
                }

                else if (nums[j] + nums[k] < tar) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return ans;
    }
};
