#include<iostream>
#include<unordered_map>
#include<vector>
#include<set>

using namespace std;


long long minCost(vector<long long>& arr){

    unordered_map<long long, long long> umap;
    multiset<long long,greater<long long>> ms;
    int count=0;
    int f=1;
    
    for(long long i =0;i<arr.size();i++){
        umap[arr[i]]++;
    }

    for(auto a : umap){
        ms.insert(a.second);
    }

    for(auto a : ms){
        count+=(a*f++);
    }
    return count;
}

int main(){
    vector<long long> arr;
    long long ele, size;

  //  cout<<"enter the size of array : "<<endl;
    cin>>size;
  //  cout<<"enter the array elements : "<<endl;
    for(long long i =0;i<size;i++){
        cin>>ele;
        arr.push_back(ele);
    }
    cout<<minCost(arr);
}