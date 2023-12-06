#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'cardinalitySort' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY nums as parameter.
 */

int toBinary(int num ){
    
    int count = 0;
    
    while(num >0 )
    {
        if ( num % 2 == 1 ) count++ ;
        num/=2;
        
    }
    
    return count ;
}
vector<int> cardinalitySort(vector<int> nums) {

int n = nums.size(); map<int,multiset<int>>mapp ;

for ( int i = 0; i < n; i++ ){
    
    int key = toBinary(nums[i]);
    mapp[key].insert(nums[i]);
}
vector<int>ans;

for ( auto i : mapp ){
    auto it = i.second.begin();
    int size = i.second.size();
    
    for (int i = 0; i < size; i++)
    {
        ans.push_back(*it) ;
        it++;
    }
    
}

return ans ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nums_count_temp;
    getline(cin, nums_count_temp);

    int nums_count = stoi(ltrim(rtrim(nums_count_temp)));

    vector<int> nums(nums_count);

    for (int i = 0; i < nums_count; i++) {
        string nums_item_temp;
        getline(cin, nums_item_temp);

        int nums_item = stoi(ltrim(rtrim(nums_item_temp)));

        nums[i] = nums_item;
    }

    vector<int> result = cardinalitySort(nums);

    for (int i = 0; i < result.size(); i++) {
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
