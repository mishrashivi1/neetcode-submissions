class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
     map<int,int>mpp;
     vector<int>ans;
     for(int a:nums)
     {
        mpp[a]++;
     }   
     for(auto a:mpp)
     {
        int b=a.second;
        for(int i=0;i<b;i++)
        {
            ans.push_back(a.first);
        }
     }
     return ans;
    }
};