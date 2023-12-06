#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'getIdealNums' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. LONG_INTEGER low
 *  2. LONG_INTEGER high
 */

long getIdealNums(long low, long high) {

long count = 0;

for ( long i = 0; i < 100 ; i++ )
{
    for ( long j = 0; j < 100 ; j++ ){
        long product = pow(3,i) * pow(5,j);
        if( product >= low && product <= high){
            cout << product << endl ;
         count++ ; }
    }
}

return count ;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string low_temp;
    getline(cin, low_temp);

    long low = stol(ltrim(rtrim(low_temp)));

    string high_temp;
    getline(cin, high_temp);

    long high = stol(ltrim(rtrim(high_temp)));

    long result = getIdealNums(low, high);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
