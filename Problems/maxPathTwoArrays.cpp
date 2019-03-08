// Given two sorted arrays such the arrays may have some common elements. 
// Find the sum of the maximum sum path to reach from beginning of any array to end of any of the two arrays. 
// We can switch from one array to another array only at common elements. Note that the common elements do not have to be at same indexes

#include<iostream> 
using namespace std; 


long max(long x, long y) { return (x > y) ? x : y; } 

long maxPathSum(int ar1[], int ar2[], int m, int n)
{
    /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
     */
    long sum1 = 0 , sum2 = 0 , i = 0, j = 0, count = 0;

    while( i < m && j < n) {

        if( ar1[i] < ar2[j]){
            sum1 = sum1 + ar1[i++];
        }
        else if( ar1[i] > ar2[j]) {
            sum2 = sum2 + ar2[j++];
        }
        else { //now at common node

            //take max sum now
            count = count + max( sum1, sum2 );
            //reset sum's for remaining calculations
            sum1=0; sum2=0;
            while( i < m && j < n && ar1[i] == ar2[j]) {
                count = count + ar1[i];
                i++;
                j++;
            }

        }

    }
    //read pending values in array 1
    while(i<m) { 
        sum1 = sum1 + ar1[i];
        i++;
    }
    //read pending values in array 2
    while(j<n) {
        sum2 = sum2 + ar2[j];
        j++;
     }

    //add the max sum of pending values to count
    count = count+ max( sum1, sum2);

    return count;

}

int main() {
    int *a,*b,m,n,i;
    cin>>m;
    a=new int[m];
    for(i=0;i<m;i++)
        cin>>a[i];
    cin>>n;
    b=new int[n];
    for(i=0;i<n;i++)
        cin>>b[i];
    long ans = maxPathSum(a,b,m, n);
    cout << ans << endl;
    delete a;
    delete b;
    return 0;
}
