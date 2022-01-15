int searchInsert(vector<int>& nums, int target) {
    int mid = nums.size()/2 - 1;
    int result = 0;
    if(nums.size() == 1) {
        if(nums[0] < target) {
            return 1;
        } else {
            return 0;
        }
    }
    else if(nums[mid] == target) {
        result = mid;
    } else if(nums[mid] > target) {
        while(mid) {
            if(nums[mid] == target || (nums[mid] > target && nums[mid-1] < target)) {
                result = mid;
            } else if((nums[mid] < target && mid == 0)) {
                result = mid+1;
            }
            mid--;
        }
    } else {
        while(mid < nums.size()) {
            if(nums[mid] == target || (nums[mid] > target && nums[mid-1] < target)) {
                result = mid;
            } else if(nums[mid] < target && mid == nums.size()-1) {
                result = mid+1;
            }
            mid++;
        }
    }

return result;
}