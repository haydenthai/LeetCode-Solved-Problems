class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int moves = 0, median=nums[nums.size()/2];
        
        for(int i = 0; i<nums.size();i++){
            moves += abs(median - nums[i]);
        }
        return moves;
    }
};