// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    
    long long n ; long long m ; cin >> n >> m ;
    
    long long a[n], b[n], c[n] ;
    
    for ( int i = 0; i < m; i++ ) cin>> a[i] >> b[i] >> c[i] ;
    
    long long start, end ; cin >> start >> end ;
    
    long long sum = 0 ;
    for ( int i = 0; i < m ; i++ )  sum += c[i] ;
    
    cout << sum ;
    
    return 0;
}