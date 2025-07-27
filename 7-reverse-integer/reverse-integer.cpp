class Solution {
public:
    int reverse(int x) {
        int number = x;
        long long reversed_number = 0;

        while (number != 0) {
            int res = number%10;
            reversed_number = reversed_number * 10 + res;
            number /= 10;
            if(reversed_number > INT_MAX || reversed_number < INT_MIN) return 0;
        }

        return reversed_number;
    }
};