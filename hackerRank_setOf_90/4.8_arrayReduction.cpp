
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int findCost(long long ar[] ,long long n) 
{
    float j = n ; int cost = 0; long int maxEle = ar[n-1]; 
    
    for ( int i = 0; i< n-1 ; i++ )
    {
       cost += ceil ( ( (double)ar[i] + maxEle) / ( (double)(maxEle - ar[i] ) + 1) ) ;
       maxEle = ar[i] + maxEle ; 

    }
    return cost ;
}
int main() {
    
    long long n ; cin>>n;
    long long ar[n];
     for ( long long i = 0; i< n ; i++ ) cin >> ar[i] ;

    sort( ar, ar+n ) ;
    
    cout << findCost(ar, n ) ;

    return 0;
}