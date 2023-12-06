#include <bits/stdc++.h>
#include <sstream>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'countFaults' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING_ARRAY logs
 */

int countFaults(int n, vector<string> logs) {
int count = 0;
map<string,int>mapp;

for ( int i = 0; i < logs.size(); i++ )
{ 
    string temp = logs[i] ;
    char ch; string id; string stat;
    stringstream ss(temp);
    
    ss >> id >> stat ;
   
   if ( stat == "error") mapp[id]++ ;
   else if ( mapp[id] != 0 ) mapp[id] = 0;
   
   if ( mapp[id] == 3 ) { count++ ; mapp[id] = 0; }
}

return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string logs_count_temp;
    getline(cin, logs_count_temp);

    int logs_count = stoi(ltrim(rtrim(logs_count_temp)));

    vector<string> logs(logs_count);

    for (int i = 0; i < logs_count; i++) {
        string logs_item;
        getline(cin, logs_item);

        logs[i] = logs_item;
    }

    int result = countFaults(n, logs);

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
