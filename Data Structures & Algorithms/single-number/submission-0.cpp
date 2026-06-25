class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int initialize=0;

        for(int i=0; i<=nums.size()-1;i++){
            initialize=initialize^nums[i];
        }
        return initialize;
    }
};
