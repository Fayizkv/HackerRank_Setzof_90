#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'numOfIds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING pool as parameter.
 */

int numOfIds(string pool) {
int count = 0; int len = pool.length();

int count8 = 0; int countoth = 0;
for ( int i = 0; i < len ; i++ )
{
    if ( pool[i] == '8') count8++ ;
    else countoth++;
}

while ( count8 != 0 && len >= 11  )
{
    len -= 11 ;
    count8--;
    
    count++;
    
}

return count ;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string pool;
    getline(cin, pool);

    int result = numOfIds(pool);

    fout << result << "\n";

    fout.close();

    return 0;
}
