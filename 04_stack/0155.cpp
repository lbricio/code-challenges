class MinStack {
private:
    deque<pair<int, int>> _stack;

public:
    MinStack() {
    }
    
    void push(int val) {
        int min_val = _stack.empty() ? val : min(val, _stack.back().second);
        _stack.push_back({val, min_val});
    }
    
    void pop() {
        _stack.pop_back();
    }
    
    int top() {
        return _stack.back().first;
    }
    
    int getMin() {
        return _stack.back().second;
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
