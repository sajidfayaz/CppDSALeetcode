void reverseString(vector<char>& s) {
    // reverse(s.begin(), s.end());
    // The most obvious and easiest way is to use the built-in reverse function
    int n = s.size() - 1;
    for(int i=0; i<s.size()/2; i++) {
        char temp = s[i];
        s[i] = s[n-i];
        s[n-i] = temp;
    }
}