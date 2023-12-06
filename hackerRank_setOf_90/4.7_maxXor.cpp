#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n  ;  cin >> n ;
    
    int radix =  floor(log2(n)) + 1 ;
    cout << pow(2,radix) - 2;
    
    return 0 ;
}
