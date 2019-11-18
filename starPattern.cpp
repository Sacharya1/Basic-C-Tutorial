/*Question: Draw 
*
**
***
****
*****
******
*******
********
*********
**********
*/

#include <iostream>

using namespace std;

int main()
{

    int n=100;
    int m=0;
    while(m<20){
for(int i=0; i<n; i++){

    for(int j=0; j<i+1; j++){

        cout<<"*";

    }
    cout<<"\n";
}
m++;
}
}
