#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    string st ; cin >> st; 
    int tem1, tem2, temp;
    int count = 0;
    for ( int i = 0 ; i < st.length(); i+=2 )
    {
        if ( st[i+1] == NULL ) tem2 = st[i-1] - '0';
        else
        tem1 = st[i] - '0' ; tem2 = st[i+1] - '0';
        if ( tem1 == 0 && tem2 == 0 ) {}
        else if ( tem1 == 1 && tem2 == 1) { count++ ;}
        else count+= 2;
    }
    cout << count ;

    return 0; 
}