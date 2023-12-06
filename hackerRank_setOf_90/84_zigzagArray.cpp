#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'minOperations' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int minOperations(vector<int> arr) {

long len = arr.size(); int count = 0;

for ( long i = 0;  i <len-1; i++ )
{
    if ( i % 2 == 0 )
    {
        if ( arr[i] <= arr[i+1]) continue ;
        else { count++ ; i++ ;}
    }
    else{
        if ( arr[i] > arr[i+1] ) continue ;
        else { count++ ; i++ ;} 
    }
}
int count2 = count ; count = 0;
for ( long i = 0;  i < len-1; i++ )
{
    if ( i % 2 == 0 )
    {
        if ( arr[i] > arr[i+1]) continue ;
        else { count++ ; i++ ;}
    }
    else{
        if ( arr[i] <= arr[i+1] ) continue ;
        else { count++ ; i++ ;} 
    }
}
int ans = min(count,count2);

return ans;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    int result = minOperations(arr);

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
