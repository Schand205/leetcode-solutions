class Solution {
public:
    int reverse(int x) {
        if (10 > x && x > -10) return x;
        if (x == pow(-2, 31)) return 0;
        long rev_x = (x < 0) ? reverse_int(-x)*-1 : reverse_int(x);
        if(rev_x > pow(2, 31)-1 || rev_x < pow(-2, 31)) return 0;
        return (int)rev_x;
    }

private:
    long reverse_int(long x) {
        long x_rev = 0;
        while(x >= 1) {
            x_rev *= 10;
            x_rev += x%10;
            x /= 10;
        }
        return x_rev;
    }
};
