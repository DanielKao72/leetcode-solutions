class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int inicio = 0, fin = 0;
        int max_sum = 0, actual_sum = 0;
        vector<bool> reps(1e+4 + 1);

        while (fin < nums.size()) {
            actual_sum += nums[fin];

            while (reps[nums[fin]] == true) {
                max_sum = max(max_sum, actual_sum - nums[fin]);
                actual_sum -= nums[inicio];
                reps[nums[inicio]] = false;
                inicio++;
            }
            reps[nums[fin]] = true;
            fin++;
        }

        return max(max_sum, actual_sum);
    }
};