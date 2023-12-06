

#include <iostream>


using namespace std;
 
int main() {

  long long n ; cin >> n; 

  long long a[n] ; 

  for ( long long i = 0; i < n; i++ )

    cin >> a[i] ; 


  long long big = 0;

bool flag = 0; long long ans  ;
 
for ( long long i = 0; i < n; i ++ )

{

    for ( long long j = i + 1 ; j < n ; j++ )

    {

        if ( (a[i] & a[j]) > big ) 

        { big = (a[i] & a[j]) ; ans = j; }

    }


}

 
  cout << 0 << endl << ans;

    return 0;

}