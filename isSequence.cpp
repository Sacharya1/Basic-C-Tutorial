//Question: https://leetcode.com/problems/is-subsequence/submissions/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
           int n= s.size();
        int m= t.size();
        int idx=0;
        int len=0;


        for (int i=0; i<n; i++){
            for (int j=idx; j<m; j++){

                if (s[i]==t[j]){
                    idx=j+1;
                   len=len+1;

break;
                }

            }


        }
cout<<len;
        
        if(len==n) return true;
        else return false;
        }
    
 
        
    };
