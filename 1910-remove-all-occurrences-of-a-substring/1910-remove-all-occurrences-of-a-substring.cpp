class Solution {
public:
    string removeOccurrences(string s, string part) {
        int sl=s.length();
        int pl=part.length();



    while(sl>0 && s.find(part)<sl){
        s.erase(s.find(part),part.length());
    }
    return s;
    }
};