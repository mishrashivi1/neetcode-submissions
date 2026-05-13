class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      unordered_map<int,int>mpp;  
      int res=0,currsum=0;
      mpp[0]=1;
      for(int a:nums)
      {
        currsum+=a;
        int diff=currsum-k;
        res+=mpp[diff];
        mpp[currsum]++;
      }
      return res;
    }
};