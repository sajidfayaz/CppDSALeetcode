bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> mp;
    unordered_map<char, int> rn;
    
    if(ransomNote.length() > magazine.length()) {
        return false;
    }
    
    for(int i=0; i<magazine.length(); i++) {
        mp[magazine[i]]++;
    }
    
    for(int i=0; i<ransomNote.length(); i++) {
        rn[ransomNote[i]]++;
    }
    bool flag = false;
    for(auto it : rn) {
        if(mp.find(it.first) != mp.end()) {
            if(mp.at(it.first) >= it.second) {
                flag = true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
    
    return flag;
}