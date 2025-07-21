class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> numberLetters;
        int longestPalindrome = 0;
        vector<int> impares;

        for (char c : s) {
            numberLetters[c]++;
        }

        for (auto letter : numberLetters) {
            if (letter.second % 2 == 0) 
                longestPalindrome += letter.second;
            else 
                impares.push_back(letter.second);
        }

        for (int i = 0; i<impares.size(); i++) {
            if (impares[i] != 1) {
                longestPalindrome += impares[i] - 1;
            }
        }

        if (impares.size() != 0) longestPalindrome++;

        return longestPalindrome;
    }
};