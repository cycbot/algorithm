class Solution {
public:
    string multiply(string num1, string num2) {
          vector<int> res(num1.length()+num2.length(),0);
          for(int i=num1.length()-1;i>=0;i--){

              for(int j=num2.length()-1;j>=0;j--){
                  res[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
                  res[i+j]+=res[i+j+1]/10;
                  res[i+j+1]%=10;
              }
          }

          string ans="";
          for(int i=0;i<res.size();i++){
              if(ans.size()||res[i])ans.push_back(res[i]+'0');
          }
          return ans.empty()?"0":ans;
    }
};
