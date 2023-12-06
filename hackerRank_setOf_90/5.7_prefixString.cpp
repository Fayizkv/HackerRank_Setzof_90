
#include <iostream>

#include <string>

#include <algorithm>

using namespace std; 

long long isPrefix(string query, string str[], int n) 

{ 

    int start = -1 ;

    long long count = 0; 

    for ( long long i = 0; i < n; i++ ) 

    { 

        string temp = str[i] ;

        if ( temp.length() != query.length() && temp.substr(0,query.length()) == query )

        {

            count++; 

            if ( count == 1 ) start = 1;

        }

        else if ( start != -1 ) break ; 


    } 

        return count ; 

} 

int main() { 

    long long n ; cin >> n; 

    string str[n] ; 

    for ( long long i = 0 ; i< n ; i++ ) cin >> str[i] ; 


    long long nQ = 1 ; cin >> nQ; string queries[nQ] ; 

    for ( long long i = 0 ; i< nQ ; i++ ) cin >> queries[i] ; 

     sort (str,str+n);

    for ( long long i = 0; i < nQ; i++ ) 

    { 

        cout << isPrefix(queries[i], str, n) << endl ; 

    } 

    return 0;

}