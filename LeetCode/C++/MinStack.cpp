//This is Leetcode Problem number 155. Min Stack

class MinStack {
private:
    vector<pair<int,int>> stack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        
        if (stack.size() == 0) {
                stack.push_back({val, val});
            } else {
                stack.push_back({val, min(val, stack[stack.size() - 1].second)});
            }

    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        return stack[stack.size() -1].first;
        
    }
    
    int getMin() {
        return stack[stack.size() -1].second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */