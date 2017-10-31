class Solution {
public:
    int findLHS(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for (auto i = 0, lhs = 0, cnt1 = 0, cnt2 = 0; i <= nums.size(); ++i) {
        if (i == nums.size()) return lhs;
        if (i == 0 || nums[i] == nums[i - 1]) ++cnt1;
        else cnt2 = (nums[i - 1] + 1 == nums[i]) ? cnt1 : 0, cnt1 = 1;
        if (cnt1 > 0 && cnt2 > 0) lhs = max(lhs, cnt1 + cnt2);
    }
}
};