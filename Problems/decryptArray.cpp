//input Array = [3,2,4,1,5] 
//output array = [1,2,3,4,5]  

//input Array = [3,4,2,5,6] 
//output array = [1,2,3,4,5,6]



#include <iostream>

using namespace std;

void decryptArray( int arr[], int n, int output[]) {
    
    int mid= 0;
    int left = 0;
    int right = 0;
    int i=0;
    mid = n/2;

    if( n%2 != 0){
        output[mid] = arr[0];
        left = mid - 1;
        right = mid +1;
        i++;
    }
    else {
        left = mid -1;
        right = mid;
    }
    
    while( i < n ) {
        output[left] = arr[i];
        i++;
        left--;
        output[right] = arr[i];
        i++;
        right++;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[1000];
    int output[1000];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    decryptArray( arr, n, output);
    for(int i=0; i<n; i++){
        cout<<output[i];
    }
    

    return 0;
}

