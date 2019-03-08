#include <iostream>
using namespace std;

// input1 - first input string
// input2 - second input string
//complexity -> O(n)
bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int charCounter1[256] = {0};
    int charCounter2[256] = {0};
    for( int i = 0; input1[i] != '\0'; i++) {
        
        charCounter1[ (int) input1[i] ] = charCounter1[ (int) input1[i] ] + 1;
        charCounter2[ (int) input2[i] ] = charCounter2[ (int) input2[i] ] + 1;

    }
    for( int i = 0; i<256 ; i++) {
        
        if( charCounter1[i] != charCounter2[i]) {
                
            return false;
        }
        
    }
    return true;
}

int main() {
    char input1[1000], input2[1000];
    //cin.getline(input1, 1000);
    //cin.getline(input2, 1000);
    if(isPermutation("abcde", "baedc") == 1) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}
