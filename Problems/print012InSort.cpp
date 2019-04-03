/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

void sort012(int arr[], int n)  {  
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * No need to print or return the output.
     * Taking input and printing output is handled automatically.
     */
     int i =0;
    while( arr[i] != '\0') {
        
        if( arr[i] == 2) {
            int j = i;
            while( j != '\0' ) {
                arr[j] = arr[j+1];
                j++;
            }
            arr[ j - 1] = arr[i];
        }
        
        if( arr[i] == 0) {
            int j = i;
            while( j <= 0 ) {
                arr[j] = arr[j - 1];
                j--;
            }
            arr[ 0 ] = arr[i];
        }
        
    }
    

}

int main() {

	int size_first;

	cin>>size_first;
	int *arr_first=new int[1+size_first];	
	
	for(int i=0;i<size_first;i++)
		cin>>arr_first[i];
	
	sort012(arr_first,size_first);
		
	for(int i=0;i<size_first;i++)
		cout<<arr_first[i]<<" ";	
	return 0;
}


    