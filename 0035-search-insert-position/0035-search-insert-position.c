int searchInsert(int* nums, int numsSize, int target) {
    int beg=0,end=numsSize-1,loc=-1;
    while(beg<=end){
      int  mid=(beg+end)/2;
        if(target==nums[mid]){
            loc=mid;
            break;
        }
        else if(target<nums[mid]) {
            end=mid-1;
        }
        else {
            beg=mid+1;
        }}
        if(loc==-1){
            loc=beg;
        }
    
    return loc;
}