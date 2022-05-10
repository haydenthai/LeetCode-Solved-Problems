class Solution {
public:
    void recursion(vector<vector<int>>& res, vector<int> sums, int k, int n){
        if(sums.size() == k and n == 0){
            res.push_back(sums);
            return;
        }
        
        if(sums.size() < k){
            
            for(int i = sums.empty() ? 1 : sums.back() + 1; i <= 9; i++){

                if(n - i < 0){
                    break;
                }
                sums.push_back(i);
                recursion(res, sums, k, n-i);
                sums.pop_back();
            }
            
            
            
        }
    }
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> sums;
        recursion(res, sums, k, n);
        return res;
    }
};