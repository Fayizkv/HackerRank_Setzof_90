
#include<iostream>

#include<vector>

#include<string>

using namespace std;
 
class stack{

    public:

    long long size = 0;

    vector<long long>ar;

    void push(long long ) ;

    void pop();

    void printProduct();

    long long  findBig();

    long long  findSmall();

};

int main(){

    long long  n ; cin >> n;

    string st[n];
    for ( long long  i = 0; i < n; i++ )
        cin >> st[i];
    long long  x ; cin >> x;

    long long  ar[n] ;
    for ( long long  i = 0; i < n; i++) cin >> ar[i];

    stack s;

    for ( long long  i = 0; i < n ; i++)

    {

       if ( st[i] == "push") s.push(ar[i]);

       else s.pop();

    }

    return 0;

}
 
void stack :: push(long long  i)   

    {

        ar.push_back(i);

        printProduct();

    }

void stack :: pop()

    {

        ar.erase(ar.begin());

        printProduct();

    }

void stack :: printProduct()

    {

        long long  max = findBig();

        long long  min = findSmall();

        cout << max * min << endl;

    }

long long  stack :: findBig(){

    long long  big = ar[0];

    for ( long long  i : ar){

        if (i > big) big = i;

    }

    return big;

}

long long  stack :: findSmall(){

    long long  small = ar[0];

    for ( long long i : ar){

        if (i < small) small = i;

    }

    return small;

}