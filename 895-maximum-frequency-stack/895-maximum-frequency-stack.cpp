class FreqStack {
public:
    //Hashmap hmFreq counts frequency of the elements
    //Hashmap hmStack is a map of stack
    //
    //If element "val" has n frequency, we will push "val" n times in hmStack[1], hmStack[2], hmStack[3].. hmStack[n]
    //maxFreq records the maximum frequency
    unordered_map<int, int> hmFreq;
        unordered_map<int, stack<int> > hmStack;
        int maxFreq = 0;
    

    
    FreqStack() {
            
    }
    
    //push(val) pushes val to hmStack[++hmFreq[val]]
    void push(int val) {
        maxFreq = max(maxFreq, ++hmFreq[val]);
        hmStack[hmFreq[val]].push(val);
    }
    //pops from the hmStack[maxFreq]
    int pop() {
        int mostFrequent = hmStack[maxFreq].top();
        hmStack[maxFreq].pop();
        if(!hmStack[hmFreq[mostFrequent]--].size()) maxFreq--;
        return mostFrequent;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */