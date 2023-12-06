// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <map>
using namespace std;

void passValidate(string passwords[], int n, int k )
{
    map<string,int> ma;
    

 for ( int i = 0; i < n ; i++ )
 {
     ma[passwords[i]]++ ;
        if( ma[passwords[i]] > k ) cout << "REJECT" << endl;
        else cout << "ACCEPT" << endl ;
 }
}


int main() {
   
   
   int n ; cin >> n;
   
   string passwords[n];
   
   for ( int i = 0; i < n ; i++ ) cin >> passwords[i] ;
   
   int k ; cin >> k;
   
   passValidate(passwords, n, k );

    return 0;
}