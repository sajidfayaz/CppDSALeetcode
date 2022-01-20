int lengthOfLongestSubstring(string s) {
    set<char> set;
    int i=0, j=0, maxNum = 0;
    while(i<s.length()) {
        char c = s[i];
        while(set.count(c)) {
            set.erase(s[j]);
            j++;
        }
        set.insert(c);
        maxNum = max(maxNum, i-j+1);
        i++;
    }
    return maxNum;
}