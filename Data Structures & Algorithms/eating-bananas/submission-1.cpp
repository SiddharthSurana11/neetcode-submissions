class Solution {
     bool isFeasible (vector<int>& piles, int h, int mid){
        int total_hours=0;

        for(int i=0;i<=piles.size()-1;i++){
            total_hours=total_hours+((piles[i]+mid-1)/mid);
        }

        if(total_hours<=h){
            return true;
        }
        else{
            return false;
        }
     }

public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int start = 1;
        int end = *max_element(piles.begin(), piles.end());
        int mid = start + (end-start)/2;

        int ans = end;

        while(start<=end){

            if (isFeasible(piles,h,mid)){ //Answer Feasible hai.
                ans=mid;                       //And we can find more feasible ans in LEFT
                end=mid-1;
            }
            else{
                start=mid+1;  // matlab answer feasible nahi hai, right mein jaao
            }
            mid= start + (end-start)/2;
        }
        return ans;
    }
};
