//Question: https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n= nums.size();
        int res;
        if (target>nums[n-1]) {res=n ; }
            else if  (target<=nums[n-1]) {
        for (int i=0; i<n; ++i){
            
            if (nums[i]==target) {res= i; break;}
            
            else if ((target-nums[i])<0) {res=i ; break;}
            cout<<i;}
        }
            
        return res; 
    }
};
