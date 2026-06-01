class MyQueue {
    stack<int>s1,s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(!s1.empty())
        {
            int a=s1.top();
            s1.pop();
            s2.push(a);
        }
        int a=s2.top();
        s2.pop();
         while(!s2.empty())
        {
            int a=s2.top();
            s2.pop();
            s1.push(a);
        }
        return a;
    }
    
    int peek() {
          while(s1.size()>1)
        {
            int a=s1.top();
            s1.pop();
            s2.push(a);
        }
        int a=s1.top();
       
         while(!s2.empty())
        {
            int a=s2.top();
            s2.pop();
            s1.push(a);
        }
        return a;
    }
    
    bool empty() {
       return s1.empty(); 
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */