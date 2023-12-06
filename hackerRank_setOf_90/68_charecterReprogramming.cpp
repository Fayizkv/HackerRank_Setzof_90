#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'getMaxDeletions' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int getMaxDeletions(string s) {

 int len = s.length();

int x = 0, y = 0 ;

for ( int i = 0; i < len ; i++ )
{
    if ( s[i] == 'U') x++ ;
    else if ( s[i] == 'D') x--;
    else if ( s[i] == 'R') y++ ;
    else if ( s[i] == 'L') y--;
}
int diff = abs(x) + abs(y) ;

return len-diff ;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = getMaxDeletions(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
