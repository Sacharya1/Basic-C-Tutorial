//Question: https://leetcode.com/problems/next-greater-element-i/



class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        int m= nums2.size();
        int res;
        vector<int>v;
        for (int i=0; i<n; i++){
            for (int j=0; j <m; j++){
                
                if(nums1[i]==nums2[j]){
                    
                   //cout<<j;
                    if (j==m-1)
                    { res=-1;
                    break;}
                    else{
                    for (int t=j+1; t<m;t++){
                         //cout<<t;
                        if (nums2[t]>nums2[j]) 
                        {res=nums2[t];
                        break;}
                        
                        
                        else {res=-1; }}
                    }
                }
                
                
                
            }
            
          v.push_back(res); 
            
        }

       return v; 
    }
};


