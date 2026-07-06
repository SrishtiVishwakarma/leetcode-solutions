class Solution {
public:
    int heightChecker(vector<int>& heights) {
    vector<int> expected (heights);
    int i=0, count=0;
    int n=heights.size();

for(i=0;i<n;i++){
  int  smallest=i;
  for(int j=i+1;j<n;j++){
    if(expected[j]<expected[smallest]){
        smallest=j;
    }
  }
  swap(expected[smallest], expected[i]);
}

    for(i=0;i<n;i++){
        if(heights[i]!=expected[i]){
            count++;
        }
    }
    return count;
    }
    
};