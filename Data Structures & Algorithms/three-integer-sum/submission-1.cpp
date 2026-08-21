class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        vector<vector<int>> solution;

        while(i<nums.size()-2){
            int left = i+1;
            int right = nums.size()-1;
            int target = -(nums[i]);
        
            if(i>0 && nums[i]==nums[i-1]){
                i++;
                continue;
            }
            else{
                while(left<right){
                    if(nums[left]+nums[right]<target){
                        left++;
                    }
                    else if(nums[left]+nums[right]>target){
                        right--;
                    }
                    else if(nums[left]+nums[right]==target){
                        solution.push_back({nums[i],nums[left],nums[right]});
                        left++;
                        right--;
                        while(left < right && nums[left] == nums[left-1]){
                            left++;
                        }
                        while(left < right && nums[right] == nums[right+1]){
                            right--;
                        }

                        }
                    }
                }
                 i++;

            }
            return solution;
        }
};