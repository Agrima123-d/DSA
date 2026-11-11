class Solution {
public:
    bool check(vector<int>& nums) {

        vector<int> original = nums;

        sort(nums.begin(), nums.end());

        int n = nums.size();

        for(int x = 0; x < n; x++) {

            bool match = true;

            for(int i = 0; i < n; i++) {

                if(nums[i] != original[(i + x) % n]) {
                    match = false;
                    break;
                }
            }

            if(match) {
                return true;
            }
        }

        return false;
    }
};