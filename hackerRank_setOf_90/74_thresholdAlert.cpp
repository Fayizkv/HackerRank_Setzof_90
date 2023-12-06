#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'numberOfAlerts' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER precedingMinutes
 *  2. INTEGER alertThreshold
 *  3. INTEGER_ARRAY numCalls
 */

int numberOfAlerts(int precedingMinutes, int alertThreshold, vector<int> numCalls) {

int count = 0;

int len = numCalls.size();

for ( int i = 0; i <= len-precedingMinutes ; i++ )
{
    long sum = numCalls[i]; //cout << sum << " " ;
    int k = i ;
    for ( int j = 1 ; j < precedingMinutes ; j++ )
    {
        sum += numCalls[k+1];
        k++;
        //cout << numCalls[i+1] << " " << sum << " ";
    }
    //cout << sum/precedingMinutes << endl;
    if ( (sum / precedingMinutes) >= alertThreshold ) count++ ;
}

return count; 
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string precedingMinutes_temp;
    getline(cin, precedingMinutes_temp);

    int precedingMinutes = stoi(ltrim(rtrim(precedingMinutes_temp)));

    string alertThreshold_temp;
    getline(cin, alertThreshold_temp);

    int alertThreshold = stoi(ltrim(rtrim(alertThreshold_temp)));

    string numCalls_count_temp;
    getline(cin, numCalls_count_temp);

    int numCalls_count = stoi(ltrim(rtrim(numCalls_count_temp)));

    vector<int> numCalls(numCalls_count);

    for (int i = 0; i < numCalls_count; i++) {
        string numCalls_item_temp;
        getline(cin, numCalls_item_temp);

        int numCalls_item = stoi(ltrim(rtrim(numCalls_item_temp)));

        numCalls[i] = numCalls_item;
    }

    int result = numberOfAlerts(precedingMinutes, alertThreshold, numCalls);

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
