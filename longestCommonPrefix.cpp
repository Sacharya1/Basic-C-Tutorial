//Question: https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string t;
        vector<int>v;
        int m= str.size();
        if (str.empty()) return t; 
        else if(str[0].empty()) return t;
        else if(m==1) return str[0]; 
        else {
        
        int count=0; 
        int maxLen=str[0].size();
        for (int i=0; i<m; ++i){
            if(str[i].size()<maxLen)
                maxLen=str[i].size();
            else maxLen=maxLen; 
            
              }
          
               for (int j=0; j<maxLen; ++j){
                   for (int i=0; i<m; ++i){
                    
                 if(str[i][j]==str[0][j]) {count=count+1; cout<<str[i][j]<<"\n";}
                   
                   else
                   { v.push_back(count);
                       break; }
                         
                   
            
      
           }
        }
        cout<<count;
            v.push_back(count);
            cout<<v[0];
        int z=v[0]/m;
        cout<<z;
       //  int z=1;
        
      string s= str[0].substr(0,z);
        
        return s;}
        
    }
};
