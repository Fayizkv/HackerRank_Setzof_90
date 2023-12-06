#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'minMoves' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. LONG_INTEGER h
 *  2. LONG_INTEGER w
 *  3. LONG_INTEGER h1
 *  4. LONG_INTEGER w1
 */

int minMoves(long h, long w, long h1, long w1) {
    
    int count = 0;
    
    while ( h > h1 )
    {
        h = ceil( (float) h/2) ;
        count++;
    }
    
    while ( w > w1 )
    {
        w = ceil((float)w/2) ;
        count++ ;
    }
    
    return count ;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string h_temp;
    getline(cin, h_temp);

    long h = stol(ltrim(rtrim(h_temp)));

    string w_temp;
    getline(cin, w_temp);

    long w = stol(ltrim(rtrim(w_temp)));

    string h1_temp;
    getline(cin, h1_temp);

    long h1 = stol(ltrim(rtrim(h1_temp)));

    string w1_temp;
    getline(cin, w1_temp);

    long w1 = stol(ltrim(rtrim(w1_temp)));

    int result = minMoves(h, w, h1, w1);

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
