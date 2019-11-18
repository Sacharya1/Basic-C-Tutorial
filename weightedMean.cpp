//Question: https://www.hackerrank.com/challenges/s10-weighted-mean/problem?h_r=next-challenge&h_v=zen

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n,y,z;
    cin>>n;
    int num[n];
        int weight[n];

   for(int i=0; i<n; ++i){
       cin>>y;
num[i]=y;
   }

   int totalWeight=0; 
    for(int i=0; i<n; ++i){
       cin>>z;
weight[i]=z;
totalWeight=totalWeight+z;
   }
float sum=0.0; 
       for(int i=0; i<n; ++i){
sum=sum+(num[i]*weight[i]);}
float mean= sum/totalWeight;
printf("%.1f\n", mean);
    return 0;
};
