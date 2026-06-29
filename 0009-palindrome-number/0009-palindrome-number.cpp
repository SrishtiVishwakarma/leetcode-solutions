class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        int ans=0;

        int digit=0;

        while(x!=0){
            
            digit=x%10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return 0;
            }
            ans=(ans*10)+digit;
            x=x/10;
       
      
        }
        if(num<0){
            return false;
        }

        if(num==ans){
            return true;
        }else{
            return false;
        }
    }
};