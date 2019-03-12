#include<iostream>
using namespace std;

// Note : There is space after every star.
// Pattern for N = 7
// *
//  * *
//    * * *
//      * * * *
//    * * *
//  * *
// *

int main(){

    int n = 0, j=0, k=0;
    cin>>n;
    
    for(int i=0; i<n; i++) {
        
        if(  i <= n /2 ) {
            j=0;
            while(j<i) {
                    cout<<" ";
                j++;
            }
            j=0;
            while(j<=i) {
                if(j!=0)
						cout<<" ";
                    cout<<"*";
                j++;
            }            
        }
        else {
            j = n - i - 1;
             while(j>0) {
                    cout<<" ";
                j--;
            }
            j = n - i - 1;
             while(j>=0) {
                 if(j!=n-i-1)
					cout<<" ";
                cout<<"*";
                j--;
            }
        }
        //if( i != n-1)
        cout<<endl;
   
        }
}


