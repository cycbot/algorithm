class Solution {
public:
    bool isChar(char s){
            return s>='a'&&s<='z';
        }
    bool isNumber(char s){
            return s>='0'&&s<='9';
        }
    bool isPalindrome(string s) {
        if(s=="")return true;

        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z'){
                s[i]+=32;
            }
        }
        for(int i=0,j=s.size()-1;i<j;){
            if(!isChar(s[i])&&!isNumber(s[i])){
                i++;
                continue;
            }
            if(!isChar(s[j])&&!isNumber(s[j])){
                --j;
                continue;
            }

            if(s[i]!=s[j])return false;
            i++;
            j--;

        }
        return true;


    }
};
