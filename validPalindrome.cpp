//Question: https://leetcode.com/problems/valid-palindrome/


class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        cout<<n;
        string str;
        
           for (int i = 0, len = s.size(); i < len; i++) 
    { 
      
        if (ispunct(s[i])) 
        { 
            s.erase(i--, 1); 
            len = s.size(); 
            
        } 
    } 
        
           
           for (int i = 0, len = s.size(); i < len; i++) 
    { 
        if (s[i]==' ') 
        { 
            s.erase(i--, 1); 
            len = s.size(); 
            
        } 
    } 
        std::for_each(s.begin(), s.end(), [](char & c){
	c = ::tolower(c);
});
    
        
       int newLen=s.size();
        str=s;
        cout<<str;
      reverse(s.begin(), s.end());
        
        if (str==s) return true;
        else return false; 
    }
};
