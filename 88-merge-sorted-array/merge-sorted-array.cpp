class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      while(n>0){
        nums1[m+n-1]=nums2[n-1];
        n--;
      }
      sort(nums1.begin(),nums1.end());
    }
};