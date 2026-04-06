class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            int k=0;
            for(int j=i+1;j<arr.size();j++){
                k=max(k,arr[j]);
            }
            arr[i]=k;
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
};