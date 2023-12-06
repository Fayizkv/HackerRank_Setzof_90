#include<iostream>
using namespace std;

long int sumRange(long long ar[],long long n, long long l, long long r){
    
    int count = 0; 
    
    for ( int i = 0; i < n-1 ; i++ )
    {
        for ( int j = i+1; j <n ; j++ )
        {
            if ( (ar[i] + ar[j]) >= l && (ar[i] + ar[j]) <= r )
            count++;
        }
    }
    return count ;
}


int main()
{
    long long n ; cin >> n;
    long long ar[n] ;
    
    for (long long i = 0; i < n ; i++) cin >> ar[i];
    
    long long l, r ;  cin >>l >> r;
    
    cout << sumRange(ar,n,l,r);

    return 0;
}