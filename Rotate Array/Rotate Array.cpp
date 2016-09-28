class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n=nums.size();
       if(n==0||k<0)return;
       vector<int> nums2(n);
       for(int i=0;i<n;i++){
           nums2[i]=nums[i];
       }
       for(int i=0;i<n;i++){
           nums[(i+k)%n]=nums2[i];
       }
    }
};
