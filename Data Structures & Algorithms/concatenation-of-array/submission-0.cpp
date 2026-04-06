class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>tmp;
        int k=2;
        while(k>0){
            for(int x:nums){
                tmp.push_back(x);
            }
            k--;
        } 
        return tmp;
    }
};