//Question:https://leetcode.com/problems/median-of-two-sorted-arrays/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n= nums1.size();
        int m= nums2.size();
        vector<int> newAr;
        float median;
        
        for (int i=0; i<(m+n);i++){
            
            if (i<n){
                newAr.push_back(nums1[i]);}
                else {
                    
                    newAr.push_back(nums2[i-n]);
                }
              
            
        }
         sort(newAr.begin(), newAr.end());
        if ((m+n)%2==0){
            
            float first=(m+n)/2.0;
            float second= first+1;
           
            //cout<<first<<second<<y;
           median = (newAr[first-1]+newAr[second-1])/2.0;
            
            
        } else 
        {int val=(m+n+1)/2.0;
        median= newAr[val-1];}
        
        return median;
    } 
};
