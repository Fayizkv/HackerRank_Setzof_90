// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    int n ; cin >> n;
    
    int ar[n];
    
   for ( int i = 0; i < n ; i++ ) cin >> ar[i] ;
    
    sort(ar,ar+n);
    
    
    int abDiff = ar[1] - ar[0] ;
    
    for ( int i = 0; i < n-1 ; i ++ )
    {
        if ( ar[i+1] - ar[i] < abDiff ) abDiff = ar[i+1] - ar[i] ;
    }
    
    for ( int i = 0; i < n-1 ; i++ )
    {
        if ( ar[i+1] - ar[i] == abDiff )
        cout << ar[i] << " " << ar[i+1] << endl;
    }

    return 0;
}