#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'getMinimumMoves' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY price
 *  2. INTEGER k
 */

long getMinimumMoves(vector<int> price, int k) {

sort ( price.begin(), price.end()) ; long count = 0; long n = price.size();

long mid = (n+1)/2  ;
mid = mid - 1;
if(price[mid] == k) return 0;

else if ( price[mid] < k) {
for ( long i = mid ; i < price.size(); i++ ){
    
    if(k - price[i] > 0)
    count += abs (price[i] - k);
}
}
else{
    for ( long i = mid ;i >= 0 ; i-- ){
        if(price[i] - k > 0)
        count += abs(price[i] - k );
    }
}


return count;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string price_count_temp;
    getline(cin, price_count_temp);

    int price_count = stoi(ltrim(rtrim(price_count_temp)));

    vector<int> price(price_count);

    for (int i = 0; i < price_count; i++) {
        string price_item_temp;
        getline(cin, price_item_temp);

        int price_item = stoi(ltrim(rtrim(price_item_temp)));

        price[i] = price_item;
    }

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    long result = getMinimumMoves(price, k);

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
