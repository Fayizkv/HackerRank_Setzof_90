
#include<iostream>

using namespace std;
 
int main()

{

    int n ; cin >> n ;

    int a[n]; 

    for ( int i = 0; i < n ; i++ ) cin >> a[i];

    int x , an;

    int count = 0;

    for ( int i = 0 ; i < n-1 ; i++ )

    {

        for ( int j = i+1 ; j < n; j++ )

        {

            an = a[i] & a[j] ;

            x = a[i] ^ a[j] ;

            //cout << an << " " << x << endl;

            if ( x > an ) count++ ;

        } 

    }

    cout << count ;

    return 0;

}