class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n=digits.size()-1;
        int i=n;

        while(i>=0){
            digits[i]+=1;

            if(digits[i]<=9){
                return digits;
            }else{
                digits[i]=0;
                if(i==0){
                    digits.insert(digits.begin(),1);
                }
            }
                i--;  

        }

return digits;

    }

};