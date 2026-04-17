class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
 vector<int> pre(nums.size(), 1);
        vector<int> suff(nums.size(), 1);
        vector<int> ans;
        int p = 1;
        for (int i = 0; i < nums.size(); i++) {
            pre[i] = p;
            p *= nums[i];
        }

        int s = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            suff[i] = s;
            s *= nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(pre[i] * suff[i]);
        }

        return ans;
    }
};
