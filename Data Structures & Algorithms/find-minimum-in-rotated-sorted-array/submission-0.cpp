class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int ma=-1e9;
        for(auto x:nums){
            ma=max(ma,x);
        }
        if(nums[r]==ma){
            return nums[l];
        }
        for(int i=0;i<n;i++){
            if(nums[i]==ma){
                return nums[i+1];
            }
        }
        return 0;
    }
};