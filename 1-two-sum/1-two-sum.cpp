class Solution {
public:
    bool check_key(map<int, int> m, int key)
{
    // Key is not present
    if (m.find(key) == m.end())
        return true;
 
    return false;
}
    
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> mp;
        vector <int> res;
        
        
        
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(nums[i]) != mp.end()){
                
                int index = mp[nums[i]];
                res.push_back(index);
                res.push_back(i);
                return res;
                
            }else{
                //mp.insert(pair<int, int>(target-nums[i], i) );
                mp[target-nums[i]] = i;
            }
        }
        
        return res;
    }
};