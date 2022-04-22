class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector <string> res;
       
        int finishRow = s[4] - '0';
        int startRow = s[1] -   '0';
        int startChar = s[0];
        int finishChar = s[3];
        
        while(startChar <= finishChar){
            for(int i = startRow; i <= finishRow; i++){
                stringstream ss;
                ss << (char)startChar << (char)(i + '0');
                res.push_back(ss.str());
            }        
            startChar++;
        }
        return res;
    }
};