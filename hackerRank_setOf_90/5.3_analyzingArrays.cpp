#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    unsigned long long n ;
    cin >> n ;
    unsigned long long ar[n] ;
    unsigned long long m = pow(10,9) ;
    m += 7;
    unsigned long long max = 0; unsigned long long index = 0;
    
    for ( unsigned long long i = 0 ;i < n ; i++ ) cin >> ar[i] ;
    
    for ( unsigned long long i = 0 ;i < n-1 ; i++ )
    {
        unsigned long long product = pow( ar[i], ar[i+1]) ;
        product = product % m ;
        if( max < product) {
            max = product; index = i; }
            
        }
    
    
   cout << index + 1;
    
    
    return 0;
}