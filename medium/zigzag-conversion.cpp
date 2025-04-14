class Solution {
public:
    string convert(string s, int numRows) {
        string new_word = "";
        vector<string> sub_s(numRows);
        size_t i = 0;
        while(i<s.size()) {
            for(int j = 0; j < numRows && i < s.size(); ++j) 
                sub_s[j].push_back(s[i++]);
            for(int j = numRows-2; j > 0 && i < s.size(); --j)
                sub_s[j].push_back(s[i++]);
        }
        for(int s = 0; s < numRows; ++s) {
            new_word = new_word + sub_s[s];
        }
        return new_word;
    }
};
