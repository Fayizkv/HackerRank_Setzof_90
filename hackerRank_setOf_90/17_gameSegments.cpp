
#include<iostream>

#include<string>

using namespace std;
 
int findscore(int coin[], int n, int j)

{

    int p = 0, point;

   for ( int i = j; i < n; i++ )

    {

        if (coin[i] == 1) point = 1;

        else point = -1;

        p +=point;

    }

    return p;

}
 
int findscore2(int coin[], int n, int j)

{

    int p = 0, point;

   for ( int i = 0; i < j; i++ )

    {

        if (coin[i] == 1) point = 1;

        else point = -1;

        p +=point;

    }

    return p;

}

int main(){

       int n ; cin >> n;
    
    int coin[n];

    for ( int i = 0; i < n; i++ )
        cin >> coin[i];


    int p1 = 0;

    int p2 = 0;


    for (int i = 0; i < n ; i++)

    {

         if ( findscore(coin,n,i) < findscore2(coin,n,i) )

         { cout << i; break ; }

    }

    return 0;

}

