class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min1=INT_MAX;
        int max1=0;
    for(int i:prices){
        if(i<min1){
            min1=i;
        }else if(i-min1>max1){
            max1=i-min1;
        }
    }
    return max1;
    }
};