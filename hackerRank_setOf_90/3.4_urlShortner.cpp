// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
   
    map<string,string>solu ;
    map<string,int>count;
    map<int,int>used;


int main() {
    
    int m ; cin >> m;
    
    int n ; cin >> n ;
    
    for ( int i = 0 ; i < n; i++ )
    {
        int uId ;
        cin >> uId ; 
        
        string shor ;
        
        cin >> shor ; 
        
        string url ; cin >> url ; 
        
        solu [ shor ] = url ;
        count [ shor ] = uId ;
    }
    
    int nQ ; cin >> nQ;
    string query[nQ] ;
    
    for ( int i = 0; i < nQ; i++ )
    {
        cin >> query[i] ;
    }
    
    for ( int i = 0 ; i < nQ; i++){
        
        used[count[query[i]]]++ ;
    cout << solu[query[i]] << " " << used[count[query[i]]]<< endl ;
    }
  
    

    return 0;
}