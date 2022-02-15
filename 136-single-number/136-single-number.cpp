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

/*


for(int i = 0; i< nums.size(); i++)
    
    int count = 1
    for(int j = 0; j < nums.size(); j++){
        if(num[i] = num[j]){
            count++;
        }
    }
    if(count != 2){
        return num[i];
    }
}

*/