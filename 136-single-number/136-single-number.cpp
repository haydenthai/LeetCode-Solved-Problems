class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        
        
        int num, count = 0;
        map <int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
            //cout << "i: " << i << " nums[i]: " << nums[i] << " " << mp[nums[i]] << endl;
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(mp[nums[i]] == 1){
                return nums[i]; 
            }
        }
        
        
        return -1;
    }
};