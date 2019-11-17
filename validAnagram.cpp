//Question: https://leetcode.com/problems/valid-anagram/submissions/


using namespace std; 


class Solution {
public:
    bool isAnagram(string s, string t) {
unordered_map<char, int>Hash;
        
        for(int i=0; i<s.size(); ++i){
            
            Hash[s[i]]++;
            
        }
        for(int j=0; j<t.size(); ++j){
        
         Hash[t[j]]--;}
        
  for (auto e:Hash){
      if (e.second!=0) return false;
      
      
      
  }
        return true;
    }
};
