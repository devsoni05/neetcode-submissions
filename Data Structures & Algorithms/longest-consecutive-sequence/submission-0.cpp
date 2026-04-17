class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         if (nums.empty())
            return 0;

        if (nums.size() == 1)
            return 1;

        sort(nums.begin(), nums.end());
        int ans = 1;
        int mainans = INT_MIN;
        int last_small = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (last_small + 1 == nums[i]) {
                last_small = nums[i];
                ans++;
            } else if (last_small == nums[i]) {
                last_small = nums[i];

            } else {
                last_small = nums[i];
                ans = 1;
            }

            mainans = max(mainans, ans);
        }
        return mainans;
    }
};
