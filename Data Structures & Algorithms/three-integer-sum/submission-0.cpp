class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        int n = nums.size();

        for(int i = 0; i < n - 2; i++) {

            // Skip duplicate first elements
            if(i > 0 && nums[i] == nums[i-1]) {
                continue;
            }

            int left = i + 1;
            int right = n - 1;

            int target = -nums[i];

            while(left < right) {

                int sum = nums[left] + nums[right];

                if(sum < target) {
                    left++;
                }
                else if(sum > target) {
                    right--;
                }
                else {
                    // Found a valid triplet
                    ans.push_back({nums[i], nums[left], nums[right]});

                    left++;
                    right--;

                    // Skip duplicate left values
                    while(left < right && nums[left] == nums[left-1]) {
                        left++;
                    }

                    // Skip duplicate right values
                    while(left < right && nums[right] == nums[right+1]) {
                        right--;
                    }
                }
            }
        }

        return ans;
    }
};