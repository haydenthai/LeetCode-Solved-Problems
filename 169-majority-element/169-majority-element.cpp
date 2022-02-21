class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map <int, int> mp;
        int freq = 0, maxIndex;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        // max = freq[0];
        // for(int i = 0; i < nums.size(); i++){
        //     if(freq[i] > max){
        //         max = i;
        //     }
        // }
        
        for( auto x: mp){
            cout << x.first << ", " << x.second << endl;
            if( x.second > freq){
                freq = x.second;
                maxIndex = x.first;
            }
        }
        return maxIndex;
        
    }
};