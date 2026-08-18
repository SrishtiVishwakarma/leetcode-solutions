class Solution {
public:

int bs(vector<int>& nums, int target, int st,int end){

if(st<=end){
    int mid=st+(end-st)/2;

    if(target==nums[mid]){
        return mid;

    }else if(target<=nums[mid]){
       return bs(nums,target,st,mid-1);
    }else {
      return  bs(nums,target,mid+1,end);
    }
}


return st;

}


    int searchInsert(vector<int>& nums, int target) {
    int st=0, end=nums.size()-1;    
    
   return bs(nums,target,st,end);


    }
};