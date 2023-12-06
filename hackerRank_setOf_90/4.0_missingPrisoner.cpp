
#include <iostream>
#include <map>
#include <set>
using namespace std;

map<long long,long long> mapx ;
map<long long,long long> mapy ;

int main() {
    
    long long n ; cin >> n ; long long l; cin >> l;
    long long x ; long long y ;
    for ( int i = 0; i < n; i++ )
    {
        cin >> x; cin >> y ;
        
        mapx[x]++;
        mapy[y]++;
    }

 for ( auto i : mapx){
     if ( i.second % 2 == 1 ) cout << i.first << endl ;
 }
 for ( auto i : mapy) {
     if ( i.second % 2 == 1 ) cout << i.first  ;
 }
    
    cout << endl;

    return 0;
}