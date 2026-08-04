class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    int l=0, r=k-1;
    double maxSum=INT_MIN,sum;
int n=nums.size();


for(int i=l; i<=r;i++){
            sum+=nums[i];
        }
        maxSum=sum;

   for(int i=k; i<n;i++){
    sum=sum+nums[i]-nums[i-k];
    maxSum=max(maxSum,sum);
   }

return maxSum/k;
    }
};