class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int currsum=nums.at(0);
        // int maxsum=nums[0];
        // for(int i=1;i<nums.size();i++){
        //     currsum=max(nums[i],currsum+nums[i]);
        //     maxsum=max(maxsum,currsum);
        // } 

        int maxsum=INT_MIN;
        int currsum=0;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            maxsum=max(maxsum,currsum);
            if(currsum<0)
             currsum=0;
        }
        return maxsum;
    } 
};