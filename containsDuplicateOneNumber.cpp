//Question: class Solution {
public:
    bool containsDuplicate(vector<int>& num) {
        
        int n= num.size();
        sort(num.begin(), num.end());
        int count=0;
      
        if(n==0 )  count=0;
        else if(n==1) count=0;
      else {
        for(int i=0; i<n-1; ++i){
           
                
             if (num[i]==num[i+1])   count=count+1;
                                     
                                     
                else count=count; }
        }
     
        if(count>0) return true; 
        else return false; 
    }
};


class Solution {
public:
    bool containsDuplicate(vector<int>& num) {
        
        int n= num.size();
        sort(num.begin(), num.end());
        int count=0;
      
        if(n==0 )  count=0;
        else if(n==1) count=0;
      else {
        for(int i=0; i<n-1; ++i){
           
                
             if (num[i]==num[i+1])   count=count+1;
                                     
                                     
                else count=count; }
        }
     
        if(count>0) return true; 
        else return false; 
    }
};
