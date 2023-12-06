
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   
   int n ;
   cin >> n;
   
  int ar[n];

for ( int i = 0; i < n; i++ ) cin >> ar[i] ;

sort(ar,ar+n);
int firstOdd, firstEven, lastOdd, lastEven ; 

firstOdd = firstEven = lastOdd = lastEven = -1;

for (int i = 0; i < n ; i++ )
{
    if ( firstOdd == -1 && ar[i] % 2 == 1) firstOdd = i;
    if ( firstEven == -1 && ar[i] % 2 == 0 ) firstEven = i ;
    
    if ( ar[i] % 2 == 0) lastEven = i;
    else lastOdd = i;
}   

if( lastOdd - firstOdd > lastEven - firstEven ) cout << lastOdd - firstOdd + 1 ;
else cout << lastEven - firstEven + 1;
    return 0;
}