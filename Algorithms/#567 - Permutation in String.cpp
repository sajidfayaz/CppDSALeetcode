bool checkInclusion(string s1, string s2) {
    unordered_map<char, int> mp;
    int size = s1.length();
    for(int i=0; i<size; i++) {
        mp[s1[i]]++;
    }
    
    if(s2.length() < s1.length()) {
        return false;
    }
    
    int i=0; unordered_map<char, int> tempMap;
    while(i<=s2.size()-size) {
        int j=i;
        while(j<i+size) {
            tempMap[s2[j]]++;
            j++;
        }
        
        if(mp == tempMap) {
            return true;
        } else {
            tempMap.clear();
        }
        
        i++;
    }

    return false;
}