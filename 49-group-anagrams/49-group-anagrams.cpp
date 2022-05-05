class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() == 1){
            return {{strs[0]}}; 
        }
        
        
        unordered_map <string, vector<string>> hm;
        for(int i = 0; i < strs.size(); i++){
            string t = strs[i];
            sort(strs[i].begin(), strs[i].end());
            hm[strs[i]].push_back(t);
            
        }
        vector <vector <string> > res;
        for(auto i = hm.begin(); i != hm.end(); i++){
            res.push_back(i->second );
        }
        
        return res;
    }
};