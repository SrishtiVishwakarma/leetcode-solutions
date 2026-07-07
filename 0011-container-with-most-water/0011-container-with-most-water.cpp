class Solution {
public:
    int maxArea(vector<int>& height) {
        int mW=0; 
        int left=0, right=height.size()-1;

        while(left<right){
           int width=right-left;
           int h=min(height[left], height[right]);
            mW= max(mW, width* h);

            height[left]<height[right]? left++:right--;


        }


return mW;
        
    }
};