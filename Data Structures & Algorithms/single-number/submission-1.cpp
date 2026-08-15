class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<=nums.size()-1;i++){
            ans = ans ^ nums[i];
        }
        return ans;
    }
};
