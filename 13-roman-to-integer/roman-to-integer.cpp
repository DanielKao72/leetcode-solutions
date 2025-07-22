class Solution {
public:
    int romanToInt(string s) {
        map<char, int> symbols = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        int answer = 0;

        for (int i = 0; i<s.size(); i++) {
            if (i != s.size()-1) {
                if (s[i] == 'I') {
                    if(s[i+1] == 'V') {
                        answer += 4;
                        i++;
                    }
                    else if (s[i+1] == 'X') {
                        answer += 9;
                        i++;
                    }
                    else {
                        answer += symbols[s[i]];
                    }
                }
                else if (s[i] == 'X') {
                    if(s[i+1] == 'L') {
                        answer += 40;
                        i++;
                    }
                    else if (s[i+1] == 'C') {
                        answer += 90;
                        i++;
                    }
                    else {
                        answer += symbols[s[i]];
                    }
                }
                else if (s[i] == 'C') {
                    if(s[i+1] == 'D') {
                        answer += 400;
                        i++;
                    }
                    else if (s[i+1] == 'M') {
                        answer += 900;
                        i++;
                    }
                    else {
                        answer += symbols[s[i]];
                    }
                }
                else {
                    answer += symbols[s[i]];
                }
            }
            else {
                answer += symbols[s[i]];
            }
        }
        return answer;
    }
};