class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=-1;
        int k=0;
        for(int x:nums){
            if(x==1){
                k++;
            }else{
                k=0;
            }
            i=max(k,i);
        }
        return i;
    }
};