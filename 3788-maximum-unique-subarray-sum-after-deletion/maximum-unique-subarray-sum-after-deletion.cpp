class Solution {
public:
    int maxSum(vector<int>& nums) {
        map<int, int> reps;
        int answer = 0;
        int max_negative = -101;
        int counter = 0;

        if (nums.size() == 1) return nums[0];

        for (int i = 0; i<nums.size(); i++) {
            if (nums[i] > 0 && reps.count(nums[i]) == 0) {
                answer += nums[i];
                reps[nums[i]]++;
            }
            else {
                max_negative = max(max_negative, nums[i]);
                counter++;
            }
        }

        if (counter == nums.size()) answer = max_negative;
        
        return answer;
    }
};