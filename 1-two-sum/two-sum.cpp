class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        map<int, int> m;
        vector<int> answer;
        int aux, second;

        for (int i = 0; i<nums.size(); i++) m[nums[i]]++;

        for (int i = 0; i<nums.size(); i++) {
            int k = target - nums[i];

            if (m.find(k) != m.end()) {
                if(nums[i] == k && m[k] == 1) continue;
                else {
                    answer.push_back(i);
                    aux = i+1;
                    second = k;
                    break;
                }
            }
        }

        for (int i = aux; i<nums.size(); i++) {
            if (nums[i] == second) {
                answer.push_back(i);
                break;
            }
        }

        return answer;
    }
};