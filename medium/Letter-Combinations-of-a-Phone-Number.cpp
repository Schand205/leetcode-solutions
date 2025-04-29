class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ret;
        for(int i = 0; i < digits.size(); ++i) {
            switch(digits[i]) {
                case '2': fuse_string(ret, {"a", "b", "c"}); break;
                case '3': fuse_string(ret, {"d", "e", "f"}); break;
                case '4': fuse_string(ret, {"g", "h", "i"}); break;
                case '5': fuse_string(ret, {"j", "k", "l"}); break;
                case '6': fuse_string(ret, {"m", "n", "o"}); break;
                case '7': fuse_string(ret, {"p", "q", "r", "s"}); break;
                case '8': fuse_string(ret, {"t", "u", "v"}); break;
                case '9': fuse_string(ret, {"w", "x", "y", "z"}); break;
            }
        }
        return ret;
    }
private:
    void fuse_string(vector<string> &old, initializer_list<string> letter) {
        if(old.size() == 0) {
            old = letter;
            return;
        }
        vector<string> temp;
        for(string bef : old) {
            for(auto let : letter) {
                string new_str = bef+let;
                temp.push_back(new_str);
            }
        }
        old = temp;
    }
};
