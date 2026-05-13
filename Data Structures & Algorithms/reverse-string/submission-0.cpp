class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            st.push(s[i]);
        }
       for(int i=0;i<s.size();i++)
        {
            int a=st.top();
            st.pop();
            s[i]=a;
        }
        
    }
};