class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> reps;
        int lucky_number = -1;

        for (int i = 0; i<arr.size(); i++) {
            reps[arr[i]]++;
        }

        for (auto number : reps) {
            if (number.first == number.second) {
                lucky_number = max(lucky_number, number.first);
            }
        }

        return lucky_number;
    }
};