class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ans=0;
        int i=1;
        for(int i=31;i>=0;i--){
            int bit=n&1;
            ans=ans|(bit<<i);
            n=n>>1;
        }
        return ans;
    }
};
