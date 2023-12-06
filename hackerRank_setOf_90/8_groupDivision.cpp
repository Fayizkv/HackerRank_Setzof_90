#include<iostream>
//#include<algorithm>
using namespace std;
 
int main(){
    int n ;
    cin >> n;

   
  int length[n];
   for(int i=0; i<n;i++) cin>>length[i];
   
    int count  = 1;
    int max ; cin >> max;

   int temp;
   for ( int i = n-1; i > 0; i--)
   {
       for ( int j = 0; j<i; j++)
       {
           if ( length[j] > length[j+1])
           {
               temp = length[j];
               length[j] = length[j+1];
               length[j+1] = temp;
           }
       }
   }

  int start = 0, diff ; 
    for ( int i = 1 ;i < n; i++ )
    {
        diff = length[i] - length[start] ;
        if ( diff > max) {
                count++;
                start = i;
                }
    }
    cout << count;
    return 0;
}