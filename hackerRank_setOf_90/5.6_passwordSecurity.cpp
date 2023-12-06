#include <iostream>
#include <string>

using namespace std;

int main() {

    string str = "1110011000";
    long long end = str.length(); 
    
    long long count = 0;
    for ( long long i = 0; i < end; i+=2 ){
        
        if ( str[i] != str[i+1]) count++ ;
    }
    cout << count ;

    return 0;
}