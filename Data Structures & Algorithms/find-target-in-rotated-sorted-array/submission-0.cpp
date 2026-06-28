class Solution {
    int PivotIndex(vector<int>& nums){
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        if(nums[start]<nums[end]){
            return start;
        }

        while(start<end){
            if(nums[0]<=nums[mid]){
                start=mid+1;
            }
            else{
                end=mid;
            }
            mid=start+(end-start)/2;
        }
        return mid;
    }
public:
    int search(vector<int>& nums, int target) {
        int pivot_index=PivotIndex(nums);

        if(target>=nums[pivot_index] && target<=nums[nums.size()-1] ){
            int start=pivot_index;
            int end=nums.size()-1;
            int mid=start+(end-start)/2;

            while(start<=end){
                if(nums[mid]>target){
                    end=mid-1;
                }
                if(nums[mid]<target){
                    start=mid+1;
                }
                if(nums[mid]==target){
                    return mid;
                }
                mid=start+(end-start)/2;
            }
        }

        else{
            int start=0;
            int end=pivot_index;
            int mid=start+(end-start)/2;

            while(start<=end){
                if(nums[mid]>target){
                    end=mid-1;
                }
                if(nums[mid]<target){
                    start=mid+1;
                }
                if(nums[mid]==target){
                    return mid;
                }
                mid=start+(end-start)/2;
            }
        }
        return -1;
    }
};
