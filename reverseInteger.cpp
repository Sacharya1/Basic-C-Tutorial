//Question: https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
            //int sum=0; 
    int sum=0;
        int sum2;
    int n;
        
        int m;
    if (x==0){return 0; } 
     else if(x<(pow(2,31)-1) && x>(-1*pow(2,31)))  
    
     { int num=abs(x);
        
       n= log10(num)+1;
       cout<<n<<"\n";
 for (int i=0; i<n; i++){
    m=n-i-1;
    int digit= num/(pow(10,m));
     //cout<<digit<<"\n";
     sum=sum+ (digit*(pow(10,i)));
     num= num- (digit*(pow(10,m)));}
         
   
 }
        else return 0;
      cout<<sum;  
        if(sum<(pow(2,31)-1) && sum>(-1*pow(2,31))){
        if (x<0) sum2=-1*sum;
        else sum2=sum;
        
        return sum2;}
        else return 0;
        
    }
};
