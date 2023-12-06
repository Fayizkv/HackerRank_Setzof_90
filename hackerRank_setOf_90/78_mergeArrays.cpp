s#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'mergeArrays' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

vector<int> mergeArrays(vector<int> a, vector<int> b) {

for ( auto i : b ) a.push_back(i);
sort(a.begin(),a.end());

return a;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a_count_temp;
    getline(cin, a_count_temp);

    int a_count = stoi(ltrim(rtrim(a_count_temp)));

    vector<int> a(a_count);

    for (int i = 0; i < a_count; i++) {
        string a_item_temp;
        getline(cin, a_item_temp);

        int a_item = stoi(ltrim(rtrim(a_item_temp)));

        a[i] = a_item;
    }

    string b_count_temp;
    getline(cin, b_count_temp);

    int b_count = stoi(ltrim(rtrim(b_count_temp)));

    vector<int> b(b_count);

    for (int i = 0; i < b_count; i++) {
        string b_item_temp;
        getline(cin, b_item_temp);

        int b_item = stoi(ltrim(rtrim(b_item_temp)));

        b[i] = b_item;
    }

    vector<int> result = mergeArrays(a, b);

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
