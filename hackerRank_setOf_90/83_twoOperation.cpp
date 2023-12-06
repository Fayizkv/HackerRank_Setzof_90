#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


vector<int> getMinOperations(vector<long> kValues) {

long n = kValues.size(); vector<int>arr;

for ( long i = 0 ; i < n; i++ ){
    long num = kValues[i] ; 
    long count = 0;
    cout << num << endl;
    while ( num > 0 )
    {
        if ( num % 2 == 0 ) { count++; num /= 2 ; }
        else {count++ ; num-- ; }
    }
    arr.push_back( count ) ;
    
}

return arr ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string kValues_count_temp;
    getline(cin, kValues_count_temp);

    int kValues_count = stoi(ltrim(rtrim(kValues_count_temp)));

    vector<long> kValues(kValues_count);

    for (int i = 0; i < kValues_count; i++) {
        string kValues_item_temp;
        getline(cin, kValues_item_temp);

        long kValues_item = stol(ltrim(rtrim(kValues_item_temp)));

        kValues[i] = kValues_item;
    }

    vector<int> result = getMinOperations(kValues);

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
