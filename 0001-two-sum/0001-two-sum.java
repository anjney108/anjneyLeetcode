class Solution {
    public int[] twoSum(int[] nums, int target) {
        int size=nums.length;
        int i=0,j=1;
        int n=target;
        while(i<size){
             n=target-nums[i];
            if(j<size && nums[j]!=n){
                j++;
                if(j==size){
                    i++;
                    j=i+1;

                }
            }
            else if (j < size && nums[j] == n) {
                System.out.println( i+" "+j); 
                return new int[] { i, j };  
            }
            
        }
        return new int[] {};
    }
}