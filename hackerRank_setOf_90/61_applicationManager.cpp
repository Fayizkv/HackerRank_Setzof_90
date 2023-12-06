#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'getOpenApplications' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts STRING_ARRAY commands as parameter.
 */

vector<string> getOpenApplications(vector<string> commands) {

vector<string>tem;
for ( int i = 0; i < commands.size(); i++ )
{
    string temp = commands[i] ; string comm, app; int count = 0 ;
    stringstream ss(temp);
    ss >> comm ;
    if ( comm == "close") ss >> count;
    else if ( comm != "clear") ss >> app ;
    
   // cout << comm << " " << app << endl;
    if ( comm == "open"){  tem.push_back(app) ;}
    
    else if ( comm == "close"){
        while (count--){
            if ( tem.size() != NULL )
            tem.pop_back();
        }
    }
    
    else tem.clear();
    
}
return tem;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string commands_count_temp;
    getline(cin, commands_count_temp);

    int commands_count = stoi(ltrim(rtrim(commands_count_temp)));

    vector<string> commands(commands_count);

    for (int i = 0; i < commands_count; i++) {
        string commands_item;
        getline(cin, commands_item);

        commands[i] = commands_item;
    }

    vector<string> result = getOpenApplications(commands);

    for (size_t i = 0; i < result.size(); i++) {
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
