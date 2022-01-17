int maxSubArray(vector<int>& nums) {
    int ans = nums[0];
    int maxSum = nums[0];
    for(int i=1; i<nums.size(); i++) {
        maxSum = max(maxSum + nums[i], nums[i]);
        ans = max(ans, maxSum);
    }
    return ans;
}