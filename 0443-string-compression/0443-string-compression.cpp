class Solution {
public:
    int compress(vector<char>& chars) {
        int idx=0,i=0;


while(i<chars.size()){
    char ch=chars[i];
    int count=0;

    while(i<chars.size() && chars[i]==ch){
        count++;
        i++;
    }

    if(count==1){
        chars[idx++]=ch;

    }else{
        chars[idx++]=ch;
        string str=to_string(count);

        for(char s:str){
        chars[idx++]=s;
    }
}
}

chars.resize(idx);
        return idx;
    
    }
};