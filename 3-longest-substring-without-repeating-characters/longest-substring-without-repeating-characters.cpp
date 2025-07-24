class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int inicio = 0, fin = 0;
        int max_string = 0, actual_string = 0;
        map<char, int> reps;

        while (fin < s.size()) {
            while (reps.count(s[fin]) == 1) {
                reps.erase(s[inicio]);
                max_string = max(max_string, actual_string);
                inicio++;
                actual_string--;
            }
            reps[s[fin]]++;
            fin++;
            actual_string++;
        }

        return max(max_string, actual_string);
    }
};