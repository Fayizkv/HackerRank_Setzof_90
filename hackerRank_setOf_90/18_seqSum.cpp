
#include<iostream>

using namespace std;
 
int main(){

    long long sum = 0;

    long long a ; cin >> a;

    long long b ; cin >> b;

    long long c ; cin >> c; 

    for (long long i = a; i <=b; i++)

    sum += i;

    for ( long long i = b-1 ; i >=c; i--)

    sum += i;

    cout << sum;

    return 0;

}