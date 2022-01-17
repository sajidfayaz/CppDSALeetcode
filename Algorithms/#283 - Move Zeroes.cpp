void moveZeroes(vector<int>& nums) {
    int zeroes = 0;
    for(int i=0; i<nums.size(); i++) {
        if(nums[i] == 0 ) {
            zeroes++;
        }
    }
    
    int idx = 0;
    
    if(zeroes == nums.size() || zeroes == 0) {
        return;
    } else {
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] != 0) {
                nums[idx] = nums[i];
                if(i != idx)
                    nums[i] = 0;
                idx++;
            }
        }
    }
    
}