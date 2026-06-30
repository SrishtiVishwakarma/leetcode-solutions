class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n+1,true);
        int prime=0;
        for(int i=2;i<n;i++){
            if(isPrime[i]==true){
                prime++;

           
            for(int j=2*i;j<n;j+=i){
                isPrime[j]=false;
            }
            }
        }
       return prime;
    }
};