#include<iostream>
#include<string>
using namespace std;

void findLocation( string st[], int n )
{
    string str;
    string tem ;
    
    for ( int i = 0; i < n ; i++ )
    {
        str = st[i] ;
        int temp = stoi(str); int te ; 
        bool flag = 0;
         tem.clear();
        if ( temp > 255) { cout << -1 << endl; flag = 1; continue; }
        
         for ( int i = 0 ; i < str.length(); i++ )
    {
        
            if ( str[i] != '.') { tem.push_back(str[i]) ; }
            else
            {
               te = stoi(tem); 
                if( te > 255) { cout << -1 << endl ; flag = 1 ; break ;}
                tem.clear();
            }
    } 
    if(flag == 0) { 
        te = stoi(tem) ;
       if( te > 255) { cout << -1 << endl ; flag = 1 ; }
    }
         
    if ( flag == 0) {
    if ( temp >= 0 && temp <= 127 ) cout << 1 << endl;
    else if ( temp >= 128 && temp <= 191 ) cout << 2 << endl;
    else if ( temp >= 192 && temp <= 223 ) cout << 3 << endl;
    else if ( temp >= 224 && temp <= 239 ) cout << 4 << endl;
    else if ( temp >= 240 && temp <= 255 ) cout << 5 << endl; }
    }
}

int main(){
    
    int n ; cin >> n;
    
    
    string st[n];
    for ( int i = 0; i < n ; i++ ) cin >> st[i] ;
    
    findLocation(st,n) ;
   
    
    return 0;
}
