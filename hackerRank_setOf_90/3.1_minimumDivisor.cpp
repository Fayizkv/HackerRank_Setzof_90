
#include<iostream>

#include<cmath>

using namespace std;
 
int main() {

    int n ;

    cin >> n;

 
    long long ar[n]; 

    long long sum = 0;

    long largest = 0;

    for ( int i = 0; i < n ; i++ ) 

    { 

        cin >> ar[i] ;

        if ( ar[i] > largest ) largest = ar[i];

    } 

    int th; cin >> th ;

int low = 1; int mid; int ans;
   while( low <= largest )
    {
        sum = 0;
        mid = (low + largest) / 2 ;
        
        for ( int j = 0; j < n ; j++ )
        {
        sum += ceil ( (double)ar[j]/(double)mid ) ;
        }

        if ( sum <= th ) { 
            ans = mid ;
            largest = mid-1;
        }
        else { low = mid+1 ; }
        

    }
 cout << ans;
    return 0;

}