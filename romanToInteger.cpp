//Question: https://leetcode.com/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(string str) {
        
        int n= str.size();
        int sum=0; 
        cout<<str; 
        for (int i=0; i<n; ++i){
            
            if(str[i]=='I') sum=sum+1;
            else if(str[i]=='V' ) {
                if (str[i-1]=='I')
                sum=sum+3;
            else sum=sum+5;}
            else if(str[i]=='X')  {
                if (str[i-1]=='I')
                sum=sum+8;
            else sum=sum+10;}
            else if(str[i]=='L')  {
                if (str[i-1]=='X')
                sum=sum+30;
            else sum=sum+50;}
            else if(str[i]=='C') {
                if (str[i-1]=='X')
                sum=sum+80;
            else sum=sum+100;}
            else if(str[i]=='D')  {
                if (str[i-1]=='C')
                sum=sum+300;
            else sum=sum+500;}
            else if(str[i]=='M') {
                if (str[i-1]=='C')
                sum=sum+800;
            else sum=sum+1000;}
        }
        return sum; 
    }
};
