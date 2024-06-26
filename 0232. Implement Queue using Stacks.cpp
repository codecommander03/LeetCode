class MyQueue {
public:
    stack<int> s;
    MyQueue() {
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        stack<int> temp;
        while(!s.empty()){
            int &x = s.top();
            s.pop();
            temp.push(x);
        }
        int ans = temp.top();
        temp.pop();
        while(!temp.empty()){
            int &x = temp.top();
            temp.pop();
            s.push(x);
        }
        //temp.clear();
        return ans;
    }
    
    int peek() {
        stack<int> temp;
        while(!s.empty()){
            int &x = s.top();
            s.pop();
            temp.push(x);
        }
        int ans = temp.top();
        while(!temp.empty()){
            int &x = temp.top();
            temp.pop();
            s.push(x);
        }
        //temp.clear();
        return ans;
    }
    
    bool empty() {
        return s.empty();
    }
};
