//Question: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
      
        string s= to_string(x);
        cout<<s;
        string str=s;
        reverse(s.begin(), s.end());
        if(s==str) return true; 
        else return false;
        
        //return true;
    }
};
