class Solution {
public:
    int findNthDigit(int n) {
        long b=9;
        long digit =1;
        long temp=1;
        while(n>b*digit){
            n-=b*digit;
            digit++;
            temp+=b;
            b*=10;
        }

        return to_string(temp+(n-1)/digit)[(n-1)%digit]-'0';
    }
};
