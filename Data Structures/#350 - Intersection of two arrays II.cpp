vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> mp1;
    unordered_map<int, int> mp2;
    vector<int> ans;
    
    for(int i=0; i<nums1.size(); i++) {
        mp1[nums1[i]]++;
    }
    
    for(int i=0; i<nums2.size(); i++) {
        mp2[nums2[i]]++;
    }
    
    for(auto x : mp1) {
        if(mp2.find(x.first) != mp2.end()) {
            int minNum = min(x.second, mp2.at(x.first));
            while(minNum--) {
                ans.push_back(x.first);
            }
        }
    }
    return ans;
}