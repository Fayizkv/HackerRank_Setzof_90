
#include <iostream>
 
#include <cmath>
 
#include <iomanip>
 
using namespace std;
 
int main()
 
{
 
    long long size;
 
    cin >> size;
 
    long long x[size];
 
    double area;
 
    // cout<<"enter x coordinates"<<endl;
 
    for (long long i = 0; i < 3; i++)
 
    {
 
        cin >> x[i];
 
    }
 
 
    cin >> size;
 
    long long y[size];
 
    for (long long i = 0; i < 3; i++)
 
    {
 
        cin >> y[i];
 
    }
 
 
 
    area = 0.5 * (abs(x[0] * (y[1] - y[2]) + x[1] * (y[2] - y[0]) + x[2] * (y[0] - y[1])));
 
    cout << fixed << setprecision(0) << area;
 
}