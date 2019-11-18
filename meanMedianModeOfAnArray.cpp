//Question: https://www.hackerrank.com/challenges/s10-basic-statistics/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    int n,x ; 
    float sum=0.0;
    cin>>n; 
    float median;
int Arr[n];
    for(int i=0; i<n; ++i){
cin>>x;
Arr[i]=x;

sum=sum+x;
    }
 sort(Arr, Arr+n);
    if(n%2==0){

        median=(Arr[n/2]+Arr[(n/2)-1])/2.0;
    }
//cout << setprecision (2) << fixed << sum/n;
   float total=sum/n; 
   printf("%.1f\n", total);
    cout<<median<<"\n";
vector< pair <int,int> > vect;
int count;
   
    for (int i=0; i<n; ++i){
count=1;
         for (int j=i+1; j<n; ++j){
             if(Arr[i]==Arr[j]){count=count+1;}
             else {vect.push_back( make_pair((n-count),Arr[i]) ); }

    }
    //vect.push_back( make_pair(count,Arr[j]) );
    }

    sort(vect.begin(), vect.end());
    cout<<vect[0].second;
    return 0;
};
