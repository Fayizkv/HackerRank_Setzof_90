
#include<iostream>

#include<string>

using namespace std;
 
int getCount(string str)

{

    int count = 0;

    for ( int i = 0; i < str.length()-1; i++)

    {

        if ( str[i] == str[i+1] || abs(str[i] - str[i+1]) == 1)

        { count++;

            if ( str[i+2] == str[i+1] || abs(str[i+2] - str[i+1]) == 1 ) i++;

        }

    }

    return count;

}

int main(){

    string s ; cin >> s;

    cout << getCount(s);


    return 0;

}