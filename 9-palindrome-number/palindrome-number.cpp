class Solution {
public:
    bool isPalindrome(int x) {
        int res = 0;
        int number = x;
        long long reversed_number = 0;

        if (x < 0) return false;

        while (number != 0) {
            res = number%10;
            reversed_number = reversed_number * 10 + res;
            number /= 10;
        }

        return x == reversed_number;
    }
};