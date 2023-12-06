
#include <iostream>

#include <algorithm>

using namespace std;

int main()

{

    long long n; cin >> n ; long long ar[n] ;

    for ( long long i = 0; i < n; i++ ) cin >> ar[i] ;

    sort(ar,ar+n) ;

    long long sum = 0;

    for ( long long i = 0; i < n ; i += 2 )

    sum += ar[i+1] - ar[i] ;

    cout << sum ;

    return 0;

}