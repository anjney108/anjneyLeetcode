class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i: nums){
            ans^= i; // n^n=0 and n^0=n
        }
        return ans;
    }
};