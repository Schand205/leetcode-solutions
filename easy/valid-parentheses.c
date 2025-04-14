bool isValid(char* s) {
    int length = strlen(s), open_1 = 0, open_2 = 0, open_3 = 0, open_brackets = 0, same_bracket = 0;
    char test_char, comp_char;
    bool valid = true;
    for(int i = 0; i < length; i++) {
        test_char = s[i];
        switch(test_char) {
            case '(': comp_char = ')'; open_1++; break;
            case '[': comp_char = ']'; open_2++; break;
            case '{': comp_char = '}'; open_3++; break;
            case ')': open_1--; break;
            case ']': open_2--; break;
            case '}': open_3--; break;
            }
        if(test_char == '(' || test_char == '[' || test_char == '{') {
            valid = false;
            for(int j = i+1; j <= length; j++) {
                if(s[j] == s[i]) same_bracket++;
                if(s[j] == '(' || s[j] == '[' || s[j] == '{') open_brackets++;
                if(s[j] == ')' || s[j]== ']' || s[j] == '}') {
                    open_brackets--;
                    if (comp_char == s[j]) {
                        if(same_bracket == 0) {
                            open_brackets++;
                            switch(test_char) {
                                case '(': open_1--; break;
                                case '[': open_2--; break;
                                case '{': open_3--; break;
                            }
                            valid = true; 
                            s[j] = '!';
                            s[i] = '!';
                            break; 
                        } else same_bracket--;
                    }
                }  
            }
        if (valid == false) return false;  
        }
    }
    if (open_3 != 0 || open_2 != 0 || open_1 != 0 || open_brackets != 0) return false;
    else return true;
}
