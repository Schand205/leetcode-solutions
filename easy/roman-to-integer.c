int romanToInt(char* s) {
    unsigned short i = 0, value = 0;
    while (s[i] != '\0') {
        if (s[i] == 'I') {
            if (s[i+1] == 'V' || s [i+1] == 'X') {
                if (s[i+1] == 'V') value += 4; 
                else value += 9; 
                i+=2;
            } else { value++; i++; }
        }
        else if (s[i] == 'V') {
            value += 5; i++;
        }
        else if (s[i] == 'X') {
            if (s[i+1] == 'L' || s [i+1] == 'C') {
                if (s[i+1] == 'L') value += 40; 
                else value += 90; 
                i+=2;
            } else { value += 10; i++; }
        }
        else if (s[i] == 'L') {
            value += 50; i++;
        }
        else if (s[i] == 'C') {
            if (s[i+1] == 'D' || s [i+1] == 'M') {
                if (s[i+1] == 'D') value += 400; 
                else value += 900; 
                i+=2;
            } else { value += 100; i++; }
        }
        else if (s[i] == 'D') {
            value += 500; i++;
        }
        else if (s[i] == 'M') {
            value += 1000; i++;
        }
    }
    return value;
}
