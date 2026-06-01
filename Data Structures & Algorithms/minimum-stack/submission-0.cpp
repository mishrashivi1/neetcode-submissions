class MinStack {
    vector<int>ans;
public:
    MinStack() {
        
    }
    
    void push(int val) {
      ans.push_back(val);  
    }
    
    void pop() {
      
       ans.pop_back();
       
    }
    
    int top() {
        int a=ans.back();
        return a;
    }
    
    int getMin() {
       int a=*min_element(ans.begin(),ans.end());
       return a; 
    }
};
