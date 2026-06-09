class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // for (int i = 0 ; i < nums.size() ; i++){
        //     int max = nums.size()/2;
        //     int count = 0;
        //     for ( int j = 0 ; j < nums.size() ; j++){
        //         if (nums[i] == nums[j]){
        //             count ++;
        //             }
        //         }
        //         if (count > max){
        //                 return nums[i];
        //     }
        // }
        // return 0;

        // sort(nums.begin(), nums.end());
        // int freq = 1, ans = nums[0];
        // if (nums.size()==1){
        //     return ans;
        // }
        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] == nums[i - 1]) {
        //         freq++;
        //         ans = nums[i];
        //     } else {
        //         freq = 1, ans = nums[0];
        //     }
        //     if (freq > nums.size() / 2) {
        //         return ans;
        //     }
        // }
        // return 0;


        int freq = 0 , ans = 0;
        for (int i = 0 ; i < nums.size() ; i++){
            if ( freq == 0 ){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;
    }
};