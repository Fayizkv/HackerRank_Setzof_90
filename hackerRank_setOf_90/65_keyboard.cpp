#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'entryTime' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING keypad
 */
// a[0] n -> 1,3,4 ; 1 -> 0,2,3,4,5,6; 2-> 1,4,5 ; 
//3 -> 0,1,4,6,7 5-> 1,2,4,7,8 6->3,4,7
// 7 -> 6,8,3,4,5 8-> 7,4,5
map<int,multiset<char>>mapp;

bool isOnmap( char key, char n ){
    
    int k = n - '0' ;
    
    auto it = mapp[key].begin();
    int len = mapp[key].size();
    
    for ( int i = 0; i < len; i++ )
    {
        if( *it - '0' == k) return true;
        it++;
    }
    
    return false;
}

int entryTime(string s, string keypad) {

int len = s.length(); int sum = 0;


mapp[keypad[0]] = { keypad[1], keypad[3],keypad[4] };
mapp[keypad[1]] = { keypad[0], keypad[2],keypad[3],keypad[4],keypad[5] };
mapp[keypad[2]] = { keypad[1], keypad[4],keypad[5] };

mapp[keypad[3]] = { keypad[0], keypad[1],keypad[4], keypad[6],keypad[7] };
for ( int i = 0 ; i < 9; i++ ) mapp[keypad[4]].insert(keypad[i]);
mapp[keypad[5]] = { keypad[1], keypad[2],keypad[4],keypad[7],keypad[8] };

mapp[keypad[6]] = { keypad[3], keypad[4],keypad[7] };
mapp[keypad[7]] = { keypad[6], keypad[8],keypad[3],keypad[4],keypad[5] };
mapp[keypad[8]] = { keypad[7], keypad[5],keypad[4] };


for ( int i = 1; i < len ; i++ )
{
    if ( s[i] != s[i-1] ) {
        if ( isOnmap(s[i-1], s[i])) sum+= 1;
        else sum+= 2 ;
    }
}

return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string keypad;
    getline(cin, keypad);

    int result = entryTime(s, keypad);

    fout << result << "\n";

    fout.close();

    return 0;
}
