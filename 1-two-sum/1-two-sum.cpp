// bool check_key(map<int, int> m, int key){
    
//     if(m.find(key) != m.end()){
//         return true;
//     }
    
//     return false;
// }


class Solution {
public:
    
    
    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> res;
        map <int, int> hm;
        
        
        for(int i = 0; i< nums.size(); i++){
            
//             hm.find(nums[i]) != hm.end()
            
// 
            if(     hm.find(nums[i]) != hm.end()     ){
                res.push_back(i);
                res.push_back(hm[nums[i]]);
                return res;
            }else{
                // hm.put(i, nums[i]);
                //hm.insert({i, nums[i]});
                
                hm[target-nums[i]] = i;
            }
        }
        
        return res;
    }
};