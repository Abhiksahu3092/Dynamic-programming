#include<bits/stdc++.h>
using namespace std;

int arr[]={10,20,50,1,100};
int r=sizeof(arr)/sizeof(arr[0]);
int n=r-1;

int matrix[4][4];
int s[4][4];
int mcm(){
    for(int i=1;i<=n;i++){
        matrix[i][i]=0;
       
    }
    return matrix[1][n];
}

int main(){
    int ans=mcm();
    cout<<ans<<endl;
}