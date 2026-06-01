#include<queue>
class MyStack {
    queue<int>ans;
    queue<int>ans2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
         ans2.push(x);
        while (!ans.empty()) {
            ans2.push(ans.front());
            ans.pop();
        }
        swap(ans, ans2);
    }
    
    int pop() {
       int a=ans.front();
       ans.pop();
       return a;
    }
    
    int top() {
        
        return ans.front();
    }
    
    bool empty() {
        
        return (ans.size()==0)?true:false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */