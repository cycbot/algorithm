class Solution {
public:
    int divide(int dividend, int divisor) {
         if(!divisor||(dividend==INT_MIN&&divisor==-1))return INT_MAX;
         long long de=labs(dividend);
         long long ds=labs(divisor);
         int flag=((dividend < 0)^(divisor < 0))?1:0;
         int mul;
         int res=0;
         long long temp=ds;
         while(de>=ds){
             mul =1;
             while(de>=(temp<<1)){
                 temp <<= 1;
                 mul <<= 1;
             }
             de-=temp;
             res+=mul;
             temp=ds;
         }
         return flag==1?-res:res;
    }
};
