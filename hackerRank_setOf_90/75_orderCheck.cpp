#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'countStudents' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY height as parameter.
 */

int countStudents(vector<int> height) {

int count = 0; int n = height.size(); 

vector<int>temp = height ;
sort( temp.begin(), temp.end()) ;

for ( int i = 0; i < n; i++ )
{
    if ( height[i] != temp[i] ) count++ ;
}
return count ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string height_count_temp;
    getline(cin, height_count_temp);

    int height_count = stoi(ltrim(rtrim(height_count_temp)));

    vector<int> height(height_count);

    for (int i = 0; i < height_count; i++) {
        string height_item_temp;
        getline(cin, height_item_temp);

        int height_item = stoi(ltrim(rtrim(height_item_temp)));

        height[i] = height_item;
    }

    int result = countStudents(height);

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
