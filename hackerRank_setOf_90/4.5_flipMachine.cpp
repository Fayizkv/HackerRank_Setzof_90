#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str ;
    cin >> str ;
   
   int step = 0; int count = 0;
   for ( int i = 0 ; i < str.length(); i++ ){
       
       if ( str[i] == '1' )
       count++;
       
       if ( str[i] == '0' && count > 0 ) {
           step++;
           count--;
       }
   }
   cout << step ;
     return 0; }
   