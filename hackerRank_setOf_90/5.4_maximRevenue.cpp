#include <iostream>

#include <set>


using namespace std ;

multiset<int>sett;

int main() {

   long long n ; cin >> n; long long price[n];

   for ( long long i = 0 ; i < n; i++ ) {

       cin >> price[i] ; sett.insert(price[i]) ;

   }

    long long m ;  cin >> m; long long count = 0 ; long long sum = 0;

    while ( count < m ) {

    auto it = sett.end(); 

    it--;

    long long temp = *it ;

    sum += temp ;

    temp--;

    sett.erase(it);

    sett.insert(temp);

    count++;

    }

    cout << sum ;


    return 0;

}