class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> solution;

        for(int i=0;i<=n;i++){
            int temp=i;
            int count=0;
            while(temp!=0){
                int bit = temp&1;
                if(bit==1){
                    count=count+1;
                }
                temp=temp>>1;
            }
            solution.push_back(count);
        }
        return solution;
    }
};
