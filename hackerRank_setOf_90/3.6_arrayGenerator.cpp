// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    long long n ; cin >> n; long long ar[n] ;
    for ( long long i = 0; i < n ; i++ ) cin >> ar[i] ;
    
    long long l ; cin >> l ; long long r; cin >> r;
    
    long long br[n] ;
 
    br[0] = l ;
    long long ans ; long long fDiff ; bool flag = 0;
    for ( long long i = 1; i < n; i++ )
    {
        ans = r + 1;
        fDiff = br[i-1] - ar[i-1] ;

        for ( long long j = br[i-1]; j <= r; j++ )
        {
            if ( j - ar[i] > fDiff){
                ans = j ;
                break ;
            }
        }

        if ( ans > r ) { cout << -1 ; flag = 1; break ;  }
        else br[i] = ans ;
    }
    
    if ( flag == 0) 
    for ( long long i = 0 ; i < n; i++ ) cout << br[i] << endl;

    return 0;
}