
#include <iostream>

#include <unordered_map>

#include <set>

#include <unordered_set>

#include <vector>

#include <algorithm>
 
using namespace std;
 
int main() {
 
    long long n ; cin >> n;
 
    long long singer[n] ;
 
    set<long long>sing;
 
    for ( long long i = 0 ; i < n ; i++ )
 
    {

        cin >> singer[i];

        sing.insert(singer[i]);
 
    }
 
    long long nSingers = sing.size();
 
 
    long long m ; cin >> m; long long length[m] ;
 
    unordered_map<long long,multiset<long long>>mapp;
 
    for ( int i = 0;  i < m ; i++ )
 
    {
 
        cin >> length[i] ;

        mapp[singer[i]].insert(length[i]);
 
    }
 
    long long sum = 0;
 
    vector<int>fun;

    for ( auto a : mapp ) {

        int end = a.second.size();

        auto it = a.second.begin();
 
    for ( long long i = 0 ; i < end ; i++ )

    {

        if ( i == 0 ) fun.push_back(*it);

        else 

        sum += *it * nSingers ;

        it++ ;

    } }

    sort ( fun.begin(), fun.end() );

    long long count = 1;

   for ( auto i : fun)

   {

      sum += count * i ;

      count ++ ;

   }

 
   cout << sum ;
 
    return 0;
 
}