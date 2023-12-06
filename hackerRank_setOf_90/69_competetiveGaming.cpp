#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'numPlayers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY scores
 */

int numPlayers(int k, vector<int> scores) {

int count = 0;  


map<int,int>mapp;

int rank = 0; int big = 0;

for ( int i : scores ) { mapp[i]++; if ( big < i ) big = i ; } 

if ( big == 0 ) return 0;

auto it = mapp.rbegin();


while ( rank < k )
{
    //cout << it->first << endl;
    if ( it->second != 0 ){
    count += it->second;
    rank += it->second;
    it++ ; }
}

return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string scores_count_temp;
    getline(cin, scores_count_temp);

    int scores_count = stoi(ltrim(rtrim(scores_count_temp)));

    vector<int> scores(scores_count);

    for (int i = 0; i < scores_count; i++) {
        string scores_item_temp;
        getline(cin, scores_item_temp);

        int scores_item = stoi(ltrim(rtrim(scores_item_temp)));

        scores[i] = scores_item;
    }

    int result = numPlayers(k, scores);

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
