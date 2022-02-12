class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> res(2*nums.size());
        for(int i = 0; i < nums.size()*2; i++){
            res[i] = nums[(i % nums.size())];
        }
        return res;
    }
};