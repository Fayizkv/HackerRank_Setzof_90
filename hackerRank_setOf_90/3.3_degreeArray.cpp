// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>

using namespace std;
 map<int,int>ma;
 
 int findSmallest (int ar[], int n, int num )
 {  

     int j = n-1 ; int start = -1 ; int stop = -1;
     
     for ( int i = 0; i < n ; i++ )
     {
         if ( (start == -1) && (ar[i] == num) ) start = i; 
         
         if ( (stop == -1) && (ar[j] == num) ) stop = j; 
         
         j--;

         if ( start != -1 && stop != -1 ) break ;
     }
     return stop - start ;
 }
 int findDegree ( int ar[], int n )
 {
     int big = 0;
    for ( int i = 0; i < n ; i++ )
    {
        ma[ar[i]]++ ;
         if ( big < ma[ar[i]] ) big = ma[ar[i]] ;
    }
    return big ;
 }
 
int main() {
    
    int n ; cin >> n;
    int ar[n] ;
    for ( int i = 0; i < n ; i++) cin >> ar[i] ;

    int big = findDegree ( ar, n );
    int ans = n;
for( auto i : ma )
{
    if (i.second == big ) 
    ans = min( ans, findSmallest(ar, n, i.first) ) ;
}

cout << ans+1 ;
    return 0;
}