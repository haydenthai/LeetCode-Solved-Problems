class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0, left = 0, right = height.size()-1, leftHeight = 0, rightHeight = 0;
        while(left < right){
            if(height[left] < height[right]){
                if(height[left] >= leftHeight){
                    leftHeight = height[left];
                }else{
                    water += (leftHeight - height[left]);
                }
                left++;
            }else{
                if(height[right] >= rightHeight){
                    rightHeight = height[right];
                }else{
                    water += (rightHeight - height[right]);
                }
                right--;
            }
        }        
        
        
        return water;
    }
};