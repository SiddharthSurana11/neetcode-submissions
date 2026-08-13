class Solution {

    int PivotElementIndex(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        // Array is already sorted
        if (nums[start] <= nums[end]) {
            return 0;
        }

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] >= nums[0]) {
                start = mid + 1;
            }
            else {
                end = mid;
            }
        }

        return start;
    }

public:
    int search(vector<int>& nums, int target) {

        int pivot = PivotElementIndex(nums);

        int start;
        int end;

        // No rotation
        if (pivot == 0) {
            start = 0;
            end = nums.size() - 1;
        }
        // Target belongs to left sorted portion
        else if (target >= nums[0]) {
            start = 0;
            end = pivot - 1;
        }
        // Target belongs to right sorted portion
        else {
            start = pivot;
            end = nums.size() - 1;
        }

        // Normal binary search
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return -1;
    }
};