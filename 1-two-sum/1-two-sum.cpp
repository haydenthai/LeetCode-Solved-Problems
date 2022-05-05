class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hm;
        vector <int> res;
        
        for(int i = 0; i < nums.size(); i++){
            //um.find(23) == um.end()
            if( hm.find(target - nums[i]) == hm.end()){
                hm[nums[i]] = i;
            }else{
                res.push_back(i);
                res.push_back(hm[target - nums[i]]);
                return res;
            }
            
        }
        return res;
    }
};