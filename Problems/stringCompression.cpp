#include <iostream>
using namespace std;
#include <cstring>

// input - given string
// Update in the given input itself. No need to return or print anything

void stringCompression(char input[]) {
    // Write your code here
    int i=0;
    int initialCounter = 0;
    int count =1;
    while( input[i] != '\0') {
        if( input[i] != input[i+1]) {
            input[initialCounter++] = input[i];
            if( count != 1) {
                input[initialCounter++] = count;
            }
            count = 1;
            
        }
        else {
            count++;
        }
        
        i++;
    }
    
    input[initialCounter] = '\0';
}


int main() {
    char input[1000] = "aaabbccdsa";
    stringCompression("aaabbccdsa");
    cout << input << endl;
}
