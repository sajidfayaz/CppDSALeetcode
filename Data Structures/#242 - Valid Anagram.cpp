bool isAnagram(string s, string t) {
    unordered_map<char, int> mpS;
    unordered_map<char, int> mpT;
    
    for(int i=0; i<s.length(); i++) {
        mpS[s[i]]++;
    }
    
    for(int i=0; i<t.length(); i++) {
        mpT[t[i]]++;
    }
    
    return mpT == mpS;
}