#include <bits/stdc++.h>
using namespace std;
int main() {
    
    string a;
    //cout<<"enter the string ";
    getline(cin,a);
    set <char> s;
    for(int i=0;i<a.size();i++)
        s.insert(a[i]);

  int c=0;
  for(auto i :s ){
     c=c+((count(a.begin(),a.end(),i))/2);
  }
  
  cout<<c;
    return 0;
}