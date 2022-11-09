class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_crr = nums[0];
        int max_glob = nums[0];
       for(int  i = 1; i < nums.size();i++){
           max_crr = max(nums[i], max_crr + nums[i] );
           if(max_glob < max_crr) max_glob = max_crr;
       }
        return max_glob;
    }
};