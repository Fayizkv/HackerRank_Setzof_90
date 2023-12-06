
#include <iostream>

using namespace std;
 
void findNegate(int ar[], int n, int start, int end) {

    for ( int i = start-1; i < end; i++ )

    ar[i] = ar[i] * -1;

}

int main() {

     int nData ; cin >> nData; 
    int data[nData];
for ( int i = 0; i < nData ; i++ ) cin >> data[i];
     

     int nUpdates; cin >> nUpdates; 
     int col ; cin >> col ;
    
    int updates[nUpdates][col];

     for ( int i = 0; i < nUpdates; i++ )
    {
        for ( int j = 0; j < col; j++ )
            {
                cin >> updates[i][j]; 
            }}

        for ( int i = 0; i < nUpdates; i++)

    {

        findNegate(data,nData,updates[i][0],updates[i][1]);

    }
 
for ( int i : data) cout << i << endl ;

    return 0;

}