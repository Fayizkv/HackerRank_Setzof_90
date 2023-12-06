#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int p ;
    cin >> p;
    vector<int>ar;
    int j = 0;
    for ( int i = 1; i <= n; i++ )
    {
        if ( n % i == 0 ){
          ar.push_back(i); 
        }
    }
    cout << ar[p-1] ;

    return 0;
}