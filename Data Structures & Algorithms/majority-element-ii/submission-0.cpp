class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        map<int,int>mpp;
        for(int i:nums)
        {
            mpp[i]++;
        }
        for(auto a:mpp)
        {
            if(a.second>(n/3))
            {
                ans.push_back(a.first);
            }

        }
        return ans;
    }
};