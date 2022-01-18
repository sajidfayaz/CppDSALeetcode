void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int size = nums1.size()-n;
    int j=0;
    while(j<n) {
        nums1[size] = nums2[j];
        j++; size++;
    }

    sort(nums1.begin(), nums1.end());
}