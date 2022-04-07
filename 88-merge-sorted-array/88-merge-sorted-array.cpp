class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if(m==0){
         for(int i=0;i<n;i++)
         {
             nums1[i] = nums2[i];
         }   
        }
        if(n==0){
            return;
        }
        int j=0;
        for(int i=0;i<m;i++){
            if(nums1[i]>nums2[j]){
                swap(nums1[i],nums2[j]);
                sort(nums2.begin(),nums2.end());
            }
        }
        for(int i=0;i<n;i++){
            nums1[i+m] = nums2[i];
        }
    }
};