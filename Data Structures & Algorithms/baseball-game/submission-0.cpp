#include <cctype>

class Solution {
public:
    int calPoints(vector<string>& operation) {
       
        vector<int>a;
        int ans=0;
        for(int i=0;i<operation.size();i++)
        {
             if(operation[i]=="+")
            {
                int n=a.size();
                
          
                a.push_back(a[n-1]+a[n-2]);
            }
            else if(operation[i]=="C")
            {
                a.pop_back();
            }
            else if(operation[i]=="D")
            {
             
                int pev=a.back();
               int ans=2*pev;
               a.push_back(ans);
            }
            else
            {
                int ans=stoi(operation[i]);
              a.push_back(ans);
            }

        }
      int total=0;
      for(int i=0;i<a.size();i++)
      {
        total+=(a[i]);
      }
      return total;
    
    }
};