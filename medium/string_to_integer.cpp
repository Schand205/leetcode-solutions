class Solution {
public:
    int myAtoi(string s) {
        size_t i = 0;
        bool is_negativ = false;
        long ret = 0;
        while(std::isspace(s[i])) i++;
        if(s[i] == '-' || s[i] == '+') {
            if(s[i] == '-') is_negativ = true;
            i++;
        }
        while(s[i] >= 48 && s[i] <= 57) {
            if(ret * 10 + (s[i]-48) > pow(2, 31) - 1 && !is_negativ) {
                ret = pow(2, 31)-1; break; }
            else if(ret * 10 +(s[i]-48) > pow(2, 31) && is_negativ) {
                ret = pow(2, 31); break; }
            else {
                ret *= 10;
                ret += s[i]-48;
                i++; }
        }
        if(is_negativ) ret *= -1;
        return static_cast<int>(ret);
    }
};
