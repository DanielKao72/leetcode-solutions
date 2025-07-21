class Solution {
public:
    int missingNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int inicio = 0, fin = nums.size() - 1;
        int mitad, numeroPerdido = nums.size();

        while (inicio <= fin) {
            mitad = inicio + (fin - inicio) / 2;

            if (nums[mitad] == mitad)
                inicio = mitad + 1;
            else if (nums[mitad] != mitad) {
                numeroPerdido = mitad;
                fin = mitad - 1;
            }
        }

        return numeroPerdido;
    }
};