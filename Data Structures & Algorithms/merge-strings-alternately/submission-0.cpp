class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       int n=word1.size();
       int m=word2.size();
       int a=min(n,m);
       string ans="";
       int k=0,l=0;
       for(int i=0;i<a;i++)
       {
        ans+=word1[k++];
        ans+=word2[l++];
       } 
       while(k<n)
       {
        ans+=word1[k];
        k++;
       }
         while(l<m)
       {
        ans+=word2[l];
        l++;
       }
       return ans;
    }
};