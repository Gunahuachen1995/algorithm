class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        if(nums.length < 3) return res;
        Arrays.sort(nums);
        for(int i = 0; i < nums.length; i++) {
            if(i > 0 && nums[i] == nums[i - 1])
                continue;
            int l = i + 1, r = nums.length - 1;
            while(l < r) {
                if(nums[i] + nums[l] + nums[r] == 0) {
                    res.add(Arrays.asList(nums[i], nums[l], nums[r]));
                    while(++ l < r && nums[l] == nums[l - 1]); // 跳过重复元素
                    while(l < -- r && nums[r] == nums[r + 1]); // 跳过重复元素
                    continue;
                }
                if(nums[i] + nums[l] + nums[r] < 0)
                    l++;
                else
                    r--;
            }
        }
        return res;
    }
}
