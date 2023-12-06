#include<iostream>
#include<cmath>
using namespace std;
 
int minCost(int rows,int cols,int initR,int initC,int finalR,int finalC,int costRow[],int costCols[])

{

    int i,j,cost = 0;

	for(i=min(initR,finalR);i < max(initR,finalR);i++) cost+=costRow[i];

  


        for(i=min(initC,finalC);i < max(initC,finalC);i++)        cost+=costCols[i];


    return cost;

}

int main(){

    int rows,cols,initR,initC,finalR,finalC,i;
 
    

    cin>>rows;

    cin>>cols;

    cin>>initR;

    cin>>initC;

    cin>>finalR;

    cin>>finalC;
 
	

	int n; cin >> n;

		int costRows[n] ;

    for(i=0; i<n ;i++){

        cin>>costRows[i];

    }

	int m ; cin >> m ;

	int costCols[m];

    for(i=0; i<m ;i++){

        cin>>costCols[i];

    }


    cout <<minCost(rows,cols,initR,initC,finalR,finalC,costRows,costCols);

    return 0;

}