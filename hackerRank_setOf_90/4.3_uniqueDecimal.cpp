#include <bits/stdc++.h>

using namespace std;

  set<string>substring; set<int>decimal ;

int distinctDecimal( string temp )
{
    int dec = temp[temp.length()-1] - '0' * pow(2,0);
     int j = 1;
    for ( int i = temp.length()-2 ; i >= 0; i-- )
    {
        dec += (temp[i] - '0') * pow( 2, j) ;
        j++;
    }
    
    return dec ;
}
void generate(set<string>& substring, string s)
{
    if (s.size() == 0) return;
    
if (substring.find(s) == substring.end()) {
        substring.insert(s);
        for (int i = 0; i < s.size(); i++) {
            string t = s;
            t.erase(i, 1);
            generate(substring, t);
        }
    }
    return;
}

int subString(string str)
{
    int sum ;
    generate(substring, str);
    
    
    for ( auto i : substring)
{
    sum = distinctDecimal(i) ;
    decimal.insert(sum);
}

return decimal.size();
}

int main() {
   
   string str ; cin >> str;
   
 
   
   cout << subString(str) ;



    return 0;
}