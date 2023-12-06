#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

long minArrayCost(vector<long>& arr) {

    long Gdiff = 0;
    long cost = 0;
    long diff;
    for (long i = 0; i < arr.size()-1; i++) {
        diff = abs(arr[i] - arr[i + 1]);
        cost += pow(diff, 2);
        if (diff > Gdiff) { Gdiff = diff; }
    }
    diff=pow(Gdiff, 2) / 2;
    cost -= diff;

    return cost;
}

int main() {

    long size;
    long ele;
    vector<long> arr;

   // cout << "enter the size of array : " << endl;
    cin >> size;
    //cout << "enter the elements : " << endl;
    for (long i = 0; i < size; i++) {
        cin >> ele;
        arr.push_back(ele);
    }

    cout << minArrayCost(arr);
}
