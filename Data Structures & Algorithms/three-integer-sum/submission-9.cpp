class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++){
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int k=-nums[i];
            int right=nums.size()-1;
            int left=i+1;
            
            while(left<right){
                 vector<int>tmp;
                if(nums[left]+nums[right]>k){
                    right--;
                }
                else if(nums[left]+nums[right]<k){
                    left++;
                }
                else{
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[left]);
                    tmp.push_back(nums[right]);
                    ans.push_back(tmp);
                    while (left < right && nums[left] == tmp[1]) left++;
                    while (left < right && nums[right] == tmp[2]) right--;
                }
            }
        }
        return ans;
    }
};