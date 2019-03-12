//     1
//    23
//   345
//  4567

#include<iostream>
using namespace std;


int main(){

    int n = 0, j=0, k=0;
    cin>>n;
    for( int i = 1; i<=n; i++  ) {
        k = i;
        j = 0;
        while( j < n-i ) {
            cout<< " ";
            j++;
        }
        j= 0;
        while( j < i ) {
            cout<<k++;
            j++;
        }
        cout<<endl;
    }
  
}


