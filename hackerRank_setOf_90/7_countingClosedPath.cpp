 
#include<iostream>
using namespace std;
 
int main()
{
    int number=0; 
    //cout<<"enter the number :";
    cin>>number;
    int cPath = 0;
    int m;
    while ( number > 0)
    {
        m = number % 10;
        number = number/10;
        if ( m == 0 || m == 4 || m == 6 || m == 9 )
        cPath++ ;
        else if ( m == 8 ) cPath += 2;
    }
    cout << cPath ;
    return 0;
}