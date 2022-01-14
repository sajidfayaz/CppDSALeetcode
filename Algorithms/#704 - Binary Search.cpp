int search(vector<int>& nums, int target) {
    int idx = nums.size()/2;
    int ans = -1;
    if(target > nums[idx]) {
        for(int i=idx; i<nums.size(); i++) {
            if(nums[i] == target) {
                ans = i;
            }
        }
    } else if (target <= nums[idx]) {
        for(int j=0; j<=idx; j++) {
            if(nums[j] == target) {
                ans = j;
            }
        }
    }

    return ans;
}