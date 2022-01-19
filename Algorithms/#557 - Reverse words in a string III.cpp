string reverseWords(string s) {
    int st = 0;
    int end;
    string finalString ="";
    for(int i=0; i<s.size(); i++) {
        if(s[i] == ' ') {
            end = i-1;
            string word;
            while(end >= st) {
                word.push_back(s[end]);
                end--;
            }
            finalString += word;
            finalString += ' ';
            st = i+1;
        }
    }

    end = s.size() - 1;
    while(end >= st) {
        finalString.push_back(s[end]);
        end--;
    }

    return finalString;
}