class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>tmp;
        for(int i=0;i<nums.size();i++){
             tmp.insert(nums[i]);
        }
        if(tmp.size()==nums.size()){
            return false;
        }
        return true;
    }
};