void rotate(vector<int>& nums, int k) {
    vector<int> rotated(nums.size());
    int idx;
    if(k > nums.size()) {
        // idx = k/nums.size();
        // k = k-nums.size();
        while(k>nums.size()) {
            k = k-nums.size();
            idx = nums.size() - k;
        }
    } else {
        idx = nums.size() - k;
    }
    
    if(nums.size() == 1) {
        rotated = nums;
    } else {
    for(int i=0, j=idx; j<nums.size(); i++, j++) {
        rotated[i] = nums[j];
    }
    
    for(int l = k, m=0; m<idx; l++, m++) {
        rotated[l] = nums[m];
    }
    }
    nums = rotated;
}