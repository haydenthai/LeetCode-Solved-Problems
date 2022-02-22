class Solution {
public:
    int titleToNumber(string columnTitle) {
        int op = 0;
        for(int i = 0; columnTitle[i] != '\0'; i++){
            op = op * 26 +(columnTitle[i] - 'A' + 1);
        }
        
        return op;
    }
};