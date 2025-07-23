class Solution {
public:
    bool checkDivisibility(int n) {
        int number = n;
        int digit_sum = 0, digit_product = 1;
        int digit;

        while (number != 0) {
            digit = number % 10;
            digit_sum += digit;
            digit_product *= digit;

            number /= 10;
        }

        return n % (digit_sum + digit_product) == 0;
    }
};