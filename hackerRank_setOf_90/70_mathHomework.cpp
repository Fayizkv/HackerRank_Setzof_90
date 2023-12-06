#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'minNum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER threshold
 *  2. INTEGER_ARRAY points
 */

int minNum(int threshold, vector<int> points) {

int n = 0; int result = points.size();

if (( points[result-1] - points[0] ) < threshold ) return result ;
for ( int i = 0; i < points.size(); i++ )
{
    if( (points[i] - points[0])  >= threshold ) {
        n = i; break; 
    }
}
result = (n-1)/2 ;
result += 2 ;
return result ;

}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string threshold_temp;
    getline(cin, threshold_temp);

    int threshold = stoi(ltrim(rtrim(threshold_temp)));

    string points_count_temp;
    getline(cin, points_count_temp);

    int points_count = stoi(ltrim(rtrim(points_count_temp)));

    vector<int> points(points_count);

    for (int i = 0; i < points_count; i++) {
        string points_item_temp;
        getline(cin, points_item_temp);

        int points_item = stoi(ltrim(rtrim(points_item_temp)));

        points[i] = points_item;
    }

    int result = minNum(threshold, points);

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
