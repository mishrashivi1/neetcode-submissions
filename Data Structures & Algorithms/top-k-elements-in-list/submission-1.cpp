class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     unordered_map<int,int>mpp;
     vector<int>ans;
     vector<pair<int,int>>b;
     for(int a:nums)
     {
        mpp[a]++;
     } 
       for(const auto &p:mpp)
       {
        b.push_back({p.second,p.first});
       }
       sort(b.rbegin(),b.rend());
    for(int i=0;i<k;++i)
    {
        ans.push_back(b[i].second);
    }
     return ans;
    }
};
