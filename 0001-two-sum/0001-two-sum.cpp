class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int needed;

        for(int i=0;i<nums.size();i++){

            needed=target-nums[i];

       if(m.find(needed)!=m.end()){
        return{m[needed],i};
       }
       m[nums[i]]=i;
                }

                
            
        
        return {};
    }
};