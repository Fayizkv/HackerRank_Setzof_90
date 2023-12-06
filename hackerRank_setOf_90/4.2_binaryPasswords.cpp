
#include <iostream>

#include <string>

using namespace std;

int main() {

    string s,t ;

    cin >> s >> t ;

  long long tOne = 0;

    for ( long long i = 0; i < t.length(); i++ )

        if ( t[i] == '1') tOne++ ;

    long long tZero = t.length() - tOne ;

for ( long long i = 0; i < t.length() ; i++ )

{

  if ( s[i] == '1' ){

      if ( tZero > 0) {

        t[i] = '0' ; 

        tZero--; 

      }

      else {  t[i] = '1' ; tOne--; }

  }

  else {

      if( tOne > 0)

      {

          t[i] = '1';

          tOne--;

      }

      else { t[i] = '0'; tZero--; }

  }

  bool temp1 = s[i] - '0'; 

  bool temp2 = t[i] - '0' ;

  cout << (temp1 ^ temp2);

}


    return 0;

}