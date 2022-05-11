class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int water  = -1;
        while(left < right){
            int h = min(height[left], height[right]);
            water = max(water, (right-left)*h);
            while(height[left] <= h and left < right) left++;
            while(height[right] <= h and left < right) right--;
        }
        
        return water;
    }
};