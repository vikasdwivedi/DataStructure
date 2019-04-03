// You are given with an array of integers and an integer K. Write a program to find and print all pairs which have difference K.
// Best solution takes O(n) time. And take difference as absolute.
// Input Format :
// Line 1 : Integer n, Size of array
// Line 2 : Array elements (separated by space)
// Line 3 : K


#include <iostream>
using namespace std;
#include <unordered_set>

void printPairs(int *input, int n, int k) {
	// Write your code here
    unordered_set<int> numbers;
    //vector<int> finalist;
    int count = 0;
    
    for( int i = 0; i<n; i++ ) {
        
        numbers.insert(  input[ i ] );
        
    }
    
    for( auto i = numbers.begin(); i != numbers.end(); i++ ) {
        
        int number = *i;
        
        if( numbers.find( k + number) != numbers.end() ) {
            
            auto otherNumber = numbers.find( k + number );
            
            int otherValue = *otherNumber;
            
            if ( otherValue > number ) {
                
                cout<<number<<" "<<otherValue<<endl;
            }
            else {
                
                cout<<otherValue<<" "<<number<<endl;
            }
            
        }
        

        
    }
    

}



int main() {
	int n;
	cin >> n;
	int *input = new int[n];
	for(int i = 0; i < n; i++){
		cin >> input[i];
	}
	int k;
	cin >> k;
	printPairs(input, n, k);
}
