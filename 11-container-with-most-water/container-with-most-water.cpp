class Solution {
public:
    int maxArea(vector<int>& height) {
        // int maxWater = 0 , width , area , maxHeight;
        // for ( int i = 0 ; i < height.size()-1 ; i++){
        //     for ( int j = i + 1 ; j < height.size() ; j++){
        //         width = j-i;
        //         maxHeight = min ( height[i] , height[j]);
        //         area = width * maxHeight;
        //         maxWater = max( area , maxWater);
        //     }
        // }
        // return maxWater;
        int maxWater = 0 , right = height.size() - 1 , left = 0 , width , maxHeight , area ;
        while (right > left) {
            width = right - left;
            maxHeight = min ( height[right] , height[left]);
            area = width * maxHeight ;
            maxWater = max ( area , maxWater );

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
            
        }
        return maxWater; 
    }
};