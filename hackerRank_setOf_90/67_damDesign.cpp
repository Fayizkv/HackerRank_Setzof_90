#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'maxHeight' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY wallPositions
 *  2. INTEGER_ARRAY wallHeights
 */

int maxHeight(vector<int> wallPositions, vector<int> wallHeights) {

int ans = 0 ; int n = wallHeights.size(); int maxbe = 0;

for ( int i = 0; i < n-1; i++ )
{
    int diff = wallPositions[i+1] - wallPositions[i] - 1;
    int b = wallHeights[i+1]+diff ; int f = wallHeights[i]+1;
    if ( diff == 0 ) continue ;
    //else if ( diff == 1 ) maxbe = max(wallHeights[i], wallHeights[i+1]);
    else{
        for ( int j = 0 ; j < diff ; j++ )
        {
            maxbe = min(f,b);
            f++ ; b--;
            if ( ans < maxbe ) ans = maxbe ;
        }
        
    }
   
    
}
return ans ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string wallPositions_count_temp;
    getline(cin, wallPositions_count_temp);

    int wallPositions_count = stoi(ltrim(rtrim(wallPositions_count_temp)));

    vector<int> wallPositions(wallPositions_count);

    for (int i = 0; i < wallPositions_count; i++) {
        string wallPositions_item_temp;
        getline(cin, wallPositions_item_temp);

        int wallPositions_item = stoi(ltrim(rtrim(wallPositions_item_temp)));

        wallPositions[i] = wallPositions_item;
    }

    string wallHeights_count_temp;
    getline(cin, wallHeights_count_temp);

    int wallHeights_count = stoi(ltrim(rtrim(wallHeights_count_temp)));

    vector<int> wallHeights(wallHeights_count);

    for (int i = 0; i < wallHeights_count; i++) {
        string wallHeights_item_temp;
        getline(cin, wallHeights_item_temp);

        int wallHeights_item = stoi(ltrim(rtrim(wallHeights_item_temp)));

        wallHeights[i] = wallHeights_item;
    }

    int result = maxHeight(wallPositions, wallHeights);

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
