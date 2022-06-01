class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> res;
        int runningTot = 0;
        for(int i=0; i < nums.size(); i++){
            runningTot += nums[i];
            res.push_back(runningTot);
        }
        return res;
    }
};