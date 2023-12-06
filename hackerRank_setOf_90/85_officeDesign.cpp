#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'getMaxColors' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY prices
 *  2. INTEGER money
 */

int getMaxColors(vector<int> prices, int money) {

 int max = 0; int t = 0; long n = prices.size(); long sum  = 0;

for (int i = 0 ; i < n; i++ )
{
     t = 0; sum = 0;
    for ( int j = i; j < n ; j++ )
    {
        sum+=prices[j];
        if ( sum <= money ) { t++ ;  }
        else break ;
    }
    
    
    if ( t > max) max = t ;
}

return max ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string prices_count_temp;
    getline(cin, prices_count_temp);

    int prices_count = stoi(ltrim(rtrim(prices_count_temp)));

    vector<int> prices(prices_count);

    for (int i = 0; i < prices_count; i++) {
        string prices_item_temp;
        getline(cin, prices_item_temp);

        int prices_item = stoi(ltrim(rtrim(prices_item_temp)));

        prices[i] = prices_item;
    }

    string money_temp;
    getline(cin, money_temp);

    int money = stoi(ltrim(rtrim(money_temp)));

    int result = getMaxColors(prices, money);

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
