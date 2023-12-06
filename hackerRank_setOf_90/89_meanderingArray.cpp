#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'meanderingArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY unsorted as parameter.
 */

vector<int> meanderingArray(vector<int> unsorted) {

sort(unsorted.begin(),unsorted.end());
vector<int>mendered ;

int n = unsorted.size(); int j = n - 1;

n = (n+1) / 2;
for ( int i = 0; i < n; i++ )
{
    if ( i == j ) { mendered.push_back(unsorted[i]) ; continue ; }
    mendered.push_back(unsorted[j]);
    mendered.push_back(unsorted[i]);
    
    j--;
}

return mendered;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string unsorted_count_temp;
    getline(cin, unsorted_count_temp);

    int unsorted_count = stoi(ltrim(rtrim(unsorted_count_temp)));

    vector<int> unsorted(unsorted_count);

    for (int i = 0; i < unsorted_count; i++) {
        string unsorted_item_temp;
        getline(cin, unsorted_item_temp);

        int unsorted_item = stoi(ltrim(rtrim(unsorted_item_temp)));

        unsorted[i] = unsorted_item;
    }

    vector<int> result = meanderingArray(unsorted);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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
