class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 =nums1.size(), n2=nums2.size();
        int i=0,j=0;
        
        int med=0;
        vector <int> nums3;
        
            while(i<n1 && j<n2){
                if(nums1[i]>nums2[j]){
                    nums3.push_back(nums2[j++]);
                }

                else {nums3.push_back(nums1[i++]);}
            }

            while(i<n1){
                nums3.push_back(nums1[i++]);
            }

            while(j<n2){
                nums3.push_back(nums2[j++]);
            }
        
        
        int k= n1+n2;

        if(k % 2==0){
            return (nums3[k/2] + nums3[k/2 - 1])/2.0;
            
        }
        else{
        return nums3[k/2];
        }
    }
};