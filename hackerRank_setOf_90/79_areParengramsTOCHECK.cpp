#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'isPangram' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING_ARRAY pangram as parameter.
 */
string isPangram(vector<string> pangram) {

int len = pangram.size();
string str ;
cout << len << endl;
for (int i = 0; i < len ;i ++  )
{ 
    string temp = pangram[i] ;
    set<char>sett;
    int n = temp.length();
   
    
    for ( int j = 0; j < n; j++ )
    {
        if (temp[j] != ' ')
         sett.insert(temp[j]);
    }
    if ( sett.size() == 26 ) str += "1";
    else str += "0";
     sett.clear();
       // set<char>sett(pangram[i].begin(),pangram[i].end());
}

return str;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string pangram_count_temp;
    getline(cin, pangram_count_temp);

    int pangram_count = stoi(ltrim(rtrim(pangram_count_temp)));

    vector<string> pangram(pangram_count);

    for (int i = 0; i < pangram_count; i++) {
        string pangram_item;
        getline(cin, pangram_item);

        pangram[i] = pangram_item;
    }

    string result = isPangram(pangram);

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
