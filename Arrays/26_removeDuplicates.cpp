#include<iostream>
#include<vector>
using namespace std;



class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
         for(int i=1;i<nums.size();i++){
             if(nums[k]!=nums[i]){
                 k++; 
                 nums[k]=nums[i];
    }
         }
    return k+1; 
    }
};

int main(){

  vector<int> nums = {1,1,2};

    Solution obj;
    int k = obj.removeDuplicates(nums);

    cout << "k = " << k << endl;

    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }



  return 0;

}