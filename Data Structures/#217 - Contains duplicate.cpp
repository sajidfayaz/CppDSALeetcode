bool containsDuplicate(vector<int>& nums) {
    bool flag = false;
    unordered_map<int, int> checked;
    for(auto i : nums) {
        checked[i]++;
    }
    
    for(auto k : checked) {
        if(k.second > 1) {
            flag = true;
            break;
        }
    }
    
    return flag;
}