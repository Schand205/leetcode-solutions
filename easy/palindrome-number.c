bool isPalindrome(int x) {
    int cur_numb = 0, test_x = x;
    unsigned int mir_int = 0;
    if(x < 0) return false;
    else if(x < 10) return true;
    while (test_x >= 10) {
        mir_int *= 10;
        cur_numb = test_x % 10;
        test_x /= 10;
        mir_int += cur_numb;
    }
    mir_int *= 10;
    mir_int += test_x;
return (x == mir_int);
}
