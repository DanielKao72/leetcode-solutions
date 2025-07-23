class Solution {
public:
    bool isPalindrome(int x) {
        string number = to_string(x);
        int fin = number.size() - 1;
        bool answer = true;

        for (int i = 0; i<number.size()/2; i++) {
            if (number[i] != number[fin]) {
                answer = false;
                break;
            }
            fin--;
        }

        return answer;
    }
};