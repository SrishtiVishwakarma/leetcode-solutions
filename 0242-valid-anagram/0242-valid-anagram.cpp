class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>c;

if(s.length()!=t.length()){
    return false;
}
        for(int i=0;i<s.length();i++){
        
                c[s[i]]++;
        }

        for(int i=0;i<t.length();i++){
        
                c[t[i]]--;
            }
        


for(auto it:c){
    if(it.second!=0){
    return false;
    }
}
      return true;  
    }
};