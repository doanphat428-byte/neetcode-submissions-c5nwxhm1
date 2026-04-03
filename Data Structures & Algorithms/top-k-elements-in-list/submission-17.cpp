class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int>giatri;
        vector<int>solan;
        stack<int>qq;
        for(int i=0;i<nums.size();i++){
            if(!qq.empty()&&nums[i]!=qq.top()){
                giatri.push_back(qq.top());
                solan.push_back(qq.size());
                while(!qq.empty()){
                    qq.pop();
                }
                qq.push(nums[i]);
            }else{
                qq.push(nums[i]);
            }
        }
        if(!qq.empty()){
            giatri.push_back(qq.top());
            solan.push_back(qq.size());
        }
        for(int i=0;i<solan.size();i++){
            for(int j=i+1;j<solan.size();j++){
                if(solan[i]<solan[j]){
                    swap(solan[i],solan[j]);
                    swap(giatri[i],giatri[j]);
                }
            }
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(giatri[i]);
        }
        return ans;
    }
};
