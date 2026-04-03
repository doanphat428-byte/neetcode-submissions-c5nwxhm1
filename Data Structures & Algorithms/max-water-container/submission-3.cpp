class Solution {
public:
    int maxArea(vector<int>& heights) {
      int n=heights.size();
      int l=0;
      int r=n-1;
      int maxV=0;
      while(l<r){
        int k=r-l;
        if(heights[l]<heights[r]){
            maxV=max(heights[l]*k,maxV);
            l++;
        }else if(heights[l]>=heights[r]){
            maxV=max(heights[r]*k,maxV);
            r--;
        }
      }
      return maxV;
    }
};
