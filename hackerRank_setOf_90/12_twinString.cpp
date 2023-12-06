#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
 
using namespace std;


void stringCompare(string st1, string st2)
{

    vector<char>temp1;
    vector<char>temp2;
    vector<char>temp3;
    vector<char>temp4;
    bool flag = 0;
    
   for ( int i = 0; i < st1.length(); i++)
   {
       if ( i % 2 == 0 ) {
       temp1.push_back(st1[i]);
       temp2.push_back(st2[i]); }
       else {
           temp3.push_back(st1[i]);
           temp4.push_back(st2[i]);
       }
   }
   
 
   
  
//   for ( auto s : temp1 ) cout << s ;
//   cout << endl;
  
//   for ( auto s : temp2 ) cout << s ;
//   cout << endl;
   
//   for ( auto s : temp3 ) cout << s ;
//   cout << endl;
  
//   for ( auto s : temp4 ) cout << s ;
//   cout << endl;
   
   sort(temp1.begin(),temp1.end());
    sort(temp2.begin(),temp2.end());
    sort(temp3.begin(),temp3.end());
    sort(temp4.begin(),temp4.end());

    
//     for ( auto s : temp1 ) cout << s ;
//   cout << endl;
  
//   for ( auto s : temp2 ) cout << s ;
//   cout << endl;
   
//   for ( auto s : temp3 ) cout << s ;
//   cout << endl;
  
//   for ( auto s : temp4 ) cout << s ;
//   cout << endl;
  
   //cout << temp1 << " " << temp2  << endl;
    
    for ( int i = 0; i < st1.length(); i++)
    {
        if( temp1[i] != temp2[i]) { flag = 1; break; }
        if( temp3[i] != temp4[i]) { flag = 1; break; }
        
    }
    
    if ( flag == 1 ) cout << "No" << endl;
    else cout << "Yes" << endl;

}
int main() {
    int n ;
    cin>>n;
    string arr1[n];
    string arr2[n];
    
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    
    
   
    for(int i=0;i<n;i++){
        if ( arr1[i].length() != arr2[i].length() ) cout << "No" << endl;
        else if( arr1[i] == arr2[i] ) cout << "Yes" << endl;
        else stringCompare(arr1[i], arr2[i]);
    }
    
    return 0;
}