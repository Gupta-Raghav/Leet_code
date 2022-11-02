class CustomStack {
public:
    int size;
    vector<int> stack; 
    CustomStack(int maxSize) {
        size = maxSize;
    }
    
    void push(int x) {
        if(stack.size()<size){
            stack.push_back(x);
        }
    
    }
    
    int pop() {
        if(stack.size()!=0){
            int temp = stack.back();
            stack.pop_back();
            return temp;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        int i=0;
        while(k-- && i<stack.size()){
            stack[i] += val;
            i++;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */