
#include <iostream>

#include <string>

using namespace std;
 
int scores ( char diff)
{

    if ( diff == 'E') return 1;

    else if ( diff == 'M') return 3;

    else if ( diff == 'H') return 5;
    
    else return 0;
}

int main() {

   string eric ;
    cin >> eric; 

   string bob ;
    cin >> bob ;

   int score[2];

   score[0] = 0;

   score[1] = 0;

   for ( int i = 0 ;i < eric.length(); i++ )

   {

       score[0] += scores(eric[i]);

       score[1] += scores(bob[i]);

   }

  //  cout << score[0] << " " << score[1] ;
    if ( score[0] > score[1] ) cout << "Erica";
    else if( score[0] == score[1]) cout << "Tie";
    else cout << "Bob";

    return 0;

}