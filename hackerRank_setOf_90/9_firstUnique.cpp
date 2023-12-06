#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string str ;
    cin >> str; 
    int index ;
    int flag ;
    for ( int i = 0; i < str.length(); i++ )
    {
         flag = 0;
        for ( int j = 0; j < str.length() ; j++ )
        {
            if ( i == j ){
                continue;
            }
            else if ( str[i] == str[j] )
            {
                flag = 1; break; 
            }
        }
        if ( flag == 0 ) {
            cout << i + 1 ; break; }
    }
if ( flag == 1 ) cout << -1;
    return 0;
}