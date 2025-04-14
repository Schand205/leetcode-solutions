class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        int longest = s.size() == 0 ? 0 : 1;
        for(int i = 0; i < s.size()-longest; ++i) {
            bool found = false;
            for(int j = i+1; j < s.size() && !found; ++j) {
                for(int c = j-1; c >= i; c--) {
                    if(s[j] == s[c]) {
                        found = true;
                        break;
                    }
                }
                if(j-i >= longest) {
                    if(!found && j+1 == s.size()) {
                        longest = j-i+1;
                    } else {
                        longest = j-i;
                    }
                }      
            }
        }
        return longest;
    }
};
