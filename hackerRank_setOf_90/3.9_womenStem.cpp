
#include <iostream>

#include <string>

#include <algorithm>

#include <map>

using namespace std;

int main() {

   string str ; cin >> str;

   string temp ;

   map<char,long long>mapp;

   int length = str.length() ;


   for ( auto i = 0; i < length ; i++ )  { 

       mapp[str[i]]++; 

       if ( str[i] != '?') temp.push_back(str[i]);

   }

   if ( temp == "" ) { string temp1(length,'a') ; cout << temp1 ; return 0; }

    long long countQ = mapp['?'] ; int rCount = 0;

    long long limit = countQ ;

    if ( length % 2 != 0 ) limit++ ;

    for ( auto i : mapp )

    {

        if (i.first != '?'){

            if ( rCount > limit ) { cout << -1 ; return 0; }

            if ( i.second % 2 ==  1 ) { rCount++; }

        }

    }


sort ( temp.begin(), temp.end() );

//cout << str << endl;

long long mid = length/2 ;

long long x = temp.length() -1 ;

long long back = mid - 1;

if ( length % 2 == 1 ) str[mid] = temp[x];

else  { str[mid] = str[mid-1] = temp[x] ; back--; x--; }

//cout << str << endl;

//cout << temp <<endl;

x-- ;


//cout  << back << " " << mid+1 << endl ;

for ( long long i = mid+1; i < length; i++ )

{

    if ( x >= 0 )

    {

        //cout << str[i] << " " << str[back] << " "<< temp[x]<< endl;

        str[i] = str[back] = temp[x] ;

        x-=2;

        //cout << endl << temp[x] << endl ;

    }

    else str[i] = str[back] = 'a';

    back--;

}

cout << str ;

    return 0;

}