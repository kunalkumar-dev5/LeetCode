class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();if(n == 0 ) return 0;

        int left = 0, right = n-1;
         int leftMax = height[left];
         int rightMax = height[right];
         int water =0;

         while(left < right){
            if(height[left] <= height[right]){
                left++;
                leftMax = max(leftMax, height[left]);
                water += leftMax - height[left];
                int water = 0;
            }else{
                right--;
                rightMax = max(rightMax, height[right]);
                water += rightMax - height[right];
            }
         }
         return water;
    }
};