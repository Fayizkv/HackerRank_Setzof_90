
#include <iostream>

#include <map>

using namespace std;

int main() {

    long long n ;  cin >> n ; long long a[n];

    map <long long,long long> mapp ;

    for ( long long i = 0; i < n ; i++ )

    {

        cin >> a[i] ;

        mapp[a[i]]++;

    }

    long long k ; cin >> k ;

    if ( k >= n ) cout << n ;

    else {

    long long big = 0;

    for ( auto i : mapp )

    {

        if ( i.second > big ) big = i.second ;

    }

	if ( (n - big) >= k ) cout << n ;

    	else cout << big + k ;

    }

    return 0;

}