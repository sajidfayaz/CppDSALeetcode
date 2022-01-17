vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    int i=0, j=0;
    for( i=1; i<nums.size(); i++) {
        for(j=0; j<i; j++) {
            if(nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
    
    return ans;
}