class Solution {
public:
    bool isValid(string s) {
        stack<int> open_brackets;

        if (s.size() % 2 != 0) return false;

        for (int i = 0; i<s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                open_brackets.push(s[i]);
            else {
                if (open_brackets.empty()) return false;

                if ((open_brackets.top() == '(' && s[i] == ')') || 
                (open_brackets.top() == '{' && s[i] == '}') || 
                (open_brackets.top() == '[' && s[i] == ']'))
                    open_brackets.pop();
                else
                    return false;
            }
        }

        return open_brackets.empty();
    }
};