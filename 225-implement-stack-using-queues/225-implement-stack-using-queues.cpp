class MyStack {

private:
    queue <int> stack;
    
public:
    MyStack() {
        
    }
    
    void push(int x) {
        stack.push(x);
        for(int i = 1; i < stack.size(); i++){
            stack.push(stack.front());
            stack.pop();
        }
    }
    
    int pop() {
        int temp = stack.front();
        stack.pop();
        return temp;
    }
    
    int top() {
        return stack.front();
    }
    
    bool empty() {
        return stack.empty();
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