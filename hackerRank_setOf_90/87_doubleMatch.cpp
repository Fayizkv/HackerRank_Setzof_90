#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'doubleSize' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. LONG_INTEGER_ARRAY arr
 *  2. LONG_INTEGER b
 */

long doubleSize(vector<long> arr, long b) {

sort(arr.begin(),arr.end());
for ( int i = 0; i < arr.size(); i++)
{
    if( arr[i] == b ) 
    b = b * 2 ;
}

return b;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<long> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        long arr_item = stol(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    string b_temp;
    getline(cin, b_temp);

    long b = stol(ltrim(rtrim(b_temp)));

    long result = doubleSize(arr, b);

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
