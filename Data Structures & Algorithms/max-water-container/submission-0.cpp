class Solution {
public:
    int maxArea(vector<int>& heights) {
       int res=0;
       int l=0,r=heights.size()-1;
       while(l<r)
       {
        int ans=(r-l)*min(heights[l],heights[r]);
        res=max(res,ans);
        if(heights[l]<heights[r])
        l++;
        else
        r--;
       } 
       return res;
    }
};
