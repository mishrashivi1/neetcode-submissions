class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>mpp(nums.begin(),nums.end());
       
        int count=0;
        for(int a:mpp)
        {
            if(mpp.find(a-1)==mpp.end()){
            int current=a;
            int max=1;

            while(mpp.find(current+1)!=mpp.end())
            {
             max=max+1;
             current++;
            }

if(max>count)
count=max;
            }
        }
        return count;
    }
};
