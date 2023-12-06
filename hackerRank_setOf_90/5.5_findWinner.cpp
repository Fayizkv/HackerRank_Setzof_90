
#include <iostream>

using namespace std;

int main() {

    long long nAndrea ; cin >> nAndrea ; 

    long long a[nAndrea] ; long long aScore=0;

    for ( long long i = 0; i < nAndrea ; i++ ) cin >> a[i] ;


    long long nMaria ; cin >> nMaria ; 

    long long m[nMaria] ; long long mScore=0 ;

    for ( long long i = 0; i < nMaria; i++ ) cin >> m[i] ;


    string start ; cin >> start ;

    int iS = 0;

    if ( start ==  "Odd" ) iS = 1; 


    for ( long long i = iS ; i < nMaria; i+=2 )

    {

        aScore += (a[i] - m[i]) ;

        mScore += (m[i] - a[i]) ;

    }

    if ( aScore == mScore ) cout << "Tie";

    else if ( aScore > mScore ) cout << "Andrea";

    else cout << "Maria";

    return 0;  

}