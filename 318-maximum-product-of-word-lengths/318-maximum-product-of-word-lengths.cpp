class Solution {
public:
    bool checkChar(bitset<26> &a, bitset<26> &b){
        for(int i = 0; i< 26; i++){
            if(a[i] && b[i]){
                return true;
            }
        }
        return false;
    }
    
    int maxProduct(vector<string>& words) {
        int len = words.size();
        int res = 0;
        vector<bitset<26>> chars(len);
        for(int i = 0; i<words.size(); i++){
            
            for(auto &ch: words[i]){ //iterates through all the character in words
                chars[i][ch-'a'] = 1;
            }
            
            for(int j = 0; j < i; j++){
                if(!checkChar(chars[i], chars[j])){
                    res = max(res, (int)words[i].size()*(int)words[j].size() );
                }
            }
        }
        return res;
    }
};