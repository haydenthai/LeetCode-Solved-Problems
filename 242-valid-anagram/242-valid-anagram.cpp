class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> hm;
        
        for(int i = 0; i < s.length(); i++){
            hm[s[i]]++;
        }
        for(int i = 0; i < t.length(); i++){
            hm[t[i]]--;
        }
        
        for(auto x: hm){
            if(x.second != 0){
                return false;
            }
        }
        
        
        
        return true;
    }
};