class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       vector<int>ans;
        map<int,int>mpp;
       

        for(int i=0;i<numbers.size();i++){
        int curr=numbers[i];
        int diff=target-curr;
        if(mpp.count(diff))
        {
           return {mpp[diff],i+1};
        }
        mpp[curr]=i+1;
        }
        return {};

    }
};
