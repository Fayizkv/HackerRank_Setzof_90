#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,i,z;
    long long sum = 0;
    int count =0;
    vector<int>used;
    vector<int>capacity;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>z;
        sum+=z;
        used.push_back(z);
    }
    int m ; cin >> m;
    for(i=0;i<m;i++){
        cin>>z;
        capacity.push_back(z);
    }
    sort(capacity.begin(),capacity.end(),greater<>());

    i=0;
    while(sum>0){
        sum =sum-capacity[i];
        i++;
        count++;
    }
    cout <<count;
    return 0;

}