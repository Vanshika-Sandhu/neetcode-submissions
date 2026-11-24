class MinStack {
public:
    stack<int> stMain;
    stack<int> stMin;
    MinStack() {
        
    }
    
    void push(int val) {
        stMain.push(val);
        if(stMin.size() == 0)
            stMin.push(val);
        else if(stMin.top()>=val)
        {
            stMin.push(val);
        }
    }
    
    void pop() {

        if(stMain.size() == 0)
            return;
        int i = stMain.top();
        stMain.pop();
        if(stMin.top() == i)
            stMin.pop();
        
    }
    
    int top() {
        if(stMain.size() > 0)
            return stMain.top();
        return 0;
    }
    
    int getMin() {
        if(stMin.size()>0)
            return stMin.top();
        return 0;
    }
};
