#include<iostream>
#include<vector>
using namespace std;

void separateOddEvenLetters( string message ) {

    int length = message.length();


    int i = 1;

    cout<<message[0];

    for( i<= length) {
        cout<<message[i];
        i+=2;
    }

    cout<<" ";
    i=2;
    while( i <= length ) {
        cout<<message[i];
        i+=2;
    }

}

int main() {

    int numberOfcases = 0;
    vector<string> cases;
    cin>>numberOfcases;
    string str;
    for( int i = 0; i <numberOfcases; i++ ) {
        cin>>str;
        cases.push_back( str );
    } 
     for( int i = 0; i <numberOfcases; i++ ) {
       separateOddEvenLetters( cases[i]);
    }
}