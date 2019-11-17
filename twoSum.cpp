//Question: https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int n=nums.size();
       vector<int>t;

        int i=0;
        int j=n-1;
        
        while(i<j){
    if (nums[i]+nums[j]== target)
       
   {t.push_back(i);
        t.push_back(j);
        }
        else if ((nums[i]+nums[j])> target){j=j-1;}
        
        
        else if ((nums[i]+nums[j])< target) {i=i+1;} 
        
                 
        } return t;
    } 
   
};
